0x46AFC0: sub     esp, 8
0x46AFC3: fld     dword ptr [ecx+4]
0x46AFC6: fnstcw  [esp+8+var_6]
0x46AFCA: movzx   eax, [esp+8+var_6]
0x46AFCF: or      eax, 0C00h
0x46AFD4: mov     [esp+8+var_4], eax
0x46AFD8: fldcw   word ptr [esp+8+var_4]
0x46AFDC: fistp   [esp+8+var_4]
0x46AFE0: mov     al, byte ptr [esp+8+var_4]
0x46AFE4: fldcw   [esp+8+var_6]
0x46AFE8: add     esp, 8
0x46AFEB: retn
