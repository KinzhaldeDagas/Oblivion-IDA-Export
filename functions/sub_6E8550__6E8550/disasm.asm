0x6E8550: push    ebx
0x6E8551: push    esi
0x6E8552: push    edi
0x6E8553: mov     edi, [esp+0Ch+arg_0]
0x6E8557: push    edi
0x6E8558: mov     esi, ecx
0x6E855A: call    sub_6EC2B0
0x6E855F: mov     eax, [edi+21Ch]
0x6E8565: push    1
0x6E8567: lea     ecx, [esp+10h+arg_0]
0x6E856B: push    ecx
0x6E856C: push    1
0x6E856E: lea     edx, [esi+0Ch]
0x6E8571: push    edx
0x6E8572: push    eax
0x6E8573: mov     eax, [eax+4]
0x6E8576: mov     [esp+20h+arg_0], 1
0x6E857E: call    eax
0x6E8580: add     esp, 14h
0x6E8583: mov     ecx, edi
0x6E8585: call    sub_712A90
0x6E858A: mov     edi, [esi+10h]
0x6E858D: mov     ebx, eax
0x6E858F: cmp     edi, ebx
0x6E8591: jz      short loc_6E85C4
0x6E8593: test    edi, edi
0x6E8595: jz      short loc_6E85B3
0x6E8597: lea     ecx, [edi+4]
0x6E859A: push    ecx; lpAddend
0x6E859B: call    dword ptr ds:0A2807Ch
0x6E85A1: test    eax, eax
0x6E85A3: jnz     short loc_6E85B3
0x6E85A5: test    edi, edi
0x6E85A7: jz      short loc_6E85B3
0x6E85A9: mov     edx, [edi]
0x6E85AB: mov     eax, [edx]
0x6E85AD: push    1
0x6E85AF: mov     ecx, edi
0x6E85B1: call    eax
0x6E85B3: test    ebx, ebx
0x6E85B5: mov     [esi+10h], ebx
0x6E85B8: jz      short loc_6E85C4
0x6E85BA: add     ebx, 4
0x6E85BD: push    ebx; lpAddend
0x6E85BE: call    dword ptr ds:0A28078h
0x6E85C4: pop     edi
0x6E85C5: pop     esi
0x6E85C6: pop     ebx
0x6E85C7: retn    4
