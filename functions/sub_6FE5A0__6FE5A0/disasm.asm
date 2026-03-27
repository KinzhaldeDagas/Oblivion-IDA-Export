0x6FE5A0: sub     esp, 18h
0x6FE5A3: push    esi
0x6FE5A4: push    edi
0x6FE5A5: mov     edi, [esp+20h+arg_0]
0x6FE5A9: test    edi, edi
0x6FE5AB: jz      loc_6FE737
0x6FE5B1: mov     eax, [edi]
0x6FE5B3: mov     edx, [eax+0Ch]
0x6FE5B6: mov     ecx, edi
0x6FE5B8: call    edx
0x6FE5BA: mov     esi, eax
0x6FE5BC: test    esi, esi
0x6FE5BE: jz      loc_6FE737
0x6FE5C4: mov     ecx, [esi+0B4h]
0x6FE5CA: mov     eax, [ecx]
0x6FE5CC: mov     edx, [eax+50h]
0x6FE5CF: push    ebx
0x6FE5D0: call    edx
0x6FE5D2: movzx   eax, ax
0x6FE5D5: movzx   ebx, ax
0x6FE5D8: mov     dword ptr [esp+24h+var_18], ebx
0x6FE5DC: call    _rand
0x6FE5E1: mov     [esp+24h+arg_0], eax
0x6FE5E5: fild    [esp+24h+arg_0]
0x6FE5E9: fdiv    qword ptr ds:0A3D5A8h
0x6FE5EF: fstp    [esp+24h+arg_0]
0x6FE5F3: fld     [esp+24h+arg_0]
0x6FE5F7: fimul   dword ptr [esp+24h+var_18]
0x6FE5FB: fnstcw  word ptr [esp+24h+arg_0]
0x6FE5FF: movzx   eax, word ptr [esp+24h+arg_0]
0x6FE604: or      eax, 0C00h
0x6FE609: mov     dword ptr [esp+24h+var_18], eax
0x6FE60D: fldcw   word ptr [esp+24h+var_18]
0x6FE611: fistp   [esp+24h+var_18]
0x6FE615: mov     eax, dword ptr [esp+24h+var_18]
0x6FE619: cmp     eax, ebx
0x6FE61B: fldcw   word ptr [esp+24h+arg_0]
0x6FE61F: jnz     short loc_6FE624
0x6FE621: sub     eax, 1
0x6FE624: mov     ecx, [esi+0B4h]
0x6FE62A: mov     edx, [ecx+1Ch]
0x6FE62D: lea     ecx, [eax+eax*2]
0x6FE630: mov     eax, [esp+24h+arg_4]
0x6FE634: add     ecx, ecx
0x6FE636: add     ecx, ecx
0x6FE638: mov     ebx, [ecx+edx]
0x6FE63B: mov     [eax], ebx
0x6FE63D: mov     ebx, [ecx+edx+4]
0x6FE641: mov     [eax+4], ebx
0x6FE644: mov     edx, [ecx+edx+8]
0x6FE648: mov     [eax+8], edx
0x6FE64B: fld     dword ptr [edi+94h]
0x6FE651: fstp    [esp+24h+arg_4]
0x6FE655: pop     ebx
0x6FE656: fld     dword ptr [eax]
0x6FE658: fld     [esp+20h+arg_4]
0x6FE65C: fld     st
0x6FE65E: fmulp   st(2), st
0x6FE660: fxch    st(1)
0x6FE662: fstp    dword ptr [eax]
0x6FE664: fld     dword ptr [eax+4]
0x6FE667: fmul    st, st(1)
0x6FE669: fstp    dword ptr [eax+4]
0x6FE66C: fmul    dword ptr [eax+8]
0x6FE66F: fstp    dword ptr [eax+8]
0x6FE672: mov     esi, [esi+0B4h]
0x6FE678: cmp     dword ptr [esi+20h], 0
0x6FE67C: jz      loc_6FE755
0x6FE682: mov     eax, [esi+20h]
0x6FE685: mov     edx, [ecx+eax]
0x6FE688: mov     dword ptr [esp+20h+var_18], edx
0x6FE68C: mov     edx, [ecx+eax+4]
0x6FE690: mov     dword ptr [esp+20h+var_18+4], edx
0x6FE694: mov     eax, [ecx+eax+8]
0x6FE698: lea     ecx, [esp+20h+var_18]
0x6FE69C: push    ecx
0x6FE69D: lea     edx, [esp+24h+var_C]
0x6FE6A1: push    edx
0x6FE6A2: lea     ecx, [edi+64h]
0x6FE6A5: mov     [esp+28h+var_10], eax
0x6FE6A9: call    sub_7101F0
0x6FE6AE: mov     esi, [esp+20h+arg_8]
0x6FE6B2: fld     dword ptr [esi+4]
0x6FE6B5: mov     ecx, [eax]
0x6FE6B7: fld     dword ptr [esi]
0x6FE6B9: mov     dword ptr [esp+20h+var_18], ecx
0x6FE6BD: fld     dword ptr [esi+8]
0x6FE6C0: mov     edx, [eax+4]
0x6FE6C3: fld     st(1)
0x6FE6C5: mov     dword ptr [esp+20h+var_18+4], edx
0x6FE6C9: mov     eax, [eax+8]
0x6FE6CC: fmulp   st(2), st
0x6FE6CE: mov     [esp+20h+var_10], eax
0x6FE6D2: fld     st(2)
0x6FE6D4: fmulp   st(3), st
0x6FE6D6: fxch    st(1)
0x6FE6D8: faddp   st(2), st
0x6FE6DA: fmul    st, st
0x6FE6DC: faddp   st(1), st
0x6FE6DE: fstp    [esp+20h+arg_4]
0x6FE6E2: fld     [esp+20h+arg_4]
0x6FE6E6: call    __CIsqrt
0x6FE6EB: fstp    [esp+20h+arg_4]
0x6FE6EF: fld     [esp+20h+arg_4]
0x6FE6F3: pop     edi
0x6FE6F4: fstp    [esp+1Ch+arg_4]
0x6FE6F8: fld     dword ptr [esp+1Ch+var_18]
0x6FE6FC: fld     [esp+1Ch+arg_4]
0x6FE700: fld     st
0x6FE702: fmulp   st(2), st
0x6FE704: fxch    st(1)
0x6FE706: fstp    [esp+1Ch+var_C]
0x6FE70A: mov     ecx, [esp+1Ch+var_C]
0x6FE70E: fld     dword ptr [esp+1Ch+var_18+4]
0x6FE712: mov     [esi], ecx
0x6FE714: fmul    st, st(1)
0x6FE716: fstp    [esp+1Ch+var_8]
0x6FE71A: mov     edx, [esp+1Ch+var_8]
0x6FE71E: mov     [esi+4], edx
0x6FE721: fmul    [esp+1Ch+var_10]
0x6FE725: fstp    [esp+1Ch+var_4]
0x6FE729: mov     eax, [esp+1Ch+var_4]
0x6FE72D: mov     [esi+8], eax
0x6FE730: pop     esi
0x6FE731: add     esp, 18h
0x6FE734: retn    0Ch
0x6FE737: mov     ecx, ds:0B3F9A8h
0x6FE73D: mov     eax, [esp+20h+arg_4]
0x6FE741: mov     [eax], ecx
0x6FE743: mov     edx, ds:0B3F9ACh
0x6FE749: mov     [eax+4], edx
0x6FE74C: mov     ecx, ds:0B3F9B0h
0x6FE752: mov     [eax+8], ecx
0x6FE755: pop     edi
0x6FE756: pop     esi
0x6FE757: add     esp, 18h
0x6FE75A: retn    0Ch
