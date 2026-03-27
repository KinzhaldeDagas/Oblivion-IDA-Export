0x4D8190: push    ebx
0x4D8191: mov     bl, [esp+4+arg_0]
0x4D8195: test    bl, bl
0x4D8197: push    ebp
0x4D8198: lea     ebp, [ecx+44h]
0x4D819B: push    esi
0x4D819C: mov     ecx, ebp
0x4D819E: jz      short loc_4D81A7
0x4D81A0: call    sub_41E670
0x4D81A5: jmp     short loc_4D81AC
0x4D81A7: call    sub_41E650
0x4D81AC: mov     esi, eax
0x4D81AE: test    esi, esi
0x4D81B0: jz      short loc_4D820A
0x4D81B2: mov     eax, [esi]
0x4D81B4: test    eax, eax
0x4D81B6: jz      short loc_4D81F4
0x4D81B8: push    edi
0x4D81B9: push    eax
0x4D81BA: push    0
0x4D81BC: call    GetShadowSceneNode
0x4D81C1: add     esp, 4
0x4D81C4: mov     ecx, eax
0x4D81C6: call    sub_7C7DC0
0x4D81CB: mov     edi, [esi]
0x4D81CD: test    edi, edi
0x4D81CF: jz      short loc_4D81F3
0x4D81D1: lea     eax, [edi+4]
0x4D81D4: push    eax; lpAddend
0x4D81D5: call    dword ptr ds:0A2807Ch
0x4D81DB: test    eax, eax
0x4D81DD: jnz     short loc_4D81ED
0x4D81DF: test    edi, edi
0x4D81E1: jz      short loc_4D81ED
0x4D81E3: mov     edx, [edi]
0x4D81E5: mov     eax, [edx]
0x4D81E7: push    1
0x4D81E9: mov     ecx, edi
0x4D81EB: call    eax
0x4D81ED: mov     dword ptr [esi], 0
0x4D81F3: pop     edi
0x4D81F4: test    bl, bl
0x4D81F6: mov     ecx, ebp
0x4D81F8: jz      short loc_4D8205
0x4D81FA: call    sub_41F5C0
0x4D81FF: pop     esi
0x4D8200: pop     ebp
0x4D8201: pop     ebx
0x4D8202: retn    4
0x4D8205: call    sub_41F5B0
0x4D820A: pop     esi
0x4D820B: pop     ebp
0x4D820C: pop     ebx
0x4D820D: retn    4
