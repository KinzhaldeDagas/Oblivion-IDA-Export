# Oblivion IDA Export

This repository contains a full reverse engineering export of **The Elder Scrolls IV: Oblivion** generated from an IDA Pro 9.x database through a custom IDAPython pipeline.

The goal of this project is to make the database easier to browse, search, diff, and reference outside of IDA itself. The analysis has been broken out into a structured repository with per-function output, recovered types, named data, graph data, and analyst-facing summaries.

This is not original game source code. It is a structured analysis export intended for research, documentation, reverse engineering, and long-term preservation work.

## OctoberPass findings

[OctoberPass](Findings/OctoberPass/README.md) publishes the decal, temporary-effect, shader-pass, serialization, and asynchronous-task findings with explicit evidence-confidence labels. Its [complete annotation snapshot](Findings/OctoberPass/database_delta/README.md) refreshes the current function, named-item, type, metadata, and graph catalogs and preserves the wider database annotations. The focused report includes 84 evidence-anchor functions; the complete snapshot covers 35,597 live function starts, 27,062 named items, and 10,147 defined local types. See the linked manifests and validation records for scope and confidence provenance.

To reproduce this focused refresh while the Oblivion database is open:

```powershell
python scripts/export_analysis_pass.py --repository . --targets Findings/OctoberPass/targets.json
```

## Reproducing the export

The repository includes [`scripts/ida_repo_exporter.py`](scripts/ida_repo_exporter.py), a standard-library Python client for the live IDA MCP HTTP endpoint provided by `ida_multi_mcp`. It reads the currently open database and writes the structured export without opening, closing, or managing the IDA process. Keep the target database open and pass its MCP URL and expected executable name explicitly:

```powershell
python scripts/ida_repo_exporter.py `
  --endpoint http://127.0.0.1:56185/mcp `
  --expected-binary Oblivion.exe `
  --output . `
  --overwrite
```

The client checks the active database path before writing. It exports functions, assembly, pseudocode, instruction/xref records, named globals, imports, segments, and local type declarations. Function batches are checkpointed to disk; rerun with `--resume` to skip already completed functions. The script refuses to replace an output directory containing `manifest.json` unless `--overwrite` is passed. Use `--limit-functions 2 --output <temporary-folder>` for a small smoke export. The endpoint defaults to the local Oblivion instance above; change it when connecting to another IDA database. The script does not export executable bytes.

The exporter intentionally uses the existing repository structure and does not delete stale output directories. Compare the generated diff before committing a new database snapshot.

---

## What this repository includes

This export is organized to be usable both by humans and tooling.

### Core analysis output
- `functions/` — per-function disassembly, metadata, call relationships, and summaries
- `data/named_items/` — named global data and related references
- `types/` — recovered local types, typedefs, function prototypes, structs, and enums
- `metadata/` — high-level program, segment, import, string, and entrypoint data

### Higher-level analysis surfaces
- `graphs/` — symbol graph, call graph, and dataflow/reference graph output
- `markdown/` — human-readable overview material
- `manifest.json` — export manifest, versioning, and stage metadata

### Large-scale machine-readable output
- `_jsonl/` — chunked JSONL exports for large-scale processing and indexing

---

## Repository structure

```text
metadata/
functions/
types/
  local_types/
  typedefs/
  function_prototypes/
  structs/
  enums/
data/
  named_items/
graphs/
markdown/
manifest.json
