0x4A0760: push    ebx
0x4A0761: mov     ebx, [esp+4+arg_0]
0x4A0765: test    ebx, ebx
0x4A0767: jz      short loc_4A07D6
0x4A0769: push    ebp
0x4A076A: mov     ebp, [esp+8+arg_4]
0x4A076E: test    ebp, ebp
0x4A0770: jz      short loc_4A07D5
0x4A0772: movzx   eax, word ptr [ebx+0B6h]
0x4A0779: push    edi
0x4A077A: xor     edi, edi
0x4A077C: test    eax, eax
0x4A077E: jbe     short loc_4A07D4
0x4A0780: cmp     eax, edi
0x4A0782: push    esi
0x4A0783: jbe     short loc_4A07C5
0x4A0785: mov     eax, [ebx+0B0h]
0x4A078B: mov     esi, [eax+edi*4]
0x4A078E: test    esi, esi
0x4A0790: jz      short loc_4A07C5
0x4A0792: mov     edx, [esi]
0x4A0794: mov     eax, [edx+8]
0x4A0797: mov     ecx, esi
0x4A0799: call    eax
0x4A079B: test    eax, eax
0x4A079D: jz      short loc_4A07AB
0x4A079F: push    ebp
0x4A07A0: push    eax
0x4A07A1: call    sub_4A0760
0x4A07A6: add     esp, 8
0x4A07A9: jmp     short loc_4A07C5
0x4A07AB: mov     edx, [esi]
0x4A07AD: mov     eax, [edx+0Ch]
0x4A07B0: mov     ecx, esi
0x4A07B2: call    eax
0x4A07B4: test    eax, eax
0x4A07B6: jz      short loc_4A07C5
0x4A07B8: mov     eax, [eax+0B8h]
0x4A07BE: test    eax, eax
0x4A07C0: jz      short loc_4A07C5
0x4A07C2: mov     [eax+10h], ebp
0x4A07C5: movzx   eax, word ptr [ebx+0B6h]
0x4A07CC: add     edi, 1
0x4A07CF: cmp     eax, edi
0x4A07D1: ja      short loc_4A0785
0x4A07D3: pop     esi
0x4A07D4: pop     edi
0x4A07D5: pop     ebp
0x4A07D6: pop     ebx
0x4A07D7: retn
