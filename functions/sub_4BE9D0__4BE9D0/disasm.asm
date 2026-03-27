0x4BE9D0: push    ebx
0x4BE9D1: push    esi
0x4BE9D2: push    edi
0x4BE9D3: mov     ebx, ecx
0x4BE9D5: call    TESForm_InitializeFormRecord
0x4BE9DA: push    54534C57h
0x4BE9DF: lea     ecx, [ebx+30h]
0x4BE9E2: call    sub_4EEB30
0x4BE9E7: xor     esi, esi
0x4BE9E9: lea     edi, [ebx+38h]
0x4BE9EC: lea     esp, [esp+0]
0x4BE9F0: lea     eax, [esi+4D414E46h]
0x4BE9F6: push    eax
0x4BE9F7: mov     ecx, edi
0x4BE9F9: call    TESTexture_Save
0x4BE9FE: add     esi, 1
0x4BEA01: add     edi, 0Ch
0x4BEA04: cmp     esi, 2
0x4BEA07: jl      short loc_4BE9F0
0x4BEA09: push    54444F4Dh
0x4BEA0E: push    42444F4Dh
0x4BEA13: push    4C444F4Dh
0x4BEA18: lea     ecx, [ebx+18h]
0x4BEA1B: call    TESModel_Save
0x4BEA20: push    6; Size
0x4BEA22: lea     ecx, [ebx+50h]
0x4BEA25: push    ecx; Src
0x4BEA26: push    4D414E54h; int
0x4BEA2B: call    TESForm_PutFormRecordChunkData
0x4BEA30: add     esp, 0Ch
0x4BEA33: pop     edi
0x4BEA34: pop     esi
0x4BEA35: mov     ecx, ebx
0x4BEA37: pop     ebx
0x4BEA38: jmp     TESForm_FinalizeFormRecord
