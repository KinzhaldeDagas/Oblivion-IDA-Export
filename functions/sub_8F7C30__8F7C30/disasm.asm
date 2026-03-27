0x8F7C30: mov     ecx, ds:0BA7D98h
0x8F7C36: mov     eax, [ecx]
0x8F7C38: push    1Ch
0x8F7C3A: push    20h ; ' '
0x8F7C3C: call    dword ptr [eax+10h]
0x8F7C3F: mov     ecx, [esp+arg_C]
0x8F7C43: mov     edx, [esp+arg_8]
0x8F7C47: push    ecx
0x8F7C48: mov     ecx, [esp+4+arg_4]
0x8F7C4C: push    edx
0x8F7C4D: mov     edx, [esp+8+arg_0]
0x8F7C51: push    ecx
0x8F7C52: push    edx
0x8F7C53: mov     ecx, eax
0x8F7C55: mov     word ptr [eax+4], 20h ; ' '
0x8F7C5B: call    sub_8F78F0
0x8F7C60: retn
