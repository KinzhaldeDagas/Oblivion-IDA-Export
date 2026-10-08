# OctoberPass: major findings and corrections for Oblivion engine research

OctoberPass connects Oblivion's decal payloads, shader properties, temporary-effect manager, save/load dispatch, and pooled creation tasks into a documented lifecycle. The main contribution is a stronger basis for OBSE plugin development, rendering investigations, and save/load debugging: concrete offsets and call paths, with the evidence and remaining uncertainties exposed.

These are reverse-engineering and documentation improvements. The pass does not itself install a game patch or demonstrate a performance improvement.

## The biggest completed areas

### 1. Decal ownership and lifetime

**Verified:** `DECAL_DATA` is a `0x4C`-byte payload. It owns a texture reference at `+0x00` and a shader-property reference at `+0x48`. Its target reference FormID is at `+0x3C`; update code writes elapsed time divided by duration at `+0x40`.

**Verified:** the shader property keeps its decal list at `+0x80`, its count at `+0x8C`, and a removal traversal cursor at `+0x90`. Adding or removing a decal invalidates cached render-pass state at `+0x24`. Removing a list node does not, by itself, release the payload's owned references.

For plugin authors, this distinguishes list membership from resource ownership when investigating decal cleanup, stale references, and effect lifetime. It does not prove that a particular reported crash is caused by either path.

[Ownership evidence, layouts, and destructor anchors](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/README.md#payload-ownership-and-property-linkage)

### 2. Temporary effects connected from registration through save/load

**Verified:** registration at `0x678D30` retains an effect and routes IDs `4..6` to the manager's extended list at `+0x48`; other IDs use `+0x40`. The update loop at `0x67ACA0` calls virtual `Update`, removes effects returning false, and releases their references. These lists belong to the shared `ActorProcessManager`.

| Confidence | Type ID | Established identity or behavior |
| --- | --- | --- |
| Verified | `0` | `BSTempEffectDecal`; `0x1C`-byte effect object |
| Verified | `1` | `BSTempEffectGeometryDecal`; `0x54`-byte effect object |
| Verified | `2` | `BSTempEffectParticle`; distinct restoration case |
| Verified | `3` | Base `BSTempEffect` ID; its saveability leaf returns false |
| Unknown | `4` | Registration accepts it, but the examined restore switch has no case for it |
| Verified | `5`, `6` | `MagicModelHitEffect` and `MagicShaderHitEffect` restoration cases |

**Verified:** saving filters effects through `IsSaveable`, writes their type byte, and dispatches virtual `SaveGame`. Loading constructs the selected class and dispatches virtual `LoadGame`. This provides concrete anchors for investigating why effects survive, disappear, or fail to restore across saves.

[Manager, type-ID, and serialization evidence](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/README.md#creation-update-and-serialization)

### 3. Asynchronous geometry-decal creation and fallback cleanup

**Verified:** geometry-decal creation can attempt a queued task, with synchronous initialization as the acquisition/submission fallback. `BSTECreateTask` is a `0x10`-byte wrapper retaining its controller at `+0x0C`.

**Verified:** when the fallback byte is set, `Run` skips both the wrapped invocation and its local release. The later `ReturnToPool` path releases the remaining controller. This correction matters when tracing cancellation, skipped work, or apparent reference leaks: a skipped release in `Run` is not enough to establish a leak.

**Unknown:** the initialization and runtime policy of the asynchronous-creation gate.

[Task, pool, wait-helper, and fallback evidence](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/README.md#asynchronous-geometry-creation)

### 4. Decal rendering paths separated and named

**Verified:** inherited decal batching and the geometry-decal property's own render pass are distinct paths. The inherited path consumes the property list count and a decoded batch-size field.

| Confidence | Selector | Resolver name |
| --- | --- | --- |
| Verified | `0x152` / `0x153` | `BSSM_3XDECAL` / `BSSM_3XDECAL_A` |
| Verified | `0x188` | `BSSM_GEOMDECAL` |
| Verified mapping; Unknown producer | `0x189` | `BSSM_GEOMDECAL_S` |
| Verified | `0x18A` / `0x18B` | `BSSM_DECAL` / `BSSM_DECAL_A` |

These anchors help rendering researchers identify which path they are instrumenting before changing batching or shader behavior. **Unknown:** the downstream meaning of the forwarded `passByte`; its value alone does not establish that contract.

[Shader builders, resolver strings, and relationships](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/README.md#shader-pass-relationships)

## Corrections worth carrying into other research

| Confidence | Earlier ambiguity or error | Corrected interpretation |
| --- | --- | --- |
| Verified | Particle-restoration comment at `0x679900` | This is the type-0 decal allocation/default initializer; particle restoration is the separate type-2 case. |
| Verified | Treating both decal save predicates alike | Type 0 permits an unresolved reference only when its stored FormID is zero. Type 1 requires generated geometry and a resolved reference with loaded 3D; it has no unresolved-zero bypass. |
| Verified | Inferring a class from a tiny function's name | Literal-return and false-return leaves are shared across unrelated vtables. Class identity must come from the owning vtable and surrounding evidence. |
| Verified | Describing `0x67ACA0` as a per-actor loop | The observed lists and update loop belong to the shared `ActorProcessManager`. |
| Verified | Treating task `Run` as the entire cleanup path | Fallback cleanup continues through `ReturnToPool`. |

[Correction details and instruction addresses](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/README.md#corrections-and-reproduction)

## A broader, reproducible research snapshot

The published snapshot contains **35,597 function starts, 27,062 named items, 10,147 defined local types, and 141,206 instruction-comment records**, plus saved decompiler comments, local-variable annotations, stack frames, graphs, and before/after metadata. These are coverage counts, not counts of newly decoded or semantically verified objects.

Publication reconciled **113 functions and six local types** with newer live annotations and corrected text encoding in **15 JSONL metadata records**. The export also records noncontiguous function chunks separately from the historical primary-range size/hash fields and preserves numeric xref types. Validation checks export consistency and source agreement; successful checks reused within the session are identified in the report.

[Snapshot coverage and reproduction](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/database_delta/README.md) · [Validation record](https://github.com/KinzhaldeDagas/Oblivion-IDA-Export/blob/OctoberPass/Findings/OctoberPass/database_delta/validation.json)

## How to read the confidence labels

**Verified** requires strong direct Oblivion-side evidence. **Probable** means multiple independent indicators strongly support an interpretation. **Candidate** is plausible but still requires confirmation. **Unknown** means the evidence is insufficient.

Cross-executable similarity alone remains **Candidate** at most. Bulk exported annotations retain their provenance without receiving blanket semantic verification.

The main remaining leads include type ID `4`, unresolved decal-payload fields, the complete coordinate-space contract of geometry-builder parameters, the async gate's policy, and the producer of selector `0x189`.
