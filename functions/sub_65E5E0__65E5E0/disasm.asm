0x65E5E0: sub     esp, 24h
0x65E5E3: fld     dword ptr ds:0A2FF44h
0x65E5E9: push    ebx
0x65E5EA: fcom    [esp+28h+arg_0]
0x65E5EE: push    esi
0x65E5EF: push    edi
0x65E5F0: mov     edi, ecx
0x65E5F2: mov     [esp+30h+var_21], 0
0x65E5F7: fnstsw  ax
0x65E5F9: test    ah, 5
0x65E5FC: jp      short loc_65E609
0x65E5FE: fstp    [esp+30h+arg_0]
0x65E602: mov     [esp+30h+var_21], 1
0x65E607: jmp     short loc_65E60B
0x65E609: fstp    st
0x65E60B: call    TESObjectREFR_GetParentCell
0x65E610: mov     esi, eax
0x65E612: xor     ebx, ebx
0x65E614: cmp     esi, ebx
0x65E616: jz      short loc_65E648
0x65E618: mov     ecx, esi; this
0x65E61A: call    TESObjectCELL_IsInterior
0x65E61F: test    al, al
0x65E621: jnz     loc_65E7D5
0x65E627: movzx   eax, byte ptr [esi+24h]
0x65E62B: shr     eax, 1
0x65E62D: test    al, 1
0x65E62F: jnz     loc_65E7D5
0x65E635: mov     ecx, ds:0B333A0h
0x65E63B: call    TES__GetCurrentWorldspace
0x65E640: test    eax, eax
0x65E642: jz      loc_65E7D5
0x65E648: mov     ecx, [edi+2Ch]
0x65E64B: mov     edx, [edi+30h]
0x65E64E: mov     eax, [edi+34h]
0x65E651: push    ebp
0x65E652: mov     [esp+34h+var_C], ecx
0x65E656: mov     [esp+34h+var_8], edx
0x65E65A: mov     [esp+34h+var_4], eax
0x65E65E: fld     [esp+34h+var_C]
0x65E662: fistp   [esp+34h+var_20]
0x65E666: mov     edi, [esp+34h+var_20]
0x65E66A: sar     edi, 0Ch
0x65E66D: fld     [esp+34h+var_8]
0x65E671: fistp   [esp+34h+var_20]
0x65E675: mov     ebp, [esp+34h+var_20]
0x65E679: mov     ecx, edi
0x65E67B: shl     ecx, 0Ch
0x65E67E: mov     [esp+34h+var_20], ecx
0x65E682: fild    [esp+34h+var_20]
0x65E686: sar     ebp, 0Ch
0x65E689: mov     edx, ebp
0x65E68B: fstp    [esp+34h+var_20]
0x65E68F: shl     edx, 0Ch
0x65E692: fld     [esp+34h+var_20]
0x65E696: mov     [esp+34h+var_20], edx
0x65E69A: fst     [esp+34h+var_1C]
0x65E69E: fild    [esp+34h+var_20]
0x65E6A2: fstp    [esp+34h+var_20]
0x65E6A6: fld     [esp+34h+var_20]
0x65E6AA: mov     [esp+34h+var_20], ebx
0x65E6AE: fst     [esp+34h+var_18]
0x65E6B2: fld     qword ptr ds:0A37650h
0x65E6B8: fadd    st(2), st
0x65E6BA: fxch    st(2)
0x65E6BC: fstp    [esp+34h+var_14]
0x65E6C0: faddp   st(1), st
0x65E6C2: fstp    [esp+34h+var_10]
0x65E6C6: fld     [esp+34h+var_C]
0x65E6CA: fld     st
0x65E6CC: fld     [esp+34h+arg_0]
0x65E6D0: fld     st
0x65E6D2: fsubp   st(2), st
0x65E6D4: fld     [esp+34h+var_1C]
0x65E6D8: fcomp   st(2)
0x65E6DA: fnstsw  ax
0x65E6DC: fstp    st(1)
0x65E6DE: test    ah, 1
0x65E6E1: jnz     short loc_65E6EF
0x65E6E3: fstp    st
0x65E6E5: mov     [esp+34h+var_20], 0FFFFFFFFh
0x65E6ED: jmp     short loc_65E70A
0x65E6EF: fld     st
0x65E6F1: faddp   st(2), st
0x65E6F3: fld     [esp+34h+var_14]
0x65E6F7: fcomp   st(2)
0x65E6F9: fnstsw  ax
0x65E6FB: fstp    st(1)
0x65E6FD: test    ah, 41h
0x65E700: jp      short loc_65E725
0x65E702: mov     [esp+34h+var_20], 1
0x65E70A: mov     eax, [esp+34h+var_20]
0x65E70E: fstp    st
0x65E710: mov     ecx, ds:0B333A0h; this
0x65E716: push    ebp; a3
0x65E717: add     eax, edi
0x65E719: push    eax; a2
0x65E71A: call    TES_GetCellFromCoords
0x65E71F: fld     [esp+34h+arg_0]
0x65E723: mov     esi, eax
0x65E725: cmp     esi, ebx
0x65E727: jz      short loc_65E738
0x65E729: movzx   ecx, byte ptr [esi+24h]
0x65E72D: shr     ecx, 1
0x65E72F: test    cl, 1
0x65E732: jnz     loc_65E7D2
0x65E738: fld     [esp+34h+var_8]
0x65E73C: fld     st
0x65E73E: fsub    st, st(2)
0x65E740: fld     [esp+34h+var_18]
0x65E744: fcompp
0x65E746: fnstsw  ax
0x65E748: test    ah, 1
0x65E74B: jnz     short loc_65E756
0x65E74D: fstp    st(1)
0x65E74F: or      ebx, 0FFFFFFFFh
0x65E752: fstp    st
0x65E754: jmp     short loc_65E76A
0x65E756: faddp   st(1), st
0x65E758: fld     [esp+34h+var_10]
0x65E75C: fcompp
0x65E75E: fnstsw  ax
0x65E760: test    ah, 41h
0x65E763: jp      short loc_65E77C
0x65E765: mov     ebx, 1
0x65E76A: mov     ecx, ds:0B333A0h; this
0x65E770: lea     edx, [ebx+ebp]
0x65E773: push    edx; a3
0x65E774: push    edi; a2
0x65E775: call    TES_GetCellFromCoords
0x65E77A: mov     esi, eax
0x65E77C: test    esi, esi
0x65E77E: jz      short loc_65E78A
0x65E780: movzx   eax, byte ptr [esi+24h]
0x65E784: shr     eax, 1
0x65E786: test    al, 1
0x65E788: jnz     short loc_65E7D4
0x65E78A: mov     eax, [esp+34h+var_20]
0x65E78E: test    eax, eax
0x65E790: jz      short loc_65E7D4
0x65E792: test    ebx, ebx
0x65E794: jz      short loc_65E7D4
0x65E796: mov     ecx, ds:0B333A0h; this
0x65E79C: add     ebx, ebp
0x65E79E: push    ebx; a3
0x65E79F: add     eax, edi
0x65E7A1: push    eax; a2
0x65E7A2: call    TES_GetCellFromCoords
0x65E7A7: mov     esi, eax
0x65E7A9: test    esi, esi
0x65E7AB: jz      short loc_65E7B8
0x65E7AD: movzx   ecx, byte ptr [esi+24h]
0x65E7B1: shr     ecx, 1
0x65E7B3: test    cl, 1
0x65E7B6: jnz     short loc_65E7D4
0x65E7B8: cmp     [esp+34h+var_21], 0
0x65E7BD: jz      short loc_65E7D4
0x65E7BF: mov     ecx, ds:0B333A0h
0x65E7C5: call    sub_43F900
0x65E7CA: test    eax, eax
0x65E7CC: jz      short loc_65E7D4
0x65E7CE: mov     esi, [eax]
0x65E7D0: jmp     short loc_65E7D4
0x65E7D2: fstp    st
0x65E7D4: pop     ebp
0x65E7D5: test    esi, esi
0x65E7D7: jz      short loc_65E7EF
0x65E7D9: movzx   edx, byte ptr [esi+24h]
0x65E7DD: shr     edx, 1
0x65E7DF: test    dl, 1
0x65E7E2: jnz     short loc_65E7EF
0x65E7E4: pop     edi
0x65E7E5: pop     esi
0x65E7E6: xor     eax, eax
0x65E7E8: pop     ebx
0x65E7E9: add     esp, 24h
0x65E7EC: retn    4
0x65E7EF: pop     edi
0x65E7F0: mov     eax, esi
0x65E7F2: pop     esi
0x65E7F3: pop     ebx
0x65E7F4: add     esp, 24h
0x65E7F7: retn    4
