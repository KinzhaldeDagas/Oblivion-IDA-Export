0x769F90: push    ecx
0x769F91: mov     edx, [esp+4+arg_0]
0x769F95: fnstcw  word ptr [esp+4+arg_0]
0x769F99: movzx   eax, word ptr [esp+4+arg_0]
0x769F9E: fld     dword ptr [edx]
0x769FA0: fld     qword ptr ds:0A3DDD8h
0x769FA6: or      eax, 0C00h
0x769FAB: mov     [esp+4+var_4], eax
0x769FAE: fmul    st(1), st
0x769FB0: fxch    st(1)
0x769FB2: push    esi
0x769FB3: fldcw   word ptr [esp+8+var_4]
0x769FB7: fistp   [esp+8+var_4]
0x769FBB: movzx   eax, byte ptr [esp+8+var_4]
0x769FC0: movzx   esi, al
0x769FC3: fldcw   word ptr [esp+8+arg_0]
0x769FC7: or      esi, 0FFFFFF00h
0x769FCD: shl     esi, 8
0x769FD0: fld     dword ptr [edx+4]
0x769FD3: fnstcw  word ptr [esp+8+arg_0]
0x769FD7: fmul    st, st(1)
0x769FD9: movzx   eax, word ptr [esp+8+arg_0]
0x769FDE: or      eax, 0C00h
0x769FE3: mov     [esp+8+var_4], eax
0x769FE7: fldcw   word ptr [esp+8+var_4]
0x769FEB: fistp   [esp+8+var_4]
0x769FEF: movzx   eax, byte ptr [esp+8+var_4]
0x769FF4: movzx   eax, al
0x769FF7: fldcw   word ptr [esp+8+arg_0]
0x769FFB: or      esi, eax
0x769FFD: shl     esi, 8
0x76A000: fmul    dword ptr [edx+8]
0x76A003: fnstcw  word ptr [esp+8+arg_0]
0x76A007: movzx   eax, word ptr [esp+8+arg_0]
0x76A00C: or      eax, 0C00h
0x76A011: mov     [esp+8+var_4], eax
0x76A015: fldcw   word ptr [esp+8+var_4]
0x76A019: fistp   [esp+8+var_4]
0x76A01D: mov     dl, byte ptr [esp+8+var_4]
0x76A021: movzx   eax, dl
0x76A024: or      esi, eax
0x76A026: fldcw   word ptr [esp+8+arg_0]
0x76A02A: mov     [ecx+5D4h], esi
0x76A030: pop     esi
0x76A031: pop     ecx
0x76A032: retn    4
