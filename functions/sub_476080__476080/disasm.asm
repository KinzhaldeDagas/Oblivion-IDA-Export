0x476080: sub     esp, 110h
0x476086: mov     eax, ds:0B30AACh
0x47608B: xor     eax, esp
0x47608D: mov     [esp+110h+var_4], eax
0x476094: mov     eax, [esp+110h+arg_0]
0x47609B: test    eax, eax
0x47609D: push    ebx
0x47609E: mov     ebx, [esp+114h+arg_4]
0x4760A5: push    esi
0x4760A6: mov     esi, ecx
0x4760A8: mov     [esp+118h+var_10C], esi
0x4760AC: jz      loc_4761A0
0x4760B2: push    ebp
0x4760B3: push    edi
0x4760B4: mov     ebp, eax
0x4760B6: mov     eax, [ebp+0]
0x4760B9: push    eax
0x4760BA: push    offset dword_A3407C
0x4760BF: push    ebx
0x4760C0: lea     ecx, [esp+12Ch+ArgList]
0x4760C4: push    offset aSSS_1; "%s\\%s\\%s"
0x4760C9: push    ecx
0x4760CA: call    __sprintf
0x4760CF: mov     ecx, ds:0B33A1Ch
0x4760D5: add     esp, 14h
0x4760D8: lea     edx, [esp+120h+ArgList]
0x4760DC: push    edx
0x4760DD: call    sub_439FF0
0x4760E2: mov     ecx, ds:0B333C4h
0x4760E8: test    ecx, ecx
0x4760EA: mov     edi, eax
0x4760EC: mov     byte ptr [esp+120h+var_110], 1
0x4760F1: jz      short loc_476161
0x4760F3: push    0
0x4760F5: call    PlayerCharacter_GetPlayerNode
0x4760FA: test    eax, eax
0x4760FC: jz      short loc_476161
0x4760FE: cmp     dword ptr ds:0B06548h, 0
0x476105: jz      short loc_476161
0x476107: mov     ecx, ds:0B333C4h
0x47610D: push    0
0x47610F: call    PlayerCharacter_GetPlayerNode
0x476114: cmp     [esi+4], eax
0x476117: jz      short loc_476161
0x476119: mov     ecx, ds:0B333C4h
0x47611F: mov     esi, [esi+4]
0x476122: push    1
0x476124: call    PlayerCharacter_GetPlayerNode
0x476129: cmp     esi, eax
0x47612B: jz      short loc_476161
0x47612D: mov     eax, ds:0B333C4h
0x476132: cmp     esi, [eax+5D8h]
0x476138: jz      short loc_476161
0x47613A: mov     ecx, ds:0B33B00h
0x476140: call    sub_45A500
0x476145: test    al, al
0x476147: jnz     short loc_476161
0x476149: call    InterfaceManager_IsMenuMode
0x47614E: test    al, al
0x476150: jnz     short loc_476161
0x476152: mov     ecx, ds:0B333A0h
0x476158: call    sub_404F20
0x47615D: test    al, al
0x47615F: jz      short loc_476166
0x476161: mov     byte ptr [esp+120h+var_110], 0
0x476166: test    edi, edi
0x476168: jz      short loc_47617D
0x47616A: mov     ecx, [esp+120h+var_110]
0x47616E: mov     esi, [esp+120h+var_10C]
0x476172: push    ecx
0x476173: push    edi
0x476174: mov     ecx, esi; this
0x476176: call    ??0AnimSequenceSingle@@QAE@XZ; AnimSequenceSingle::AnimSequenceSingle(void)
0x47617B: jmp     short loc_476193
0x47617D: lea     edx, [esp+120h+ArgList]
0x476181: push    edx; ArgList
0x476182: push    offset aFailedToLoadAn; "Failed to load animation file '%s'."
0x476187: call    PrintError
0x47618C: mov     esi, [esp+128h+var_10C]
0x476190: add     esp, 8
0x476193: mov     ebp, [ebp+4]
0x476196: test    ebp, ebp
0x476198: jnz     loc_4760B6
0x47619E: pop     edi
0x47619F: pop     ebp
0x4761A0: mov     ecx, [esp+118h+var_4]
0x4761A7: pop     esi
0x4761A8: pop     ebx
0x4761A9: xor     ecx, esp
0x4761AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4761B0: add     esp, 110h
0x4761B6: retn    8
