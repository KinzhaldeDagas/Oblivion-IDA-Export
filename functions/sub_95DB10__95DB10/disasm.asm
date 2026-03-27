0x95DB10: push    ecx
0x95DB11: push    esi
0x95DB12: mov     esi, [esp+8+arg_0]
0x95DB16: lea     eax, [esp+8+var_4]
0x95DB1A: push    eax
0x95DB1B: push    esi
0x95DB1C: call    sub_6BE990
0x95DB21: mov     eax, [esp+10h+var_4]
0x95DB25: add     esp, 8
0x95DB28: cmp     eax, 5
0x95DB2B: ja      short loc_95DB3D
0x95DB2D: mov     eax, ds:funcs_95DB35[eax*4]
0x95DB34: push    esi
0x95DB35: call    eax ; funcs_95DB35
0x95DB37: add     esp, 4
0x95DB3A: pop     esi
0x95DB3B: pop     ecx
0x95DB3C: retn
0x95DB3D: xor     eax, eax
0x95DB3F: pop     esi
0x95DB40: pop     ecx
0x95DB41: retn
