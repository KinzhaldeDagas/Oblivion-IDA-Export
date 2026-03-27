0x53D8F0: mov     eax, ds:0B333DCh
0x53D8F5: test    eax, eax
0x53D8F7: mov     [ecx+0Ch], eax
0x53D8FA: jnz     short locret_53D907
0x53D8FC: push    offset aCanTFindWeathe; "Can't find Weather Root Node.  Precipit"...
0x53D901: call    PrintError
0x53D906: pop     ecx
0x53D907: retn
