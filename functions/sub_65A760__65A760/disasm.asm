0x65A760: call    MobileObject_GetCharProxy; [Controller decode 2026-07-09] Applies a target size to the actor current character-controller proxy.
0x65A765: test    eax, eax
0x65A767: jz      short locret_65A778
0x65A769: fld     [esp+arg_0]
0x65A76D: push    ecx
0x65A76E: mov     ecx, eax
0x65A770: fstp    [esp+4+var_4]; float
0x65A773: call    bhkCharacterController_SetTargetSize
0x65A778: retn    4
