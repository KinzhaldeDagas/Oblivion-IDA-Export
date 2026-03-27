0x5D7090: push    0FFFFFFFFh
0x5D7092: push    offset ProcessSleepWaitMenu_SEH
0x5D7097: mov     eax, large fs:0
0x5D709D: push    eax
0x5D709E: sub     esp, 18h
0x5D70A1: push    ebx; a3
0x5D70A2: push    esi; a3
0x5D70A3: mov     eax, ds:0B30AACh
0x5D70A8: xor     eax, esp
0x5D70AA: push    eax; a3
0x5D70AB: lea     eax, [esp+30h+var_C]
0x5D70AF: mov     large fs:0, eax
0x5D70B5: mov     eax, ds:0B33398h
0x5D70BA: mov     ecx, ds:0B333C4h
0x5D70C0: mov     esi, [eax+20h]
0x5D70C3: mov     eax, [ecx+590h]
0x5D70C9: cmp     ds:0B3B730h, eax
0x5D70CF: jz      short loc_5D70D8
0x5D70D1: mov     byte ptr ds:0B3B72Ch, 1
0x5D70D8: push    1; a3
0x5D70DA: push    10h; a2
0x5D70DC: mov     ecx, esi; this
0x5D70DE: call    InputGlobals__QueryControlState
0x5D70E3: xor     ebx, ebx
0x5D70E5: test    eax, eax
0x5D70E7: jnz     short loc_5D7100
0x5D70E9: push    ebx; a3
0x5D70EA: push    10h; a2
0x5D70EC: mov     ecx, esi; this
0x5D70EE: call    InputGlobals__QueryControlState
0x5D70F3: test    eax, eax
0x5D70F5: jnz     short loc_5D7100
0x5D70F7: mov     byte ptr ds:0B3B729h, 1
0x5D70FE: jmp     short loc_5D7145
0x5D7100: cmp     ds:0B3B729h, bl
0x5D7106: jz      short loc_5D7145
0x5D7108: push    1; a3
0x5D710A: push    10h; a2
0x5D710C: mov     ecx, esi; this
0x5D710E: call    InputGlobals__QueryControlState
0x5D7113: test    eax, eax
0x5D7115: jz      short loc_5D7145
0x5D7117: mov     ecx, ds:0B333C4h; this
0x5D711D: call    PlayerCharacter__IsSleeping?
0x5D7122: test    al, al
0x5D7124: jz      short loc_5D7139
0x5D7126: mov     eax, ds:0B333C4h
0x5D712B: mov     [eax+590h], ebx
0x5D7131: mov     [eax+594h], bl
0x5D7137: jmp     short loc_5D7140
0x5D7139: mov     byte ptr ds:0B3B72Bh, 1
0x5D7140: call    ClsoeSleepWaitMenu
0x5D7145: cmp     ds:0B3B728h, bl
0x5D714B: jz      short loc_5D7187
0x5D714D: push    3F4h
0x5D7152: call    Menu_GetOpenMenuTile
0x5D7157: mov     esi, eax
0x5D7159: add     esp, 4
0x5D715C: cmp     esi, ebx
0x5D715E: jz      short loc_5D7187
0x5D7160: fld     dword ptr ds:0B3B724h
0x5D7166: fsub    dword ptr ds:0B33E9Ch
0x5D716C: fstp    dword ptr ds:0B3B724h
0x5D7172: fldz
0x5D7174: fld     dword ptr ds:0B3B724h
0x5D717A: fcom    st(1)
0x5D717C: fnstsw  ax
0x5D717E: fstp    st(1)
0x5D7180: test    ah, 41h
0x5D7183: jnz     short loc_5D719B
0x5D7185: fstp    st
0x5D7187: xor     al, al
0x5D7189: mov     ecx, [esp+30h+var_C]
0x5D718D: mov     large fs:0, ecx
0x5D7194: pop     ecx
0x5D7195: pop     esi
0x5D7196: pop     ebx
0x5D7197: add     esp, 24h
0x5D719A: retn
0x5D719B: fadd    qword ptr ds:0A2F928h
0x5D71A1: mov     ecx, ds:0B333C4h; this
0x5D71A7: fstp    dword ptr ds:0B3B724h
0x5D71AD: call    PlayerCharacter__IsSleeping?
0x5D71B2: test    al, al
0x5D71B4: jnz     short loc_5D71CF
0x5D71B6: call    ClsoeSleepWaitMenu
0x5D71BB: xor     al, al
0x5D71BD: mov     ecx, [esp+30h+var_C]
0x5D71C1: mov     large fs:0, ecx
0x5D71C8: pop     ecx
0x5D71C9: pop     esi
0x5D71CA: pop     ebx
0x5D71CB: add     esp, 24h
0x5D71CE: retn
0x5D71CF: mov     ecx, esi
0x5D71D1: call    Tile_GetParentMenu
0x5D71D6: cmp     eax, ebx
0x5D71D8: jz      short loc_5D7187
0x5D71DA: push    ebx; int
0x5D71DB: push    offset ??_R0?AVSleepWaitMenu@@@8; struct TypeDescriptor *
0x5D71E0: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D71E5: push    ebx; int
0x5D71E6: push    eax; void *
0x5D71E7: call    OblivionDynamicCast
0x5D71EC: mov     esi, eax
0x5D71EE: add     esp, 14h
0x5D71F1: cmp     esi, ebx
0x5D71F3: jz      short loc_5D7187
0x5D71F5: cmp     [esi+4Ch], bl
0x5D71F8: jz      short loc_5D721F
0x5D71FA: mov     edx, ds:0B333C4h
0x5D7200: cmp     [edx+1DCh], bl
0x5D7206: jz      short loc_5D721F
0x5D7208: cmp     ds:0B3B72Bh, bl
0x5D720E: jnz     short loc_5D721F
0x5D7210: cmp     ds:0B14E88h, bl
0x5D7216: jnz     short loc_5D721F
0x5D7218: mov     byte ptr ds:0B3A6D1h, 1
0x5D721F: mov     ecx, ds:0B333A0h
0x5D7225: call    ScriptRunner_RunScript
0x5D722A: mov     ecx, ds:0B333C4h
0x5D7230: call    sub_65F770
0x5D7235: fld     dword ptr ds:0A6B328h
0x5D723B: mov     ecx, [esi+28h]; this
0x5D723E: push    ecx
0x5D723F: fstp    [esp+34h+a2]; a3
0x5D7242: push    0FB3h; a2
0x5D7247: call    Tile_SetFloat
0x5D724C: mov     eax, ds:0B333C4h
0x5D7251: mov     ecx, [eax+590h]
0x5D7257: mov     [esp+30h+var_20], ecx
0x5D725B: mov     ecx, [esi+28h]; this
0x5D725E: fild    [esp+30h+var_20]
0x5D7262: push    ecx
0x5D7263: fstp    [esp+34h+a2]; a3
0x5D7266: push    0FB3h; a2
0x5D726B: call    Tile_SetFloat
0x5D7270: fldz
0x5D7272: mov     ecx, [esi+28h]; this
0x5D7275: push    ecx
0x5D7276: fstp    [esp+34h+a2]; a3
0x5D7279: push    0FB3h; a2
0x5D727E: call    Tile_SetFloat
0x5D7283: fld1
0x5D7285: mov     ecx, [esi+44h]; this
0x5D7288: push    ecx
0x5D7289: fstp    [esp+34h+a2]; a3
0x5D728C: push    0FA1h; a2
0x5D7291: call    Tile_SetFloat
0x5D7296: mov     [esp+30h+var_1C], ebx
0x5D729A: mov     [esp+30h+var_18], bx
0x5D729F: mov     [esp+30h+var_16], bx
0x5D72A4: mov     ecx, offset TimeGlobals
0x5D72A9: mov     [esp+30h+var_4], ebx
0x5D72AD: call    TimeGlobals_GetGameHour
0x5D72B2: fstp    [esp+30h+var_20]
0x5D72B6: fld     [esp+30h+var_20]
0x5D72BA: fld     st
0x5D72BC: call    Double_To_SInt32
0x5D72C1: movsx   edx, al
0x5D72C4: mov     [esp+30h+var_20], edx
0x5D72C8: fild    [esp+30h+var_20]
0x5D72CC: fsub    st(1), st
0x5D72CE: fxch    st(1)
0x5D72D0: fmul    qword ptr ds:0A2FCC8h
0x5D72D6: call    Double_To_SInt32
0x5D72DB: fld1
0x5D72DD: fcomp   st(1)
0x5D72DF: mov     [esp+30h+var_21], al
0x5D72E3: fnstsw  ax
0x5D72E5: fld     qword ptr ds:0A2F910h
0x5D72EB: test    ah, 41h
0x5D72EE: jnz     short loc_5D72F4
0x5D72F0: fld     st
0x5D72F2: jmp     short loc_5D7301
0x5D72F4: fcom    st(1)
0x5D72F6: fnstsw  ax
0x5D72F8: fld     st(1)
0x5D72FA: test    ah, 5
0x5D72FD: jp      short loc_5D7301
0x5D72FF: fsub    st, st(1)
0x5D7301: call    Double_To_SInt32
0x5D7306: fcompp
0x5D7308: mov     cl, al
0x5D730A: fnstsw  ax
0x5D730C: test    ah, 41h
0x5D730F: mov     eax, offset aPm; "pm"
0x5D7314: jnp     short loc_5D731B
0x5D7316: mov     eax, offset aAm; "am"
0x5D731B: push    eax
0x5D731C: movsx   eax, [esp+34h+var_21]
0x5D7321: movsx   ecx, cl
0x5D7324: push    eax
0x5D7325: push    ecx
0x5D7326: mov     ecx, offset TimeGlobals
0x5D732B: call    TimeGlobals_GetGameDayOfWeekName
0x5D7330: push    eax; ArgList
0x5D7331: lea     edx, [esp+40h+var_1C]
0x5D7335: push    offset aSD02dS; "%s %d:%02d %s"
0x5D733A: push    edx; int
0x5D733B: call    BSStringT_Static_Format
0x5D7340: mov     eax, [esp+48h+var_1C]
0x5D7344: mov     ecx, [esi+38h]
0x5D7347: add     esp, 18h
0x5D734A: push    eax
0x5D734B: push    0FDEh
0x5D7350: call    Tile_SetString
0x5D7355: lea     ecx, [esp+30h+var_14]
0x5D7359: push    ecx
0x5D735A: mov     ecx, offset TimeGlobals
0x5D735F: call    sub_402E50
0x5D7364: push    eax
0x5D7365: lea     ecx, [esp+34h+var_1C]
0x5D7369: mov     byte ptr [esp+34h+var_4], 1
0x5D736E: call    sub_4FB4C0
0x5D7373: lea     ecx, [esp+30h+var_14]; void *
0x5D7377: mov     byte ptr [esp+30h+var_4], bl
0x5D737B: call    BSStringT_Clear
0x5D7380: mov     edx, [esp+30h+var_1C]
0x5D7384: mov     ecx, [esi+3Ch]
0x5D7387: push    edx
0x5D7388: push    0FDEh
0x5D738D: call    Tile_SetString
0x5D7392: lea     ecx, [esp+30h+var_1C]; void *
0x5D7396: mov     [esp+30h+var_4], 0FFFFFFFFh
0x5D739E: call    BSStringT_Clear
0x5D73A3: mov     al, 1
0x5D73A5: mov     ecx, [esp+30h+var_C]
0x5D73A9: mov     large fs:0, ecx
0x5D73B0: pop     ecx
0x5D73B1: pop     esi
0x5D73B2: pop     ebx
0x5D73B3: add     esp, 24h
0x5D73B6: retn
