0x469290: push    esi
0x469291: mov     esi, [esp+4+arg_0]
0x469295: lea     eax, [esi+esi*2]
0x469298: movzx   edx, word ptr [ecx+eax*8+10h]
0x46929D: cmp     dx, 0FFFFh
0x4692A2: lea     eax, [ecx+eax*8+0Ch]
0x4692A6: jnz     short loc_4692BE
0x4692A8: mov     eax, [eax]
0x4692AA: push    edi
0x4692AB: lea     edi, [eax+1]
0x4692AE: mov     edi, edi
0x4692B0: mov     dl, [eax]
0x4692B2: add     eax, 1
0x4692B5: test    dl, dl
0x4692B7: jnz     short loc_4692B0
0x4692B9: sub     eax, edi
0x4692BB: pop     edi
0x4692BC: jmp     short loc_4692C1
0x4692BE: movzx   eax, dx
0x4692C1: test    eax, eax
0x4692C3: jnz     short loc_4692CC
0x4692C5: cmp     esi, 1
0x4692C8: jnz     short loc_4692CC
0x4692CA: xor     esi, esi
0x4692CC: lea     edx, [esi+esi*2]
0x4692CF: lea     eax, [ecx+edx*8+8]
0x4692D3: pop     esi
0x4692D4: retn    4
