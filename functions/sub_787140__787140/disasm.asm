0x787140: mov     eax, [ecx]
0x787142: test    eax, eax
0x787144: jz      short loc_787151
0x787146: mov     eax, [eax+5Ch]
0x787149: test    eax, eax
0x78714B: jz      short loc_787151
0x78714D: fld     dword ptr [eax+1Ch]
0x787150: retn
0x787151: fldz
0x787153: retn
