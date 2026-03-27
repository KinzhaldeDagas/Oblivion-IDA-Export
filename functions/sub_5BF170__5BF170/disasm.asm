0x5BF170: push    0FFFFFFFFh
0x5BF172: push    offset SEH_4F28B0
0x5BF177: mov     eax, large fs:0
0x5BF17D: push    eax
0x5BF17E: sub     esp, 14h
0x5BF181: push    ebx; a3
0x5BF182: push    ebp; a3
0x5BF183: push    esi; a3
0x5BF184: push    edi; a3
0x5BF185: mov     eax, ds:0B30AACh
0x5BF18A: xor     eax, esp
0x5BF18C: push    eax; a3
0x5BF18D: lea     eax, [esp+34h+var_C]
0x5BF191: mov     large fs:0, eax
0x5BF197: push    40Ah
0x5BF19C: call    Menu_GetOpenMenuTile
0x5BF1A1: xor     ebx, ebx
0x5BF1A3: add     esp, 4
0x5BF1A6: cmp     eax, ebx
0x5BF1A8: jz      loc_5BF453
0x5BF1AE: mov     ecx, eax
0x5BF1B0: call    Tile_GetParentMenu
0x5BF1B5: mov     esi, eax
0x5BF1B7: cmp     esi, ebx
0x5BF1B9: jz      loc_5BF453
0x5BF1BF: mov     [esp+34h+var_14], ebx
0x5BF1C3: mov     [esp+34h+var_10], bx
0x5BF1C8: mov     [esp+34h+var_E], bx
0x5BF1CD: mov     ecx, [esi+0D8h]
0x5BF1D3: mov     eax, [ecx]
0x5BF1D5: mov     edx, ds:0B333C4h
0x5BF1DB: mov     eax, [eax+224h]
0x5BF1E1: push    edx
0x5BF1E2: mov     [esp+38h+var_4], ebx
0x5BF1E6: call    eax
0x5BF1E8: push    eax; ArgList
0x5BF1E9: lea     ecx, [esp+38h+var_14]
0x5BF1ED: push    offset aI; "%i"
0x5BF1F2: push    ecx; int
0x5BF1F3: call    BSStringT_Static_Format
0x5BF1F8: mov     ebp, [esp+40h+var_14]
0x5BF1FC: mov     ecx, [esi+0CCh]
0x5BF202: add     esp, 0Ch
0x5BF205: push    ebp
0x5BF206: push    0FDEh
0x5BF20B: call    Tile_SetString
0x5BF210: fld     dword ptr ds:0B38E40h
0x5BF216: mov     ecx, [esi+0D8h]
0x5BF21C: fstp    [esp+34h+a3]
0x5BF220: fld     dword ptr ds:0B38E48h
0x5BF226: mov     edx, [ecx]
0x5BF228: mov     eax, [edx+284h]
0x5BF22E: fstp    [esp+34h+var_1C]; a3
0x5BF232: fld     dword ptr ds:0B38E38h
0x5BF238: mov     edi, ds:0B38E50h
0x5BF23E: fstp    [esp+34h+var_18]
0x5BF242: push    ecx
0x5BF243: fld     dword ptr ds:0B38E88h
0x5BF249: fstp    [esp+38h+a2]
0x5BF24C: push    20h ; ' '
0x5BF24E: call    eax
0x5BF250: mov     ecx, ds:0B333C4h
0x5BF256: mov     edx, [ecx]
0x5BF258: push    eax; float
0x5BF259: mov     eax, [edx+284h]
0x5BF25F: push    20h ; ' '; int
0x5BF261: call    eax
0x5BF263: fld     [esp+3Ch+a3]
0x5BF267: push    eax; int
0x5BF268: push    ecx
0x5BF269: fstp    [esp+44h+var_44]; float
0x5BF26C: push    edi; int
0x5BF26D: fld     [esp+48h+var_1C]
0x5BF271: push    ecx
0x5BF272: mov     ecx, [esi+0D8h]
0x5BF278: fstp    [esp+4Ch+var_4C]; float
0x5BF27B: call    Actor_GetLevel
0x5BF280: movzx   ecx, ax
0x5BF283: push    ecx; int
0x5BF284: mov     ecx, ds:0B333C4h
0x5BF28A: call    Actor_GetLevel
0x5BF28F: movzx   edx, ax
0x5BF292: fld     [esp+50h+var_18]
0x5BF296: push    edx; int
0x5BF297: push    ecx
0x5BF298: fstp    [esp+58h+var_58]; float
0x5BF29B: call    sub_547B00
0x5BF2A0: mov     ecx, ds:0B333C4h
0x5BF2A6: add     esp, 24h
0x5BF2A9: push    20h ; ' '
0x5BF2AB: mov     [esp+38h+a3], eax
0x5BF2AF: call    Actor_GetSkillMasteryLevel
0x5BF2B4: cmp     eax, 4
0x5BF2B7: jnz     short loc_5BF2CC
0x5BF2B9: fild    [esp+34h+a3]
0x5BF2BD: fmul    qword ptr ds:0A2FAA0h
0x5BF2C3: call    Double_To_SInt32
0x5BF2C8: mov     [esp+34h+a3], eax; a3
0x5BF2CC: mov     eax, [esi+0D8h]
0x5BF2D2: fld     dword ptr ds:0B38E30h
0x5BF2D8: mov     edi, eax
0x5BF2DA: fstp    [esp+34h+var_18]
0x5BF2DE: mov     edx, [edi]
0x5BF2E0: mov     eax, [edx+284h]
0x5BF2E6: push    20h ; ' '; int
0x5BF2E8: mov     ecx, edi
0x5BF2EA: call    eax
0x5BF2EC: mov     ecx, ds:0B333C4h
0x5BF2F2: mov     edx, [ecx]
0x5BF2F4: push    eax
0x5BF2F5: mov     eax, [edx+284h]
0x5BF2FB: push    20h ; ' '
0x5BF2FD: call    eax
0x5BF2FF: mov     edx, [edi]
0x5BF301: push    eax
0x5BF302: mov     eax, [edx+284h]
0x5BF308: push    24h ; '$'
0x5BF30A: mov     ecx, edi
0x5BF30C: call    eax
0x5BF30E: fld     [esp+38h+var_14]
0x5BF312: mov     edx, [edi]
0x5BF314: mov     edx, [edx+224h]
0x5BF31A: push    eax; int
0x5BF31B: mov     eax, ds:0B333C4h
0x5BF320: push    ecx
0x5BF321: fstp    [esp+40h+var_40]; int
0x5BF324: push    eax; float
0x5BF325: mov     ecx, edi
0x5BF327: call    edx
0x5BF329: push    eax; int
0x5BF32A: call    sub_547B40
0x5BF32F: fild    [esp+48h+a3]
0x5BF333: mov     ecx, [esi+0B0h]; this
0x5BF339: add     esp, 10h
0x5BF33C: fstp    [esp+38h+a2]; a3
0x5BF33F: mov     edi, eax
0x5BF341: push    0FAEh; a2
0x5BF346: mov     [esp+3Ch+var_18], edi
0x5BF34A: call    Tile_SetFloat
0x5BF34F: fild    [esp+34h+var_18]
0x5BF353: mov     ecx, [esi+0B0h]; this
0x5BF359: push    ecx
0x5BF35A: fstp    [esp+38h+a2]; a3
0x5BF35D: push    0FAFh; a2
0x5BF362: call    Tile_SetFloat
0x5BF367: mov     ecx, [esi+0D8h]; this
0x5BF36D: call    TESObjectREFR_GetName
0x5BF372: mov     ecx, [esi+0D4h]
0x5BF378: push    eax
0x5BF379: push    0FDEh
0x5BF37E: call    Tile_SetString
0x5BF383: cmp     edi, ebx
0x5BF385: mov     ecx, [esi+0B0h]; this
0x5BF38B: push    ecx
0x5BF38C: jle     short loc_5BF396
0x5BF38E: fld     dword ptr ds:0A40098h
0x5BF394: jmp     short loc_5BF398
0x5BF396: fldz
0x5BF398: fstp    [esp+38h+a2]; a3
0x5BF39B: push    0FA7h; a2
0x5BF3A0: call    Tile_SetFloat
0x5BF3A5: cmp     [esp+34h+arg_0], bl
0x5BF3A9: jnz     loc_5BF44A
0x5BF3AF: mov     edi, 1
0x5BF3B4: mov     ecx, esi
0x5BF3B6: mov     [esi+28h], edi
0x5BF3B9: call    sub_5BEB70
0x5BF3BE: fldz
0x5BF3C0: test    al, al
0x5BF3C2: mov     ecx, [esi+90h]; this
0x5BF3C8: push    ecx
0x5BF3C9: fstp    [esp+38h+a2]; a3
0x5BF3CC: push    0FA7h; a2
0x5BF3D1: jnz     short loc_5BF42C
0x5BF3D3: call    Tile_SetFloat
0x5BF3D8: fld     dword ptr ds:0A40098h
0x5BF3DE: mov     ecx, [esi+94h]; this
0x5BF3E4: push    ecx
0x5BF3E5: fstp    [esp+38h+a2]; a3
0x5BF3E8: push    0FA7h; a2
0x5BF3ED: call    Tile_SetFloat
0x5BF3F2: fld1
0x5BF3F4: mov     ecx, [esi+0C4h]; this
0x5BF3FA: push    ecx
0x5BF3FB: fstp    [esp+38h+a2]; a3
0x5BF3FE: push    0FA1h; a2
0x5BF403: call    Tile_SetFloat
0x5BF408: push    ebx
0x5BF409: call    sub_5BEA90
0x5BF40E: fld     dword ptr ds:0A379B4h
0x5BF414: mov     ecx, [esi+0BCh]; this
0x5BF41A: fstp    [esp+38h+a2]; a3
0x5BF41D: push    0FAFh; a2
0x5BF422: call    Tile_SetFloat
0x5BF427: mov     [esi+28h], edi
0x5BF42A: jmp     short loc_5BF44A
0x5BF42C: call    Tile_SetFloat
0x5BF431: fldz
0x5BF433: mov     ecx, [esi+94h]; this
0x5BF439: push    ecx
0x5BF43A: fstp    [esp+38h+a2]; a3
0x5BF43D: push    0FA7h; a2
0x5BF442: call    Tile_SetFloat
0x5BF447: mov     [esi+28h], ebx
0x5BF44A: push    ebp
0x5BF44B: call    FormHeapFree
0x5BF450: add     esp, 4
0x5BF453: mov     ecx, dword ptr [esp+34h+var_C]
0x5BF457: mov     large fs:0, ecx
0x5BF45E: pop     ecx
0x5BF45F: pop     edi
0x5BF460: pop     esi
0x5BF461: pop     ebp
0x5BF462: pop     ebx
0x5BF463: add     esp, 20h
0x5BF466: retn
