0x5D56C0: mov     eax, [esp+arg_4]
0x5D56C4: push    esi
0x5D56C5: push    eax
0x5D56C6: call    ActorValue_GetName
0x5D56CB: mov     ecx, [esp+8+arg_0]
0x5D56CF: push    ecx
0x5D56D0: mov     esi, eax
0x5D56D2: call    ActorValue_GetName
0x5D56D7: push    esi; unsigned __int8 *
0x5D56D8: push    eax; unsigned __int8 *
0x5D56D9: call    __mbscmp
0x5D56DE: add     esp, 10h
0x5D56E1: pop     esi
0x5D56E2: retn
