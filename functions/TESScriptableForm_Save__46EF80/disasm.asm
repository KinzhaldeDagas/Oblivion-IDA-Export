0x46EF80: push    ecx
0x46EF81: mov     eax, [ecx+4]
0x46EF84: test    eax, eax
0x46EF86: jz      short loc_46EFA3
0x46EF88: mov     eax, [eax+0Ch]
0x46EF8B: push    4; Size
0x46EF8D: lea     ecx, [esp+8+Src]
0x46EF91: push    ecx; Src
0x46EF92: push    49524353h; int
0x46EF97: mov     [esp+10h+Src], eax
0x46EF9B: call    TESForm_PutFormRecordChunkData
0x46EFA0: add     esp, 0Ch
0x46EFA3: pop     ecx
0x46EFA4: retn
