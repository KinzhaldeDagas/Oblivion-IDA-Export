0x942930: push    esi
0x942931: mov     esi, ecx
0x942933: call    sub_90D480
0x942938: test    [esp+4+arg_0], 1
0x94293D: jz      short loc_942952
0x94293F: movzx   edx, word ptr [esi+4]
0x942943: mov     ecx, ds:0BA7D98h
0x942949: mov     eax, [ecx]
0x94294B: push    6
0x94294D: push    edx
0x94294E: push    esi
0x94294F: call    dword ptr [eax+14h]
0x942952: mov     eax, esi
0x942954: pop     esi
0x942955: retn    4
