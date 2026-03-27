0x5AD980: sub     esp, 8
0x5AD983: push    ebx
0x5AD984: push    3EFh
0x5AD989: call    Menu_GetOpenMenuTile
0x5AD98E: mov     ebx, eax
0x5AD990: add     esp, 4
0x5AD993: test    ebx, ebx
0x5AD995: jz      loc_5ADB3A
0x5AD99B: mov     ecx, ebx
0x5AD99D: call    Tile_GetParentMenu
0x5AD9A2: test    eax, eax
0x5AD9A4: jz      loc_5ADB3A
0x5AD9AA: push    ebp
0x5AD9AB: push    esi
0x5AD9AC: push    edi; a3
0x5AD9AD: mov     ecx, ebx
0x5AD9AF: call    Tile_GetParentMenu
0x5AD9B4: mov     esi, eax
0x5AD9B6: mov     edi, [esi+54h]
0x5AD9B9: call    dword ptr ds:0A280D0h
0x5AD9BF: push    eax
0x5AD9C0: mov     ecx, edi
0x5AD9C2: call    sub_47D170
0x5AD9C7: mov     edi, [esi+54h]
0x5AD9CA: mov     ebp, [edi+10h]
0x5AD9CD: mov     eax, ebp
0x5AD9CF: sub     eax, [esi+68h]
0x5AD9D2: mov     ecx, ebp
0x5AD9D4: sub     ecx, [esi+6Ch]
0x5AD9D7: cmp     eax, ds:0B14160h
0x5AD9DD: jle     short loc_5AD9E5
0x5AD9DF: add     dword ptr [esi+64h], 1
0x5AD9E3: jmp     short loc_5ADA09
0x5AD9E5: mov     edx, [esi+64h]
0x5AD9E8: cmp     edx, [esi+3Ch]
0x5AD9EB: jge     short loc_5ADA09
0x5AD9ED: cmp     eax, ds:0B14168h
0x5AD9F3: jg      short loc_5ADA03
0x5AD9F5: cmp     byte ptr [esi+70h], 0
0x5AD9F9: jz      short loc_5ADA09
0x5AD9FB: cmp     eax, ds:0B14170h
0x5ADA01: jle     short loc_5ADA09
0x5ADA03: add     edx, 1
0x5ADA06: mov     [esi+64h], edx
0x5ADA09: test    ecx, ecx
0x5ADA0B: fld     dword ptr [esi+40h]
0x5ADA0E: mov     [esp+18h+var_4], ecx
0x5ADA12: fild    [esp+18h+var_4]
0x5ADA16: jge     short loc_5ADA1E
0x5ADA18: fadd    dword ptr ds:0A2FC78h
0x5ADA1E: fdiv    qword ptr ds:0A2FC70h
0x5ADA24: fsubp   st(1), st
0x5ADA26: fstp    [esp+18h+var_4]
0x5ADA2A: fld     [esp+18h+var_4]
0x5ADA2E: fst     dword ptr [esi+40h]
0x5ADA31: fldz
0x5ADA33: fcompp
0x5ADA35: fnstsw  ax
0x5ADA37: test    ah, 1
0x5ADA3A: jz      short loc_5ADA48
0x5ADA3C: cmp     [esp+18h+arg_0], 0
0x5ADA41: mov     [esp+18h+var_5], 0
0x5ADA46: jz      short loc_5ADA4D
0x5ADA48: mov     [esp+18h+var_5], 1
0x5ADA4D: mov     eax, [esi+64h]
0x5ADA50: mov     ecx, [esi+60h]
0x5ADA53: cmp     eax, ecx
0x5ADA55: jnz     short loc_5ADA62
0x5ADA57: cmp     [esp+18h+var_5], 0
0x5ADA5C: jz      loc_5ADB12
0x5ADA62: cmp     ecx, 64h ; 'd'
0x5ADA65: jge     loc_5ADB12
0x5ADA6B: cmp     ecx, eax
0x5ADA6D: jz      short loc_5ADA78
0x5ADA6F: mov     ecx, [edi+10h]
0x5ADA72: mov     [esi+68h], ecx
0x5ADA75: mov     [esi+60h], eax
0x5ADA78: fild    dword ptr [esi+60h]
0x5ADA7B: push    ecx
0x5ADA7C: mov     ecx, ebx; this
0x5ADA7E: fstp    [esp+1Ch+var_4]
0x5ADA82: fld     [esp+1Ch+var_4]
0x5ADA86: fstp    [esp+1Ch+a2]; a3
0x5ADA89: push    0FB1h; a2
0x5ADA8E: call    Tile_SetFloat
0x5ADA93: fld     [esp+18h+var_4]
0x5ADA97: fcomp   qword ptr ds:0A6C4C8h
0x5ADA9D: fnstsw  ax
0x5ADA9F: test    ah, 5
0x5ADAA2: jp      short loc_5ADB12
0x5ADAA4: cmp     [esp+18h+var_5], 0
0x5ADAA9: jz      short loc_5ADAC2
0x5ADAAB: push    ebx
0x5ADAAC: mov     ecx, esi
0x5ADAAE: call    sub_5AD780
0x5ADAB3: mov     ecx, offset flt_B14158
0x5ADAB8: call    GameSetting_GetSafeFloatPointer
0x5ADABD: fld     dword ptr [eax]
0x5ADABF: fstp    dword ptr [esi+40h]
0x5ADAC2: push    1; arg1
0x5ADAC4: push    0; canCreate
0x5ADAC6: call    InterfaceManager_GetSingleton
0x5ADACB: add     esp, 8
0x5ADACE: test    eax, eax
0x5ADAD0: jz      short loc_5ADB12
0x5ADAD2: mov     ecx, ds:0B33A10h
0x5ADAD8: test    ecx, ecx
0x5ADADA: jz      short loc_5ADAE1
0x5ADADC: call    sub_432860
0x5ADAE1: push    1; arg1
0x5ADAE3: push    0; canCreate
0x5ADAE5: call    InterfaceManager_GetSingleton
0x5ADAEA: add     esp, 8
0x5ADAED: mov     ecx, eax
0x5ADAEF: call    sub_583F40
0x5ADAF4: push    0
0x5ADAF6: call    sub_579260
0x5ADAFB: add     esp, 4
0x5ADAFE: call    sub_5792B0
0x5ADB03: mov     ecx, ds:0B33A10h
0x5ADB09: test    ecx, ecx
0x5ADB0B: jz      short loc_5ADB12
0x5ADB0D: call    sub_432890
0x5ADB12: mov     [esi+6Ch], ebp
0x5ADB15: mov     edx, ds:0B33398h
0x5ADB1B: mov     esi, [edx+10h]
0x5ADB1E: call    dword ptr ds:0A2808Ch
0x5ADB24: pop     edi
0x5ADB25: cmp     eax, esi
0x5ADB27: pop     esi
0x5ADB28: pop     ebp
0x5ADB29: jnz     short loc_5ADB3A
0x5ADB2B: mov     ecx, ds:0B33398h; void *
0x5ADB31: pop     ebx
0x5ADB32: add     esp, 8
0x5ADB35: jmp     ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5ADB3A: pop     ebx
0x5ADB3B: add     esp, 8
0x5ADB3E: retn
