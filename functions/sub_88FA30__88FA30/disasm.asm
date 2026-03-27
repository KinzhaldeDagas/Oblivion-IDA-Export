0x88FA30: push    ecx
0x88FA31: mov     eax, [esp+4+arg_0]
0x88FA35: push    eax
0x88FA36: call    sub_88F200
0x88FA3B: add     esp, 4
0x88FA3E: test    eax, eax
0x88FA40: jz      short loc_88FA4D
0x88FA42: fld     dword ptr [eax+14h]
0x88FA45: fstp    [esp+4+var_4]
0x88FA48: fld     [esp+4+var_4]
0x88FA4B: pop     ecx
0x88FA4C: retn
0x88FA4D: fld1
0x88FA4F: fstp    [esp+4+var_4]
0x88FA52: fld     [esp+4+var_4]
0x88FA55: pop     ecx
0x88FA56: retn
