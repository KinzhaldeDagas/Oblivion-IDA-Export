0x640900: sub     esp, 18h
0x640903: mov     eax, [ecx]
0x640905: mov     edx, [eax+184h]
0x64090B: push    esi
0x64090C: mov     esi, [esp+1Ch+arg_0]
0x640910: mov     [esp+1Ch+var_18], ecx
0x640914: mov     [esp+1Ch+var_14], 0
0x64091C: call    edx
0x64091E: test    esi, esi
0x640920: jz      loc_6411C3
0x640926: mov     eax, [esi+8]
0x640929: shr     eax, 0Bh
0x64092C: test    al, 1
0x64092E: jnz     loc_6411C3
0x640934: mov     edx, [esi]
0x640936: mov     eax, [edx+190h]
0x64093C: mov     ecx, esi
0x64093E: call    eax
0x640940: test    al, al
0x640942: jz      loc_6411C3
0x640948: push    ebx
0x640949: push    ebp
0x64094A: push    edi
0x64094B: mov     edi, [esp+28h+arg_4]
0x64094F: cmp     esi, edi
0x640951: jz      loc_640ACC
0x640957: mov     ecx, ds:0B333C4h
0x64095D: cmp     esi, ecx
0x64095F: push    0
0x640961: jnz     short loc_64096A
0x640963: call    PlayerCharacter_IsPlayerInCombat
0x640968: jmp     short loc_640976
0x64096A: mov     edx, [esi]
0x64096C: mov     eax, [edx+334h]
0x640972: mov     ecx, esi
0x640974: call    eax
0x640976: push    0; int
0x640978: push    0; int
0x64097A: mov     byte ptr [esp+30h+arg_0], al
0x64097E: mov     ecx, [esp+30h+arg_0]
0x640982: push    ecx; int
0x640983: lea     edx, [esp+34h+arg_4]
0x640987: push    edx; int
0x640988: push    esi; int
0x640989: push    1; int
0x64098B: mov     ecx, edi; int
0x64098D: call    Actor_GetDetectionLevel
0x640992: mov     [esp+28h+var_14], eax
0x640996: fild    [esp+28h+var_14]
0x64099A: xor     ebp, ebp
0x64099C: fstp    [esp+28h+arg_0]
0x6409A0: fld     [esp+28h+arg_0]
0x6409A4: fld     dword ptr ds:0B36778h
0x6409AA: fcompp
0x6409AC: fnstsw  ax
0x6409AE: test    ah, 5
0x6409B1: jp      short loc_6409B8
0x6409B3: mov     ebp, 3
0x6409B8: mov     ecx, [esp+28h+var_18]
0x6409BC: mov     eax, [ecx]
0x6409BE: mov     edx, [eax+3B0h]
0x6409C4: push    edi
0x6409C5: call    edx
0x6409C7: mov     ebx, eax
0x6409C9: test    ebx, ebx
0x6409CB: jnz     short loc_6409F1
0x6409CD: mov     edx, [esp+2Ch+var_18]
0x6409D1: mov     ecx, [esp+2Ch+var_1C]
0x6409D5: mov     eax, [ecx]
0x6409D7: mov     eax, [eax+0A8h]
0x6409DD: push    edx
0x6409DE: mov     edx, [esp+30h+arg_0]
0x6409E2: push    edx
0x6409E3: push    ebp
0x6409E4: push    esi
0x6409E5: call    eax
0x6409E7: mov     ebx, eax
0x6409E9: test    ebx, ebx
0x6409EB: jz      loc_640ACC
0x6409F1: mov     ecx, dword ptr [esp+3Ch+var_28]
0x6409F5: mov     [ebx+0Ch], ecx
0x6409F8: mov     [ebx+4], ebp
0x6409FB: mov     dl, [esp+3Ch+var_C]
0x6409FF: mov     ecx, offset flt_B36778
0x640A04: mov     [ebx+8], dl
0x640A07: call    GameSetting_GetSafeFloatPointer
0x640A0C: fld     dword ptr [esp+3Ch+var_10]
0x640A10: fld     dword ptr [eax]
0x640A12: fcompp
0x640A14: fnstsw  ax
0x640A16: test    ah, 5
0x640A19: jp      short loc_640A25
0x640A1B: mov     ebp, 3
0x640A20: jmp     def_640A2E
0x640A25: cmp     ebp, 3; switch 4 cases
0x640A28: ja      def_640A2E
0x640A2E: jmp     ds:jpt_640A2E[ebp*4]; switch jump
0x640A35: mov     ecx, offset flt_B36778; jumptable 00640A2E case 0
0x640A3A: call    GameSetting_GetSafeFloatPointer
0x640A3F: fld     dword ptr [esp+3Ch+var_10]
0x640A43: fld     dword ptr [eax]
0x640A45: fcompp
0x640A47: fnstsw  ax
0x640A49: test    ah, 41h
0x640A4C: jnz     short def_640A2E
0x640A4E: mov     ecx, offset unk_B36770
0x640A53: call    GameSetting_GetSafeFloatPointer
0x640A58: fld     dword ptr [esp+3Ch+var_10]
0x640A5C: fld     dword ptr [eax]
0x640A5E: fcompp
0x640A60: fnstsw  ax
0x640A62: test    ah, 5
0x640A65: jp      short def_640A2E
0x640A67: mov     ebp, 2
0x640A6C: jmp     short def_640A2E
0x640A6E: mov     ecx, offset unk_B36788; jumptable 00640A2E case 2
0x640A73: call    GameSetting_GetSafeFloatPointer
0x640A78: fld     dword ptr [esp+3Ch+var_10]
0x640A7C: fld     dword ptr [eax]
0x640A7E: fcompp
0x640A80: fnstsw  ax
0x640A82: test    ah, 41h
0x640A85: jnz     short def_640A2E
0x640A87: mov     ebp, 1; jumptable 00640A2E case 3
0x640A8C: jmp     short def_640A2E
0x640A8E: mov     ecx, offset unk_B36770; jumptable 00640A2E case 1
0x640A93: call    GameSetting_GetSafeFloatPointer
0x640A98: fld     dword ptr [esp+3Ch+var_10]
0x640A9C: fld     dword ptr [eax]
0x640A9E: fcompp
0x640AA0: fnstsw  ax
0x640AA2: test    ah, 5
0x640AA5: jp      short loc_640AAE
0x640AA7: mov     ebp, 2
0x640AAC: jmp     short def_640A2E
0x640AAE: mov     ecx, offset unk_B36780
0x640AB3: call    GameSetting_GetSafeFloatPointer
0x640AB8: fld     dword ptr [esp+3Ch+var_10]
0x640ABC: fld     dword ptr [eax]
0x640ABE: fcompp
0x640AC0: fnstsw  ax
0x640AC2: test    ah, 41h
0x640AC5: jnz     short def_640A2E
0x640AC7: xor     ebp, ebp
