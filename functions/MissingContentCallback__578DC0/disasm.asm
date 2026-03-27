0x578DC0: push    ebx
0x578DC1: push    1; arg1
0x578DC3: push    0; canCreate
0x578DC5: call    InterfaceManager_GetSingleton
0x578DCA: mov     bl, [eax+0B0h]
0x578DD0: push    1; arg1
0x578DD2: push    0; canCreate
0x578DD4: call    InterfaceManager_GetSingleton
0x578DD9: add     esp, 10h
0x578DDC: mov     ds:0B131FCh, bl
0x578DE2: mov     byte ptr [eax+0B0h], 0FFh
0x578DE9: pop     ebx
0x578DEA: retn
