0x4527A0: push    ebx
0x4527A1: mov     ebx, [esp+4+arg_0]
0x4527A5: push    esi
0x4527A6: mov     esi, ecx
0x4527A8: mov     eax, [esi]
0x4527AA: mov     edx, [eax+4]
0x4527AD: push    edi
0x4527AE: push    ebx
0x4527AF: call    edx
0x4527B1: mov     ecx, [esi+8]
0x4527B4: mov     edi, [ecx+eax*4]
0x4527B7: test    edi, edi
0x4527B9: jz      short loc_4527D9
0x4527BB: jmp     short loc_4527C0
0x4527BD: align 10h
0x4527C0: movzx   eax, byte ptr [edi+4]
0x4527C4: mov     edx, [esi]
0x4527C6: mov     edx, [edx+8]
0x4527C9: push    eax
0x4527CA: push    ebx
0x4527CB: mov     ecx, esi
0x4527CD: call    edx
0x4527CF: test    al, al
0x4527D1: jnz     short loc_4527E1
0x4527D3: mov     edi, [edi]
0x4527D5: test    edi, edi
0x4527D7: jnz     short loc_4527C0
0x4527D9: pop     edi
0x4527DA: pop     esi
0x4527DB: xor     al, al
0x4527DD: pop     ebx
0x4527DE: retn    8
0x4527E1: mov     eax, [edi+8]
0x4527E4: mov     ecx, [esp+0Ch+arg_4]
0x4527E8: pop     edi
0x4527E9: pop     esi
0x4527EA: mov     [ecx], eax
0x4527EC: mov     al, 1
0x4527EE: pop     ebx
0x4527EF: retn    8
