0x650030: sub     esp, 8
0x650033: push    esi
0x650034: mov     esi, ecx
0x650036: mov     eax, [esi]
0x650038: mov     edx, [eax+184h]
0x65003E: push    edi
0x65003F: call    edx
0x650041: mov     ecx, [esi+120h]
0x650047: test    ecx, ecx
0x650049: mov     edi, eax
0x65004B: jz      short loc_65005B
0x65004D: mov     eax, [ecx]
0x65004F: mov     edx, [eax+154h]
0x650055: call    edx
0x650057: test    eax, eax
0x650059: jnz     short loc_65006D
0x65005B: test    edi, edi
0x65005D: jz      loc_6505B0
0x650063: cmp     byte ptr [edi+20h], 1Bh
0x650067: jnz     loc_6505B0
0x65006D: mov     eax, [esi]
0x65006F: mov     edx, [eax+304h]
0x650075: mov     ecx, esi
0x650077: call    edx
0x650079: test    al, al
0x65007B: jz      short loc_6500A5
0x65007D: mov     eax, [esi]
0x65007F: mov     edx, [eax+210h]
0x650085: mov     ecx, esi
0x650087: call    edx
0x650089: test    al, al
0x65008B: jnz     short loc_6500A5
0x65008D: mov     eax, [esi]
0x65008F: mov     edx, [eax+300h]
0x650095: push    0
0x650097: mov     ecx, esi
0x650099: call    edx
0x65009B: pop     edi
0x65009C: mov     al, 1
0x65009E: pop     esi
0x65009F: add     esp, 8
0x6500A2: retn    4
0x6500A5: mov     edi, [esp+10h+arg_0]
0x6500A9: mov     dword ptr [esi+30h], 0
0x6500B0: mov     eax, [edi]
0x6500B2: mov     edx, [eax+164h]
0x6500B8: push    ebp
0x6500B9: mov     ecx, edi
0x6500BB: call    edx
0x6500BD: mov     ecx, edi
0x6500BF: mov     ebp, eax
0x6500C1: call    Actor_GetCurrentAction
0x6500C6: cmp     eax, 9
0x6500C9: ja      short loc_6500D6
0x6500CB: pop     ebp
0x6500CC: pop     edi
0x6500CD: mov     al, 1
0x6500CF: pop     esi
0x6500D0: add     esp, 8
0x6500D3: retn    4
0x6500D6: mov     ecx, [esi+120h]
0x6500DC: push    ebx
0x6500DD: xor     bl, bl
0x6500DF: test    ecx, ecx
0x6500E1: mov     byte ptr [esp+18h+arg_0], bl
0x6500E5: jz      short loc_650107
0x6500E7: mov     eax, [ecx]
0x6500E9: mov     edx, [eax+170h]
0x6500EF: call    edx
0x6500F1: movzx   eax, byte ptr [esi+136h]
0x6500F8: push    eax
0x6500F9: call    sub_4AE5D0
0x6500FE: add     esp, 4
0x650101: mov     byte ptr [esp+18h+arg_0], al
0x650105: mov     bl, al
0x650107: cmp     byte ptr [esi+11Dh], 0
0x65010E: jnz     loc_6502E8
0x650114: test    bl, bl
0x650116: jz      short loc_650136
0x650118: mov     eax, [esi+8]
0x65011B: test    eax, eax
0x65011D: jz      short loc_650125
0x65011F: cmp     byte ptr [eax+20h], 1Bh
0x650123: jz      short loc_650136
0x650125: mov     eax, [esi]
0x650127: mov     edx, [eax+588h]
0x65012D: push    0
0x65012F: push    0
0x650131: push    edi
0x650132: mov     ecx, esi
0x650134: call    edx
0x650136: mov     eax, [esi]
0x650138: mov     edx, [eax+2C4h]
0x65013E: push    0
0x650140: push    400h
0x650145: mov     ecx, esi
0x650147: call    edx
0x650149: cmp     edi, ds:0B333C4h
0x65014F: jz      short loc_65015E
0x650151: mov     eax, [esi]
0x650153: mov     edx, [eax+194h]
0x650159: push    edi
0x65015A: mov     ecx, esi
0x65015C: call    edx
0x65015E: mov     eax, [edi]
0x650160: mov     edx, [eax+358h]
0x650166: mov     ecx, edi
0x650168: call    edx
0x65016A: test    al, al
0x65016C: jnz     short loc_6501A4
0x65016E: movzx   eax, byte ptr [esi+124h]
0x650175: mov     ecx, [esi+120h]
0x65017B: push    eax
0x65017C: call    sub_4D72C0
0x650181: test    al, al
0x650183: jz      short loc_6501A4
0x650185: mov     edx, [esi]
0x650187: mov     eax, [edx+370h]
0x65018D: push    7Fh
0x65018F: push    0
0x650191: push    0
0x650193: push    edi
0x650194: mov     ecx, esi
0x650196: call    eax
0x650198: pop     ebx
0x650199: pop     ebp
0x65019A: pop     edi
0x65019B: mov     al, 1
0x65019D: pop     esi
0x65019E: add     esp, 8
0x6501A1: retn    4
0x6501A4: mov     edx, [edi]
0x6501A6: mov     eax, [edx+358h]
0x6501AC: mov     ecx, edi
0x6501AE: call    eax
0x6501B0: test    al, al
0x6501B2: jnz     short loc_65021C
0x6501B4: test    bl, bl
0x6501B6: jz      short loc_6501D8
0x6501B8: movzx   eax, byte ptr [esi+124h]
0x6501BF: mov     ecx, [esi+120h]
0x6501C5: mov     edx, [esi]
0x6501C7: mov     edx, [edx+370h]
0x6501CD: push    eax
0x6501CE: push    ecx
0x6501CF: push    6
0x6501D1: push    edi
0x6501D2: mov     ecx, esi
0x6501D4: call    edx
0x6501D6: jmp     short loc_6501F6
0x6501D8: movzx   ecx, byte ptr [esi+124h]
0x6501DF: mov     edx, [esi+120h]
0x6501E5: mov     eax, [esi]
0x6501E7: mov     eax, [eax+370h]
0x6501ED: push    ecx
0x6501EE: push    edx
0x6501EF: push    1
0x6501F1: push    edi
0x6501F2: mov     ecx, esi
0x6501F4: call    eax
0x6501F6: mov     edx, [esi]
0x6501F8: mov     eax, [edx+384h]
0x6501FE: push    edi
0x6501FF: mov     ecx, esi
0x650201: call    eax
0x650203: test    al, al
0x650205: jnz     short loc_65021C
0x650207: movzx   ecx, byte ptr [esi+136h]
0x65020E: push    ecx; ArgList
0x65020F: push    offset aMissingFurnitu; "Missing furniture dynamic idle for mark"...
0x650214: call    PrintError
0x650219: add     esp, 8
0x65021C: test    bl, bl
0x65021E: jz      short loc_650240
0x650220: movzx   eax, byte ptr [esi+124h]
0x650227: mov     ecx, [esi+120h]
0x65022D: mov     edx, [esi]
0x65022F: mov     edx, [edx+370h]
0x650235: push    eax
0x650236: push    ecx
0x650237: push    7
0x650239: push    edi
0x65023A: mov     ecx, esi
0x65023C: call    edx
0x65023E: jmp     short loc_65025E
0x650240: movzx   ecx, byte ptr [esi+124h]
0x650247: mov     edx, [esi+120h]
0x65024D: mov     eax, [esi]
0x65024F: mov     eax, [eax+370h]
0x650255: push    ecx
0x650256: push    edx
0x650257: push    2
0x650259: push    edi
0x65025A: mov     ecx, esi
0x65025C: call    eax
0x65025E: mov     ecx, [esi+120h]
0x650264: push    ecx
0x650265: mov     ecx, ds:0B362C0h
0x65026B: push    edi
0x65026C: call    sub_521450
0x650271: mov     ebx, eax
0x650273: test    ebx, ebx
0x650275: jnz     short loc_650289
0x650277: pop     ebx
0x650278: pop     ebp
0x650279: mov     [esi+11Dh], al
0x65027F: pop     edi
0x650280: xor     al, al
0x650282: pop     esi
0x650283: add     esp, 8
0x650286: retn    4
0x650289: mov     ecx, ebx
0x65028B: call    sub_520200
0x650290: push    eax
0x650291: push    ebx
0x650292: mov     ecx, ebp
0x650294: call    sub_475300
0x650299: mov     edx, [edi]
0x65029B: mov     edx, [edx+1CCh]
0x6502A1: lea     eax, [esi+128h]
0x6502A7: push    eax
0x6502A8: mov     ecx, edi
0x6502AA: call    edx
0x6502AC: mov     eax, ds:0B3F9A8h
0x6502B1: mov     [ebp+0Ch], eax
0x6502B4: mov     ecx, ds:0B3F9ACh
0x6502BA: mov     [ebp+10h], ecx
0x6502BD: mov     edx, ds:0B3F9B0h
0x6502C3: mov     [ebp+14h], edx
0x6502C6: movzx   eax, byte ptr [esi+124h]
0x6502CD: mov     ecx, [esi+120h]
0x6502D3: push    1
0x6502D5: push    eax
0x6502D6: call    sub_4D7300
0x6502DB: push    1
0x6502DD: mov     ecx, edi
0x6502DF: call    sub_65AC20
0x6502E4: mov     bl, byte ptr [esp+18h+arg_0]
0x6502E8: movzx   eax, byte ptr [esi+11Dh]
0x6502EF: add     eax, 0FFFFFFFEh; switch 7 cases
0x6502F2: cmp     eax, 6
0x6502F5: ja      def_650302; jumptable 00650302 default case, cases 4-6
0x6502FB: movzx   ecx, ds:byte_6505C8[eax]
0x650302: jmp     ds:jpt_650302[ecx*4]; switch jump
0x650309: movzx   edx, word ptr [esi+134h]; jumptable 00650302 cases 2,7
0x650310: mov     [esp+18h+arg_0], edx
0x650314: lea     eax, [esp+18h+var_8]
0x650318: push    eax; int
0x650319: fild    [esp+1Ch+arg_0]
0x65031D: push    ecx
0x65031E: fdiv    qword ptr ds:0A2FC70h
0x650324: fstp    [esp+20h+arg_0]
0x650328: fldz
0x65032A: fstp    [esp+20h+var_8]
0x65032E: fld     [esp+20h+arg_0]
0x650332: fstp    [esp+20h+var_20]; float
0x650335: push    edi; int
0x650336: call    sub_683D80
0x65033B: fstp    [esp+24h+var_4]
0x65033F: fld     [esp+24h+var_4]
0x650343: add     esp, 0Ch
0x650346: fabs
0x650348: fstp    [esp+18h+var_4]
0x65034C: fld     [esp+18h+var_4]
0x650350: fild    dword ptr ds:0B36C18h
0x650356: fmul    qword ptr ds:0A31C78h
0x65035C: fstp    [esp+18h+var_4]
0x650360: fld     [esp+18h+var_4]
0x650364: fcompp
0x650366: fnstsw  ax
0x650368: test    ah, 5
0x65036B: jp      short loc_65038C
0x65036D: fld     [esp+18h+arg_0]
0x650371: push    1; char
0x650373: push    ecx
0x650374: fstp    [esp+20h+var_20]; float
0x650377: push    edi; Concurrency::details::SchedulerBase *
0x650378: call    sub_685530
0x65037D: add     esp, 0Ch
0x650380: pop     ebx
0x650381: pop     ebp
0x650382: pop     edi
0x650383: mov     al, 1
0x650385: pop     esi
0x650386: add     esp, 8
0x650389: retn    4
0x65038C: push    30h ; '0'
0x65038E: mov     ecx, edi
0x650390: call    sub_5E05F0
0x650395: fld     [esp+18h+arg_0]
0x650399: mov     edx, [edi]
0x65039B: mov     eax, [edx+1E8h]
0x6503A1: push    ecx
0x6503A2: mov     ecx, edi
0x6503A4: fstp    [esp+1Ch+var_1C]
0x6503A7: call    eax
0x6503A9: mov     edx, [edi]
0x6503AB: mov     edx, [edx+1CCh]
0x6503B1: lea     eax, [esi+128h]
0x6503B7: push    eax
0x6503B8: mov     ecx, edi
0x6503BA: call    edx
0x6503BC: test    bl, bl
0x6503BE: mov     eax, ds:0B3F9A8h
0x6503C3: mov     [ebp+0Ch], eax
0x6503C6: mov     ecx, ds:0B3F9ACh
0x6503CC: mov     [ebp+10h], ecx
0x6503CF: mov     edx, ds:0B3F9B0h
0x6503D5: mov     [ebp+14h], edx
0x6503D8: jz      short loc_650404
0x6503DA: movzx   ecx, byte ptr [esi+124h]
0x6503E1: mov     edx, [esi+120h]
0x6503E7: mov     eax, [esi]
0x6503E9: mov     eax, [eax+370h]
0x6503EF: push    ecx
0x6503F0: push    edx
0x6503F1: push    8
0x6503F3: push    edi
0x6503F4: mov     ecx, esi
0x6503F6: call    eax
0x6503F8: pop     ebx
0x6503F9: pop     ebp
0x6503FA: pop     edi
0x6503FB: mov     al, 1
0x6503FD: pop     esi
0x6503FE: add     esp, 8
0x650401: retn    4
0x650404: movzx   eax, byte ptr [esi+124h]
0x65040B: mov     ecx, [esi+120h]
0x650411: mov     edx, [esi]
0x650413: push    eax
0x650414: push    ecx
0x650415: push    3
0x650417: mov     edx, [edx+370h]
0x65041D: push    edi
0x65041E: mov     ecx, esi
0x650420: call    edx
0x650422: pop     ebx; jumptable 00650302 default case, cases 4-6
0x650423: pop     ebp
0x650424: pop     edi
0x650425: mov     al, 1
0x650427: pop     esi
0x650428: add     esp, 8
0x65042B: retn    4
0x65042E: mov     ecx, ebp; jumptable 00650302 cases 3,8
0x650430: call    sub_4711F0
0x650435: test    al, al
0x650437: jz      loc_6504CC
0x65043D: mov     eax, [esi]
0x65043F: mov     edx, [eax+2D0h]
0x650445: mov     ecx, esi
0x650447: call    edx
0x650449: cmp     eax, 0FFFFFFFFh
0x65044C: jnz     short loc_6504CC
0x65044E: push    0
0x650450: mov     ecx, ebp
0x650452: call    sub_4706E0
0x650457: test    eax, eax
0x650459: jz      short loc_65046A
0x65045B: push    0
0x65045D: mov     ecx, ebp
0x65045F: call    sub_4706E0
0x650464: cmp     dword ptr [eax+44h], 1
0x650468: jnz     short loc_6504CC
0x65046A: mov     byte ptr [ebp+0C4h], 1
0x650471: mov     eax, ds:0B3F9A8h
0x650476: mov     [ebp+0Ch], eax
0x650479: mov     ecx, ds:0B3F9ACh
0x65047F: mov     [ebp+10h], ecx
0x650482: mov     edx, ds:0B3F9B0h
0x650488: mov     [ebp+14h], edx
0x65048B: mov     eax, [edi]
0x65048D: mov     edx, [eax+1CCh]
0x650493: add     esi, 128h
0x650499: push    esi
0x65049A: mov     ecx, edi
0x65049C: call    edx
0x65049E: push    edi
0x65049F: mov     ecx, ebp
0x6504A1: call    sub_477E50
0x6504A6: fld1
0x6504A8: sub     esp, 8
0x6504AB: fst     [esp+20h+var_1C]; int
0x6504AF: mov     ecx, edi
0x6504B1: fstp    [esp+20h+var_20]; float
0x6504B4: call    Actor_ProcessAction
0x6504B9: pop     ebx
0x6504BA: mov     byte ptr [ebp+0C4h], 1
0x6504C1: pop     ebp
0x6504C2: pop     edi
0x6504C3: mov     al, 1
0x6504C5: pop     esi
0x6504C6: add     esp, 8
0x6504C9: retn    4
0x6504CC: mov     ecx, ebp
0x6504CE: call    sub_472EA0
0x6504D3: test    al, al
0x6504D5: jz      def_650302; jumptable 00650302 default case, cases 4-6
0x6504DB: mov     eax, [edi]
0x6504DD: mov     edx, [eax+358h]
0x6504E3: mov     ecx, edi
0x6504E5: call    edx
0x6504E7: test    al, al
0x6504E9: jz      short loc_650513
0x6504EB: mov     eax, [esi]
0x6504ED: mov     edx, [eax+370h]
0x6504F3: push    7Fh
0x6504F5: push    0
0x6504F7: push    0
0x6504F9: push    edi
0x6504FA: mov     ecx, esi
0x6504FC: call    edx
0x6504FE: push    0
0x650500: mov     ecx, edi
0x650502: call    sub_65AC20
0x650507: pop     ebx
0x650508: pop     ebp
0x650509: pop     edi
0x65050A: xor     al, al
0x65050C: pop     esi
0x65050D: add     esp, 8
0x650510: retn    4
0x650513: movzx   eax, byte ptr [esi+136h]
0x65051A: mov     ecx, [esi+120h]
0x650520: push    eax
0x650521: mov     eax, [ecx]
0x650523: mov     edx, [eax+170h]
0x650529: call    edx
0x65052B: mov     ecx, eax
0x65052D: call    sub_4AEBE0
0x650532: push    ecx
0x650533: mov     ecx, edi
0x650535: fstp    [esp+14h+var_14]; float
0x650538: call    sub_659B90
0x65053D: test    bl, bl
0x65053F: mov     byte ptr [ebp+0C4h], 1
0x650546: jz      short loc_65057B
0x650548: mov     ecx, edi
0x65054A: call    sub_5E12B0
0x65054F: test    eax, eax
0x650551: jz      short loc_650563
0x650553: mov     edx, [eax]
0x650555: push    0
0x650557: mov     ecx, eax
0x650559: mov     eax, [edx+9Ch]
0x65055F: push    1
0x650561: call    eax
0x650563: movzx   eax, byte ptr [esi+124h]
0x65056A: mov     ecx, [esi+120h]
0x650570: mov     edx, [esi]
0x650572: push    eax
0x650573: push    ecx
0x650574: push    9
0x650576: jmp     loc_650417
0x65057B: movzx   ecx, byte ptr [esi+124h]
0x650582: mov     edx, [esi+120h]
0x650588: mov     eax, [esi]
0x65058A: mov     eax, [eax+370h]
0x650590: push    ecx
0x650591: push    edx
0x650592: push    4
0x650594: push    edi
0x650595: mov     ecx, esi
0x650597: call    eax
0x650599: push    0
0x65059B: push    0
0x65059D: mov     ecx, edi
0x65059F: call    HideEquipment
0x6505A4: pop     ebx
0x6505A5: pop     ebp
0x6505A6: pop     edi
0x6505A7: mov     al, 1
0x6505A9: pop     esi
0x6505AA: add     esp, 8
0x6505AD: retn    4
0x6505B0: pop     edi
0x6505B1: xor     al, al
0x6505B3: pop     esi
0x6505B4: add     esp, 8
0x6505B7: retn    4
