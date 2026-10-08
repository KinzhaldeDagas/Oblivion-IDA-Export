# OctoberPass complete annotation snapshot

This snapshot publishes the current annotations from the selected open `OblivionNew.exe_20260908001948.i64` database (instance `0i4j`, input `Oblivion.exe`). The [focused findings report](../README.md) establishes the decal, temporary-effect, shader, serialization, and task conclusions. This supplement captures the broader memory, input, menu, animation, rendering, save/load, and other annotations present in the database.

The [inventory](inventory_manifest.json), [completed snapshot manifest](manifest.json), and [validation results](validation.json) define the coverage and provenance. The audit baseline is commit `bf1f4dbacfb9b2b862e96dbc7e02b7e524fb83f1`. These are sequential extracts from open IDA sessions, not an atomic database backup.

## Coverage

| Surface | Captured population |
| --- | ---: |
| Live function starts | 35,597 |
| Named items outside functions | 27,062 |
| Defined local types | 10,147 |
| Instruction-comment records | 141,206 |
| Saved decompiler-comment records | 3,841 |
| Saved local-variable annotation records | 2,293 |
| Functions with stack frames | 35,073 |
| Saved local-variable mappings | 456 |

Counts describe recorded IDA analysis state. They do not independently establish semantic function boundaries, class identities, or ABI correctness. Shared tails can contribute comment records to more than one function. The 10,184-slot local type library contains 37 undefined ordinals; those are not missing exported definitions.

The audit identified 11,207 function refresh candidates, 2,104 named-item changes, and 683 type-change candidates relative to the baseline. The production refresh covers the complete live function and named-item populations so changed callee names, types, and xrefs propagate through the readable exports.

## Evidence and confidence

Source comments and their confidence labels are preserved verbatim. `source_annotation_confidence` records an existing label; it is not a new verification claim. Bulk semantic interpretations are `Unknown` unless supported by the separately assessed focused report. Type/member annotations similarly retain `annotation_confidence: Unknown`. No Fallout match is automatically promoted.

**Verified** requires strong direct Oblivion-side evidence. **Probable** requires multiple independent supporting indicators. **Candidate** means plausible but awaiting confirmation. **Unknown** means insufficient evidence. These labels apply to individual conclusions, not to every name, field, or expression within a function.

Recovered type spellings and propagated decompiler aliases can be imprecise. For example, an interface-shaped pointer spelling or a shared return-value leaf does not prove a class inheritance relationship. Use offsets, bytecode, callers, vtables, and the focused evidence together. Raw enum values retain IDA's integer representation; declarations provide the corresponding type spelling.

## Files and current catalogs

- `functions/`: complete raw function annotation inventories in JSONL chunks, including instruction comments, decompiler comments, and saved local annotations.
- `named_items/`: complete raw named-item annotation inventory.
- `address_names/`: the full native address-name list, including labels inside functions excluded from the outside-function item catalog.
- `local_types/`: complete local type definitions, members, enumerators, comments, and properties.
- `stack_frames/`: frame members and saved variable mappings for the live function population.
- `changes/`: before/after metadata pinned to the Git baseline.
- `historical_*`: entries removed from current catalogs, with historical paths preserved.
- `*_export_complete.json`: production-stage receipts.

The root `functions/`, `data/named_items/`, `types/`, `metadata/`, and `graphs/` catalogs are refreshed by this pass. Current indexes and JSONL streams describe live populations. Historical directories remain available for reference without being presented as current indexed entries.

Function `size` and `sha256` retain the legacy primary-range meaning. `chunks`, `total_chunk_size`, `chunks_sha256`, and `bytes_read_complete` describe noncontiguous IDA tails explicitly. Every function has current disassembly and a pseudocode file; an unavailable decompilation is recorded as unavailable rather than retaining stale code.

Local-type and typedef catalogs preserve the repository's historical mirror organization. The function-prototype type catalog contains local-library function types; individual function signatures are also exported in every function record. Struct/enum catalogs use current `ida_typeinf` data. Declarations are recovered IDA syntax and can contain SDK aliases or compiler extensions.

Graphs derive calls from destination function ownership and preserve numeric xref types and source sites. Referenced uncatalogued data receives explicit nodes, and named code heads are distinguished from named data. The large graph JSON files use compact formatting; corresponding `_jsonl` streams expose the same records in chunks.

Named-item xref `from_name` supplies a containing function name where available. Resolve literal data/code labels by `from_ea` through the full address-name archive, which also preserves interior labels independently of decompiler rendering.

## Reproduction

Run from `H:\src\IDAs\Oblivion-IDA-Export` against the existing open Oblivion session:

```powershell
python scripts/sync_database_annotations.py --phase audit
python scripts/sync_database_annotations.py --phase frames
python scripts/sync_database_annotations.py --phase confidence
python scripts/sync_database_annotations.py --phase functions --complete-population
python scripts/sync_database_annotations.py --phase data --complete-population
python scripts/sync_database_annotations.py --phase types
python scripts/sync_database_annotations.py --phase names
python scripts/sync_database_annotations.py --phase graphs
python scripts/sync_database_annotations.py --phase metadata
python scripts/sync_database_annotations.py --phase history
python scripts/sync_database_annotations.py --phase finish
python scripts/validate_october_snapshot.py --source
```

Interrupted production stages can resume from their own ignored `.checkpoints/` records. Checkpoints belong to one captured source inventory; finish that inventory or archive/remove its ignored checkpoints before beginning a fresh audit. `--resume-audit` reuses a complete saved function inventory when continuing the initial globals/type collection. Completed-stage receipts and generated artifacts should be checked before deciding what to resume.

The extraction scripts do not close, reopen, replace, save, or patch an IDA database. The open Oblivion and Fallout databases remain at their existing locations. The comment corrections written into Oblivion are documented in the focused report. Working files and exports for this pass are kept under `H:\src\IDAs`.

## Publication reconciliation

The final live-source comparison identified 113 functions with newer names, prototypes, flags, or comments than the initial sequential extraction. Those functions were refreshed, together with graph labels and the address-name catalog. [Reconciliation evidence](live_metadata_reconciliation.json) preserves the observed differences. These inherited source annotations retain their existing provenance; the refresh does not independently verify their semantic claims.

The JSONL consistency check also found and corrected text encoding in 15 duplicate metadata records. [Corrections](jsonl_consistency_corrections.json) record the exact differences. Successful local contract checks were reused within this working session; the 113 refreshed functions received targeted checks, followed by live-source comparisons.

Six subsequently changed local types were also refreshed; [type reconciliation](live_type_reconciliation.json) records the differences. Final source checks passed for all functions, named items, local types, and address names. The validation report identifies the successful checks reused within this session.
