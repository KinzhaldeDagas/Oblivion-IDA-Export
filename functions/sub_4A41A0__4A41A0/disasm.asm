0x4A41A0: mov     eax, [ecx+8]
0x4A41A3: test    eax, eax
0x4A41A5: jz      short loc_4A41CF
0x4A41A7: movzx   ecx, word ptr [eax+8]
0x4A41AB: cmp     cx, 0FFFFh
0x4A41B0: jnz     short loc_4A41C5
0x4A41B2: mov     eax, [eax+4]
0x4A41B5: lea     edx, [eax+1]
0x4A41B8: mov     cl, [eax]
0x4A41BA: add     eax, 1
0x4A41BD: test    cl, cl
0x4A41BF: jnz     short loc_4A41B8
0x4A41C1: sub     eax, edx
0x4A41C3: jmp     short loc_4A41C8
0x4A41C5: movzx   eax, cx
0x4A41C8: test    eax, eax
0x4A41CA: jz      short loc_4A41CF
0x4A41CC: mov     al, 1
0x4A41CE: retn
0x4A41CF: xor     al, al
0x4A41D1: retn
