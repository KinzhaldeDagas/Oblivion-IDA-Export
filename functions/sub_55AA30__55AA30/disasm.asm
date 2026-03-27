0x55AA30: mov     eax, [ecx]
0x55AA32: mov     edx, [esp+arg_10]
0x55AA36: mov     eax, [eax+1Ch]
0x55AA39: push    edx
0x55AA3A: call    eax
0x55AA3C: test    eax, eax
0x55AA3E: jz      short locret_55AA60
0x55AA40: fld     [esp+arg_C]
0x55AA44: mov     edx, [eax]
0x55AA46: mov     edx, [edx+8]
0x55AA49: push    ecx
0x55AA4A: mov     ecx, [esp+4+arg_8]
0x55AA4E: fstp    [esp+4+var_4]
0x55AA51: push    ecx
0x55AA52: mov     ecx, [esp+8+arg_4]
0x55AA56: push    ecx
0x55AA57: mov     ecx, [esp+0Ch+arg_0]
0x55AA5B: push    ecx
0x55AA5C: mov     ecx, eax
0x55AA5E: call    edx
0x55AA60: retn    14h
