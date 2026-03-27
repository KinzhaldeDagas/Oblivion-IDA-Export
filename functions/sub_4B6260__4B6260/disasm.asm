0x4B6260: call    sub_578D70
0x4B6265: cmp     al, 1
0x4B6267: jnz     short locret_4B628A
0x4B6269: mov     eax, ds:0B333C4h
0x4B626E: mov     ecx, ds:0B35B1Ch
0x4B6274: push    1
0x4B6276: push    0
0x4B6278: push    0
0x4B627A: push    eax
0x4B627B: call    ActivateRef
0x4B6280: mov     dword ptr ds:0B35B1Ch, 0
0x4B628A: retn
