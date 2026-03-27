0x8F7140: mov     ecx, ds:0BA7D98h
0x8F7146: mov     eax, [ecx]
0x8F7148: push    esi
0x8F7149: push    1Ch
0x8F714B: push    40h ; '@'
0x8F714D: call    dword ptr [eax+10h]
0x8F7150: mov     ecx, [esp+4+arg_C]
0x8F7154: mov     edx, [esp+4+arg_8]
0x8F7158: push    ecx
0x8F7159: mov     ecx, [esp+8+arg_4]
0x8F715D: mov     esi, eax
0x8F715F: mov     eax, [esp+8+arg_0]
0x8F7163: push    edx
0x8F7164: push    eax
0x8F7165: push    ecx
0x8F7166: mov     ecx, esi
0x8F7168: mov     word ptr [esi+4], 40h ; '@'
0x8F716E: call    sub_8F6720
0x8F7173: mov     dword ptr [esi], offset off_A9B580
0x8F7179: mov     eax, esi
0x8F717B: pop     esi
0x8F717C: retn
