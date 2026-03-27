0x6A2F60: push    esi
0x6A2F61: mov     esi, [esp+4+arg_0]
0x6A2F65: push    esi
0x6A2F66: call    ActiveEffect_Base_Link
0x6A2F6B: cmp     esi, ds:0B333C4h
0x6A2F71: pop     esi
0x6A2F72: jnz     short locret_6A2F79
0x6A2F74: call    NightEyeEffect_SetPlayerShader?
0x6A2F79: retn    4
