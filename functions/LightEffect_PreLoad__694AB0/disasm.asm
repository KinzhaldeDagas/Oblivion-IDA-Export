0x694AB0: mov     eax, [esp+context]
0x694AB4: push    esi
0x694AB5: push    eax
0x694AB6: mov     esi, ecx
0x694AB8: call    nullsub_returnvVoid_1arg; nullsub_returnvVoid_1arg; used by Low/MiddleLow current package getter slots and other default no-op vfuncs.
0x694ABD: mov     ecx, esi; self
0x694ABF: call    LightEffect_TeardownTransientPointLight; PreLoad tears down any existing transient LightEffect point light and its native full-list entry.
0x694AC4: pop     esi
0x694AC5: retn    4
