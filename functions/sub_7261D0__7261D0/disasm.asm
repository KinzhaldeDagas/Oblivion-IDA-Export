0x7261D0: mov     eax, [esp+arg_0]
0x7261D4: push    esi
0x7261D5: mov     esi, ecx
0x7261D7: movzx   ecx, word ptr [esi+26h]
0x7261DB: cmp     eax, ecx
0x7261DD: jnb     short loc_7261F8
0x7261DF: mov     edx, [esi+20h]
0x7261E2: mov     ecx, [edx+eax*4]
0x7261E5: test    ecx, ecx
0x7261E7: jz      short loc_7261F8
0x7261E9: mov     eax, [ecx]
0x7261EB: mov     edx, [eax+8]
0x7261EE: push    0
0x7261F0: push    0
0x7261F2: call    edx
0x7261F4: add     dword ptr [esi+8], 1
0x7261F8: pop     esi
0x7261F9: retn    4
