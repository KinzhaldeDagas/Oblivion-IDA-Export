0x5AC390: push    3EAh
0x5AC395: call    InterfaceManager_MenuModeHasFocus
0x5AC39A: add     esp, 4
0x5AC39D: test    al, al
0x5AC39F: jz      loc_5AC42D
0x5AC3A5: mov     eax, [esp+arg_0]
0x5AC3A9: cmp     eax, 0Fh
0x5AC3AC: jnz     short loc_5AC3E6
0x5AC3AE: mov     eax, ds:0B33398h
0x5AC3B3: mov     ecx, [eax+20h]
0x5AC3B6: push    0Fh
0x5AC3B8: call    sub_6DA150
0x5AC3BD: cmp     eax, 2
0x5AC3C0: jnz     short loc_5AC42D
0x5AC3C2: push    1; arg1
0x5AC3C4: push    0; canCreate
0x5AC3C6: call    InterfaceManager_GetSingleton
0x5AC3CB: mov     eax, [eax+88h]
0x5AC3D1: add     esp, 8
0x5AC3D4: test    eax, eax
0x5AC3D6: jz      short loc_5AC3E1
0x5AC3D8: push    eax
0x5AC3D9: call    sub_5AB980
0x5AC3DE: add     esp, 4
0x5AC3E1: mov     al, 1
0x5AC3E3: retn    8
0x5AC3E6: cmp     eax, 0Dh
0x5AC3E9: jnz     short loc_5AC402
0x5AC3EB: fld1
0x5AC3ED: fcomp   [esp+arg_4]
0x5AC3F1: fnstsw  ax
0x5AC3F3: test    ah, 41h
0x5AC3F6: jp      short loc_5AC42D
0x5AC3F8: call    sub_5A5E80
0x5AC3FD: mov     al, 1
0x5AC3FF: retn    8
0x5AC402: cmp     eax, 0Eh
0x5AC405: jnz     short loc_5AC41E
0x5AC407: fld1
0x5AC409: fcomp   [esp+arg_4]
0x5AC40D: fnstsw  ax
0x5AC40F: test    ah, 41h
0x5AC412: jp      short loc_5AC42D
0x5AC414: call    sub_5A5F60
0x5AC419: mov     al, 1
0x5AC41B: retn    8
0x5AC41E: cmp     eax, 0Ch
0x5AC421: jnz     short loc_5AC42D
0x5AC423: call    sub_5C1F70
0x5AC428: mov     al, 1
0x5AC42A: retn    8
0x5AC42D: xor     al, al
0x5AC42F: retn    8
