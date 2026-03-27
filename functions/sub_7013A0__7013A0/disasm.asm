0x7013A0: push    ebp
0x7013A1: mov     ebp, ds:0A2807Ch
0x7013A7: push    esi
0x7013A8: mov     esi, [esp+8+arg_0]
0x7013AC: push    edi
0x7013AD: mov     ecx, 11h
0x7013B2: mov     edi, offset byte_B3F718
0x7013B7: rep movsd
0x7013B9: xor     edi, edi
0x7013BB: jmp     short loc_7013C0
0x7013BD: align 10h
0x7013C0: mov     esi, ds:dword_B3F800[edi]
0x7013C6: test    esi, esi
0x7013C8: jz      short loc_7013EC
0x7013CA: lea     eax, [esi+4]
0x7013CD: push    eax; lpAddend
0x7013CE: call    ebp ; InterlockedDecrement
0x7013D0: test    eax, eax
0x7013D2: jnz     short loc_7013E2
0x7013D4: test    esi, esi
0x7013D6: jz      short loc_7013E2
0x7013D8: mov     edx, [esi]
0x7013DA: mov     eax, [edx]
0x7013DC: push    1
0x7013DE: mov     ecx, esi
0x7013E0: call    eax
0x7013E2: mov     ds:dword_B3F800[edi], 0
0x7013EC: add     edi, 4
0x7013EF: cmp     edi, 28h ; '('
0x7013F2: jb      short loc_7013C0
0x7013F4: pop     edi
0x7013F5: pop     esi
0x7013F6: pop     ebp
0x7013F7: retn
