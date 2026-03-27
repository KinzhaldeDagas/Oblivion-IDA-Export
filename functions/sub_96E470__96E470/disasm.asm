0x96E470: push    esi
0x96E471: push    edi
0x96E472: push    50h ; 'P'; Size
0x96E474: mov     edi, ecx
0x96E476: call    FormHeapAlloc
0x96E47B: add     esp, 4
0x96E47E: test    eax, eax
0x96E480: jz      short loc_96E49F
0x96E482: mov     ecx, eax; this
0x96E484: call    ??0NiCollisionData@@QAE@XZ; NiCollisionData::NiCollisionData(void)
0x96E489: mov     esi, eax
0x96E48B: mov     eax, [esp+8+arg_0]
0x96E48F: push    eax
0x96E490: push    esi
0x96E491: mov     ecx, edi
0x96E493: call    sub_96E140
0x96E498: pop     edi
0x96E499: mov     eax, esi
0x96E49B: pop     esi
0x96E49C: retn    4
0x96E49F: mov     eax, [esp+8+arg_0]
0x96E4A3: push    eax
0x96E4A4: xor     esi, esi
0x96E4A6: push    esi
0x96E4A7: mov     ecx, edi
0x96E4A9: call    sub_96E140
0x96E4AE: pop     edi
0x96E4AF: mov     eax, esi
0x96E4B1: pop     esi
0x96E4B2: retn    4
