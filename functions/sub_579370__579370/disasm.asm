0x579370: push    1; arg1
0x579372: push    0; canCreate
0x579374: call    InterfaceManager_GetSingleton
0x579379: add     esp, 8
0x57937C: test    eax, eax
0x57937E: jz      short locret_5793AF
0x579380: push    1; arg1
0x579382: push    0; canCreate
0x579384: call    InterfaceManager_GetSingleton
0x579389: add     esp, 8
0x57938C: cmp     dword ptr [eax+1Ch], 0
0x579390: jz      short locret_5793AF
0x579392: mov     eax, [esp+arg_4]
0x579396: mov     ecx, [esp+arg_0]
0x57939A: push    eax
0x57939B: push    ecx
0x57939C: push    1; arg1
0x57939E: push    0; canCreate
0x5793A0: call    InterfaceManager_GetSingleton
0x5793A5: add     esp, 8
0x5793A8: mov     ecx, eax
0x5793AA: call    sub_57D840
0x5793AF: retn
