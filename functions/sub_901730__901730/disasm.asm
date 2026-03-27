0x901730: mov     ecx, ds:0BA7D98h
0x901736: mov     eax, [ecx]
0x901738: push    1Ch
0x90173A: push    18h
0x90173C: call    dword ptr [eax+10h]
0x90173F: mov     ecx, [esp+arg_C]
0x901743: mov     edx, [esp+arg_8]
0x901747: push    ecx
0x901748: mov     ecx, [esp+4+arg_4]
0x90174C: push    edx
0x90174D: mov     edx, [esp+8+arg_0]
0x901751: push    ecx
0x901752: push    edx
0x901753: mov     ecx, eax
0x901755: mov     word ptr [eax+4], 18h
0x90175B: call    sub_901690
0x901760: retn
