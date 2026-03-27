0x7E5D00: sub     esp, 0Ch
0x7E5D03: fld     dword ptr ds:0B44F04h
0x7E5D09: fnstcw  [esp+0Ch+var_A]
0x7E5D0D: movzx   eax, [esp+0Ch+var_A]
0x7E5D12: or      eax, 0C00h
0x7E5D17: mov     dword ptr [esp+0Ch+var_8], eax
0x7E5D1B: fldcw   word ptr [esp+0Ch+var_8]
0x7E5D1F: fistp   [esp+0Ch+var_8]
0x7E5D23: mov     eax, dword ptr [esp+0Ch+var_8]
0x7E5D27: fldcw   [esp+0Ch+var_A]
0x7E5D2B: add     esp, 0Ch
0x7E5D2E: retn
