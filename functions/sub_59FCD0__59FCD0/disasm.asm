0x59FCD0: sub     esp, 8
0x59FCD3: push    ebx
0x59FCD4: push    esi
0x59FCD5: push    edi
0x59FCD6: push    1; arg1
0x59FCD8: push    0; canCreate
0x59FCDA: mov     esi, ecx
0x59FCDC: call    InterfaceManager_GetSingleton
0x59FCE1: mov     edi, [esp+1Ch+arg_0]
0x59FCE5: add     esp, 8
0x59FCE8: cmp     edi, 11h
0x59FCEB: mov     ebx, eax
0x59FCED: jz      short loc_59FCF9
0x59FCEF: cmp     edi, 13h
0x59FCF2: jz      short loc_59FCF9
0x59FCF4: cmp     edi, 0Fh
0x59FCF7: jnz     short loc_59FD3A
0x59FCF9: push    edi
0x59FCFA: mov     ecx, esi
0x59FCFC: call    sub_59FA20
0x59FD01: test    eax, eax
0x59FD03: jz      short loc_59FD3A
0x59FD05: call    sub_57D7A0
0x59FD0A: fmul    qword ptr ds:0A2FAA0h
0x59FD10: fadd    dword ptr [ebx+20h]
0x59FD13: call    Double_To_SInt32
0x59FD18: mov     [esp+14h+arg_0], eax
0x59FD1C: fild    [esp+14h+arg_0]
0x59FD20: push    edi
0x59FD21: mov     ecx, esi
0x59FD23: call    sub_59FA20
0x59FD28: mov     ecx, eax
0x59FD2A: fstp    [esp+14h+var_8]
0x59FD2E: call    sub_588C50
0x59FD33: fsubr   [esp+14h+var_8]
0x59FD37: fstp    dword ptr [esi+74h]
0x59FD3A: pop     edi
0x59FD3B: pop     esi
0x59FD3C: pop     ebx
0x59FD3D: add     esp, 8
0x59FD40: retn    8
