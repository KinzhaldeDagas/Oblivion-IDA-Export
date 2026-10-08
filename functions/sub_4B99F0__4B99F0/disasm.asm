0x4B99F0: push    esi; Verified save-record handler from local sequence: initializes form record, serializes the TESModel chunks, calls TESObjectTREE_WriteTextureHashChunk, then finalizes the record. The DMTL writer helper reaches a one-instruction `retn 8` no-op, so this Oblivion path emits no texture-hash chunk.
0x4B99F1: mov     esi, ecx
0x4B99F3: call    TESForm_InitializeFormRecord
0x4B99F8: push    54444F4Dh
0x4B99FD: push    42444F4Dh
0x4B9A02: push    4C444F4Dh
0x4B9A07: lea     ecx, [esi+24h]
0x4B9A0A: call    TESModel_Save
0x4B9A0F: mov     ecx, esi; this
0x4B9A11: call    TESObjectTREE_WriteTextureHashChunk; Verified local save behavior: looks up runtime TESTextureList cache by tree FormID and, when present, derives the model path then calls nullsub_returnVoid_2arg (0x60CF60). That target is a single `retn 8`, so no DMTL chunk bytes are emitted by this helper. The load path does parse DMTL; this is an Oblivion load/save asymmetry.
0x4B9A16: mov     ecx, esi
0x4B9A18: pop     esi
0x4B9A19: jmp     TESForm_FinalizeFormRecord
