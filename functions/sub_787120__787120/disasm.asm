0x787120: mov     eax, [ecx]
0x787122: test    eax, eax
0x787124: jz      short loc_787131
0x787126: mov     eax, [eax+5Ch]
0x787129: test    eax, eax
0x78712B: jz      short loc_787131
0x78712D: fld     dword ptr [eax+18h]
0x787130: retn
0x787131: fldz
0x787133: retn
