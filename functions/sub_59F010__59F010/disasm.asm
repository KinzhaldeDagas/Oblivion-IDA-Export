0x59F010: mov     eax, [esp+arg_0]
0x59F014: cmp     eax, 64h ; 'd'
0x59F017: push    ebx
0x59F018: push    ebp
0x59F019: push    esi
0x59F01A: push    edi; a3
0x59F01B: mov     esi, ecx
0x59F01D: jl      loc_59F0D6
0x59F023: mov     ebp, [esp+10h+arg_4]
0x59F027: push    0FDEh
0x59F02C: mov     ecx, ebp
0x59F02E: call    sub_588C10
0x59F033: xor     ebx, ebx
0x59F035: push    ebx; a3
0x59F036: push    eax; a2
0x59F037: lea     ecx, [esi+8Ch]; this
0x59F03D: call    BSStringT_Set
0x59F042: fld1
0x59F044: push    ecx
0x59F045: fstp    [esp+14h+a2]; a3
0x59F048: mov     ecx, [esi+38h]; this
0x59F04B: push    0FA1h; a2
0x59F050: call    Tile_SetFloat
0x59F055: call    sub_6B8660
0x59F05A: push    0FAAh
0x59F05F: mov     ecx, ebp
0x59F061: mov     edi, eax
0x59F063: call    Tile_GetFloat
0x59F068: call    Double_To_SInt32
0x59F06D: push    eax
0x59F06E: mov     ecx, edi
0x59F070: call    sub_6B8610
0x59F075: test    al, al
0x59F077: jz      loc_59F636
0x59F07D: mov     ecx, edi
0x59F07F: call    sub_6B8650
0x59F084: mov     ecx, eax
0x59F086: call    sub_6B8560
0x59F08B: mov     ecx, edi
0x59F08D: call    sub_6B8650
0x59F092: cmp     [eax+20h], bl
0x59F095: jz      short loc_59F0A1
0x59F097: mov     ecx, edi
0x59F099: call    sub_6B8650
0x59F09E: mov     [eax+21h], bl
0x59F0A1: mov     ecx, edi
0x59F0A3: call    sub_6B8650
0x59F0A8: mov     eax, [eax+18h]
0x59F0AB: test    byte ptr [eax+25h], 1
0x59F0AF: jz      short loc_59F0C8
0x59F0B1: mov     ecx, edi
0x59F0B3: mov     byte ptr [esi+88h], 1
0x59F0BA: call    sub_6B8650
0x59F0BF: mov     ecx, [eax+18h]
0x59F0C2: mov     ds:0B3B294h, ecx
0x59F0C8: mov     ecx, esi
0x59F0CA: call    sub_59EB90
0x59F0CF: pop     edi
0x59F0D0: pop     esi
0x59F0D1: pop     ebp
0x59F0D2: pop     ebx
0x59F0D3: retn    8
0x59F0D6: cmp     eax, 4
0x59F0D9: jnz     short loc_59F0F1
0x59F0DB: mov     ecx, [esi+60h]
0x59F0DE: call    sub_5EF930
0x59F0E3: mov     ecx, esi
0x59F0E5: call    sub_59EB90
0x59F0EA: pop     edi
0x59F0EB: pop     esi
0x59F0EC: pop     ebp
0x59F0ED: pop     ebx
0x59F0EE: retn    8
0x59F0F1: cmp     eax, 7
0x59F0F4: jnz     short loc_59F171
0x59F0F6: push    3F1h
0x59F0FB: call    Menu_GetOpenMenuTile
0x59F100: mov     edi, eax
0x59F102: xor     ebx, ebx
0x59F104: add     esp, 4
0x59F107: cmp     edi, ebx
0x59F109: jz      loc_59F636
0x59F10F: push    ebx
0x59F110: push    0FDDh
0x59F115: push    ebx
0x59F116: push    1; arg1
0x59F118: push    ebx; canCreate
0x59F119: call    InterfaceManager_GetSingleton
0x59F11E: add     esp, 8
0x59F121: mov     ecx, eax
0x59F123: call    sub_57F9F0
0x59F128: fld1
0x59F12A: push    ecx
0x59F12B: fstp    [esp+14h+a2]; a3
0x59F12E: push    0FA1h; a2
0x59F133: mov     ecx, edi; this
0x59F135: call    Tile_SetFloat
0x59F13A: push    ebx; float
0x59F13B: mov     ecx, edi
0x59F13D: call    sub_58FBA0
0x59F142: push    1; int
0x59F144: call    sub_57DE50
0x59F149: mov     eax, [esp+14h+arg_4]
0x59F14D: mov     edx, [esi]
0x59F14F: mov     edx, [edx+14h]
0x59F152: add     esp, 4
0x59F155: push    eax
0x59F156: push    7
0x59F158: mov     ecx, esi
0x59F15A: call    edx
0x59F15C: mov     eax, [esi+60h]
0x59F15F: push    eax
0x59F160: call    sub_5C01D0
0x59F165: mov     ecx, [esi+8Ch]
0x59F16B: push    ecx
0x59F16C: jmp     loc_59F61A
0x59F171: cmp     eax, 8
0x59F174: jnz     loc_59F2BD
0x59F17A: xor     ebx, ebx
0x59F17C: push    ebx
0x59F17D: push    5
0x59F17F: mov     ds:0B131F8h, ebx
0x59F185: call    TESTopic__GEtTopic
0x59F18A: add     esp, 8
0x59F18D: cmp     eax, ebx
0x59F18F: jz      loc_59F240
0x59F195: mov     edx, ds:0B333C4h
0x59F19B: mov     ecx, [esi+60h]
0x59F19E: push    ebx
0x59F19F: push    eax
0x59F1A0: push    edx
0x59F1A1: push    ecx
0x59F1A2: mov     ecx, eax
0x59F1A4: call    TESTopic__CreateDialogueInfo
0x59F1A9: cmp     eax, ebx
0x59F1AB: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59F1B5: jz      short loc_59F1D3
0x59F1B7: push    eax
0x59F1B8: mov     ecx, esi
0x59F1BA: call    sub_59EAA0
0x59F1BF: mov     ecx, [esi+8Ch]
0x59F1C5: push    ecx
0x59F1C6: call    FormHeapFree
0x59F1CB: add     esp, 4
0x59F1CE: jmp     loc_59F622
0x59F1D3: push    3F1h
0x59F1D8: call    Menu_GetOpenMenuTile
0x59F1DD: mov     edi, eax
0x59F1DF: add     esp, 4
0x59F1E2: cmp     edi, ebx
0x59F1E4: jz      loc_59F636
0x59F1EA: push    ebx
0x59F1EB: push    0FDDh
0x59F1F0: push    ebx
0x59F1F1: push    1; arg1
0x59F1F3: push    ebx; canCreate
0x59F1F4: call    InterfaceManager_GetSingleton
0x59F1F9: add     esp, 8
0x59F1FC: mov     ecx, eax
0x59F1FE: call    sub_57F9F0
0x59F203: fld1
0x59F205: push    ecx
0x59F206: fstp    [esp+14h+a2]; a3
0x59F209: push    0FA1h; a2
0x59F20E: mov     ecx, edi; this
0x59F210: call    Tile_SetFloat
0x59F215: push    ebx; float
0x59F216: mov     ecx, edi
0x59F218: call    sub_58FBA0
0x59F21D: mov     edx, ds:0B333C4h
0x59F223: push    1; int
0x59F225: mov     byte ptr [edx+124h], 1
0x59F22C: call    sub_57DE50
0x59F231: mov     eax, [esi]
0x59F233: mov     ecx, [esp+14h+arg_4]
0x59F237: mov     edx, [eax+14h]
0x59F23A: add     esp, 4
0x59F23D: push    ecx
0x59F23E: jmp     short loc_59F292
0x59F240: push    3F1h
0x59F245: call    Menu_GetOpenMenuTile
0x59F24A: mov     edi, eax
0x59F24C: add     esp, 4
0x59F24F: cmp     edi, ebx
0x59F251: jz      loc_59F636
0x59F257: fld1
0x59F259: push    ecx
0x59F25A: fstp    [esp+14h+a2]; a3
0x59F25D: mov     ecx, edi; this
0x59F25F: push    0FA1h; a2
0x59F264: call    Tile_SetFloat
0x59F269: push    ebx; float
0x59F26A: mov     ecx, edi
0x59F26C: call    sub_58FBA0
0x59F271: mov     ecx, ds:0B333C4h
0x59F277: push    1; int
0x59F279: mov     byte ptr [ecx+124h], 1
0x59F280: call    sub_57DE50
0x59F285: mov     edx, [esi]
0x59F287: mov     eax, [esp+14h+arg_4]
0x59F28B: mov     edx, [edx+14h]
0x59F28E: add     esp, 4
0x59F291: push    eax
0x59F292: push    8
0x59F294: mov     ecx, esi
0x59F296: call    edx
0x59F298: mov     eax, [esi+60h]
0x59F29B: push    ebx
0x59F29C: push    1
0x59F29E: push    1
0x59F2A0: push    eax
0x59F2A1: call    sub_57A8D0
0x59F2A6: mov     ecx, [esi+8Ch]
0x59F2AC: add     esp, 10h
0x59F2AF: push    ecx
0x59F2B0: call    FormHeapFree
0x59F2B5: add     esp, 4
0x59F2B8: jmp     loc_59F622
0x59F2BD: cmp     eax, 9
0x59F2C0: jnz     loc_59F3A2
0x59F2C6: xor     ebx, ebx
0x59F2C8: push    ebx
0x59F2C9: push    5
0x59F2CB: call    TESTopic__GEtTopic
0x59F2D0: push    3F1h
0x59F2D5: mov     ebp, eax
0x59F2D7: call    Menu_GetOpenMenuTile
0x59F2DC: mov     edi, eax
0x59F2DE: add     esp, 0Ch
0x59F2E1: cmp     edi, ebx
0x59F2E3: jz      loc_59F636
0x59F2E9: cmp     ebp, ebx
0x59F2EB: push    ebx
0x59F2EC: jz      short loc_59F336
0x59F2EE: mov     edx, ds:0B333C4h
0x59F2F4: push    ebp
0x59F2F5: mov     dword ptr ds:0B131F8h, 2
0x59F2FF: mov     eax, [esi+60h]
0x59F302: push    edx
0x59F303: push    eax
0x59F304: mov     ecx, ebp
0x59F306: call    TESTopic__CreateDialogueInfo
0x59F30B: cmp     eax, ebx
0x59F30D: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59F317: jz      short loc_59F335
0x59F319: push    eax
0x59F31A: mov     ecx, esi
0x59F31C: call    sub_59EAA0
0x59F321: mov     ecx, [esi+8Ch]
0x59F327: push    ecx
0x59F328: call    FormHeapFree
0x59F32D: add     esp, 4
0x59F330: jmp     loc_59F622
0x59F335: push    ebx
0x59F336: push    0FDDh
0x59F33B: push    ebx
0x59F33C: push    1; arg1
0x59F33E: push    ebx; canCreate
0x59F33F: call    InterfaceManager_GetSingleton
0x59F344: add     esp, 8
0x59F347: mov     ecx, eax
0x59F349: call    sub_57F9F0
0x59F34E: fld1
0x59F350: push    ecx
0x59F351: fstp    [esp+14h+a2]; a3
0x59F354: push    0FA1h; a2
0x59F359: mov     ecx, edi; this
0x59F35B: call    Tile_SetFloat
0x59F360: push    ebx; float
0x59F361: mov     ecx, edi
0x59F363: call    sub_58FBA0
0x59F368: push    1; int
0x59F36A: call    sub_57DE50
0x59F36F: mov     eax, [esp+14h+arg_4]
0x59F373: mov     edx, [esi]
0x59F375: mov     edx, [edx+14h]
0x59F378: add     esp, 4
0x59F37B: push    eax
0x59F37C: push    9
0x59F37E: mov     ecx, esi
0x59F380: call    edx
0x59F382: mov     eax, [esi+60h]
0x59F385: push    eax
0x59F386: call    sub_57A940
0x59F38B: mov     ecx, [esi+8Ch]
0x59F391: add     esp, 4
0x59F394: push    ecx
0x59F395: call    FormHeapFree
0x59F39A: add     esp, 4
0x59F39D: jmp     loc_59F622
0x59F3A2: cmp     eax, 0Ch
0x59F3A5: jnz     loc_59F461
0x59F3AB: xor     ebx, ebx
0x59F3AD: push    ebx
0x59F3AE: push    5
0x59F3B0: call    TESTopic__GEtTopic
0x59F3B5: push    3F1h
0x59F3BA: mov     ebp, eax
0x59F3BC: call    Menu_GetOpenMenuTile
0x59F3C1: mov     edi, eax
0x59F3C3: add     esp, 0Ch
0x59F3C6: cmp     edi, ebx
0x59F3C8: jz      loc_59F636
0x59F3CE: cmp     ebp, ebx
0x59F3D0: push    ebx
0x59F3D1: jz      short loc_59F403
0x59F3D3: mov     edx, ds:0B333C4h
0x59F3D9: push    ebp
0x59F3DA: mov     dword ptr ds:0B131F8h, 1
0x59F3E4: mov     eax, [esi+60h]
0x59F3E7: push    edx
0x59F3E8: push    eax
0x59F3E9: mov     ecx, ebp
0x59F3EB: call    TESTopic__CreateDialogueInfo
0x59F3F0: cmp     eax, ebx
0x59F3F2: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59F3FC: jnz     loc_59F1B7
0x59F402: push    ebx
0x59F403: push    0FDDh
0x59F408: push    ebx
0x59F409: push    1; arg1
0x59F40B: push    ebx; canCreate
0x59F40C: call    InterfaceManager_GetSingleton
0x59F411: add     esp, 8
0x59F414: mov     ecx, eax
0x59F416: call    sub_57F9F0
0x59F41B: fld1
0x59F41D: push    ecx
0x59F41E: fstp    [esp+14h+a2]; a3
0x59F421: push    0FA1h; a2
0x59F426: mov     ecx, edi; this
0x59F428: call    Tile_SetFloat
0x59F42D: push    ebx; float
0x59F42E: mov     ecx, edi
0x59F430: call    sub_58FBA0
0x59F435: push    1; int
0x59F437: call    sub_57DE50
0x59F43C: mov     eax, [esp+14h+arg_4]
0x59F440: mov     edx, [esi]
0x59F442: mov     edx, [edx+14h]
0x59F445: add     esp, 4
0x59F448: push    eax
0x59F449: push    0Ch
0x59F44B: mov     ecx, esi
0x59F44D: call    edx
0x59F44F: mov     eax, [esi+60h]
0x59F452: push    eax
0x59F453: push    ebx
0x59F454: push    ebx
0x59F455: push    2
0x59F457: call    sub_5D2070
0x59F45C: jmp     loc_59F2A6
0x59F461: cmp     eax, 0Dh
0x59F464: jnz     loc_59F52E
0x59F46A: xor     ebx, ebx
0x59F46C: push    ebx
0x59F46D: push    5
0x59F46F: call    TESTopic__GEtTopic
0x59F474: push    3F1h
0x59F479: mov     ebp, eax
0x59F47B: call    Menu_GetOpenMenuTile
0x59F480: mov     edi, eax
0x59F482: add     esp, 0Ch
0x59F485: cmp     edi, ebx
0x59F487: jz      loc_59F636
0x59F48D: cmp     ebp, ebx
0x59F48F: push    ebx
0x59F490: jz      short loc_59F4C2
0x59F492: mov     edx, ds:0B333C4h
0x59F498: push    ebp
0x59F499: mov     dword ptr ds:0B131F8h, 3
0x59F4A3: mov     eax, [esi+60h]
0x59F4A6: push    edx
0x59F4A7: push    eax
0x59F4A8: mov     ecx, ebp
0x59F4AA: call    TESTopic__CreateDialogueInfo
0x59F4AF: cmp     eax, ebx
0x59F4B1: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59F4BB: jnz     loc_59F1B7
0x59F4C1: push    ebx
0x59F4C2: push    0FDDh
0x59F4C7: push    ebx
0x59F4C8: push    1; arg1
0x59F4CA: push    ebx; canCreate
0x59F4CB: call    InterfaceManager_GetSingleton
0x59F4D0: add     esp, 8
0x59F4D3: mov     ecx, eax
0x59F4D5: call    sub_57F9F0
0x59F4DA: fld1
0x59F4DC: push    ecx
0x59F4DD: fstp    [esp+14h+a2]; a3
0x59F4E0: push    0FA1h; a2
0x59F4E5: mov     ecx, edi; this
0x59F4E7: call    Tile_SetFloat
0x59F4EC: push    ebx; float
0x59F4ED: mov     ecx, edi
0x59F4EF: call    sub_58FBA0
0x59F4F4: push    1; int
0x59F4F6: call    sub_57DE50
0x59F4FB: mov     eax, [esp+14h+arg_4]
0x59F4FF: mov     edx, [esi]
0x59F501: mov     edx, [edx+14h]
0x59F504: add     esp, 4
0x59F507: push    eax
0x59F508: push    0Dh
0x59F50A: mov     ecx, esi
0x59F50C: call    edx
0x59F50E: mov     eax, [esi+60h]
0x59F511: push    eax
0x59F512: call    sub_5CFCE0
0x59F517: mov     ecx, [esi+8Ch]
0x59F51D: add     esp, 4
0x59F520: push    ecx
0x59F521: call    FormHeapFree
0x59F526: add     esp, 4
0x59F529: jmp     loc_59F622
0x59F52E: cmp     eax, 10h
0x59F531: jnz     loc_59F5F8
0x59F537: xor     ebx, ebx
0x59F539: push    ebx
0x59F53A: push    5
0x59F53C: call    TESTopic__GEtTopic
0x59F541: push    3F1h
0x59F546: mov     ebp, eax
0x59F548: call    Menu_GetOpenMenuTile
0x59F54D: mov     edi, eax
0x59F54F: add     esp, 0Ch
0x59F552: cmp     edi, ebx
0x59F554: jz      loc_59F636
0x59F55A: cmp     ebp, ebx
0x59F55C: push    ebx
0x59F55D: jz      short loc_59F58F
0x59F55F: mov     edx, ds:0B333C4h
0x59F565: push    ebp
0x59F566: mov     dword ptr ds:0B131F8h, 4
0x59F570: mov     eax, [esi+60h]
0x59F573: push    edx
0x59F574: push    eax
0x59F575: mov     ecx, ebp
0x59F577: call    TESTopic__CreateDialogueInfo
0x59F57C: cmp     eax, ebx
0x59F57E: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59F588: jnz     loc_59F1B7
0x59F58E: push    ebx
0x59F58F: push    0FDDh
0x59F594: push    ebx
0x59F595: push    1; arg1
0x59F597: push    ebx; canCreate
0x59F598: call    InterfaceManager_GetSingleton
0x59F59D: add     esp, 8
0x59F5A0: mov     ecx, eax
0x59F5A2: call    sub_57F9F0
0x59F5A7: fld1
0x59F5A9: push    ecx
0x59F5AA: fstp    [esp+14h+a2]; a3
0x59F5AD: push    0FA1h; a2
0x59F5B2: mov     ecx, edi; this
0x59F5B4: call    Tile_SetFloat
0x59F5B9: push    ebx; float
0x59F5BA: mov     ecx, edi
0x59F5BC: call    sub_58FBA0
0x59F5C1: push    1; int
0x59F5C3: call    sub_57DE50
0x59F5C8: mov     eax, [esp+14h+arg_4]
0x59F5CC: mov     edx, [esi]
0x59F5CE: mov     edx, [edx+14h]
0x59F5D1: add     esp, 4
0x59F5D4: push    eax
0x59F5D5: push    10h
0x59F5D7: mov     ecx, esi
0x59F5D9: call    edx
0x59F5DB: mov     eax, [esi+60h]
0x59F5DE: push    eax
0x59F5DF: call    sub_5D9590
0x59F5E4: mov     ecx, [esi+8Ch]
0x59F5EA: add     esp, 4
0x59F5ED: push    ecx
0x59F5EE: call    FormHeapFree
0x59F5F3: add     esp, 4
0x59F5F6: jmp     short loc_59F622
0x59F5F8: cmp     eax, 3
0x59F5FB: jz      short loc_59F602
0x59F5FD: cmp     eax, 0Ah
0x59F600: jnz     short loc_59F636
0x59F602: push    2; int
0x59F604: call    sub_57DE50
0x59F609: xor     ebx, ebx
0x59F60B: mov     [esi+64h], bl
0x59F60E: call    sub_59DD40
0x59F613: mov     edx, [esi+8Ch]
0x59F619: push    edx
0x59F61A: call    FormHeapFree
0x59F61F: add     esp, 8
0x59F622: mov     [esi+90h], bx
0x59F629: mov     [esi+92h], bx
0x59F630: mov     [esi+8Ch], ebx
0x59F636: pop     edi
0x59F637: pop     esi
0x59F638: pop     ebp
0x59F639: pop     ebx
0x59F63A: retn    8
