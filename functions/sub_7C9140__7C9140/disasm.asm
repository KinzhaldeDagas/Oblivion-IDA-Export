0x7C9140: sub     esp, 18h
0x7C9143: push    ebx
0x7C9144: mov     ebx, [esp+1Ch+arg_C]
0x7C9148: push    ebp
0x7C9149: mov     ebp, [esp+20h+arg_0]
0x7C914D: push    esi
0x7C914E: push    edi
0x7C914F: mov     edi, offset dword_B45040
0x7C9154: xor     esi, esi
0x7C9156: jmp     short loc_7C9160
0x7C9158: align 10h
0x7C9160: mov     eax, [edi]
0x7C9162: cmp     byte ptr [eax+8], 0
0x7C9166: jz      loc_7C9210
0x7C916C: fld     dword ptr [esi+0B46528h]
0x7C9172: push    ebp
0x7C9173: fstp    [esp+2Ch+var_C]
0x7C9177: lea     ecx, [esp+2Ch+var_C]
0x7C917B: fld     dword ptr [esi+0B4652Ch]
0x7C9181: push    ecx
0x7C9182: fstp    [esp+30h+var_8]
0x7C9186: lea     edx, [esp+30h+var_18]
0x7C918A: fld     dword ptr [esi+0B46530h]
0x7C9190: push    edx
0x7C9191: fstp    [esp+34h+var_4]
0x7C9195: call    D3DXVec3TransformCoord_0
0x7C919A: test    ebx, ebx
0x7C919C: fld     dword ptr [esi+0B465A8h]
0x7C91A2: fstp    [esp+28h+arg_C]
0x7C91A6: jnz     short loc_7C91E8
0x7C91A8: mov     eax, [esp+28h+arg_8]
0x7C91AC: add     eax, 0FFFFFE89h
0x7C91B1: cmp     eax, 2
0x7C91B4: ja      short loc_7C91DC
0x7C91B6: fld     dword ptr [esp+28h+var_18]
0x7C91BA: fld     [esp+28h+arg_4]
0x7C91BE: fld     st
0x7C91C0: fmulp   st(2), st
0x7C91C2: fxch    st(1)
0x7C91C4: fstp    dword ptr [esp+28h+var_18]
0x7C91C8: fld     [esp+28h+var_14]
0x7C91CC: fmul    st, st(1)
0x7C91CE: fstp    [esp+28h+var_14]
0x7C91D2: fmul    [esp+28h+var_10]
0x7C91D6: fstp    [esp+28h+var_10]
0x7C91DA: jmp     short loc_7C91E8
0x7C91DC: fld     [esp+28h+arg_C]
0x7C91E0: fdiv    [esp+28h+arg_4]
0x7C91E4: fstp    [esp+28h+arg_C]
0x7C91E8: fld     dword ptr [esp+28h+var_18]
0x7C91EC: fstp    dword ptr [esi+0B44FD8h]
0x7C91F2: fld     [esp+28h+var_14]
0x7C91F6: fstp    dword ptr [esi+0B44FDCh]
0x7C91FC: fld     [esp+28h+var_10]
0x7C9200: fstp    dword ptr [esi+0B44FE0h]
0x7C9206: fld     [esp+28h+arg_C]
0x7C920A: fstp    dword ptr [esi+0B44FE4h]
0x7C9210: add     edi, 4
0x7C9213: add     esi, 10h
0x7C9216: cmp     edi, offset dword_B4504C
0x7C921C: jl      loc_7C9160
0x7C9222: pop     edi
0x7C9223: pop     esi
0x7C9224: pop     ebp
0x7C9225: pop     ebx
0x7C9226: add     esp, 18h
0x7C9229: retn    10h
