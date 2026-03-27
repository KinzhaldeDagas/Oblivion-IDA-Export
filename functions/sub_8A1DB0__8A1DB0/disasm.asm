0x8A1DB0: push    esi
0x8A1DB1: push    edi
0x8A1DB2: mov     edi, [esp+8+arg_0]
0x8A1DB6: mov     esi, ecx
0x8A1DB8: mov     ecx, edi
0x8A1DBA: call    sub_712A20
0x8A1DBF: push    edi
0x8A1DC0: mov     ecx, esi
0x8A1DC2: call    sub_8A25C0
0x8A1DC7: mov     eax, [esi]
0x8A1DC9: mov     edx, [eax+74h]
0x8A1DCC: lea     ecx, [esp+8+arg_0]
0x8A1DD0: push    ecx
0x8A1DD1: mov     ecx, esi
0x8A1DD3: call    edx
0x8A1DD5: test    eax, eax
0x8A1DD7: pop     edi
0x8A1DD8: pop     esi
0x8A1DD9: jz      short locret_8A1DE2
0x8A1DDB: mov     dword ptr [eax+4], 0
0x8A1DE2: retn    4
