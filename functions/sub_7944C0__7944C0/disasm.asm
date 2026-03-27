0x7944C0: sub     esp, 8
0x7944C3: mov     ecx, [esp+8+arg_0]
0x7944C7: fnstcw  word ptr [esp+8+arg_0]
0x7944CB: movzx   eax, word ptr [esp+8+arg_0]
0x7944D0: fld     dword ptr [ecx+8]
0x7944D3: fld     qword ptr ds:0A8C6D8h
0x7944D9: or      eax, 0C00h
0x7944DE: mov     dword ptr [esp+8+var_8], eax
0x7944E1: fmul    st(1), st
0x7944E3: fxch    st(1)
0x7944E5: mov     edx, 0FF00h
0x7944EA: fldcw   word ptr [esp+8+var_8]
0x7944ED: fistp   [esp+8+var_8]
0x7944F0: mov     eax, dword ptr [esp+8+var_8]
0x7944F3: sub     edx, eax
0x7944F5: shl     edx, 8
0x7944F8: fldcw   word ptr [esp+8+arg_0]
0x7944FC: fld     dword ptr [ecx+4]
0x7944FF: fnstcw  word ptr [esp+8+arg_0]
0x794503: fmul    st, st(1)
0x794505: movzx   eax, word ptr [esp+8+arg_0]
0x79450A: or      eax, 0C00h
0x79450F: mov     dword ptr [esp+8+var_8], eax
0x794512: fldcw   word ptr [esp+8+var_8]
0x794515: fistp   [esp+8+var_8]
0x794518: mov     eax, dword ptr [esp+8+var_8]
0x79451B: sub     edx, eax
0x79451D: shl     edx, 8
0x794520: fldcw   word ptr [esp+8+arg_0]
0x794524: fmul    dword ptr [ecx]
0x794526: fnstcw  word ptr [esp+8+arg_0]
0x79452A: movzx   eax, word ptr [esp+8+arg_0]
0x79452F: or      eax, 0C00h
0x794534: mov     dword ptr [esp+8+var_8], eax
0x794537: fldcw   word ptr [esp+8+var_8]
0x79453A: fistp   [esp+8+var_8]
0x79453D: mov     eax, dword ptr [esp+8+var_8]
0x794540: sub     edx, eax
0x794542: mov     eax, edx
0x794544: fldcw   word ptr [esp+8+arg_0]
0x794548: add     esp, 8
0x79454B: retn    4
