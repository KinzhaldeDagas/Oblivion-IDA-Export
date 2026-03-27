0x738110: sub     esp, 38h
0x738113: push    esi
0x738114: push    edi
0x738115: push    1
0x738117: mov     edi, ecx
0x738119: call    sub_728280
0x73811E: mov     eax, [edi]
0x738120: mov     edx, [eax+5Ch]
0x738123: mov     esi, [edi+48h]
0x738126: mov     ecx, edi
0x738128: call    edx
0x73812A: movzx   eax, ax
0x73812D: test    ax, ax
0x738130: jbe     loc_738398
0x738136: movzx   eax, ax
0x738139: push    ebx
0x73813A: push    ebp
0x73813B: mov     [esp+48h+var_38], eax
0x73813F: jmp     short loc_738145
0x738141: mov     esi, [esp+48h+var_34]
0x738145: movzx   eax, word ptr [esi]
0x738148: movzx   ecx, word ptr [esi+2]
0x73814C: add     esi, 2
0x73814F: movzx   edx, word ptr [esi+2]
0x738153: add     esi, 2
0x738156: add     esi, 2
0x738159: mov     [esp+48h+var_34], esi
0x73815D: movzx   esi, cx
0x738160: movzx   ebx, ax
0x738163: mov     eax, [edi+1Ch]
0x738166: mov     [esp+48h+var_2C], esi
0x73816A: mov     [esp+48h+var_30], ebx
0x73816E: lea     esi, [esi+esi*2]
0x738171: lea     ebx, [ebx+ebx*2]
0x738174: add     esi, esi
0x738176: add     esi, esi
0x738178: add     ebx, ebx
0x73817A: add     ebx, ebx
0x73817C: fld     dword ptr [esi+eax]
0x73817F: movzx   ebp, dx
0x738182: fsub    dword ptr [eax+ebx]
0x738185: mov     [esp+48h+var_28], ebp
0x738189: lea     ebp, [ebp+ebp*2+0]
0x73818D: fstp    [esp+48h+var_C]
0x738191: add     ebp, ebp
0x738193: fld     dword ptr [esi+eax+4]
0x738197: add     ebp, ebp
0x738199: fsub    dword ptr [eax+ebx+4]
0x73819D: lea     ecx, [esp+48h+var_24]
0x7381A1: push    ecx
0x7381A2: fstp    [esp+4Ch+var_8]
0x7381A6: fld     dword ptr [esi+eax+8]
0x7381AA: fsub    dword ptr [eax+ebx+8]
0x7381AE: fstp    [esp+4Ch+var_4]
0x7381B2: fld     dword ptr [eax+ebp]
0x7381B5: fsub    dword ptr [esi+eax]
0x7381B8: fstp    [esp+4Ch+var_18]
0x7381BC: fld     dword ptr [eax+ebp+4]
0x7381C0: fsub    dword ptr [esi+eax+4]
0x7381C4: fstp    [esp+4Ch+var_14]
0x7381C8: fld     dword ptr [eax+ebp+8]
0x7381CC: fsub    dword ptr [esi+eax+8]
0x7381D0: fstp    [esp+4Ch+var_10]
0x7381D4: fld     [esp+4Ch+var_10]
0x7381D8: fld     st
0x7381DA: fld     [esp+4Ch+var_8]
0x7381DE: fld     st
0x7381E0: fmulp   st(2), st
0x7381E2: fld     [esp+4Ch+var_14]
0x7381E6: fld     st
0x7381E8: fld     [esp+4Ch+var_4]
0x7381EC: fld     st
0x7381EE: fmulp   st(2), st
0x7381F0: fxch    st(4)
0x7381F2: fsubrp  st(1), st
0x7381F4: fstp    [esp+4Ch+var_24]
0x7381F8: fld     [esp+4Ch+var_18]
0x7381FC: fld     st
0x7381FE: fmulp   st(4), st
0x738200: fld     [esp+4Ch+var_C]
0x738204: fld     st
0x738206: fmulp   st(6), st
0x738208: fxch    st(4)
0x73820A: fsubrp  st(5), st
0x73820C: fxch    st(4)
0x73820E: fstp    [esp+4Ch+var_20]
0x738212: fmulp   st(2), st
0x738214: fmulp   st(2), st
0x738216: fsubrp  st(1), st
0x738218: fstp    [esp+4Ch+var_1C]
0x73821C: call    sub_4BFAA0
0x738221: mov     eax, [edi+20h]
0x738224: fld     dword ptr [eax+ebx]
0x738227: add     esp, 4
0x73822A: fld     [esp+48h+var_24]
0x73822E: add     eax, ebx
0x738230: fld     st
0x738232: faddp   st(2), st
0x738234: fxch    st(1)
0x738236: fstp    dword ptr [eax]
0x738238: fld     [esp+48h+var_20]
0x73823C: fld     st
0x73823E: fadd    dword ptr [eax+4]
0x738241: fstp    dword ptr [eax+4]
0x738244: fld     dword ptr [eax+8]
0x738247: fld     [esp+48h+var_1C]
0x73824B: fld     st
0x73824D: faddp   st(2), st
0x73824F: fxch    st(1)
0x738251: fstp    dword ptr [eax+8]
0x738254: mov     eax, [edi+20h]
0x738257: fld     dword ptr [eax+esi]
0x73825A: add     eax, esi
0x73825C: fadd    st, st(3)
0x73825E: fstp    dword ptr [eax]
0x738260: fld     st(1)
0x738262: fadd    dword ptr [eax+4]
0x738265: fstp    dword ptr [eax+4]
0x738268: fld     dword ptr [eax+8]
0x73826B: fadd    st, st(1)
0x73826D: fstp    dword ptr [eax+8]
0x738270: mov     eax, [edi+20h]
0x738273: fld     dword ptr [eax+ebp]
0x738276: add     eax, ebp
0x738278: fadd    st, st(3)
0x73827A: fstp    dword ptr [eax]
0x73827C: fld     dword ptr [eax+4]
0x73827F: fadd    st, st(2)
0x738281: fstp    dword ptr [eax+4]
0x738284: fld     st
0x738286: fadd    dword ptr [eax+8]
0x738289: fstp    dword ptr [eax+8]
0x73828C: mov     eax, [edi+4Ch]
0x73828F: test    eax, eax
0x738291: jz      loc_738385
0x738297: mov     dx, [edi+50h]
0x73829B: cmp     dx, [edi+8]
0x73829F: jnz     loc_738385
0x7382A5: mov     ecx, [esp+48h+var_30]
0x7382A9: mov     edx, [eax+ecx*8+4]
0x7382AD: movzx   ecx, word ptr [eax+ecx*8]
0x7382B1: test    cx, cx
0x7382B4: jz      short loc_7382ED
0x7382B6: movzx   eax, cx
0x7382B9: lea     edx, [edx+eax*2]
0x7382BC: movzx   eax, word ptr [edx-2]
0x7382C0: mov     esi, [edi+20h]
0x7382C3: sub     edx, 2
0x7382C6: lea     eax, [eax+eax*2]
0x7382C9: lea     eax, [esi+eax*4]
0x7382CC: add     ecx, 0FFFFh
0x7382D2: test    cx, cx
0x7382D5: fld     dword ptr [eax]
0x7382D7: fadd    st, st(3)
0x7382D9: fstp    dword ptr [eax]
0x7382DB: fld     dword ptr [eax+4]
0x7382DE: fadd    st, st(2)
0x7382E0: fstp    dword ptr [eax+4]
0x7382E3: fld     dword ptr [eax+8]
0x7382E6: fadd    st, st(1)
0x7382E8: fstp    dword ptr [eax+8]
0x7382EB: jnz     short loc_7382BC
0x7382ED: mov     ecx, [edi+4Ch]
0x7382F0: mov     edx, [esp+48h+var_2C]
0x7382F4: lea     eax, [ecx+edx*8]
0x7382F7: movzx   ecx, word ptr [eax]
0x7382FA: test    cx, cx
0x7382FD: mov     edx, [eax+4]
0x738300: jz      short loc_738339
0x738302: movzx   eax, cx
0x738305: lea     edx, [edx+eax*2]
0x738308: movzx   eax, word ptr [edx-2]
0x73830C: fld     st(2)
0x73830E: mov     esi, [edi+20h]
0x738311: sub     edx, 2
0x738314: lea     eax, [eax+eax*2]
0x738317: lea     eax, [esi+eax*4]
0x73831A: add     ecx, 0FFFFh
0x738320: test    cx, cx
0x738323: fadd    dword ptr [eax]
0x738325: fstp    dword ptr [eax]
0x738327: fld     st(1)
0x738329: fadd    dword ptr [eax+4]
0x73832C: fstp    dword ptr [eax+4]
0x73832F: fld     dword ptr [eax+8]
0x738332: fadd    st, st(1)
0x738334: fstp    dword ptr [eax+8]
0x738337: jnz     short loc_738308
0x738339: mov     ecx, [edi+4Ch]
0x73833C: mov     edx, [esp+48h+var_28]
0x738340: lea     eax, [ecx+edx*8]
0x738343: movzx   ecx, word ptr [eax]
0x738346: test    cx, cx
0x738349: mov     edx, [eax+4]
0x73834C: jz      short loc_738385
0x73834E: movzx   eax, cx
0x738351: lea     edx, [edx+eax*2]
0x738354: movzx   eax, word ptr [edx-2]
0x738358: mov     esi, [edi+20h]
0x73835B: sub     edx, 2
0x73835E: lea     eax, [eax+eax*2]
0x738361: lea     eax, [esi+eax*4]
0x738364: add     ecx, 0FFFFh
0x73836A: test    cx, cx
0x73836D: fld     dword ptr [eax]
0x73836F: fadd    st, st(3)
0x738371: fstp    dword ptr [eax]
0x738373: fld     st(1)
0x738375: fadd    dword ptr [eax+4]
0x738378: fstp    dword ptr [eax+4]
0x73837B: fld     dword ptr [eax+8]
0x73837E: fadd    st, st(1)
0x738380: fstp    dword ptr [eax+8]
0x738383: jnz     short loc_738354
0x738385: sub     [esp+48h+var_38], 1
0x73838A: fstp    st(2)
0x73838C: fstp    st
0x73838E: fstp    st
0x738390: jnz     loc_738141
0x738396: pop     ebp
0x738397: pop     ebx
0x738398: mov     edx, [edi]
0x73839A: mov     eax, [edx+50h]
0x73839D: push    0Ch
0x73839F: mov     ecx, edi
0x7383A1: call    eax
0x7383A3: mov     edx, [edi+20h]
0x7383A6: movzx   ecx, ax
0x7383A9: push    ecx
0x7383AA: push    edx
0x7383AB: call    sub_725890
0x7383B0: add     esp, 0Ch
0x7383B3: or      word ptr [edi+2Eh], 2
0x7383B8: pop     edi
0x7383B9: pop     esi
0x7383BA: add     esp, 38h
0x7383BD: retn
