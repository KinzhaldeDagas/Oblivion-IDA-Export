0x7C3190: push    ebx
0x7C3191: push    esi
0x7C3192: push    edi
0x7C3193: mov     edi, [esp+0Ch+arg_0]
0x7C3197: mov     esi, [edi+8]
0x7C319A: test    esi, esi
0x7C319C: mov     ebx, ecx
0x7C319E: jz      short loc_7C31C3
0x7C31A0: lea     eax, [esi+4]
0x7C31A3: push    eax; lpAddend
0x7C31A4: call    dword ptr ds:0A2807Ch
0x7C31AA: test    eax, eax
0x7C31AC: jnz     short loc_7C31BC
0x7C31AE: test    esi, esi
0x7C31B0: jz      short loc_7C31BC
0x7C31B2: mov     edx, [esi]
0x7C31B4: mov     eax, [edx]
0x7C31B6: push    1
0x7C31B8: mov     ecx, esi
0x7C31BA: call    eax
0x7C31BC: mov     dword ptr [edi+8], 0
0x7C31C3: push    edi
0x7C31C4: lea     ecx, [ebx+0Ch]
0x7C31C7: call    sub_44D880
0x7C31CC: pop     edi
0x7C31CD: pop     esi
0x7C31CE: pop     ebx
0x7C31CF: retn    4
