0x6A2F80: push    esi
0x6A2F81: mov     esi, [esp+4+arg_0]
0x6A2F85: push    esi
0x6A2F86: call    nullsub_returnvVoid_1arg; nullsub_returnvVoid_1arg; used by Low/MiddleLow current package getter slots and other default no-op vfuncs.
0x6A2F8B: mov     eax, ds:0B33B00h
0x6A2F90: mov     eax, [eax+44h]
0x6A2F93: cmp     eax, 1FFFF000h
0x6A2F98: jz      short loc_6A2FA1
0x6A2F9A: cmp     eax, 7FFFF000h
0x6A2F9F: jnz     short loc_6A2FAE
0x6A2FA1: cmp     esi, ds:0B333C4h
0x6A2FA7: jnz     short loc_6A2FAE
0x6A2FA9: call    NightEyeEffect_SetPlayerShader?; MoonSugarEffect decode: NightEye player shader path sets NightEye active state from player actor value kActorVal_NightEyeBonus; do not hijack for Moon Sugar.
0x6A2FAE: pop     esi
0x6A2FAF: retn    4
