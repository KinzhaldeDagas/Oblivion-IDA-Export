0x5BDDE0: sub     esp, 10h
0x5BDDE3: call    sub_578D70
0x5BDDE8: cmp     al, 2
0x5BDDEA: jnz     short loc_5BDE31
0x5BDDEC: fld1
0x5BDDEE: lea     eax, [esp+10h+var_10]
0x5BDDF1: fstp    [esp+10h+var_10]
0x5BDDF4: push    eax
0x5BDDF5: fldz
0x5BDDF7: fst     [esp+14h+var_C]
0x5BDDFB: fst     [esp+14h+var_8]
0x5BDDFF: fstp    [esp+14h+var_4]
0x5BDE03: call    sub_578E90
0x5BDE08: push    0
0x5BDE0A: call    sub_57CCC0
0x5BDE0F: mov     ecx, ds:0B333A0h
0x5BDE15: add     esp, 8
0x5BDE18: push    0
0x5BDE1A: push    0
0x5BDE1C: push    1
0x5BDE1E: call    sub_440AF0
0x5BDE23: mov     ecx, ds:0B33398h
0x5BDE29: mov     byte ptr [ecx+1], 1
0x5BDE2D: add     esp, 10h
0x5BDE30: retn
0x5BDE31: cmp     al, 3
0x5BDE33: jnz     short loc_5BDE69
0x5BDE35: push    1; arg1
0x5BDE37: push    0; canCreate
0x5BDE39: call    InterfaceManager_GetSingleton
0x5BDE3E: mov     edx, [eax+68h]
0x5BDE41: mov     ecx, [edx+24h]
0x5BDE44: or      word ptr [ecx+18h], 1
0x5BDE49: mov     ecx, [eax+1Ch]
0x5BDE4C: mov     ecx, [ecx+24h]
0x5BDE4F: or      word ptr [ecx+18h], 1
0x5BDE54: add     esp, 8
0x5BDE57: push    0
0x5BDE59: mov     ecx, eax
0x5BDE5B: call    MiscPass
0x5BDE60: mov     edx, ds:0B33398h
0x5BDE66: mov     byte ptr [edx], 1
0x5BDE69: add     esp, 10h
0x5BDE6C: retn
