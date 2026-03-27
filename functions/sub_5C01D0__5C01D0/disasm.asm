0x5C01D0: push    ebx
0x5C01D1: mov     ebx, [esp+4+arg_0]
0x5C01D5: test    ebx, ebx
0x5C01D7: jnz     short loc_5C01DD
0x5C01D9: xor     eax, eax
0x5C01DB: pop     ebx
0x5C01DC: retn
0x5C01DD: push    40Ah
0x5C01E2: call    Menu_GetOpenMenuTile
0x5C01E7: add     esp, 4
0x5C01EA: test    eax, eax
0x5C01EC: jz      short loc_5C01F8
0x5C01EE: mov     edx, [eax]
0x5C01F0: mov     ecx, eax
0x5C01F2: mov     eax, [edx]
0x5C01F4: push    1
0x5C01F6: call    eax
0x5C01F8: push    esi; a3
0x5C01F9: push    edi; a3
0x5C01FA: push    1; arg1
0x5C01FC: push    0; canCreate
0x5C01FE: call    InterfaceManager_GetSingleton
0x5C0203: add     esp, 8
0x5C0206: mov     esi, eax
0x5C0208: call    InterfaceManager_GetDepth
0x5C020D: fstp    [esp+0Ch+arg_0]
0x5C0211: mov     ecx, [esi+68h]; TileWindow *
0x5C0214: push    offset aDataMenusDia_3; "Data\\Menus\\dialog\\persuasion_menu.xm"...
0x5C0219: call    Menu_LoadXML
0x5C021E: mov     edi, eax
0x5C0220: mov     ecx, edi
0x5C0222: call    Tile_GetParentMenu
0x5C0227: mov     esi, eax
0x5C0229: test    esi, esi
0x5C022B: jz      loc_5C042D
0x5C0231: mov     edx, [esi]
0x5C0233: mov     eax, [edx+34h]
0x5C0236: mov     ecx, esi
0x5C0238: call    eax
0x5C023A: cmp     eax, 40Ah
0x5C023F: jnz     loc_5C041D
0x5C0245: push    0; int
0x5C0247: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5C024C: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5C0251: push    0; int
0x5C0253: push    edi; void *
0x5C0254: call    OblivionDynamicCast
0x5C0259: add     esp, 14h
0x5C025C: push    eax
0x5C025D: mov     ecx, esi
0x5C025F: call    Menu_SetTileMenu
0x5C0264: push    0FA5h
0x5C0269: mov     ecx, edi
0x5C026B: call    Tile_GetFloat
0x5C0270: fcomp   dword ptr ds:0A69770h
0x5C0276: fnstsw  ax
0x5C0278: test    ah, 44h
0x5C027B: jnp     short loc_5C0296
0x5C027D: push    0FA5h
0x5C0282: mov     ecx, edi
0x5C0284: call    Tile_GetFloat
0x5C0289: fcomp   qword ptr ds:0A69778h
0x5C028F: fnstsw  ax
0x5C0291: test    ah, 44h
0x5C0294: jp      short loc_5C02AA
0x5C0296: fld     [esp+0Ch+arg_0]
0x5C029A: push    ecx
0x5C029B: fstp    [esp+10h+var_10]; a3
0x5C029E: push    0FABh; a2
0x5C02A3: mov     ecx, edi; this
0x5C02A5: call    Tile_SetFloat
0x5C02AA: mov     ecx, [esi+0A8h]
0x5C02B0: push    0FB5h
0x5C02B5: mov     [esi+0D8h], ebx
0x5C02BB: call    Tile_GetFloat
0x5C02C0: call    Double_To_SInt32
0x5C02C5: mov     ecx, [esi+0A8h]
0x5C02CB: push    0FB6h
0x5C02D0: mov     [esi+0DCh], eax
0x5C02D6: call    Tile_GetFloat
0x5C02DB: call    Double_To_SInt32
0x5C02E0: mov     ecx, [esi+0A8h]
0x5C02E6: push    0FB7h
0x5C02EB: mov     [esi+0E0h], eax
0x5C02F1: call    Tile_GetFloat
0x5C02F6: call    Double_To_SInt32
0x5C02FB: mov     ecx, [esi+0A8h]
0x5C0301: push    0FB4h
0x5C0306: mov     [esi+0E4h], eax
0x5C030C: call    Tile_GetFloat
0x5C0311: call    Double_To_SInt32
0x5C0316: fld1
0x5C0318: push    ecx
0x5C0319: fstp    [esp+10h+var_10]; a3
0x5C031C: mov     ecx, [esi+0BCh]; this
0x5C0322: push    0FAFh; a2
0x5C0327: mov     [esi+0E8h], eax
0x5C032D: call    Tile_SetFloat
0x5C0332: push    25h ; '%'
0x5C0334: push    3
0x5C0336: mov     dword ptr [esi+84h], 0
0x5C0340: call    TESTopic__GEtTopic
0x5C0345: mov     ecx, ds:0B333C4h
0x5C034B: mov     edx, [esi+0D8h]
0x5C0351: add     esp, 8
0x5C0354: push    0
0x5C0356: push    0
0x5C0358: push    ecx
0x5C0359: push    edx
0x5C035A: mov     ecx, eax
0x5C035C: call    TESTopic__CreateDialogueInfo
0x5C0361: mov     ebx, eax
0x5C0363: test    ebx, ebx
0x5C0365: jz      loc_5C0402
0x5C036B: push    ebp
0x5C036C: mov     ecx, ebx
0x5C036E: call    sub_6B7BA0
0x5C0373: mov     ecx, ebx
0x5C0375: call    sub_6B7C20
0x5C037A: mov     ebp, eax
0x5C037C: test    ebp, ebp
0x5C037E: jz      short loc_5C03F1
0x5C0380: mov     ecx, [esi+0D8h]
0x5C0386: call    sub_5E12B0
0x5C038B: mov     byte ptr [eax+1DBh], 0
0x5C0392: mov     eax, [esi+0D8h]
0x5C0398: mov     dword ptr [eax+70h], 7
0x5C039F: fld     dword ptr ds:0B33E9Ch
0x5C03A5: mov     ecx, [esi+0D8h]
0x5C03AB: mov     edx, [ecx]
0x5C03AD: mov     eax, [edx+304h]
0x5C03B3: push    ebp
0x5C03B4: push    ecx
0x5C03B5: fstp    [esp+18h+var_18]
0x5C03B8: call    eax
0x5C03BA: cmp     byte ptr ds:0B13200h, 0
0x5C03C1: jz      short loc_5C03F1
0x5C03C3: mov     ecx, [esi+0D8h]
0x5C03C9: fld     dword ptr ds:0A30634h
0x5C03CF: mov     ecx, [ecx+58h]
0x5C03D2: mov     edx, [ecx]
0x5C03D4: mov     eax, [edx+33Ch]
0x5C03DA: mov     ebp, [ebp+0]
0x5C03DD: push    ecx
0x5C03DE: fstp    [esp+14h+a2]; duration
0x5C03E1: push    0; unk2
0x5C03E3: push    0; int
0x5C03E5: call    eax
0x5C03E7: push    eax; unk1
0x5C03E8: push    ebp; string
0x5C03E9: call    GameUI_QueueMessage
0x5C03EE: add     esp, 10h
0x5C03F1: mov     ecx, ebx
0x5C03F3: call    sub_6B81D0
0x5C03F8: push    ebx
0x5C03F9: call    FormHeapFree
0x5C03FE: add     esp, 4
0x5C0401: pop     ebp
0x5C0402: mov     byte ptr [esi+8Ch], 0
0x5C0409: call    sub_5BF7D0
0x5C040E: push    0; char
0x5C0410: mov     ecx, esi; int
0x5C0412: call    EnableMenu
0x5C0417: mov     eax, edi
0x5C0419: pop     edi
0x5C041A: pop     esi
0x5C041B: pop     ebx
0x5C041C: retn
0x5C041D: cmp     dword ptr [esi+4], 0
0x5C0421: jz      short loc_5C042D
0x5C0423: mov     edx, [esi]
0x5C0425: mov     eax, [edx]
0x5C0427: push    1
0x5C0429: mov     ecx, esi
0x5C042B: call    eax
0x5C042D: pop     edi
0x5C042E: pop     esi
0x5C042F: xor     eax, eax
0x5C0431: pop     ebx
0x5C0432: retn
