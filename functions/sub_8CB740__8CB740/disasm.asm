0x8CB740: push    ecx
0x8CB741: mov     ecx, [esp+4+arg_4]
0x8CB745: mov     edx, [ecx+0BCh]
0x8CB74B: xor     eax, eax
0x8CB74D: test    edx, edx
0x8CB74F: mov     [esp+4+var_4], eax
0x8CB752: jle     loc_8CB818
0x8CB758: push    ebx
0x8CB759: mov     ebx, [esp+8+arg_8]
0x8CB75D: push    ebp
0x8CB75E: push    esi
0x8CB75F: push    edi
0x8CB760: mov     edi, [esp+14h+arg_0]
0x8CB764: mov     ecx, [ecx+0B8h]
0x8CB76A: mov     esi, [ecx+eax*4]
0x8CB76D: test    esi, esi
0x8CB76F: jz      loc_8CB7F9
0x8CB775: mov     edx, [esi+0Ch]
0x8CB778: cmp     edx, [edi+30h]
0x8CB77B: jnz     short loc_8CB7F9
0x8CB77D: mov     eax, [ebx+8]
0x8CB780: mov     ecx, [ebx+4]
0x8CB783: and     eax, 3FFFFFFFh
0x8CB788: cmp     ecx, eax
0x8CB78A: jnz     short loc_8CB797
0x8CB78C: push    4
0x8CB78E: push    ebx
0x8CB78F: call    sub_8A6EE0
0x8CB794: add     esp, 8
0x8CB797: mov     ecx, [ebx+4]
0x8CB79A: mov     edx, [ebx]
0x8CB79C: mov     [edx+ecx*4], esi
0x8CB79F: inc     dword ptr [ebx+4]
0x8CB7A2: cmp     word ptr [esi+4], 0
0x8CB7A7: jz      short loc_8CB7AD
0x8CB7A9: inc     word ptr [esi+6]
0x8CB7AD: mov     ecx, [edi+30h]
0x8CB7B0: push    esi
0x8CB7B1: call    sub_8DDC90
0x8CB7B6: mov     eax, [edi+30h]
0x8CB7B9: mov     byte ptr [eax+27h], 1
0x8CB7BD: mov     ebp, [edi+30h]
0x8CB7C0: cmp     word ptr [ebp+22h], 0FFFFh
0x8CB7C6: jnz     short loc_8CB7F9
0x8CB7C8: mov     cx, [edi+54h]
0x8CB7CC: lea     esi, [edi+50h]
0x8CB7CF: mov     [ebp+22h], cx
0x8CB7D3: mov     edx, [esi+8]
0x8CB7D6: mov     eax, [esi+4]
0x8CB7D9: and     edx, 3FFFFFFFh
0x8CB7DF: cmp     eax, edx
0x8CB7E1: jnz     short loc_8CB7EE
0x8CB7E3: push    4
0x8CB7E5: push    esi
0x8CB7E6: call    sub_8A6EE0
0x8CB7EB: add     esp, 8
0x8CB7EE: mov     eax, [esi+4]
0x8CB7F1: mov     ecx, [esi]
0x8CB7F3: mov     [ecx+eax*4], ebp
0x8CB7F6: inc     dword ptr [esi+4]
0x8CB7F9: mov     eax, [esp+14h+var_4]
0x8CB7FD: mov     ecx, [esp+14h+arg_4]
0x8CB801: mov     edx, [ecx+0BCh]
0x8CB807: inc     eax
0x8CB808: cmp     eax, edx
0x8CB80A: mov     [esp+14h+var_4], eax
0x8CB80E: jl      loc_8CB764
0x8CB814: pop     edi
0x8CB815: pop     esi
0x8CB816: pop     ebp
0x8CB817: pop     ebx
0x8CB818: pop     ecx
0x8CB819: retn
