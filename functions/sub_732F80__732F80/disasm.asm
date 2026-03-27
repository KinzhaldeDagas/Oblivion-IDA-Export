0x732F80: sub     esp, 34h
0x732F83: push    ebp
0x732F84: push    esi
0x732F85: push    1
0x732F87: mov     ebp, ecx
0x732F89: call    sub_728280
0x732F8E: mov     esi, [ebp+4Ch]
0x732F91: xor     eax, eax
0x732F93: cmp     [ebp+44h], ax
0x732F97: mov     [esp+3Ch+var_30], esi
0x732F9B: mov     [esp+3Ch+var_2C], eax
0x732F9F: jbe     loc_733186
0x732FA5: push    ebx
0x732FA6: push    edi
0x732FA7: jmp     short loc_732FB4
0x732FA9: align 10h
0x732FB0: mov     esi, [esp+44h+var_30]
0x732FB4: mov     ecx, [ebp+48h]
0x732FB7: movzx   edi, ax
0x732FBA: add     edi, edi
0x732FBC: cmp     word ptr [edi+ecx], 2
0x732FC1: mov     [esp+44h+var_34], 2
0x732FC9: mov     [esp+44h+var_28], edi
0x732FCD: jbe     loc_733165
0x732FD3: movzx   eax, word ptr [esp+44h+var_34]
0x732FD8: mov     edx, eax
0x732FDA: and     edx, 80000001h
0x732FE0: jns     short loc_732FE7
0x732FE2: dec     edx
0x732FE3: or      edx, 0FFFFFFFEh
0x732FE6: inc     edx
0x732FE7: movzx   ecx, word ptr [esi+eax*2-4]
0x732FEC: jnz     short loc_732FF9
0x732FEE: movzx   edx, word ptr [esi+eax*2-2]
0x732FF3: movzx   ebx, word ptr [esi+eax*2]
0x732FF7: jmp     short loc_733002
0x732FF9: movzx   edx, word ptr [esi+eax*2]
0x732FFD: movzx   ebx, word ptr [esi+eax*2-2]
0x733002: cmp     cx, dx
0x733005: jz      loc_733149
0x73300B: cmp     dx, bx
0x73300E: jz      loc_733149
0x733014: cmp     bx, cx
0x733017: jz      loc_733149
0x73301D: mov     eax, [ebp+1Ch]
0x733020: movzx   esi, dx
0x733023: movzx   edi, cx
0x733026: lea     esi, [esi+esi*2]
0x733029: lea     edi, [edi+edi*2]
0x73302C: add     esi, esi
0x73302E: add     esi, esi
0x733030: add     edi, edi
0x733032: add     edi, edi
0x733034: fld     dword ptr [esi+eax]
0x733037: movzx   ebx, bx
0x73303A: fsub    dword ptr [eax+edi]
0x73303D: lea     ecx, [esi+eax+8]
0x733041: lea     ebx, [ebx+ebx*2]
0x733044: fstp    [esp+44h+var_C]
0x733048: add     ebx, ebx
0x73304A: fld     dword ptr [esi+eax+4]
0x73304E: add     ebx, ebx
0x733050: fsub    dword ptr [eax+edi+4]
0x733054: fstp    [esp+44h+var_8]
0x733058: fld     dword ptr [ecx]
0x73305A: fsub    dword ptr [eax+edi+8]
0x73305E: fstp    [esp+44h+var_4]
0x733062: fld     dword ptr [ebx+eax]
0x733065: fsub    dword ptr [esi+eax]
0x733068: fstp    [esp+44h+var_18]
0x73306C: fld     dword ptr [ebx+eax+4]
0x733070: fsub    dword ptr [esi+eax+4]
0x733074: fstp    [esp+44h+var_14]
0x733078: fld     dword ptr [ebx+eax+8]
0x73307C: lea     eax, [esp+44h+var_24]
0x733080: fsub    dword ptr [ecx]
0x733082: push    eax
0x733083: fstp    [esp+48h+var_10]
0x733087: fld     [esp+48h+var_10]
0x73308B: fld     st
0x73308D: fld     [esp+48h+var_8]
0x733091: fld     st
0x733093: fmulp   st(2), st
0x733095: fld     [esp+48h+var_14]
0x733099: fld     st
0x73309B: fld     [esp+48h+var_4]
0x73309F: fld     st
0x7330A1: fmulp   st(2), st
0x7330A3: fxch    st(4)
0x7330A5: fsubrp  st(1), st
0x7330A7: fstp    [esp+48h+var_24]
0x7330AB: fld     [esp+48h+var_18]
0x7330AF: fld     st
0x7330B1: fmulp   st(4), st
0x7330B3: fld     [esp+48h+var_C]
0x7330B7: fld     st
0x7330B9: fmulp   st(6), st
0x7330BB: fxch    st(4)
0x7330BD: fsubrp  st(5), st
0x7330BF: fxch    st(4)
0x7330C1: fstp    [esp+48h+var_20]
0x7330C5: fmulp   st(2), st
0x7330C7: fmulp   st(2), st
0x7330C9: fsubrp  st(1), st
0x7330CB: fstp    [esp+48h+var_1C]
0x7330CF: call    sub_4BFAA0
0x7330D4: mov     eax, [ebp+20h]
0x7330D7: fld     dword ptr [eax+edi]
0x7330DA: add     esp, 4
0x7330DD: fld     [esp+44h+var_24]
0x7330E1: add     eax, edi
0x7330E3: fld     st
0x7330E5: faddp   st(2), st
0x7330E7: fxch    st(1)
0x7330E9: fstp    dword ptr [eax]
0x7330EB: fld     dword ptr [eax+4]
0x7330EE: fld     [esp+44h+var_20]
0x7330F2: fld     st
0x7330F4: faddp   st(2), st
0x7330F6: fxch    st(1)
0x7330F8: fstp    dword ptr [eax+4]
0x7330FB: fld     dword ptr [eax+8]
0x7330FE: fld     [esp+44h+var_1C]
0x733102: fld     st
0x733104: faddp   st(2), st
0x733106: fxch    st(1)
0x733108: mov     edi, [esp+44h+var_28]
0x73310C: fstp    dword ptr [eax+8]
0x73310F: mov     eax, [ebp+20h]
0x733112: fld     dword ptr [eax+esi]
0x733115: add     eax, esi
0x733117: fadd    st, st(3)
0x733119: mov     esi, [esp+44h+var_30]
0x73311D: fstp    dword ptr [eax]
0x73311F: fld     dword ptr [eax+4]
0x733122: fadd    st, st(2)
0x733124: fstp    dword ptr [eax+4]
0x733127: fld     dword ptr [eax+8]
0x73312A: fadd    st, st(1)
0x73312C: fstp    dword ptr [eax+8]
0x73312F: mov     eax, [ebp+20h]
0x733132: fld     dword ptr [eax+ebx]
0x733135: add     eax, ebx
0x733137: faddp   st(3), st
0x733139: fxch    st(2)
0x73313B: fstp    dword ptr [eax]
0x73313D: fadd    dword ptr [eax+4]
0x733140: fstp    dword ptr [eax+4]
0x733143: fadd    dword ptr [eax+8]
0x733146: fstp    dword ptr [eax+8]
0x733149: mov     eax, [esp+44h+var_34]
0x73314D: mov     ecx, [ebp+48h]
0x733150: add     eax, 1
0x733153: cmp     ax, [edi+ecx]
0x733157: mov     [esp+44h+var_34], eax
0x73315B: jb      loc_732FD3
0x733161: mov     eax, [esp+44h+var_2C]
0x733165: mov     edx, [ebp+48h]
0x733168: movzx   ecx, word ptr [edi+edx]
0x73316C: add     eax, 1
0x73316F: cmp     ax, [ebp+44h]
0x733173: lea     edx, [esi+ecx*2]
0x733176: mov     [esp+44h+var_30], edx
0x73317A: mov     [esp+44h+var_2C], eax
0x73317E: jb      loc_732FB0
0x733184: pop     edi
0x733185: pop     ebx
0x733186: movzx   eax, word ptr [ebp+8]
0x73318A: mov     ecx, [ebp+20h]
0x73318D: push    0Ch
0x73318F: push    eax
0x733190: push    ecx
0x733191: call    sub_725890
0x733196: add     esp, 0Ch
0x733199: or      word ptr [ebp+2Eh], 2
0x73319E: pop     esi
0x73319F: pop     ebp
0x7331A0: add     esp, 34h
0x7331A3: retn
