0x566830: push    esi
0x566831: mov     esi, ecx
0x566833: mov     eax, [esi+0Ch]
0x566836: mov     ecx, ds:0B33A98h
0x56683C: push    eax; _DWORD
0x56683D: call    TESDataHandler_IsFormIDCreated?
0x566842: test    al, al
0x566844: jz      short loc_56685F
0x566846: cmp     [esp+4+arg_0], 0
0x56684B: jz      short loc_566858
0x56684D: or      dword ptr [esi+1Ch], 800h
0x566854: pop     esi
0x566855: retn    4
0x566858: and     dword ptr [esi+1Ch], 0FFFFF7FFh
0x56685F: pop     esi
0x566860: retn    4
