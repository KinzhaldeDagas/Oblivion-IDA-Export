0x4BBC80: push    esi
0x4BBC81: mov     esi, ecx
0x4BBC83: call    TESForm_InitializeFormRecord
0x4BBC88: lea     ecx, [esi+24h]
0x4BBC8B: call    TESFullName_Save
0x4BBC90: push    54444F4Dh
0x4BBC95: push    42444F4Dh
0x4BBC9A: push    4C444F4Dh
0x4BBC9F: lea     ecx, [esi+30h]
0x4BBCA2: call    TESModel_Save
0x4BBCA7: push    4E4F4349h
0x4BBCAC: lea     ecx, [esi+48h]
0x4BBCAF: call    TESTexture_Save
0x4BBCB4: lea     ecx, [esi+54h]
0x4BBCB7: call    TESScriptableForm_Save
0x4BBCBC: push    0; Size
0x4BBCBE: push    0; Src
0x4BBCC0: mov     ecx, esi; this
0x4BBCC2: call    TESForm_SaveGenericComponents
0x4BBCC7: push    1; Size
0x4BBCC9: lea     eax, [esi+70h]
0x4BBCCC: push    eax; Src
0x4BBCCD: push    4C554F53h; int
0x4BBCD2: call    TESForm_PutFormRecordChunkData
0x4BBCD7: push    1; Size
0x4BBCD9: lea     ecx, [esi+71h]
0x4BBCDC: push    ecx; Src
0x4BBCDD: push    50434C53h; int
0x4BBCE2: call    TESForm_PutFormRecordChunkData
0x4BBCE7: add     esp, 18h
0x4BBCEA: mov     ecx, esi
0x4BBCEC: pop     esi
0x4BBCED: jmp     TESForm_FinalizeFormRecord
