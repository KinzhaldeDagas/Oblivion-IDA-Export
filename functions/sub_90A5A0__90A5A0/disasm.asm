0x90A5A0: mov     ecx, ds:0BA7D98h
0x90A5A6: mov     eax, [ecx]
0x90A5A8: push    1Ch
0x90A5AA: push    38h ; '8'
0x90A5AC: call    dword ptr [eax+10h]
0x90A5AF: mov     ecx, [esp+arg_C]
0x90A5B3: mov     edx, [esp+arg_8]
0x90A5B7: push    ecx
0x90A5B8: mov     ecx, [esp+4+arg_4]
0x90A5BC: push    edx
0x90A5BD: mov     edx, [esp+8+arg_0]
0x90A5C1: push    ecx
0x90A5C2: push    edx
0x90A5C3: mov     ecx, eax
0x90A5C5: mov     word ptr [eax+4], 38h ; '8'
0x90A5CB: call    sub_90A260
0x90A5D0: retn
