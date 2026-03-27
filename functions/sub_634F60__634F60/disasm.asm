0x634F60: sub     esp, 38h
0x634F63: push    ebx
0x634F64: push    ebp
0x634F65: mov     ebp, ecx
0x634F67: mov     eax, [ebp+0]
0x634F6A: mov     edx, [eax+50h]
0x634F6D: push    esi
0x634F6E: push    edi
0x634F6F: call    edx
0x634F71: test    eax, eax
0x634F73: mov     esi, [esp+48h+arg_0]
0x634F77: jz      short loc_634FD2
0x634F79: mov     eax, [ebp+0]
0x634F7C: mov     edx, [eax+50h]
0x634F7F: mov     ecx, ebp
0x634F81: call    edx
0x634F83: mov     ecx, eax
0x634F85: call    sub_419CF0
0x634F8A: test    al, al
0x634F8C: jz      loc_6350B1
0x634F92: test    esi, esi
0x634F94: jz      short loc_634F9B
0x634F96: lea     eax, [esi+68h]
0x634F99: jmp     short loc_634F9D
0x634F9B: xor     eax, eax
0x634F9D: push    0
0x634F9F: push    eax
0x634FA0: mov     eax, [ebp+0]
0x634FA3: mov     edx, [eax+50h]
0x634FA6: mov     ecx, ebp
0x634FA8: call    edx
0x634FAA: push    eax
0x634FAB: lea     ecx, [esi+5Ch]
0x634FAE: call    MagicCaster_CastMagicItem
0x634FB3: mov     eax, [ebp+0]
0x634FB6: mov     edx, [eax+50h]
0x634FB9: push    0
0x634FBB: mov     ecx, ebp
0x634FBD: call    edx
0x634FBF: mov     ecx, eax
0x634FC1: call    sub_419F10
0x634FC6: mov     eax, [ebp+0]
0x634FC9: mov     edx, [eax+54h]
0x634FCC: push    0; int
0x634FCE: mov     ecx, ebp
0x634FD0: call    edx
0x634FD2: mov     eax, [ebp+0]
0x634FD5: mov     edx, [eax+184h]
0x634FDB: mov     ecx, ebp
0x634FDD: xor     edi, edi
0x634FDF: call    edx
0x634FE1: test    eax, eax
0x634FE3: jz      short loc_634FF4
0x634FE5: cmp     byte ptr [eax+20h], 10h
0x634FE9: jnz     short loc_634FF4
0x634FEB: mov     ecx, eax
0x634FED: mov     edi, eax
0x634FEF: call    sub_626DE0
0x634FF4: mov     eax, [esi]
0x634FF6: mov     edx, [eax+330h]
0x634FFC: mov     ecx, esi
0x634FFE: mov     [esp+48h+var_2C], 0
0x635006: mov     byte ptr [esp+48h+arg_0], 0
0x63500B: call    edx
0x63500D: test    eax, eax
0x63500F: jz      short loc_635027
0x635011: mov     eax, [esi]
0x635013: mov     edx, [eax+330h]
0x635019: mov     ecx, esi
0x63501B: call    edx
0x63501D: cmp     dword ptr [eax+70h], 0Ch
0x635021: jz      loc_6350E7
0x635027: test    edi, edi
0x635029: jz      short loc_635097
0x63502B: cmp     dword ptr [edi+58h], 0
0x63502F: jnz     short loc_635037
0x635031: cmp     dword ptr [edi+54h], 0
0x635035: jz      short loc_635097
0x635037: mov     ecx, edi
0x635039: call    sub_626E60
0x63503E: test    al, al
0x635040: jz      loc_6350E7
0x635046: push    64h ; 'd'; responsibility
0x635048: push    0; a7
0x63504A: mov     ecx, esi; this
0x63504C: call    Actor_IsCreature
0x635051: mov     ecx, esi
0x635053: push    eax; a6
0x635054: mov     eax, ds:0B333C4h
0x635059: push    0; a5
0x63505B: push    0
0x63505D: push    eax
0x63505E: call    TesObjectREF_GetDistance
0x635063: mov     edx, [esi]
0x635065: mov     eax, [edx+284h]
0x63506B: push    ecx
0x63506C: fstp    [esp+5Ch+var_5C]
0x63506F: push    21h ; '!'
0x635071: mov     ecx, esi
0x635073: call    eax
0x635075: mov     edx, [esi]
0x635077: mov     edx, [edx+224h]
0x63507D: push    eax; distanceToTarget
0x63507E: mov     eax, ds:0B333C4h
0x635083: push    0; aggressionStat
0x635085: push    eax; friendlyFight?
0x635086: mov     ecx, esi
0x635088: call    edx
0x63508A: push    eax; disposition
0x63508B: call    shouldActorFight
0x635090: add     esp, 20h
0x635093: test    eax, eax
0x635095: jnz     short loc_6350E7
0x635097: mov     eax, [ebp+0]
0x63509A: mov     edx, [eax+188h]
0x6350A0: push    1
0x6350A2: push    esi
0x6350A3: mov     ecx, ebp
0x6350A5: call    edx
0x6350A7: pop     edi
0x6350A8: pop     esi
0x6350A9: pop     ebp
0x6350AA: pop     ebx
0x6350AB: add     esp, 38h
0x6350AE: retn    4
0x6350B1: mov     eax, [ebp+0]
0x6350B4: mov     edx, [eax+50h]
0x6350B7: mov     ecx, ebp
0x6350B9: call    edx
0x6350BB: mov     ecx, eax
0x6350BD: call    sub_419E50
0x6350C2: test    al, al
0x6350C4: jnz     loc_6358C7
0x6350CA: mov     eax, [ebp+0]
0x6350CD: mov     edx, [eax+50h]
0x6350D0: push    0
0x6350D2: mov     ecx, ebp
0x6350D4: call    edx
0x6350D6: mov     ecx, eax
0x6350D8: call    sub_41A610
0x6350DD: pop     edi
0x6350DE: pop     esi
0x6350DF: pop     ebp
0x6350E0: pop     ebx
0x6350E1: add     esp, 38h
0x6350E4: retn    4
0x6350E7: mov     eax, [esi]
0x6350E9: mov     edx, [eax+25Ch]
0x6350EF: mov     ecx, esi
0x6350F1: call    edx
0x6350F3: test    al, al
0x6350F5: jz      short loc_63510E
0x6350F7: fld     dword ptr [edi+4Ch]
0x6350FA: mov     byte ptr [edi+50h], 0
0x6350FE: fsub    dword ptr [edi+4Ch]
0x635101: fstp    dword ptr [edi+4Ch]
0x635104: pop     edi
0x635105: pop     esi
0x635106: pop     ebp
0x635107: pop     ebx
0x635108: add     esp, 38h
0x63510B: retn    4
0x63510E: test    edi, edi
0x635110: jz      short loc_63512E
0x635112: mov     ecx, [edi+28h]
0x635115: test    ecx, ecx
0x635117: jz      short loc_63512E
0x635119: call    sub_569E60
0x63511E: test    eax, eax
0x635120: jz      short loc_63512E
0x635122: mov     ecx, [edi+28h]
0x635125: call    sub_569E60
0x63512A: mov     [esp+48h+var_2C], eax
0x63512E: cmp     byte ptr [edi+65h], 0
0x635132: jz      short loc_63515D
0x635134: mov     eax, [esi]
0x635136: mov     edx, [eax+18Ch]
0x63513C: mov     ecx, esi
0x63513E: call    edx
0x635140: cmp     eax, 4
0x635143: jz      short loc_63515D
0x635145: mov     eax, [ebp+0]
0x635148: mov     edx, [eax+560h]
0x63514E: push    esi
0x63514F: mov     ecx, ebp
0x635151: call    edx
0x635153: pop     edi
0x635154: pop     esi
0x635155: pop     ebp
0x635156: pop     ebx
0x635157: add     esp, 38h
0x63515A: retn    4
0x63515D: mov     eax, [edi+5Ch]
0x635160: mov     ecx, esi; this
0x635162: mov     [esp+48h+var_28+4], eax
0x635166: call    TESObjectREFR_GetParentCell
0x63516B: mov     ecx, esi; this
0x63516D: mov     [esp+48h+var_34], eax
0x635171: call    TESObjectREFR_GetWorldSpace
0x635176: fld     dword ptr [edi+4Ch]
0x635179: push    esi
0x63517A: fstp    [esp+4Ch+var_18]
0x63517E: mov     ecx, edi
0x635180: mov     [esp+4Ch+var_30], eax
0x635184: call    sub_628140
0x635189: mov     ebx, eax
0x63518B: test    ebx, ebx
0x63518D: mov     [esp+48h+var_28], ebx
0x635191: jnz     short loc_6351B3
0x635193: cmp     [esp+48h+var_2C], eax
0x635197: jz      short loc_6351B3
0x635199: mov     ecx, [esp+48h+var_2C]
0x63519D: mov     edx, [ecx]
0x63519F: mov     eax, [edx+190h]
0x6351A5: call    eax
0x6351A7: test    al, al
0x6351A9: jz      short loc_6351B3
0x6351AB: mov     ebx, [esp+48h+var_2C]
0x6351AF: mov     [esp+48h+var_28], ebx
0x6351B3: test    ebx, ebx
0x6351B5: mov     cl, [edi+64h]
0x6351B8: mov     edx, [edi+40h]
0x6351BB: mov     [esp+48h+var_C], edx
0x6351BF: mov     eax, [edi+44h]
0x6351C2: mov     byte ptr [esp+48h+var_38+3], cl
0x6351C6: mov     [esp+48h+var_8], eax
0x6351CA: mov     ecx, [edi+48h]
0x6351CD: mov     byte ptr [esp+48h+var_20], 0
0x6351D2: mov     [esp+48h+var_4], ecx
0x6351D6: jz      loc_6358C7
0x6351DC: mov     ecx, [esi+58h]
0x6351DF: test    ecx, ecx
0x6351E1: jz      short loc_63525D
0x6351E3: mov     edx, [ecx]
0x6351E5: mov     eax, [edx+410h]
0x6351EB: call    eax
0x6351ED: mov     ebx, eax
0x6351EF: test    ebx, ebx
0x6351F1: jz      short loc_63525D
0x6351F3: mov     ecx, ebx
0x6351F5: call    sub_683A70
0x6351FA: test    al, al
0x6351FC: jz      short loc_63525D
0x6351FE: mov     edx, [esi]
0x635200: mov     eax, [edx+180h]
0x635206: push    1
0x635208: mov     ecx, esi
0x63520A: call    eax
0x63520C: xor     eax, eax
0x63520E: push    esi
0x63520F: mov     ecx, edi
0x635211: mov     [edi+60h], eax
0x635214: mov     [edi+5Ch], eax
0x635217: call    sub_626C10
0x63521C: push    0
0x63521E: mov     ecx, ebx
0x635220: call    sub_683A80
0x635225: mov     eax, [esp+48h+var_30]
0x635229: mov     ecx, [esp+48h+var_34]
0x63522D: mov     edx, [ebp+0]
0x635230: mov     edx, [edx+3DCh]
0x635236: push    eax
0x635237: push    ecx
0x635238: mov     ecx, [edi+40h]
0x63523B: sub     esp, 0Ch
0x63523E: mov     eax, esp
0x635240: mov     [eax], ecx
0x635242: mov     ecx, [edi+44h]
0x635245: mov     [eax+4], ecx
0x635248: mov     ecx, [edi+48h]
0x63524B: mov     [eax+8], ecx
0x63524E: push    esi
0x63524F: mov     ecx, ebp
0x635251: call    edx
0x635253: pop     edi
0x635254: pop     esi
0x635255: pop     ebp
0x635256: pop     ebx
0x635257: add     esp, 38h
0x63525A: retn    4
0x63525D: cmp     [esp+48h+var_34], 0
0x635262: jz      loc_6355DF
0x635268: mov     ebx, [esp+48h+var_2C]
0x63526C: fld     dword ptr ds:0A32048h
0x635272: test    ebx, ebx
0x635274: fstp    [esp+48h+var_1C]
0x635278: jz      short loc_6352A8
0x63527A: mov     eax, [ebx]
0x63527C: mov     edx, [eax+198h]
0x635282: push    0
0x635284: mov     ecx, ebx
0x635286: call    edx
0x635288: test    al, al
0x63528A: jnz     short loc_6352A8
0x63528C: mov     eax, [ebx+8]
0x63528F: shr     eax, 0Bh
0x635292: test    al, 1
0x635294: jnz     short loc_6352A8
0x635296: mov     ecx, [esp+48h+var_28]
0x63529A: push    0
0x63529C: push    ecx
0x63529D: mov     ecx, esi
0x63529F: call    TesObjectREF_GetDistance
0x6352A4: fstp    [esp+48h+var_1C]
0x6352A8: mov     ecx, [esp+48h+var_34]; this
0x6352AC: call    TESObjectCELL_IsInterior
0x6352B1: test    al, al
0x6352B3: jz      short loc_6352C6
0x6352B5: mov     ecx, offset flt_B37030
0x6352BA: call    GameSetting_GetSafeFloatPointer
0x6352BF: mov     byte ptr [esp+48h+arg_0], 1
0x6352C4: jmp     short loc_6352D0
0x6352C6: mov     ecx, offset flt_B37028
0x6352CB: call    GameSetting_GetSafeFloatPointer
0x6352D0: mov     ebx, [edi+60h]
0x6352D3: fld     dword ptr [eax]
0x6352D5: test    ebx, ebx
0x6352D7: fstp    [esp+48h+var_2C]
0x6352DB: jz      short loc_63531C
0x6352DD: mov     edx, [ebx]
0x6352DF: mov     eax, [edx+334h]
0x6352E5: push    1
0x6352E7: mov     ecx, ebx
0x6352E9: call    eax
0x6352EB: test    al, al
0x6352ED: jnz     short loc_635317
0x6352EF: mov     edx, [ebx]
0x6352F1: mov     eax, [edx+198h]
0x6352F7: push    0
0x6352F9: mov     ecx, ebx
0x6352FB: call    eax
0x6352FD: test    al, al
0x6352FF: jnz     short loc_635317
0x635301: mov     ecx, [ebx+8]
0x635304: shr     ecx, 0Bh
0x635307: test    cl, 1
0x63530A: jnz     short loc_635317
0x63530C: mov     ecx, ebx
0x63530E: call    IsWeaponReady
0x635313: test    al, al
0x635315: jnz     short loc_63531C
0x635317: xor     ebx, ebx
0x635319: mov     [edi+60h], ebx
0x63531C: fld     [esp+48h+var_1C]
0x635320: mov     ecx, [edi+5Ch]
0x635323: fld     [esp+48h+var_2C]
0x635327: mov     [esp+48h+var_28+4], ecx
0x63532B: fcompp
0x63532D: fnstsw  ax
0x63532F: fldz
0x635331: test    ah, 41h
0x635334: jnz     short loc_63533E
0x635336: test    ecx, ecx
0x635338: jnz     short loc_63533E
0x63533A: test    ebx, ebx
0x63533C: jz      short loc_635362
0x63533E: cmp     byte ptr [esp+48h+var_38+3], 0
0x635343: jnz     loc_6354BE
0x635349: fcom    [esp+48h+var_18]
0x63534D: fnstsw  ax
0x63534F: test    ah, 44h
0x635352: jp      loc_6354BE
0x635358: cmp     byte ptr [edi+3Ch], 0
0x63535C: jz      loc_6354BE
0x635362: fcomp   dword ptr [ebp+88h]
0x635368: fnstsw  ax
0x63536A: test    ah, 1
0x63536D: jnz     short loc_63537C
0x63536F: fld     dword ptr ds:0A417B4h
0x635375: mov     byte ptr [esp+48h+var_20], 1
0x63537A: jmp     short loc_635388
0x63537C: fld     dword ptr [ebp+88h]
0x635382: fsub    dword ptr ds:0B33E9Ch
0x635388: fstp    dword ptr [ebp+88h]
0x63538E: cmp     byte ptr [edi+3Ch], 0
0x635392: mov     ecx, esi; int
0x635394: jz      loc_6354AF
0x63539A: mov     edx, [esi]
0x63539C: mov     eax, [edx+250h]
0x6353A2: call    eax
0x6353A4: fcomp   dword ptr ds:0A2FAA8h
0x6353AA: fnstsw  ax
0x6353AC: test    ah, 44h
0x6353AF: jp      short loc_6353B9
0x6353B1: push    esi
0x6353B2: mov     ecx, edi
0x6353B4: call    sub_627FF0
0x6353B9: mov     ebx, [edi+60h]
0x6353BC: cmp     ebx, ds:0B333C4h
0x6353C2: jnz     short loc_6353CD
0x6353C4: mov     dword ptr [edi+60h], 0
0x6353CB: jmp     short loc_6353D1
0x6353CD: test    ebx, ebx
0x6353CF: jnz     short loc_63540C
0x6353D1: cmp     byte ptr [esp+48h+arg_0], 0
0x6353D6: mov     ecx, [esp+48h+var_20]
0x6353DA: mov     edx, [esp+48h+var_28]
0x6353DE: push    ecx; float
0x6353DF: push    edx; int
0x6353E0: lea     eax, [esp+50h+var_18]
0x6353E4: push    esi; int
0x6353E5: mov     ecx, edi
0x6353E7: push    eax; int
0x6353E8: jz      short loc_6353F1
0x6353EA: call    sub_627680
0x6353EF: jmp     short loc_6353F6
0x6353F1: call    sub_6279A0
0x6353F6: mov     ecx, [eax]
0x6353F8: mov     [esp+48h+var_C], ecx
0x6353FC: mov     edx, [eax+4]
0x6353FF: mov     [esp+48h+var_8], edx
0x635403: mov     eax, [eax+8]
0x635406: mov     [esp+48h+var_4], eax
0x63540A: jmp     short loc_635442
0x63540C: mov     edx, [ebx]
0x63540E: mov     eax, [edx+174h]
0x635414: mov     ecx, ebx
0x635416: call    eax
0x635418: mov     ecx, [eax]
0x63541A: mov     [esp+48h+var_C], ecx
0x63541E: mov     edx, [eax+4]
0x635421: mov     [esp+48h+var_8], edx
0x635425: mov     eax, [eax+8]
0x635428: mov     ecx, ebx; this
0x63542A: mov     [esp+48h+var_4], eax
0x63542E: call    TESObjectREFR_GetParentCell
0x635433: mov     ecx, ebx; this
0x635435: mov     [esp+48h+var_34], eax
0x635439: call    TESObjectREFR_GetWorldSpace
0x63543E: mov     [esp+48h+var_30], eax
0x635442: mov     ecx, esi; this
0x635444: call    TESObjectREFR_GetParentCell
0x635449: mov     ebx, [esp+48h+var_34]
0x63544D: cmp     eax, ebx
0x63544F: jz      short loc_635458
0x635451: mov     ecx, esi; this
0x635453: call    TESObjectREFR_GetWorldSpace
0x635458: cmp     byte ptr [ebp+0D0h], 0
0x63545F: jz      short loc_635496
0x635461: mov     eax, [esp+48h+var_30]
0x635465: mov     ecx, [esp+48h+var_C]
0x635469: mov     edx, [ebp+0]
0x63546C: mov     edx, [edx+3DCh]
0x635472: push    eax
0x635473: push    ebx
0x635474: sub     esp, 0Ch
0x635477: mov     eax, esp
0x635479: mov     [eax], ecx
0x63547B: mov     ecx, [esp+5Ch+var_8]
0x63547F: mov     [eax+4], ecx
0x635482: mov     ecx, [esp+5Ch+var_4]
0x635486: mov     [eax+8], ecx
0x635489: push    esi
0x63548A: mov     ecx, ebp
0x63548C: call    edx
0x63548E: test    al, al
0x635490: jz      loc_6358C7
0x635496: fld     dword ptr [edi+4Ch]
0x635499: mov     eax, [edi+5Ch]
0x63549C: fsub    dword ptr [edi+4Ch]
0x63549F: mov     [esp+48h+var_28+4], eax
0x6354A3: mov     byte ptr [edi+50h], 0
0x6354A7: fstp    dword ptr [edi+4Ch]
0x6354AA: jmp     loc_6355DF
0x6354AF: call    sub_5EAE70
0x6354B4: pop     edi
0x6354B5: pop     esi
0x6354B6: pop     ebp
0x6354B7: pop     ebx
0x6354B8: add     esp, 38h
0x6354BB: retn    4
0x6354BE: cmp     byte ptr [edi+3Ch], 0
0x6354C2: fstp    st
0x6354C4: jnz     short loc_635536
0x6354C6: mov     ebx, [edi+24h]
0x6354C9: mov     ecx, ebx
0x6354CB: call    sub_569740
0x6354D0: cmp     eax, 1
0x6354D3: mov     ecx, ebx
0x6354D5: jnz     short loc_6354E5
0x6354D7: call    sub_569800
0x6354DC: mov     [esp+48h+var_34], eax
0x6354E0: jmp     loc_6355DF
0x6354E5: call    sub_569740
0x6354EA: test    eax, eax
0x6354EC: jnz     loc_6355DF
0x6354F2: mov     ecx, ebx
0x6354F4: call    sub_5697E0
0x6354F9: mov     ebx, eax
0x6354FB: mov     edx, [ebx]
0x6354FD: mov     eax, [edx+174h]
0x635503: mov     ecx, ebx
0x635505: call    eax
0x635507: mov     ecx, [eax]
0x635509: mov     [esp+48h+var_C], ecx
0x63550D: mov     edx, [eax+4]
0x635510: mov     [esp+48h+var_8], edx
0x635514: mov     eax, [eax+8]
0x635517: mov     ecx, ebx; this
0x635519: mov     [esp+48h+var_4], eax
0x63551D: call    TESObjectREFR_GetParentCell
0x635522: mov     ecx, ebx; this
0x635524: mov     [esp+48h+var_34], eax
0x635528: call    TESObjectREFR_GetWorldSpace
0x63552D: mov     [esp+48h+var_30], eax
0x635531: jmp     loc_6355DF
0x635536: test    ebx, ebx
0x635538: jz      short loc_635572
0x63553A: mov     edx, [ebx]
0x63553C: mov     eax, [edx+174h]
0x635542: mov     ecx, ebx
0x635544: call    eax
0x635546: mov     ecx, [eax]
0x635548: mov     [esp+48h+var_C], ecx
0x63554C: mov     edx, [eax+4]
0x63554F: mov     [esp+48h+var_8], edx
0x635553: mov     eax, [eax+8]
0x635556: mov     ecx, ebx; this
0x635558: mov     [esp+48h+var_4], eax
0x63555C: call    TESObjectREFR_GetParentCell
0x635561: mov     ecx, ebx; this
0x635563: mov     [esp+48h+var_34], eax
0x635567: call    TESObjectREFR_GetWorldSpace
0x63556C: mov     [esp+48h+var_30], eax
0x635570: jmp     short loc_6355DF
0x635572: test    ecx, ecx
0x635574: jz      short loc_6355CA
0x635576: mov     ebx, [esp+48h+var_28+4]
0x63557A: mov     ecx, ebx; this
0x63557C: call    GetTeleportExtraData
0x635581: test    eax, eax
0x635583: jz      short loc_6355AC
0x635585: mov     ecx, eax
0x635587: call    sub_42B410
0x63558C: mov     ecx, eax; this
0x63558E: call    GetTeleportExtraData
0x635593: mov     ecx, eax
0x635595: call    sub_6899C0
0x63559A: mov     ecx, [eax]
0x63559C: mov     [esp+48h+var_C], ecx
0x6355A0: mov     edx, [eax+4]
0x6355A3: mov     [esp+48h+var_8], edx
0x6355A7: mov     eax, [eax+8]
0x6355AA: jmp     short loc_6355DB
0x6355AC: mov     edx, [ebx]
0x6355AE: mov     eax, [edx+174h]
0x6355B4: mov     ecx, ebx
0x6355B6: call    eax
0x6355B8: mov     ecx, [eax]
0x6355BA: mov     [esp+48h+var_C], ecx
0x6355BE: mov     edx, [eax+4]
0x6355C1: mov     [esp+48h+var_8], edx
0x6355C5: mov     eax, [eax+8]
0x6355C8: jmp     short loc_6355DB
0x6355CA: mov     ecx, [edi+40h]
0x6355CD: mov     [esp+48h+var_C], ecx
0x6355D1: mov     edx, [edi+44h]
0x6355D4: mov     [esp+48h+var_8], edx
0x6355D8: mov     eax, [edi+48h]
0x6355DB: mov     [esp+48h+var_4], eax
0x6355DF: cmp     byte ptr [ebp+0D0h], 0
0x6355E6: jz      loc_63582B
0x6355EC: mov     eax, [edi+60h]
0x6355EF: cmp     eax, ds:0B333C4h
0x6355F5: mov     [esp+48h+arg_0], eax
0x6355F9: jnz     short loc_635604
0x6355FB: xor     eax, eax
0x6355FD: mov     [esp+48h+arg_0], eax
0x635601: mov     [edi+60h], eax
0x635604: mov     ebx, [edi+5Ch]
0x635607: test    ebx, ebx
0x635609: jz      loc_635733
0x63560F: fld     dword ptr ds:0A5A04Ch
0x635615: mov     ecx, ebx; this
0x635617: fstp    [esp+48h+arg_0]
0x63561B: call    GetTeleportExtraData
0x635620: test    eax, eax
0x635622: mov     [esp+48h+var_20], eax
0x635626: jz      short loc_635663
0x635628: mov     edx, [esi]
0x63562A: mov     eax, [edx+174h]
0x635630: mov     ecx, esi
0x635632: call    eax
0x635634: push    eax
0x635635: lea     ecx, [esp+4Ch+var_18]
0x635639: push    ecx
0x63563A: mov     ecx, [esp+50h+var_20]
0x63563E: call    sub_42B410
0x635643: mov     ecx, eax; this
0x635645: call    GetTeleportExtraData
0x63564A: mov     ecx, eax
0x63564C: call    sub_6899C0
0x635651: mov     ecx, eax
0x635653: call    sub_4121A0
0x635658: mov     ecx, eax
0x63565A: call    sub_404C90
0x63565F: fstp    [esp+48h+arg_0]
0x635663: fld     [esp+48h+arg_0]
0x635667: push    0
0x635669: push    ebx
0x63566A: fstp    qword ptr [esp+50h+var_18]
0x63566E: mov     ecx, esi
0x635670: call    TesObjectREF_GetDistance
0x635675: fcomp   qword ptr [esp+48h+var_18]
0x635679: fnstsw  ax
0x63567B: test    ah, 41h
0x63567E: jnz     short loc_635686
0x635680: fld     [esp+48h+arg_0]
0x635684: jmp     short loc_635690
0x635686: push    0
0x635688: push    ebx
0x635689: mov     ecx, esi
0x63568B: call    TesObjectREF_GetDistance
0x635690: fstp    [esp+48h+arg_0]
0x635694: fld     dword ptr ds:0A71EB4h
0x63569A: fcomp   [esp+48h+arg_0]
0x63569E: fnstsw  ax
0x6356A0: test    ah, 41h
0x6356A3: jnz     short loc_6356DE
0x6356A5: mov     edx, [ebp+0]
0x6356A8: mov     eax, [edx+594h]
0x6356AE: push    esi
0x6356AF: mov     ecx, ebp
0x6356B1: call    eax
0x6356B3: push    1
0x6356B5: push    0
0x6356B7: push    0
0x6356B9: push    esi
0x6356BA: mov     ecx, ebx
0x6356BC: mov     dword ptr [edi+5Ch], 0
0x6356C3: call    ActivateRef
0x6356C8: fld     dword ptr ds:0A417B4h
0x6356CE: fstp    dword ptr [ebp+88h]
0x6356D4: pop     edi
0x6356D5: pop     esi
0x6356D6: pop     ebp
0x6356D7: pop     ebx
0x6356D8: add     esp, 38h
0x6356DB: retn    4
0x6356DE: cmp     [esp+48h+var_20], 0
0x6356E3: jz      short loc_6356FE
0x6356E5: mov     ecx, [esp+48h+var_20]
0x6356E9: call    sub_42B410
0x6356EE: mov     ecx, eax; this
0x6356F0: call    GetTeleportExtraData
0x6356F5: mov     ecx, eax
0x6356F7: call    sub_6899C0
0x6356FC: jmp     short loc_63570A
0x6356FE: mov     edx, [ebx]
0x635700: mov     eax, [edx+174h]
0x635706: mov     ecx, ebx
0x635708: call    eax
0x63570A: mov     ecx, [eax]
0x63570C: mov     edx, [eax+4]
0x63570F: mov     eax, [eax+8]
0x635712: mov     [esp+48h+var_18], ecx
0x635716: mov     ecx, ebx; this
0x635718: mov     [esp+48h+var_10], eax
0x63571C: mov     [esp+48h+var_14], edx
0x635720: call    TESObjectREFR_GetParentCell
0x635725: mov     ecx, ebx; this
0x635727: mov     [esp+48h+var_34], eax
0x63572B: call    TESObjectREFR_GetWorldSpace
0x635730: push    eax
0x635731: jmp     short loc_6357A6
0x635733: cmp     [esp+48h+arg_0], 0
0x635738: jz      loc_6357EB
0x63573E: mov     ebx, [esp+48h+arg_0]
0x635742: push    0
0x635744: push    ebx
0x635745: mov     ecx, esi
0x635747: call    TesObjectREF_GetDistance
0x63574C: fcomp   dword ptr ds:0A71EB4h
0x635752: fnstsw  ax
0x635754: test    ah, 41h
0x635757: jnz     loc_6357EB
0x63575D: mov     eax, [ebx]
0x63575F: mov     edx, [eax+174h]
0x635765: mov     ecx, ebx
0x635767: call    edx
0x635769: mov     ecx, [eax]
0x63576B: mov     edx, [eax+4]
0x63576E: mov     eax, [eax+8]
0x635771: mov     [esp+48h+var_18], ecx
0x635775: mov     ecx, ebx; this
0x635777: mov     [esp+48h+var_14], edx
0x63577B: mov     [esp+48h+var_10], eax
0x63577F: call    TESObjectREFR_GetParentCell
0x635784: mov     ecx, ebx; this
0x635786: mov     [esp+48h+var_34], eax
0x63578A: call    TESObjectREFR_GetWorldSpace
0x63578F: mov     ecx, esi; this
0x635791: mov     ebx, eax
0x635793: call    TESObjectREFR_GetParentCell
0x635798: cmp     eax, [esp+48h+var_34]
0x63579C: jz      short loc_6357A5
0x63579E: mov     ecx, esi; this
0x6357A0: call    TESObjectREFR_GetWorldSpace
0x6357A5: push    ebx
0x6357A6: mov     eax, [esp+4Ch+var_34]
0x6357AA: mov     ecx, [esp+4Ch+var_18]
0x6357AE: mov     edx, [ebp+0]
0x6357B1: mov     edx, [edx+3DCh]
0x6357B7: push    eax
0x6357B8: sub     esp, 0Ch
0x6357BB: mov     eax, esp
0x6357BD: mov     [eax], ecx
0x6357BF: mov     ecx, [esp+5Ch+var_14]
0x6357C3: mov     [eax+4], ecx
0x6357C6: mov     ecx, [esp+5Ch+var_10]
0x6357CA: mov     [eax+8], ecx
0x6357CD: push    esi
0x6357CE: mov     ecx, ebp
0x6357D0: call    edx
0x6357D2: test    al, al
0x6357D4: jnz     loc_6358C7
0x6357DA: mov     dword ptr [edi+60h], 0
0x6357E1: pop     edi
0x6357E2: pop     esi
0x6357E3: pop     ebp
0x6357E4: pop     ebx
0x6357E5: add     esp, 38h
0x6357E8: retn    4
0x6357EB: mov     eax, [esi]
0x6357ED: mov     edx, [eax+164h]
0x6357F3: mov     ecx, esi
0x6357F5: call    edx
0x6357F7: test    eax, eax
0x6357F9: jz      short loc_635811
0x6357FB: mov     ecx, eax
0x6357FD: call    sub_472EA0
0x635802: test    al, al
0x635804: jz      short loc_635811
0x635806: mov     eax, [ebp+0]
0x635809: mov     edx, [eax+48h]
0x63580C: push    esi
0x63580D: mov     ecx, ebp
0x63580F: call    edx
0x635811: mov     byte ptr [edi+50h], 1
0x635815: fld     dword ptr ds:0B33E9Ch
0x63581B: fadd    dword ptr [edi+4Ch]
0x63581E: fstp    dword ptr [edi+4Ch]
0x635821: pop     edi
0x635822: pop     esi
0x635823: pop     ebp
0x635824: pop     ebx
0x635825: add     esp, 38h
0x635828: retn    4
0x63582B: mov     eax, [esi]
0x63582D: mov     edx, [eax+164h]
0x635833: mov     ecx, esi
0x635835: call    edx
0x635837: test    eax, eax
0x635839: jz      short loc_635854
0x63583B: mov     ecx, eax
0x63583D: call    sub_472EA0
0x635842: test    al, al
0x635844: jnz     short loc_635854
0x635846: mov     eax, [ebp+0]
0x635849: mov     edx, [eax+594h]
0x63584F: push    esi
0x635850: mov     ecx, ebp
0x635852: call    edx
0x635854: mov     eax, [ebp+0]
0x635857: mov     edx, [eax+238h]
0x63585D: push    201h
0x635862: push    esi
0x635863: mov     ecx, ebp
0x635865: call    edx
0x635867: fld     dword ptr ds:0A417B4h
0x63586D: cmp     [esp+48h+var_28+4], 0
0x635872: fstp    [esp+48h+arg_0]
0x635876: jz      short loc_635882
0x635878: fld     dword ptr ds:0A5793Ch
0x63587E: fstp    [esp+48h+arg_0]
0x635882: fld     [esp+48h+arg_0]
0x635886: mov     edx, [esp+48h+var_34]
0x63588A: mov     eax, [ebp+0]
0x63588D: push    ecx
0x63588E: mov     ecx, [esp+4Ch+var_30]
0x635892: fstp    [esp+4Ch+var_4C]
0x635895: push    ecx
0x635896: push    edx
0x635897: mov     edx, [eax+414h]
0x63589D: lea     ecx, [esp+54h+var_C]
0x6358A1: push    ecx
0x6358A2: push    esi
0x6358A3: mov     ecx, ebp
0x6358A5: call    edx
0x6358A7: mov     ecx, [ebp+34h]
0x6358AA: test    ecx, ecx
0x6358AC: jz      short loc_6358C7
0x6358AE: mov     eax, [ecx]
0x6358B0: mov     edx, [eax+2Ch]
0x6358B3: call    edx
0x6358B5: test    al, al
0x6358B7: jz      short loc_6358C7
0x6358B9: mov     eax, [ebp+0]
0x6358BC: mov     edx, [eax+194h]
0x6358C2: push    esi
0x6358C3: mov     ecx, ebp
0x6358C5: call    edx
0x6358C7: pop     edi
0x6358C8: pop     esi
0x6358C9: pop     ebp
0x6358CA: pop     ebx
0x6358CB: add     esp, 38h
0x6358CE: retn    4
