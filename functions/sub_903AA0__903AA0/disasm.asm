0x903AA0: mov     ecx, ds:0BA7D98h
0x903AA6: mov     eax, [ecx]
0x903AA8: push    1Ch
0x903AAA: push    28h ; '('
0x903AAC: call    dword ptr [eax+10h]
0x903AAF: mov     ecx, [esp+arg_C]
0x903AB3: mov     edx, [esp+arg_8]
0x903AB7: push    ecx
0x903AB8: mov     ecx, [esp+4+arg_4]
0x903ABC: push    edx
0x903ABD: mov     edx, [esp+8+arg_0]
0x903AC1: push    ecx
0x903AC2: push    edx
0x903AC3: mov     ecx, eax
0x903AC5: mov     word ptr [eax+4], 28h ; '('
0x903ACB: call    sub_9037A0
0x903AD0: retn
