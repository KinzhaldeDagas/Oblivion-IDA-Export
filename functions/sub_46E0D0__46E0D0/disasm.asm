0x46E0D0: push    ecx
0x46E0D1: push    esi
0x46E0D2: mov     esi, ecx
0x46E0D4: mov     eax, [esi+4]
0x46E0D7: test    eax, eax
0x46E0D9: jz      short loc_46E0F6
0x46E0DB: mov     eax, [eax+0Ch]
0x46E0DE: push    4; Size
0x46E0E0: lea     ecx, [esp+0Ch+Src]
0x46E0E4: push    ecx; Src
0x46E0E5: push    47494650h; int
0x46E0EA: mov     [esp+14h+Src], eax
0x46E0EE: call    TESForm_PutFormRecordChunkData
0x46E0F3: add     esp, 0Ch
0x46E0F6: push    4; Size
0x46E0F8: add     esi, 8
0x46E0FB: push    esi; Src
0x46E0FC: push    43504650h; int
0x46E101: call    TESForm_PutFormRecordChunkData
0x46E106: add     esp, 0Ch
0x46E109: pop     esi
0x46E10A: pop     ecx
0x46E10B: retn
