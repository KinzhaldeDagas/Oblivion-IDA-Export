0x905E10: mov     ecx, ds:0BA7D98h
0x905E16: mov     eax, [ecx]
0x905E18: push    esi
0x905E19: push    1Ch
0x905E1B: push    38h ; '8'
0x905E1D: call    dword ptr [eax+10h]
0x905E20: mov     ecx, [esp+4+arg_C]
0x905E24: mov     edx, [esp+4+arg_8]
0x905E28: push    ecx
0x905E29: mov     ecx, [esp+8+arg_4]
0x905E2D: mov     esi, eax
0x905E2F: mov     eax, [esp+8+arg_0]
0x905E33: push    edx
0x905E34: push    eax
0x905E35: push    ecx
0x905E36: mov     ecx, esi
0x905E38: mov     word ptr [esi+4], 38h ; '8'
0x905E3E: call    sub_905990
0x905E43: mov     dword ptr [esi], offset off_A9BE0C
0x905E49: mov     eax, esi
0x905E4B: pop     esi
0x905E4C: retn
