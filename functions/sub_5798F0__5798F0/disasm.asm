0x5798F0: push    1; arg1
0x5798F2: push    0; canCreate
0x5798F4: call    InterfaceManager_GetSingleton
0x5798F9: add     esp, 8
0x5798FC: test    eax, eax
0x5798FE: jz      short locret_57992A
0x579900: push    1; arg1
0x579902: push    0; canCreate
0x579904: call    InterfaceManager_GetSingleton
0x579909: add     esp, 8
0x57990C: cmp     dword ptr [eax+1Ch], 0
0x579910: jz      short locret_57992A
0x579912: mov     eax, [esp+arg_0]
0x579916: push    eax
0x579917: push    1; arg1
0x579919: push    0; canCreate
0x57991B: call    InterfaceManager_GetSingleton
0x579920: add     esp, 8
0x579923: mov     ecx, eax
0x579925: call    sub_57FDC0
0x57992A: retn
