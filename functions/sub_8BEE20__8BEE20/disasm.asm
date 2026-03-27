0x8BEE20: push    ecx
0x8BEE21: push    ebx
0x8BEE22: mov     ebx, [ecx+4]
0x8BEE25: push    ebp
0x8BEE26: push    edi
0x8BEE27: mov     edi, [esp+10h+arg_0]
0x8BEE2B: test    edi, edi
0x8BEE2D: mov     [esp+10h+var_4], ecx
0x8BEE31: jnz     short loc_8BEE5B
0x8BEE33: mov     ecx, ds:0BA7D98h
0x8BEE39: mov     eax, [ecx]
0x8BEE3B: mov     edx, [eax+10h]
0x8BEE3E: push    29h ; ')'
0x8BEE40: push    18h
0x8BEE42: call    edx
0x8BEE44: mov     [eax+0Ch], edi
0x8BEE47: mov     word ptr [eax+4], 18h
0x8BEE4D: mov     word ptr [eax+6], 1
0x8BEE53: mov     dword ptr [eax], offset ??_7ahkMalleableConstraintData@@6B@; const ahkMalleableConstraintData::`vftable'
0x8BEE59: mov     edi, eax
0x8BEE5B: mov     eax, [ebx+0Ch]
0x8BEE5E: test    eax, eax
0x8BEE60: mov     ebp, [esp+10h+arg_4]
0x8BEE64: jz      short loc_8BEE9F
0x8BEE66: push    esi
0x8BEE67: push    ebp
0x8BEE68: push    eax
0x8BEE69: call    sub_8E7FD0
0x8BEE6E: mov     esi, eax
0x8BEE70: add     esp, 8
0x8BEE73: test    esi, esi
0x8BEE75: jz      short loc_8BEE9E
0x8BEE77: push    esi
0x8BEE78: mov     ecx, edi
0x8BEE7A: call    sub_8BED90
0x8BEE7F: cmp     word ptr [esi+4], 0
0x8BEE84: jz      short loc_8BEE9E
0x8BEE86: add     word ptr [esi+6], 0FFFFh
0x8BEE8B: movzx   eax, word ptr [esi+6]
0x8BEE8F: test    ax, ax
0x8BEE92: jnz     short loc_8BEE9E
0x8BEE94: mov     eax, [esi]
0x8BEE96: mov     edx, [eax]
0x8BEE98: push    1
0x8BEE9A: mov     ecx, esi
0x8BEE9C: call    edx
0x8BEE9E: pop     esi
0x8BEE9F: fld     dword ptr [ebx+10h]
0x8BEEA2: mov     ecx, [esp+10h+var_4]
0x8BEEA6: fstp    dword ptr [edi+10h]
0x8BEEA9: push    ebp
0x8BEEAA: fld     dword ptr [ebx+14h]
0x8BEEAD: push    edi
0x8BEEAE: fstp    dword ptr [edi+14h]
0x8BEEB1: call    sub_8A07B0
0x8BEEB6: pop     edi
0x8BEEB7: pop     ebp
0x8BEEB8: pop     ebx
0x8BEEB9: pop     ecx
0x8BEEBA: retn    8
