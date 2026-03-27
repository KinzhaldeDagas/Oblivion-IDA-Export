# Oblivion IDA Export

This repository contains a full reverse engineering export of **The Elder Scrolls IV: Oblivion** generated from an IDA Pro 9.x database through a custom IDAPython pipeline.

The goal of this project is to make the database easier to browse, search, diff, and reference outside of IDA itself. The analysis has been broken out into a structured repository with per-function output, recovered types, named data, graph data, and analyst-facing summaries.

This is not original game source code. It is a structured analysis export intended for research, documentation, reverse engineering, and long-term preservation work.

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
