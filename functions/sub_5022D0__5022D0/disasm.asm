0x5022D0: push    ecx; GameMode begin-block callback: returns true when InterfaceManager_IsMenuMode() is false.
0x5022D1: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5022D6: neg     al
0x5022D8: sbb     eax, eax
0x5022DA: add     eax, 1
0x5022DD: mov     [esp+4+var_4], eax
0x5022E0: fild    [esp+4+var_4]
0x5022E3: mov     eax, [esp+4+arg_18]
0x5022E7: fstp    qword ptr [eax]
0x5022E9: mov     al, 1
0x5022EB: pop     ecx
0x5022EC: retn
