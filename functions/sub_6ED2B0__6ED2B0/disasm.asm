0x6ED2B0: push    ebx
0x6ED2B1: push    ebp
0x6ED2B2: mov     ebp, [esp+8+arg_4]
0x6ED2B6: push    esi
0x6ED2B7: push    edi
0x6ED2B8: mov     edi, [esp+10h+arg_0]
0x6ED2BC: push    ebp
0x6ED2BD: push    edi
0x6ED2BE: mov     esi, ecx
0x6ED2C0: call    sub_733850
0x6ED2C5: fld     dword ptr [esi+10h]
0x6ED2C8: fstp    dword ptr [edi+10h]
0x6ED2CB: fld     dword ptr [esi+0Ch]
0x6ED2CE: fstp    dword ptr [edi+0Ch]
0x6ED2D1: mov     ebx, [edi+14h]
0x6ED2D4: cmp     ebx, [esi+14h]
0x6ED2D7: jz      short loc_6ED30D
0x6ED2D9: test    ebx, ebx
0x6ED2DB: jz      short loc_6ED2F9
0x6ED2DD: lea     eax, [ebx+4]
0x6ED2E0: push    eax; lpAddend
0x6ED2E1: call    dword ptr ds:0A2807Ch
0x6ED2E7: test    eax, eax
0x6ED2E9: jnz     short loc_6ED2F9
0x6ED2EB: test    ebx, ebx
0x6ED2ED: jz      short loc_6ED2F9
0x6ED2EF: mov     edx, [ebx]
0x6ED2F1: mov     eax, [edx]
0x6ED2F3: push    1
0x6ED2F5: mov     ecx, ebx
0x6ED2F7: call    eax
0x6ED2F9: mov     eax, [esi+14h]
0x6ED2FC: test    eax, eax
0x6ED2FE: mov     [edi+14h], eax
0x6ED301: jz      short loc_6ED30D
0x6ED303: add     eax, 4
0x6ED306: push    eax; lpAddend
0x6ED307: call    dword ptr ds:0A28078h
0x6ED30D: mov     ecx, [esi+18h]
0x6ED310: test    ecx, ecx
0x6ED312: jz      short loc_6ED323
0x6ED314: push    ebp
0x6ED315: call    sub_700710
0x6ED31A: push    eax; a2
0x6ED31B: lea     ecx, [edi+18h]; this
0x6ED31E: call    NiSmartPointer_Set??
0x6ED323: pop     edi
0x6ED324: pop     esi
0x6ED325: pop     ebp
0x6ED326: pop     ebx
0x6ED327: retn    8
