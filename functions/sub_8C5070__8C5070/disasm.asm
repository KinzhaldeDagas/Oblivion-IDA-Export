0x8C5070: push    ecx
0x8C5071: test    ecx, ecx
0x8C5073: jz      short loc_8C5087
0x8C5075: mov     eax, [ecx+8]
0x8C5078: test    eax, eax
0x8C507A: jz      short loc_8C5087
0x8C507C: fld     dword ptr [eax+20h]
0x8C507F: fstp    [esp+4+var_4]
0x8C5082: fld     [esp+4+var_4]
0x8C5085: pop     ecx
0x8C5086: retn
0x8C5087: fld1
0x8C5089: fstp    [esp+4+var_4]
0x8C508C: fld     [esp+4+var_4]
0x8C508F: pop     ecx
0x8C5090: retn
