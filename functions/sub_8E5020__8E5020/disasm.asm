0x8E5020: mov     ecx, ds:0BA7D98h
0x8E5026: mov     eax, [ecx]
0x8E5028: push    1Eh
0x8E502A: push    80h ; '€'
0x8E502F: call    dword ptr [eax+10h]
0x8E5032: mov     ecx, [esp+arg_8]
0x8E5036: mov     edx, [esp+arg_4]
0x8E503A: push    ecx
0x8E503B: mov     ecx, [esp+4+arg_0]
0x8E503F: push    edx
0x8E5040: push    ecx
0x8E5041: mov     ecx, eax
0x8E5043: mov     word ptr [eax+4], 80h ; '€'
0x8E5049: call    sub_8E4730
0x8E504E: retn
