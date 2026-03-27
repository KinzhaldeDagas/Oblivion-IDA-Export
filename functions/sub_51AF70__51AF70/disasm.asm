0x51AF70: sub     esp, 34h
0x51AF73: fld     [esp+34h+arg_8]
0x51AF77: mov     [esp+34h+var_28], ecx
0x51AF7B: fld     [esp+34h+arg_4]
0x51AF7F: mov     [esp+34h+var_31], 0
0x51AF84: fcom    st(1)
0x51AF86: fnstsw  ax
0x51AF88: test    ah, 41h
0x51AF8B: jnz     short loc_51AF92
0x51AF8D: mov     [esp+34h+var_31], 1
0x51AF92: mov     eax, [ecx+24h]
0x51AF95: xor     edx, edx
0x51AF97: cmp     eax, edx
0x51AF99: mov     [esp+34h+var_2C], edx
0x51AF9D: jbe     loc_51B438
0x51AFA3: push    ebx
0x51AFA4: push    ebp
0x51AFA5: push    esi
0x51AFA6: push    edi
0x51AFA7: mov     edi, [esp+44h+arg_0]
0x51AFAB: mov     [esp+44h+var_30], edx
0x51AFAF: jmp     short loc_51AFB9
0x51AFB1: fld     [esp+44h+arg_8]
0x51AFB5: fld     [esp+44h+arg_4]
0x51AFB9: cmp     edx, eax
0x51AFBB: jnb     short loc_51AFC6
0x51AFBD: mov     ebp, [ecx+28h]
0x51AFC0: add     ebp, [esp+44h+var_30]
0x51AFC4: jmp     short loc_51AFC8
0x51AFC6: xor     ebp, ebp
0x51AFC8: cmp     [esp+44h+var_31], 0
0x51AFCD: fld     dword ptr [ebp+0]
0x51AFD0: fstp    [esp+44h+arg_0]
0x51AFD4: fld     [esp+44h+arg_0]
0x51AFD8: jz      short loc_51AFEC
0x51AFDA: fcom    st(1)
0x51AFDC: fnstsw  ax
0x51AFDE: test    ah, 41h
0x51AFE1: jz      short loc_51B00A
0x51AFE3: fcom    st(2)
0x51AFE5: fnstsw  ax
0x51AFE7: test    ah, 41h
0x51AFEA: jnp     short loc_51B00A
0x51AFEC: fcom    st(1)
0x51AFEE: fnstsw  ax
0x51AFF0: fstp    st(1)
0x51AFF2: test    ah, 41h
0x51AFF5: jnz     loc_51B40B
0x51AFFB: fcompp
0x51AFFD: fnstsw  ax
0x51AFFF: test    ah, 41h
0x51B002: jp      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B008: jmp     short loc_51B010
0x51B00A: fstp    st
0x51B00C: fstp    st
0x51B00E: fstp    st
0x51B010: mov     eax, [ebp+0Ch]
0x51B013: test    eax, eax
0x51B015: jz      loc_51B110
0x51B01B: mov     ecx, ds:0B33398h
0x51B021: mov     ebx, [ecx+24h]
0x51B024: test    ebx, ebx
0x51B026: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B02C: mov     ecx, [eax+3Ch]
0x51B02F: mov     edx, [eax+38h]
0x51B032: shr     ecx, 6
0x51B035: and     cl, 1
0x51B038: neg     cl
0x51B03A: push    1
0x51B03C: mov     [esp+48h+var_C], edx
0x51B040: mov     edx, [eax+40h]
0x51B043: mov     eax, [eax+0Ch]
0x51B046: mov     [esp+48h+var_4], edx
0x51B04A: sbb     ecx, ecx
0x51B04C: add     ecx, 2
0x51B04F: or      ecx, 100h
0x51B055: push    ecx
0x51B056: push    eax
0x51B057: mov     ecx, ebx
0x51B059: call    OSGLobals_PlaySound
0x51B05E: mov     esi, eax
0x51B060: test    esi, esi
0x51B062: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B068: mov     eax, [edi]
0x51B06A: mov     edx, [eax+174h]
0x51B070: mov     ecx, edi
0x51B072: call    edx
0x51B074: mov     ecx, [eax]
0x51B076: mov     edx, [eax+4]
0x51B079: mov     eax, [eax+8]
0x51B07C: sub     esp, 0Ch
0x51B07F: mov     [esp+50h+var_1C], eax
0x51B083: fld     [esp+50h+var_1C]
0x51B087: fstp    [esp+50h+var_48]; float
0x51B08B: mov     [esp+50h+var_20], edx
0x51B08F: fld     [esp+50h+var_20]
0x51B093: mov     [esp+50h+var_24], ecx
0x51B097: fstp    [esp+50h+var_4C]; float
0x51B09B: mov     ecx, esi
0x51B09D: fld     [esp+50h+var_24]
0x51B0A1: fstp    [esp+50h+var_50]; float
0x51B0A4: call    sub_6B7360
0x51B0A9: movzx   ecx, byte ptr [ebp+4]
0x51B0AD: mov     [esp+44h+arg_0], ecx
0x51B0B1: push    ecx
0x51B0B2: mov     ecx, esi
0x51B0B4: fild    [esp+48h+arg_0]
0x51B0B8: fdiv    qword ptr ds:0A3DDD8h
0x51B0BE: fstp    [esp+48h+arg_0]
0x51B0C2: fld     [esp+48h+arg_0]
0x51B0C6: fstp    [esp+48h+var_48]; float
0x51B0C9: call    sub_6B7280
0x51B0CE: fld     dword ptr [ebp+8]
0x51B0D1: push    ecx
0x51B0D2: fstp    [esp+48h+var_48]; float
0x51B0D5: mov     ecx, esi
0x51B0D7: call    sub_6B7310
0x51B0DC: mov     edx, [esi]
0x51B0DE: push    edi
0x51B0DF: push    edx
0x51B0E0: mov     ecx, ebx
0x51B0E2: call    sub_6AC3E0
0x51B0E7: mov     ebp, [ebp+0Ch]
0x51B0EA: mov     eax, [ebp+38h]
0x51B0ED: mov     ecx, [ebp+40h]
0x51B0F0: mov     [esp+44h+var_C], eax
0x51B0F4: mov     eax, [ebp+3Ch]
0x51B0F7: shr     eax, 4
0x51B0FA: and     eax, 0FFFFFF01h
0x51B0FF: mov     [esp+44h+var_4], ecx
0x51B103: push    eax
0x51B104: mov     ecx, esi
0x51B106: call    sub_6B7190
0x51B10B: jmp     loc_51B1F2
0x51B110: movzx   eax, byte ptr [ebp+4]
0x51B114: cmp     eax, 0Fh; switch 16 cases
0x51B117: ja      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B11D: jmp     ds:jpt_51B11D[eax*4]; switch jump
0x51B124: mov     ecx, ds:0B333C4h; jumptable 0051B11D case 13
0x51B12A: push    edi
0x51B12B: call    sub_65DC50
0x51B130: jmp     def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B135: mov     edx, [esp+44h+arg_C]; jumptable 0051B11D case 12
0x51B139: fld1
0x51B13B: mov     eax, [edx+20h]
0x51B13E: fstp    [esp+44h+arg_0]
0x51B142: cmp     dword ptr [eax+0Ch], 0
0x51B146: jz      short loc_51B16E
0x51B148: mov     ebp, [ebp+8]
0x51B14B: mov     edx, [eax+10h]
0x51B14E: mov     ecx, ebp
0x51B150: and     ecx, 0FFh
0x51B156: mov     eax, [edx+ecx*8+4]
0x51B15A: shr     ebp, 8
0x51B15D: lea     eax, [eax+ebp+11h]
0x51B161: push    eax; String
0x51B162: call    _atof
0x51B167: fstp    [esp+48h+arg_0]
0x51B16B: add     esp, 4
0x51B16E: fld     [esp+44h+arg_0]
0x51B172: push    ecx
0x51B173: mov     ecx, ds:0B33398h
0x51B179: fstp    [esp+48h+var_48]; float
0x51B17C: mov     ecx, [ecx+24h]
0x51B17F: push    edi; int
0x51B180: call    sub_6AC420
0x51B185: jmp     def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B18A: mov     edx, [edi]; jumptable 0051B11D case 14
0x51B18C: mov     eax, [edx+190h]
0x51B192: mov     ecx, edi
0x51B194: call    eax
0x51B196: test    al, al
0x51B198: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B19E: push    0; int
0x51B1A0: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x51B1A5: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51B1AA: push    0; int
0x51B1AC: push    edi; void *
0x51B1AD: call    OblivionDynamicCast
0x51B1B2: mov     esi, eax
0x51B1B4: add     esp, 14h
0x51B1B7: test    esi, esi
0x51B1B9: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B1BF: mov     edx, [esi]
0x51B1C1: mov     eax, [edx+388h]
0x51B1C7: mov     ecx, esi
0x51B1C9: call    eax
0x51B1CB: test    eax, eax
0x51B1CD: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B1D3: push    1
0x51B1D5: push    102h
0x51B1DA: push    0
0x51B1DC: push    offset aFsthorsesoft; "FSTHorseSoft"
0x51B1E1: mov     ecx, esi
0x51B1E3: call    sub_65A970
0x51B1E8: mov     esi, eax
0x51B1EA: test    esi, esi
0x51B1EC: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B1F2: mov     ecx, esi; this
0x51B1F4: call    sub_6B73E0
0x51B1F9: push    esi
0x51B1FA: call    FormHeapFree
0x51B1FF: add     esp, 4
0x51B202: jmp     def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B207: mov     edx, [edi]; jumptable 0051B11D case 15
0x51B209: mov     eax, [edx+190h]
0x51B20F: mov     ecx, edi
0x51B211: call    eax
0x51B213: test    al, al
0x51B215: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B21B: push    0; int
0x51B21D: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x51B222: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51B227: push    0; int
0x51B229: push    edi; void *
0x51B22A: call    OblivionDynamicCast
0x51B22F: mov     esi, eax
0x51B231: add     esp, 14h
0x51B234: test    esi, esi
0x51B236: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B23C: mov     edx, [esi]
0x51B23E: mov     eax, [edx+388h]
0x51B244: mov     ecx, esi
0x51B246: call    eax
0x51B248: test    eax, eax
0x51B24A: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B250: push    1
0x51B252: push    102h
0x51B257: push    0
0x51B259: push    offset aFsthorseride; "FSTHorseRide"
0x51B25E: jmp     short loc_51B1E1
0x51B260: push    eax; jumptable 0051B11D cases 0-3
0x51B261: push    edi
0x51B262: call    sub_6B1210
0x51B267: add     esp, 8
0x51B26A: jmp     def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B26F: mov     edx, [edi]; jumptable 0051B11D cases 4-6
0x51B271: mov     eax, [edx+190h]
0x51B277: mov     ecx, edi
0x51B279: call    eax
0x51B27B: test    al, al
0x51B27D: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B283: push    0; int
0x51B285: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51B28A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51B28F: push    0; int
0x51B291: push    edi; void *
0x51B292: call    OblivionDynamicCast
0x51B297: add     esp, 14h
0x51B29A: test    eax, eax
0x51B29C: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B2A2: mov     ecx, eax; this
0x51B2A4: call    Actor_IsCreature
0x51B2A9: test    al, al
0x51B2AB: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B2B1: mov     edx, [edi]
0x51B2B3: mov     eax, [edx+170h]
0x51B2B9: push    0; int
0x51B2BB: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x51B2C0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x51B2C5: push    0; int
0x51B2C7: mov     ecx, edi
0x51B2C9: call    eax
0x51B2CB: push    eax; void *
0x51B2CC: call    OblivionDynamicCast
0x51B2D1: mov     ecx, ds:0B33398h
0x51B2D7: movzx   edx, byte ptr [ebp+4]
0x51B2DB: mov     ebx, [ecx+24h]
0x51B2DE: add     esp, 14h
0x51B2E1: push    edx
0x51B2E2: mov     ecx, eax
0x51B2E4: call    sub_51CEC0
0x51B2E9: test    eax, eax
0x51B2EB: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B2F1: test    ebx, ebx
0x51B2F3: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B2F9: mov     eax, [eax+0Ch]
0x51B2FC: push    1
0x51B2FE: push    102h
0x51B303: push    eax
0x51B304: mov     ecx, ebx
0x51B306: call    OSGLobals_PlaySound
0x51B30B: mov     esi, eax
0x51B30D: test    esi, esi
0x51B30F: jz      def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B315: mov     eax, [edi]
0x51B317: mov     edx, [eax+174h]
0x51B31D: mov     ecx, edi
0x51B31F: call    edx
0x51B321: mov     ecx, [eax]
0x51B323: mov     edx, [eax+4]
0x51B326: mov     eax, [eax+8]
0x51B329: sub     esp, 0Ch
0x51B32C: mov     [esp+50h+var_10], eax
0x51B330: fld     [esp+50h+var_10]
0x51B334: fstp    [esp+50h+var_48]; float
0x51B338: mov     [esp+50h+var_14], edx
0x51B33C: fld     [esp+50h+var_14]
0x51B340: mov     [esp+50h+var_18], ecx
0x51B344: fstp    [esp+50h+var_4C]; float
0x51B348: mov     ecx, esi
0x51B34A: fld     [esp+50h+var_18]
0x51B34E: fstp    [esp+50h+var_50]; float
0x51B351: call    sub_6B7360
0x51B356: mov     ecx, [esi]
0x51B358: push    edi
0x51B359: push    ecx
0x51B35A: mov     ecx, ebx
0x51B35C: call    sub_6AC3E0
0x51B361: fld     dword ptr ds:0A52A74h
0x51B367: push    ecx
0x51B368: mov     ecx, esi
0x51B36A: fstp    [esp+48h+var_48]; float
0x51B36D: call    sub_6B7280
0x51B372: fld1
0x51B374: push    ecx
0x51B375: fstp    [esp+48h+var_48]; float
0x51B378: mov     ecx, esi
0x51B37A: call    sub_6B7310
0x51B37F: push    0
0x51B381: mov     ecx, esi
0x51B383: call    sub_6B71C0
0x51B388: jmp     loc_51B1F2
0x51B38D: push    9; jumptable 0051B11D case 9
0x51B38F: push    edi
0x51B390: call    sub_6B07F0
0x51B395: add     esp, 8
0x51B398: jmp     short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B39A: push    0Ah; jumptable 0051B11D case 10
0x51B39C: push    edi
0x51B39D: call    sub_6B07F0
0x51B3A2: add     esp, 8
0x51B3A5: jmp     short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B3A7: cmp     [esp+44h+arg_C], 0; jumptable 0051B11D case 11
0x51B3AC: jz      short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B3AE: test    edi, edi
0x51B3B0: jz      short loc_51B3C3
0x51B3B2: mov     eax, ds:0B333C4h
0x51B3B7: cmp     edi, eax
0x51B3B9: jnz     short loc_51B3C3
0x51B3BB: mov     eax, [eax+5D8h]
0x51B3C1: jmp     short loc_51B3C5
0x51B3C3: xor     eax, eax
0x51B3C5: mov     edx, [edi]
0x51B3C7: push    eax
0x51B3C8: mov     eax, [edx+13Ch]
0x51B3CE: mov     ecx, edi
0x51B3D0: call    eax
0x51B3D2: test    eax, eax
0x51B3D4: jz      short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B3D6: mov     ecx, [esp+44h+arg_C]
0x51B3DA: mov     ecx, [ecx+20h]
0x51B3DD: cmp     dword ptr [ecx+0Ch], 0
0x51B3E1: jz      short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B3E3: mov     ebp, [ebp+8]
0x51B3E6: mov     ecx, [ecx+10h]
0x51B3E9: mov     edx, [eax]
0x51B3EB: mov     edx, [edx+0D8h]
0x51B3F1: mov     esi, ebp
0x51B3F3: and     esi, 0FFh
0x51B3F9: mov     ecx, [ecx+esi*8+4]
0x51B3FD: shr     ebp, 8
0x51B400: lea     ecx, [ecx+ebp+0Bh]
0x51B404: push    ecx
0x51B405: mov     ecx, eax
0x51B407: call    edx
0x51B409: jmp     short def_51B11D; jumptable 0051B11D default case, cases 7,8
0x51B40B: fstp    st
0x51B40D: fstp    st
0x51B40F: mov     edx, [esp+44h+var_2C]; jumptable 0051B11D default case, cases 7,8
0x51B413: mov     ecx, [esp+44h+var_28]
0x51B417: mov     eax, [ecx+24h]
0x51B41A: add     [esp+44h+var_30], 10h
0x51B41F: add     edx, 1
0x51B422: cmp     edx, eax
0x51B424: mov     [esp+44h+var_2C], edx
0x51B428: jb      loc_51AFB1
0x51B42E: pop     edi
0x51B42F: pop     esi
0x51B430: pop     ebp
0x51B431: pop     ebx
0x51B432: add     esp, 34h
0x51B435: retn    10h
0x51B438: fstp    st
0x51B43A: fstp    st
0x51B43C: add     esp, 34h
0x51B43F: retn    10h
