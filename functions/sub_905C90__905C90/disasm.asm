0x905C90: mov     ecx, ds:0BA7D98h
0x905C96: mov     eax, [ecx]
0x905C98: push    1Ch
0x905C9A: push    38h ; '8'
0x905C9C: call    dword ptr [eax+10h]
0x905C9F: mov     ecx, [esp+arg_C]
0x905CA3: mov     edx, [esp+arg_8]
0x905CA7: push    ecx
0x905CA8: mov     ecx, [esp+4+arg_4]
0x905CAC: push    edx
0x905CAD: mov     edx, [esp+8+arg_0]
0x905CB1: push    ecx
0x905CB2: push    edx
0x905CB3: mov     ecx, eax
0x905CB5: mov     word ptr [eax+4], 38h ; '8'
0x905CBB: call    sub_905990
0x905CC0: retn
