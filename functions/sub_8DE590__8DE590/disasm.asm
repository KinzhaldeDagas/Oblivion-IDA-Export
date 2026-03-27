0x8DE590: push    esi
0x8DE591: push    edi
0x8DE592: mov     esi, ecx
0x8DE594: mov     edi, [esi+60h]
0x8DE597: dec     edi
0x8DE598: js      short loc_8DE5B3
0x8DE59A: lea     ebx, [ebx+0]
0x8DE5A0: mov     eax, [esi+5Ch]
0x8DE5A3: mov     ecx, [eax+edi*4]
0x8DE5A6: test    ecx, ecx
0x8DE5A8: jz      short loc_8DE5B0
0x8DE5AA: mov     edx, [ecx]
0x8DE5AC: push    esi
0x8DE5AD: call    dword ptr [edx+4]
0x8DE5B0: dec     edi
0x8DE5B1: jns     short loc_8DE5A0
0x8DE5B3: mov     edx, [esi+60h]
0x8DE5B6: dec     edx
0x8DE5B7: js      short loc_8DE5F7
0x8DE5B9: lea     esp, [esp+0]
0x8DE5C0: mov     eax, [esi+5Ch]
0x8DE5C3: cmp     dword ptr [eax+edx*4], 0
0x8DE5C7: jnz     short loc_8DE5F4
0x8DE5C9: mov     eax, [esi+60h]
0x8DE5CC: dec     eax
0x8DE5CD: mov     ecx, eax
0x8DE5CF: cmp     edx, ecx
0x8DE5D1: mov     [esi+60h], eax
0x8DE5D4: mov     eax, edx
0x8DE5D6: jge     short loc_8DE5F4
0x8DE5D8: jmp     short loc_8DE5E0
0x8DE5DA: align 10h
0x8DE5E0: mov     ecx, [esi+5Ch]
0x8DE5E3: mov     edi, [ecx+eax*4+4]
0x8DE5E7: lea     ecx, [ecx+eax*4]
0x8DE5EA: mov     [ecx], edi
0x8DE5EC: mov     ecx, [esi+60h]
0x8DE5EF: inc     eax
0x8DE5F0: cmp     eax, ecx
0x8DE5F2: jl      short loc_8DE5E0
0x8DE5F4: dec     edx
0x8DE5F5: jns     short loc_8DE5C0
0x8DE5F7: pop     edi
0x8DE5F8: pop     esi
0x8DE5F9: retn
