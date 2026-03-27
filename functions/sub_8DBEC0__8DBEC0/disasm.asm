0x8DBEC0: push    esi
0x8DBEC1: mov     esi, ecx
0x8DBEC3: call    sub_8DBE10
0x8DBEC8: test    [esp+4+arg_0], 1
0x8DBECD: jz      short loc_8DBEE2
0x8DBECF: movzx   edx, word ptr [esi+4]
0x8DBED3: mov     ecx, ds:0BA7D98h
0x8DBED9: mov     eax, [ecx]
0x8DBEDB: push    1Fh
0x8DBEDD: push    edx
0x8DBEDE: push    esi
0x8DBEDF: call    dword ptr [eax+14h]
0x8DBEE2: mov     eax, esi
0x8DBEE4: pop     esi
0x8DBEE5: retn    4
