0x5DF160: push    ebp
0x5DF161: mov     ebp, esp
0x5DF163: and     esp, 0FFFFFFF8h
0x5DF166: push    0FFFFFFFFh
0x5DF168: push    offset SEH_5DF160
0x5DF16D: mov     eax, large fs:0
0x5DF173: push    eax
0x5DF174: sub     esp, 10h
0x5DF177: push    ebx
0x5DF178: push    esi
0x5DF179: push    edi
0x5DF17A: mov     eax, ds:0B30AACh
0x5DF17F: xor     eax, esp
0x5DF181: push    eax; a3
0x5DF182: lea     eax, [esp+2Ch+var_C]
0x5DF186: mov     large fs:0, eax
0x5DF18C: mov     esi, ecx
0x5DF18E: mov     edi, [ebp+arg_0]
0x5DF191: lea     eax, [edi-1]; switch 48 cases
0x5DF194: cmp     eax, 2Fh
0x5DF197: ja      def_5DF1A4; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5DF19D: movzx   eax, ds:byte_5E017C[eax]
0x5DF1A4: jmp     ds:jpt_5DF1A4[eax*4]; switch jump
0x5DF1AB: mov     edi, [esi+110h]; jumptable 005DF1A4 case 1
0x5DF1B1: mov     ecx, [edi+8]
0x5DF1B4: add     edi, 8
0x5DF1B7: cmp     ecx, ds:0B06C4Ch
0x5DF1BD: mov     ebx, 1
0x5DF1C2: jnz     short loc_5DF1CF
0x5DF1C4: mov     edx, [edi+4]
0x5DF1C7: cmp     edx, ds:0B06C50h
0x5DF1CD: jz      short loc_5DF1E9
0x5DF1CF: mov     eax, ds:0B38CF0h
0x5DF1D4: mov     ecx, ds:0B38CE0h
0x5DF1DA: push    0
0x5DF1DC: push    eax
0x5DF1DD: push    ebx
0x5DF1DE: push    0
0x5DF1E0: push    ecx
0x5DF1E1: call    ShowUIMessageBox
0x5DF1E6: add     esp, 14h
0x5DF1E9: mov     edx, [edi+4]
0x5DF1EC: mov     eax, [edi]
0x5DF1EE: push    edx
0x5DF1EF: push    eax
0x5DF1F0: call    sub_497C10
0x5DF1F5: mov     cl, ds:0B06CF4h
0x5DF1FB: mov     dl, ds:0B06CECh
0x5DF201: mov     eax, [esi+0ECh]
0x5DF207: add     esp, 8
0x5DF20A: neg     cl
0x5DF20C: mov     edi, 2
0x5DF211: mov     ds:0B4205Ch, eax
0x5DF216: mov     ds:0B06D24h, eax
0x5DF21B: sbb     ecx, ecx
0x5DF21D: and     ecx, edi
0x5DF21F: neg     dl
0x5DF221: sbb     edx, edx
0x5DF223: and     edx, 8
0x5DF226: or      ecx, edx
0x5DF228: setnz   al
0x5DF22B: cmp     byte ptr ds:0B06CBCh, 0
0x5DF232: mov     ds:0B2C678h, ecx
0x5DF238: mov     ds:0B06CB4h, al
0x5DF23D: jz      short loc_5DF256
0x5DF23F: mov     ecx, ds:0B333A0h
0x5DF245: mov     ecx, [ecx+8]
0x5DF248: call    ShadowCanopyPass
0x5DF24D: or      dword ptr ds:0B42F40h, 20h
0x5DF254: jmp     short loc_5DF275
0x5DF256: push    0
0x5DF258: call    SetTextureCanopyShadowMap
0x5DF25D: mov     edx, ds:0B333A0h
0x5DF263: mov     ecx, [edx+8]
0x5DF266: add     esp, 4
0x5DF269: call    sub_482670
0x5DF26E: and     dword ptr ds:0B42F40h, 0FFFFFFDFh
0x5DF275: mov     ecx, offset flt_B1480C
0x5DF27A: call    GameSetting_GetSafeFloatPointer
0x5DF27F: fld     dword ptr [eax]
0x5DF281: mov     ecx, offset aGIJ
0x5DF286: fstp    [esp+2Ch+var_18]
0x5DF28A: call    GameSetting_GetSafeFloatPointer
0x5DF28F: fld     dword ptr [eax]
0x5DF291: fsubr   [esp+2Ch+var_18]
0x5DF295: mov     ecx, [esi+54h]
0x5DF298: push    0FB5h
0x5DF29D: fstp    [esp+30h+var_18]
0x5DF2A1: call    Tile_GetFloat
0x5DF2A6: fdiv    qword ptr ds:0A309F0h
0x5DF2AC: mov     ecx, offset aGIJ
0x5DF2B1: fmul    [esp+2Ch+var_18]
0x5DF2B5: fstp    [esp+2Ch+var_18]
0x5DF2B9: call    GameSetting_GetSafeFloatPointer
0x5DF2BE: fld     dword ptr [eax]
0x5DF2C0: fadd    [esp+2Ch+var_18]
0x5DF2C4: fstp    dword ptr ds:0B0760Ch
0x5DF2CA: call    sub_55FCB0
0x5DF2CF: mov     ecx, offset flt_B14824
0x5DF2D4: call    GameSetting_GetSafeFloatPointer
0x5DF2D9: fld     dword ptr [eax]
0x5DF2DB: mov     ecx, offset flt_B1481C
0x5DF2E0: fstp    [esp+2Ch+var_18]
0x5DF2E4: call    GameSetting_GetSafeFloatPointer
0x5DF2E9: fld     dword ptr [eax]
0x5DF2EB: fsubr   [esp+2Ch+var_18]
0x5DF2EF: mov     ecx, [esi+5Ch]
0x5DF2F2: push    0FB5h
0x5DF2F7: fstp    [esp+30h+var_18]
0x5DF2FB: call    Tile_GetFloat
0x5DF300: fdiv    qword ptr ds:0A309F0h
0x5DF306: mov     ecx, offset flt_B1481C
0x5DF30B: fmul    [esp+2Ch+var_18]
0x5DF30F: fstp    [esp+2Ch+var_18]
0x5DF313: call    GameSetting_GetSafeFloatPointer
0x5DF318: fld     dword ptr [eax]
0x5DF31A: mov     ecx, offset flt_B1483C
0x5DF31F: fadd    [esp+2Ch+var_18]
0x5DF323: fstp    dword ptr ds:0B0762Ch
0x5DF329: call    GameSetting_GetSafeFloatPointer
0x5DF32E: fld     dword ptr [eax]
0x5DF330: mov     ecx, offset flt_B14834
0x5DF335: fstp    [esp+2Ch+var_18]
0x5DF339: call    GameSetting_GetSafeFloatPointer
0x5DF33E: fld     dword ptr [eax]
0x5DF340: mov     ecx, [esi+64h]
0x5DF343: fsubr   [esp+2Ch+var_18]
0x5DF347: push    0FB5h
0x5DF34C: fstp    [esp+30h+var_18]
0x5DF350: call    Tile_GetFloat
0x5DF355: fdiv    qword ptr ds:0A309F0h
0x5DF35B: mov     ecx, offset flt_B14834
0x5DF360: fmul    [esp+2Ch+var_18]
0x5DF364: fstp    [esp+2Ch+var_18]
0x5DF368: call    GameSetting_GetSafeFloatPointer
0x5DF36D: fld     dword ptr [eax]
0x5DF36F: mov     ecx, offset flt_B14854
0x5DF374: fadd    [esp+2Ch+var_18]
0x5DF378: fstp    dword ptr ds:0B07624h
0x5DF37E: call    GameSetting_GetSafeFloatPointer
0x5DF383: fld     dword ptr [eax]
0x5DF385: mov     ecx, offset flt_B1484C
0x5DF38A: fstp    [esp+2Ch+var_18]
0x5DF38E: call    GameSetting_GetSafeFloatPointer
0x5DF393: fld     dword ptr [eax]
0x5DF395: mov     ecx, [esi+6Ch]
0x5DF398: fsubr   [esp+2Ch+var_18]
0x5DF39C: push    0FB5h
0x5DF3A1: fstp    [esp+30h+var_18]
0x5DF3A5: call    Tile_GetFloat
0x5DF3AA: fdiv    qword ptr ds:0A309F0h
0x5DF3B0: mov     ecx, offset flt_B1484C
0x5DF3B5: fmul    [esp+2Ch+var_18]
0x5DF3B9: fstp    [esp+2Ch+var_18]
0x5DF3BD: call    GameSetting_GetSafeFloatPointer
0x5DF3C2: fld     dword ptr [eax]
0x5DF3C4: fadd    [esp+2Ch+var_18]
0x5DF3C8: fstp    dword ptr ds:0B0761Ch
0x5DF3CE: mov     ecx, [esi+7Ch]
0x5DF3D1: push    0FB5h
0x5DF3D6: call    Tile_GetFloat
0x5DF3DB: fdiv    qword ptr ds:0A309F0h
0x5DF3E1: mov     ecx, offset SettingGrassEndDistance
0x5DF3E6: fmul    qword ptr ds:0A6DD08h
0x5DF3EC: fadd    qword ptr ds:0A6BEA0h
0x5DF3F2: fstp    dword ptr ds:0B09B18h
0x5DF3F8: call    GameSetting_GetSafeFloatPointer
0x5DF3FD: fld     dword ptr [eax]
0x5DF3FF: fcomp   qword ptr ds:0A47A30h
0x5DF405: fnstsw  ax
0x5DF407: test    ah, 41h
0x5DF40A: jp      short loc_5DF421
0x5DF40C: fldz
0x5DF40E: fst     dword ptr ds:0B09B18h
0x5DF414: fstp    dword ptr ds:0B09B10h
0x5DF41A: call    sub_7C4CE0
0x5DF41F: jmp     short loc_5DF458
0x5DF421: mov     ecx, offset SettingGrassEndDistance
0x5DF426: call    GameSetting_GetSafeFloatPointer
0x5DF42B: fld     dword ptr [eax]
0x5DF42D: fsub    qword ptr ds:0A2FC70h
0x5DF433: mov     ecx, offset SettingGrassStartFadeDistance
0x5DF438: fstp    dword ptr ds:0B09B10h
0x5DF43E: call    GameSetting_GetSafeFloatPointer
0x5DF443: fldz
0x5DF445: fcom    dword ptr [eax]
0x5DF447: fnstsw  ax
0x5DF449: test    ah, 41h
0x5DF44C: jnz     short loc_5DF456
0x5DF44E: fstp    dword ptr ds:0B09B10h
0x5DF454: jmp     short loc_5DF458
0x5DF456: fstp    st
0x5DF458: push    0
0x5DF45A: push    0; arg1
0x5DF45C: push    0; canCreate
0x5DF45E: call    InterfaceManager_GetSingleton
0x5DF463: add     esp, 8
0x5DF466: mov     ecx, eax
0x5DF468: call    sub_57CFA0
0x5DF46D: cmp     eax, 414h
0x5DF472: jz      short loc_5DF480
0x5DF474: mov     ecx, ds:0B333C4h
0x5DF47A: push    ebx
0x5DF47B: call    sub_66B710
0x5DF480: mov     ecx, [esi+0ACh]
0x5DF486: push    0FB5h
0x5DF48B: call    Tile_GetFloat
0x5DF490: call    Double_To_SInt32
0x5DF495: mov     ds:0B06EFCh, eax
0x5DF49A: mov     ecx, [esi+0A4h]
0x5DF4A0: push    0FB5h
0x5DF4A5: call    Tile_GetFloat
0x5DF4AA: call    Double_To_SInt32
0x5DF4AF: mov     ecx, offset flt_B14894
0x5DF4B4: mov     ds:0B06F04h, eax
0x5DF4B9: call    GameSetting_GetSafeFloatPointer
0x5DF4BE: fld     dword ptr [eax]
0x5DF4C0: mov     ecx, offset flt_B1488C
0x5DF4C5: fstp    [esp+2Ch+var_18]
0x5DF4C9: call    GameSetting_GetSafeFloatPointer
0x5DF4CE: fld     dword ptr [eax]
0x5DF4D0: fsubr   [esp+2Ch+var_18]
0x5DF4D4: mov     ecx, [esi+0B4h]
0x5DF4DA: push    0FB5h
0x5DF4DF: fstp    [esp+30h+var_18]
0x5DF4E3: call    Tile_GetFloat
0x5DF4E8: fdiv    qword ptr ds:0A309F0h
0x5DF4EE: mov     ecx, offset flt_B1488C
0x5DF4F3: fmul    [esp+2Ch+var_18]
0x5DF4F7: fstp    [esp+2Ch+var_18]
0x5DF4FB: call    GameSetting_GetSafeFloatPointer
0x5DF500: fld     dword ptr [eax]
0x5DF502: push    ecx
0x5DF503: fadd    [esp+30h+var_18]
0x5DF507: fstp    dword ptr [esp+30h+var_18]
0x5DF50B: fld     dword ptr [esp+30h+var_18]
0x5DF50F: fstp    [esp+30h+a2]; float
0x5DF512: call    sub_497D20
0x5DF517: mov     ecx, [esi+94h]
0x5DF51D: add     esp, 4
0x5DF520: push    0FB5h
0x5DF525: call    Tile_GetFloat
0x5DF52A: fdiv    qword ptr ds:0A309F0h
0x5DF530: fadd    qword ptr ds:0A2FC68h
0x5DF536: fstp    dword ptr ds:0B0312Ch
0x5DF53C: cmp     dword ptr [esi+0F0h], 0
0x5DF543: jnz     short loc_5DF549
0x5DF545: fldz
0x5DF547: jmp     short loc_5DF54F
0x5DF549: fld     dword ptr ds:0A31C80h
0x5DF54F: fstp    dword ptr [esp+2Ch+var_18]
0x5DF553: fld     dword ptr [esp+2Ch+var_18]
0x5DF557: fstp    dword ptr ds:0B097C8h
0x5DF55D: cmp     [esi+0F0h], edi
0x5DF563: setz    al
0x5DF566: mov     ds:0B06F5Ch, al
0x5DF56B: mov     eax, [esi+0F4h]
0x5DF571: cmp     eax, edi
0x5DF573: jnz     short loc_5DF57E
0x5DF575: mov     ds:0B06F2Ch, edi
0x5DF57B: push    edi
0x5DF57C: jmp     short loc_5DF597
0x5DF57E: cmp     eax, ebx
0x5DF580: jnz     short loc_5DF58B
0x5DF582: mov     ds:0B06F2Ch, ebx
0x5DF588: push    ebx
0x5DF589: jmp     short loc_5DF597
0x5DF58B: mov     dword ptr ds:0B06F2Ch, 0
0x5DF595: push    0
0x5DF597: call    sub_497AB0
0x5DF59C: mov     edx, ds:0B333A0h
0x5DF5A2: add     esp, 4
0x5DF5A5: cmp     [esi+0F8h], ebx
0x5DF5AB: setz    cl
0x5DF5AE: mov     ds:0B07058h, cl
0x5DF5B4: mov     ecx, [edx+54h]
0x5DF5B7: call    SetWaterResolution
0x5DF5BC: mov     al, ds:0B430ADh
0x5DF5C1: mov     ds:0B06F84h, al
0x5DF5C6: mov     ecx, [esi+0FCh]
0x5DF5CC: push    ecx
0x5DF5CD: call    SetMultiSample
0x5DF5D2: add     esp, 4
0x5DF5D5: call    sub_5DDE20
0x5DF5DA: call    sub_5BD610
0x5DF5DF: mov     ecx, [esp+2Ch+var_C]
0x5DF5E3: mov     large fs:0, ecx
0x5DF5EA: pop     ecx
0x5DF5EB: pop     edi
0x5DF5EC: pop     esi
0x5DF5ED: pop     ebx
0x5DF5EE: mov     esp, ebp
0x5DF5F0: pop     ebp
0x5DF5F1: retn    8
0x5DF5F4: push    edi; jumptable 005DF1A4 cases 8,26
0x5DF5F5: call    sub_587C20
0x5DF5FA: cmp     eax, 7
0x5DF5FD: mov     eax, [esi+110h]
0x5DF603: jnz     short loc_5DF627
0x5DF605: test    eax, eax
0x5DF607: jz      short loc_5DF60D
0x5DF609: mov     eax, [eax]
0x5DF60B: jmp     short loc_5DF60F
0x5DF60D: xor     eax, eax
0x5DF60F: test    eax, eax
0x5DF611: mov     [esi+110h], eax
0x5DF617: jnz     short loc_5DF649
0x5DF619: mov     edx, [esi+104h]
0x5DF61F: mov     [esi+110h], edx
0x5DF625: jmp     short loc_5DF649
0x5DF627: push    eax
0x5DF628: lea     ecx, [esi+100h]
0x5DF62E: call    sub_5DDCE0
0x5DF633: test    eax, eax
0x5DF635: mov     [esi+110h], eax
0x5DF63B: jnz     short loc_5DF649
0x5DF63D: mov     ecx, [esi+108h]
0x5DF643: mov     [esi+110h], ecx
0x5DF649: mov     ecx, esi
0x5DF64B: call    sub_5DEAD0
0x5DF650: mov     eax, [esi+110h]
0x5DF656: mov     edx, [eax+0Ch]
0x5DF659: add     eax, 8
0x5DF65C: mov     eax, [eax]
0x5DF65E: add     edx, edx
0x5DF660: add     edx, edx
0x5DF662: lea     eax, [eax+eax*2]
0x5DF665: cmp     edx, eax
0x5DF667: sbb     ecx, ecx
0x5DF669: neg     ecx
0x5DF66B: add     ecx, 1
0x5DF66E: mov     dword ptr [esp+2Ch+var_18], ecx
0x5DF672: fild    dword ptr [esp+2Ch+var_18]
0x5DF676: push    ecx
0x5DF677: mov     ecx, [esi+4]; this
0x5DF67A: fstp    [esp+30h+a2]; a3
0x5DF67D: push    0FB1h; a2
0x5DF682: call    Tile_SetFloat
0x5DF687: mov     ecx, [esp+2Ch+var_C]
0x5DF68B: mov     large fs:0, ecx
0x5DF692: pop     ecx
0x5DF693: pop     edi
0x5DF694: pop     esi
0x5DF695: pop     ebx
0x5DF696: mov     esp, ebp
0x5DF698: pop     ebp
0x5DF699: retn    8
0x5DF69C: xor     ebx, ebx; jumptable 005DF1A4 cases 45,46
0x5DF69E: cmp     [esi+0FCh], ebx
0x5DF6A4: jnz     loc_5DF755
0x5DF6AA: cmp     ds:0B06DE4h, bl
0x5DF6B0: jz      loc_5DF755
0x5DF6B6: mov     eax, [esi+0BCh]
0x5DF6BC: mov     edx, [esi]
0x5DF6BE: mov     edx, [edx+0Ch]
0x5DF6C1: push    eax
0x5DF6C2: push    26h ; '&'
0x5DF6C4: mov     [esi+115h], bl
0x5DF6CA: call    edx
0x5DF6CC: mov     byte ptr [esi+115h], 1
0x5DF6D3: test    byte ptr ds:0B3B744h, 40h
0x5DF6DA: jnz     short loc_5DF755
0x5DF6DC: mov     [esp+34h+var_20], ebx
0x5DF6E0: mov     [esp+34h+var_1C], bx
0x5DF6E5: mov     [esp+34h+var_1A], bx
0x5DF6EA: mov     eax, ds:0B3B758h
0x5DF6EF: mov     ecx, ds:0B3B760h
0x5DF6F5: mov     edx, ds:0B3B750h
0x5DF6FB: push    eax
0x5DF6FC: mov     eax, ds:0B3B768h
0x5DF701: push    ecx
0x5DF702: push    edx
0x5DF703: push    eax; ArgList
0x5DF704: lea     ecx, [esp+44h+var_20]
0x5DF708: push    offset aSSSS_; "%s %s %s %s."
0x5DF70D: push    ecx; int
0x5DF70E: mov     [esp+4Ch+var_C], ebx
0x5DF712: call    BSStringT_Static_Format
0x5DF717: mov     edx, ds:0B38CF0h
0x5DF71D: mov     eax, [esp+4Ch+var_20]
0x5DF721: push    ebx
0x5DF722: push    edx
0x5DF723: push    ebx
0x5DF724: push    offset sub_5DE960
0x5DF729: push    eax
0x5DF72A: call    ShowUIMessageBox
0x5DF72F: or      word ptr ds:0B3B744h, 40h
0x5DF737: add     esp, 2Ch
0x5DF73A: lea     ecx, [esp+34h+var_20]; void *
0x5DF73E: mov     dword ptr ds:0B147F8h, 4
0x5DF748: mov     [esp+34h+var_C], 0FFFFFFFFh
0x5DF750: call    BSStringT_Clear
0x5DF755: push    edi
0x5DF756: mov     ecx, esi
0x5DF758: call    sub_587C20
0x5DF75D: cmp     eax, 2Ch ; ','
0x5DF760: jnz     short loc_5DF7A5
0x5DF762: mov     edi, 10h
0x5DF767: jmp     short loc_5DF770
0x5DF769: align 10h
0x5DF770: add     dword ptr [esi+0FCh], 0FFFFFFFFh
0x5DF777: mov     eax, [esi+0FCh]
0x5DF77D: jns     short loc_5DF787
0x5DF77F: mov     [esi+0FCh], edi
0x5DF785: jmp     short loc_5DF790
0x5DF787: cmp     eax, 1
0x5DF78A: jz      short loc_5DF7E8
0x5DF78C: cmp     eax, ebx
0x5DF78E: jz      short loc_5DF7EE
0x5DF790: mov     ecx, [esi+0FCh]
0x5DF796: push    ecx
0x5DF797: call    sub_497D50
0x5DF79C: add     esp, 4
0x5DF79F: test    al, al
0x5DF7A1: jz      short loc_5DF770
0x5DF7A3: jmp     short loc_5DF7EE
0x5DF7A5: mov     edi, 2
0x5DF7AA: lea     ebx, [ebx+0]
0x5DF7B0: add     dword ptr [esi+0FCh], 1
0x5DF7B7: mov     eax, [esi+0FCh]
0x5DF7BD: cmp     eax, 10h
0x5DF7C0: jg      short loc_5DF7E8
0x5DF7C2: cmp     eax, 1
0x5DF7C5: jnz     short loc_5DF7CF
0x5DF7C7: mov     [esi+0FCh], edi
0x5DF7CD: jmp     short loc_5DF7D3
0x5DF7CF: cmp     eax, ebx
0x5DF7D1: jz      short loc_5DF7EE
0x5DF7D3: mov     edx, [esi+0FCh]
0x5DF7D9: push    edx
0x5DF7DA: call    sub_497D50
0x5DF7DF: add     esp, 4
0x5DF7E2: test    al, al
0x5DF7E4: jz      short loc_5DF7B0
0x5DF7E6: jmp     short loc_5DF7EE
0x5DF7E8: mov     [esi+0FCh], ebx
0x5DF7EE: mov     ecx, esi
0x5DF7F0: call    sub_5DE920
0x5DF7F5: cmp     dword ptr ds:0B147F8h, 0FFFFFFFFh
0x5DF7FC: jnz     def_5DF1A4; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5DF802: test    byte ptr ds:0B3B744h, 10h
0x5DF809: jnz     def_5DF1A4; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5DF80F: mov     eax, ds:0B38CF0h
0x5DF814: mov     ecx, ds:0B38CE8h
0x5DF81A: push    ebx
0x5DF81B: push    eax
0x5DF81C: push    ebx
0x5DF81D: push    ebx
0x5DF81E: push    ecx
0x5DF81F: call    ShowUIMessageBox
0x5DF824: add     esp, 14h
0x5DF827: or      word ptr ds:0B3B744h, 10h
0x5DF82F: mov     ecx, dword ptr [esp+34h+var_18+4]
0x5DF833: mov     large fs:0, ecx
0x5DF83A: pop     ecx
0x5DF83B: pop     edi
0x5DF83C: pop     esi
0x5DF83D: pop     ebx
0x5DF83E: mov     esp, ebp
0x5DF840: pop     ebp
0x5DF841: retn    8
0x5DF844: cmp     byte ptr ds:0B43077h, 0; jumptable 005DF1A4 case 9
0x5DF84B: mov     ecx, offset byte_B02D70
0x5DF850: setz    al
0x5DF853: mov     ds:0B43077h, al
0x5DF858: mov     ds:0B02D70h, al
0x5DF85D: call    sub_404E10
0x5DF862: mov     bl, al
0x5DF864: mov     byte ptr [esp+2Ch+var_18], bl
0x5DF868: mov     edx, dword ptr [esp+2Ch+var_18]
0x5DF86C: push    edx
0x5DF86D: mov     ecx, esi
0x5DF86F: call    sub_5DE9C0
0x5DF874: jmp     loc_5DFE39
0x5DF879: cmp     byte ptr ds:0B06F0Ch, 0; jumptable 005DF1A4 case 10
0x5DF880: mov     ecx, offset byte_B06F0C
0x5DF885: setz    al
0x5DF888: mov     ds:0B06F0Ch, al
0x5DF88D: call    sub_404E10
0x5DF892: mov     bl, al
0x5DF894: jmp     loc_5DFE39
0x5DF899: cmp     byte ptr ds:0B06F14h, 0; jumptable 005DF1A4 case 21
0x5DF8A0: setz    cl
0x5DF8A3: mov     ds:0B06F14h, cl
0x5DF8A9: mov     ecx, offset byte_B06F14
0x5DF8AE: call    sub_404E10
0x5DF8B3: mov     bl, al
0x5DF8B5: jmp     loc_5DFE39
0x5DF8BA: cmp     byte ptr ds:0B06CBCh, 0; jumptable 005DF1A4 case 11
0x5DF8C1: setz    bl
0x5DF8C4: mov     ds:0B06CBCh, bl
0x5DF8CA: jmp     loc_5DFE39
0x5DF8CF: xor     ebx, ebx; jumptable 005DF1A4 case 38
0x5DF8D1: cmp     [esi+115h], bl
0x5DF8D7: jz      loc_5DFA41
0x5DF8DD: cmp     ds:0B06DE4h, bl
0x5DF8E3: jnz     loc_5DFA41
0x5DF8E9: cmp     [esi+0FCh], ebx
0x5DF8EF: jz      loc_5DF983
0x5DF8F5: mov     [esi+0FCh], ebx
0x5DF8FB: call    sub_5DE920
0x5DF900: test    byte ptr ds:0B3B744h, 20h
0x5DF907: jnz     short loc_5DF983
0x5DF909: mov     dword ptr [esp+2Ch+var_18], ebx
0x5DF90D: mov     word ptr [esp+2Ch+var_18+4], bx
0x5DF912: mov     word ptr [esp+2Ch+var_18+6], bx
0x5DF917: mov     edx, ds:0B3B758h
0x5DF91D: mov     eax, ds:0B3B768h
0x5DF922: mov     ecx, ds:0B3B750h
0x5DF928: push    edx
0x5DF929: mov     edx, ds:0B3B760h
0x5DF92F: push    eax
0x5DF930: push    ecx
0x5DF931: push    edx; ArgList
0x5DF932: lea     eax, [esp+3Ch+var_18]
0x5DF936: push    offset aSSSS_; "%s %s %s %s."
0x5DF93B: push    eax; int
0x5DF93C: mov     [esp+44h+var_4], 1
0x5DF944: call    BSStringT_Static_Format
0x5DF949: mov     ecx, ds:0B38CF0h
0x5DF94F: mov     edx, dword ptr [esp+44h+var_18]
0x5DF953: push    ebx
0x5DF954: push    ecx
0x5DF955: push    ebx
0x5DF956: push    offset sub_5DE960
0x5DF95B: push    edx
0x5DF95C: call    ShowUIMessageBox
0x5DF961: or      word ptr ds:0B3B744h, 20h
0x5DF969: add     esp, 2Ch
0x5DF96C: lea     ecx, [esp+2Ch+var_18]; void *
0x5DF970: mov     ds:0B147F8h, ebx
0x5DF976: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5DF97E: call    BSStringT_Clear
0x5DF983: cmp     byte ptr ds:0B06D34h, 0
0x5DF98A: jz      loc_5DFA41
0x5DF990: mov     ecx, [esi+0E0h]
0x5DF996: mov     eax, [esi]
0x5DF998: mov     edx, [eax+0Ch]
0x5DF99B: push    ecx
0x5DF99C: push    2Fh ; '/'
0x5DF99E: mov     ecx, esi
0x5DF9A0: mov     byte ptr [esi+115h], 0
0x5DF9A7: call    edx
0x5DF9A9: or      edi, 0FFFFFFFFh
0x5DF9AC: mov     byte ptr [esi+115h], 1
0x5DF9B3: cmp     ds:0B147F8h, edi
0x5DF9B9: jnz     loc_5DFA41
0x5DF9BF: test    dword ptr ds:0B3B744h, 100h
0x5DF9C9: jnz     short loc_5DFA41
0x5DF9CB: mov     [esp+34h+var_20], ebx
0x5DF9CF: mov     [esp+34h+var_1C], bx
0x5DF9D4: mov     [esp+34h+var_1A], bx
0x5DF9D9: mov     eax, ds:0B3B758h
0x5DF9DE: mov     ecx, ds:0B3B768h
0x5DF9E4: mov     edx, ds:0B3B750h
0x5DF9EA: push    eax
0x5DF9EB: mov     eax, ds:0B3B770h
0x5DF9F0: push    ecx
0x5DF9F1: push    edx
0x5DF9F2: push    eax; ArgList
0x5DF9F3: lea     ecx, [esp+44h+var_20]
0x5DF9F7: push    offset aSSSS_; "%s %s %s %s."
0x5DF9FC: push    ecx; int
0x5DF9FD: mov     [esp+4Ch+var_C], 2
0x5DFA05: call    BSStringT_Static_Format
0x5DFA0A: mov     edx, ds:0B38CF0h
0x5DFA10: mov     eax, [esp+4Ch+var_20]
0x5DFA14: push    ebx
0x5DFA15: push    edx
0x5DFA16: push    ebx
0x5DFA17: push    offset sub_5DE960
0x5DFA1C: push    eax
0x5DFA1D: call    ShowUIMessageBox
0x5DFA22: or      word ptr ds:0B3B744h, 100h
0x5DFA2B: add     esp, 2Ch
0x5DFA2E: lea     ecx, [esp+34h+var_20]; void *
0x5DFA32: mov     ds:0B147F8h, ebx
0x5DFA38: mov     [esp+34h+var_C], edi
0x5DFA3C: call    BSStringT_Clear
0x5DFA41: cmp     byte ptr ds:0B06DE4h, 0
0x5DFA48: setz    bl
0x5DFA4B: cmp     dword ptr ds:0B147F8h, 0FFFFFFFFh
0x5DFA52: mov     ds:0B06DE4h, bl
0x5DFA58: jnz     loc_5DFE39
0x5DFA5E: cmp     byte ptr [esi+115h], 0
0x5DFA65: jz      loc_5DFE39
0x5DFA6B: test    byte ptr ds:0B3B744h, 1
0x5DFA72: jnz     loc_5DFE39
0x5DFA78: mov     ecx, ds:0B38CF0h
0x5DFA7E: mov     edx, ds:0B38CE8h
0x5DFA84: push    0
0x5DFA86: push    ecx
0x5DFA87: push    0
0x5DFA89: push    0
0x5DFA8B: push    edx
0x5DFA8C: call    ShowUIMessageBox
0x5DFA91: add     esp, 14h
0x5DFA94: or      word ptr ds:0B3B744h, 1
0x5DFA9C: jmp     loc_5DFE39
0x5DFAA1: cmp     byte ptr ds:0B07060h, 0; jumptable 005DF1A4 case 40
0x5DFAA8: mov     ecx, offset byte_B07060
0x5DFAAD: setz    al
0x5DFAB0: mov     ds:0B07060h, al
0x5DFAB5: call    sub_404E10
0x5DFABA: mov     bl, al
0x5DFABC: jmp     loc_5DFE39
0x5DFAC1: mov     ecx, 1; jumptable 005DF1A4 case 20
0x5DFAC6: jmp     short loc_5DFAD0
0x5DFAC8: align 10h
0x5DFAD0: add     [esi+0ECh], ecx
0x5DFAD6: mov     eax, [esi+0ECh]
0x5DFADC: cmp     eax, 3
0x5DFADF: jg      short loc_5DFAE5
0x5DFAE1: jge     short loc_5DFAD0
0x5DFAE3: jmp     short loc_5DFAEF
0x5DFAE5: mov     dword ptr [esi+0ECh], 0
0x5DFAEF: mov     ecx, esi
0x5DFAF1: call    sub_5DDD20
0x5DFAF6: test    byte ptr ds:0B3B744h, 8
0x5DFAFD: jnz     def_5DF1A4; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5DFB03: mov     ecx, ds:0B38CF0h
0x5DFB09: mov     edx, ds:0B38CE8h
0x5DFB0F: push    0
0x5DFB11: push    ecx
0x5DFB12: push    0
0x5DFB14: push    0
0x5DFB16: push    edx
0x5DFB17: call    ShowUIMessageBox
0x5DFB1C: add     esp, 14h
0x5DFB1F: or      word ptr ds:0B3B744h, 8
0x5DFB27: mov     ecx, [esp+2Ch+var_C]
0x5DFB2B: mov     large fs:0, ecx
0x5DFB32: pop     ecx
0x5DFB33: pop     edi
0x5DFB34: pop     esi
0x5DFB35: pop     ebx
0x5DFB36: mov     esp, ebp
0x5DFB38: pop     ebp
0x5DFB39: retn    8
0x5DFB3C: mov     ecx, 1; jumptable 005DF1A4 case 43
0x5DFB41: add     [esi+0F0h], ecx
0x5DFB47: mov     eax, [esi+0F0h]
0x5DFB4D: cmp     eax, 3
0x5DFB50: jg      short loc_5DFB70
0x5DFB52: jge     short loc_5DFB41
0x5DFB54: mov     ecx, esi
0x5DFB56: call    sub_5DDD60
0x5DFB5B: mov     ecx, [esp+2Ch+var_C]
0x5DFB5F: mov     large fs:0, ecx
0x5DFB66: pop     ecx
0x5DFB67: pop     edi
0x5DFB68: pop     esi
0x5DFB69: pop     ebx
0x5DFB6A: mov     esp, ebp
0x5DFB6C: pop     ebp
0x5DFB6D: retn    8
0x5DFB70: mov     ecx, esi
0x5DFB72: mov     dword ptr [esi+0F0h], 0
0x5DFB7C: call    sub_5DDD60
0x5DFB81: mov     ecx, [esp+2Ch+var_C]
0x5DFB85: mov     large fs:0, ecx
0x5DFB8C: pop     ecx
0x5DFB8D: pop     edi
0x5DFB8E: pop     esi
0x5DFB8F: pop     ebx
0x5DFB90: mov     esp, ebp
0x5DFB92: pop     ebp
0x5DFB93: retn    8
0x5DFB96: mov     ecx, 1; jumptable 005DF1A4 case 48
0x5DFB9B: jmp     short loc_5DFBA0
0x5DFB9D: align 10h
0x5DFBA0: add     [esi+0F4h], ecx
0x5DFBA6: mov     eax, [esi+0F4h]
0x5DFBAC: cmp     eax, 3
0x5DFBAF: jg      short loc_5DFBCF
0x5DFBB1: jge     short loc_5DFBA0
0x5DFBB3: mov     ecx, esi
0x5DFBB5: call    sub_5DDDE0
0x5DFBBA: mov     ecx, [esp+2Ch+var_C]
0x5DFBBE: mov     large fs:0, ecx
0x5DFBC5: pop     ecx
0x5DFBC6: pop     edi
0x5DFBC7: pop     esi
0x5DFBC8: pop     ebx
0x5DFBC9: mov     esp, ebp
0x5DFBCB: pop     ebp
0x5DFBCC: retn    8
0x5DFBCF: mov     ecx, esi
0x5DFBD1: mov     dword ptr [esi+0F4h], 0
0x5DFBDB: call    sub_5DDDE0
0x5DFBE0: mov     ecx, [esp+2Ch+var_C]
0x5DFBE4: mov     large fs:0, ecx
0x5DFBEB: pop     ecx
0x5DFBEC: pop     edi
0x5DFBED: pop     esi
0x5DFBEE: pop     ebx
0x5DFBEF: mov     esp, ebp
0x5DFBF1: pop     ebp
0x5DFBF2: retn    8
0x5DFBF5: mov     ecx, 1; jumptable 005DF1A4 case 39
0x5DFBFA: lea     ebx, [ebx+0]
0x5DFC00: add     [esi+0F8h], ecx
0x5DFC06: mov     eax, [esi+0F8h]
0x5DFC0C: cmp     eax, 2
0x5DFC0F: jg      short loc_5DFC2F
0x5DFC11: jge     short loc_5DFC00
0x5DFC13: mov     ecx, esi
0x5DFC15: call    sub_5DDDA0
0x5DFC1A: mov     ecx, [esp+2Ch+var_C]
0x5DFC1E: mov     large fs:0, ecx
0x5DFC25: pop     ecx
0x5DFC26: pop     edi
0x5DFC27: pop     esi
0x5DFC28: pop     ebx
0x5DFC29: mov     esp, ebp
0x5DFC2B: pop     ebp
0x5DFC2C: retn    8
0x5DFC2F: mov     ecx, esi
0x5DFC31: mov     dword ptr [esi+0F8h], 0
0x5DFC3B: call    sub_5DDDA0
0x5DFC40: mov     ecx, [esp+2Ch+var_C]
0x5DFC44: mov     large fs:0, ecx
0x5DFC4B: pop     ecx
0x5DFC4C: pop     edi
0x5DFC4D: pop     esi
0x5DFC4E: pop     ebx
0x5DFC4F: mov     esp, ebp
0x5DFC51: pop     ebp
0x5DFC52: retn    8
0x5DFC55: cmp     byte ptr ds:0B09AE8h, 0; jumptable 005DF1A4 case 30
0x5DFC5C: mov     ecx, offset byte_B09AE8
0x5DFC61: setz    al
0x5DFC64: mov     ds:0B09AE8h, al
0x5DFC69: call    sub_404E10
0x5DFC6E: test    byte ptr ds:0B3B744h, 2
0x5DFC75: mov     bl, al
0x5DFC77: jnz     loc_5DFE39
0x5DFC7D: mov     ecx, ds:0B38CF0h
0x5DFC83: mov     edx, ds:0B38CE8h
0x5DFC89: push    0
0x5DFC8B: push    ecx
0x5DFC8C: push    0
0x5DFC8E: push    0
0x5DFC90: push    edx
0x5DFC91: call    ShowUIMessageBox
0x5DFC96: add     esp, 14h
0x5DFC99: or      word ptr ds:0B3B744h, 2
0x5DFCA1: jmp     loc_5DFE39
0x5DFCA6: cmp     byte ptr ds:0B09AF0h, 0; jumptable 005DF1A4 case 31
0x5DFCAD: mov     ecx, offset byte_B09AF0
0x5DFCB2: setz    al
0x5DFCB5: mov     ds:0B09AF0h, al
0x5DFCBA: call    sub_404E10
0x5DFCBF: test    byte ptr ds:0B3B744h, 4
0x5DFCC6: mov     bl, al
0x5DFCC8: jnz     loc_5DFE39
0x5DFCCE: mov     ecx, ds:0B38CF0h
0x5DFCD4: mov     edx, ds:0B38CE8h
0x5DFCDA: push    0
0x5DFCDC: push    ecx
0x5DFCDD: push    0
0x5DFCDF: push    0
0x5DFCE1: push    edx
0x5DFCE2: call    ShowUIMessageBox
0x5DFCE7: add     esp, 14h
0x5DFCEA: or      word ptr ds:0B3B744h, 4
0x5DFCF2: jmp     loc_5DFE39
0x5DFCF7: cmp     byte ptr ds:0B07090h, 0; jumptable 005DF1A4 case 41
0x5DFCFE: mov     ecx, offset byte_B07090
0x5DFD03: setz    al
0x5DFD06: mov     ds:0B07090h, al
0x5DFD0B: call    sub_404E10
0x5DFD10: mov     bl, al
0x5DFD12: jmp     loc_5DFE39
0x5DFD17: cmp     byte ptr ds:0B430ADh, 0; jumptable 005DF1A4 case 42
0x5DFD1E: setz    bl
0x5DFD21: mov     ds:0B430ADh, bl
0x5DFD27: jmp     loc_5DFE39
0x5DFD2C: xor     edi, edi; jumptable 005DF1A4 case 47
0x5DFD2E: cmp     byte ptr ds:0B06D34h, 0
0x5DFD35: jnz     loc_5DFDFA
0x5DFD3B: cmp     byte ptr ds:0B06DE4h, 0
0x5DFD42: jz      loc_5DFDF3
0x5DFD48: mov     eax, [esi+0BCh]
0x5DFD4E: mov     edx, [esi]
0x5DFD50: mov     edx, [edx+0Ch]
0x5DFD53: push    eax
0x5DFD54: push    26h ; '&'
0x5DFD56: mov     byte ptr [esi+115h], 0
0x5DFD5D: call    edx
0x5DFD5F: mov     ebx, 80h ; '€'
0x5DFD64: mov     byte ptr [esi+115h], 1
0x5DFD6B: test    ds:0B3B744h, bl
0x5DFD71: jnz     loc_5DFDF3
0x5DFD77: mov     [esp+34h+var_20], edi
0x5DFD7B: mov     [esp+34h+var_1C], di
0x5DFD80: mov     [esp+34h+var_1A], di
0x5DFD85: mov     eax, ds:0B3B758h
0x5DFD8A: mov     ecx, ds:0B3B770h
0x5DFD90: mov     edx, ds:0B3B750h
0x5DFD96: push    eax
0x5DFD97: mov     eax, ds:0B3B768h
0x5DFD9C: push    ecx
0x5DFD9D: push    edx
0x5DFD9E: push    eax; ArgList
0x5DFD9F: lea     ecx, [esp+44h+var_20]
0x5DFDA3: push    offset aSSSS_; "%s %s %s %s."
0x5DFDA8: push    ecx; int
0x5DFDA9: mov     [esp+4Ch+var_C], 3
0x5DFDB1: call    BSStringT_Static_Format
0x5DFDB6: mov     edx, ds:0B38CF0h
0x5DFDBC: mov     eax, [esp+4Ch+var_20]
0x5DFDC0: push    edi
0x5DFDC1: push    edx
0x5DFDC2: push    edi
0x5DFDC3: push    offset sub_5DE960
0x5DFDC8: push    eax
0x5DFDC9: call    ShowUIMessageBox
0x5DFDCE: or      ds:0B3B744h, bx
0x5DFDD5: add     esp, 2Ch
0x5DFDD8: lea     ecx, [esp+34h+var_20]; void *
0x5DFDDC: mov     dword ptr ds:0B147F8h, 9
0x5DFDE6: mov     [esp+34h+var_C], 0FFFFFFFFh
0x5DFDEE: call    BSStringT_Clear
0x5DFDF3: cmp     byte ptr ds:0B06D34h, 0
0x5DFDFA: setz    bl
0x5DFDFD: cmp     dword ptr ds:0B147F8h, 0FFFFFFFFh
0x5DFE04: mov     ds:0B06D34h, bl
0x5DFE0A: jnz     short loc_5DFE39
0x5DFE0C: mov     esi, 200h
0x5DFE11: test    ds:0B3B744h, esi
0x5DFE17: jnz     short loc_5DFE39
0x5DFE19: mov     ecx, ds:0B38CF0h
0x5DFE1F: mov     edx, ds:0B38CE8h
0x5DFE25: push    edi
0x5DFE26: push    ecx
0x5DFE27: push    edi
0x5DFE28: push    edi
0x5DFE29: push    edx
0x5DFE2A: call    ShowUIMessageBox
0x5DFE2F: add     esp, 14h
0x5DFE32: or      ds:0B3B744h, si
0x5DFE39: mov     ecx, [ebp+arg_4]
0x5DFE3C: test    ecx, ecx
0x5DFE3E: jz      def_5DF1A4; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5DFE44: test    bl, bl
0x5DFE46: mov     eax, ds:0B38DA0h
0x5DFE4B: jnz     short loc_5DFE52
0x5DFE4D: mov     eax, ds:0B38DA8h
0x5DFE52: push    eax
0x5DFE53: push    0FDEh
0x5DFE58: call    Tile_SetString
0x5DFE5D: mov     ecx, [esp+2Ch+var_C]
0x5DFE61: mov     large fs:0, ecx
0x5DFE68: pop     ecx
0x5DFE69: pop     edi
0x5DFE6A: pop     esi
0x5DFE6B: pop     ebx
0x5DFE6C: mov     esp, ebp
0x5DFE6E: pop     ebp
0x5DFE6F: retn    8
0x5DFE72: mov     ecx, [esi+48h]; jumptable 005DF1A4 case 4
0x5DFE75: push    0FC9h
0x5DFE7A: call    Tile_GetFloat
0x5DFE7F: fcomp   dword ptr ds:0A379B4h
0x5DFE85: fnstsw  ax
0x5DFE87: test    ah, 44h
0x5DFE8A: jp      short loc_5DFEB0
0x5DFE8C: mov     ecx, offset byte_B02D70
0x5DFE91: mov     byte ptr ds:0B43077h, 1
0x5DFE98: mov     byte ptr ds:0B02D70h, 1
0x5DFE9F: call    sub_404E10
0x5DFEA4: mov     ecx, esi
0x5DFEA6: push    eax
0x5DFEA7: mov     eax, [esi+48h]
0x5DFEAA: push    eax
0x5DFEAB: call    sub_59B640
0x5DFEB0: xor     ebx, ebx
0x5DFEB2: mov     ecx, offset aSs?fJ
0x5DFEB7: mov     [esi+0ECh], ebx
0x5DFEBD: call    GameSetting_GetSafeFloatPointer
0x5DFEC2: fld     dword ptr [eax]
0x5DFEC4: mov     ecx, offset dword_B14814
0x5DFEC9: fstp    dword ptr ds:0B0760Ch
0x5DFECF: call    GameSetting_GetSafeFloatPointer
0x5DFED4: fld     dword ptr [eax]
0x5DFED6: mov     ecx, offset dword_B1482C
0x5DFEDB: fstp    dword ptr ds:0B0762Ch
0x5DFEE1: call    GameSetting_GetSafeFloatPointer
0x5DFEE6: fld     dword ptr [eax]
0x5DFEE8: mov     ecx, offset dword_B14844
0x5DFEED: fstp    dword ptr ds:0B07624h
0x5DFEF3: call    GameSetting_GetSafeFloatPointer
0x5DFEF8: fld     dword ptr [eax]
0x5DFEFA: fstp    dword ptr ds:0B0761Ch
0x5DFF00: mov     ds:0B06F0Ch, bl
0x5DFF06: fld     dword ptr ds:0A3D8F4h
0x5DFF0C: mov     ds:0B06F14h, bl
0x5DFF12: fstp    dword ptr ds:0B09B18h
0x5DFF18: mov     byte ptr ds:0B06CBCh, 1
0x5DFF1F: call    sub_5DDD00
0x5DFF24: test    al, al
0x5DFF26: setnz   cl
0x5DFF29: mov     ds:0B06DE4h, cl
0x5DFF2F: mov     byte ptr ds:0B07060h, 1
0x5DFF36: mov     byte ptr ds:0B09AE8h, 1
0x5DFF3D: mov     byte ptr ds:0B09AF0h, 1
0x5DFF44: mov     byte ptr ds:0B07090h, 1
0x5DFF4B: mov     byte ptr ds:0B430ADh, 1
0x5DFF52: call    sub_5DDD00
0x5DFF57: fld1
0x5DFF59: test    al, al
0x5DFF5B: setz    dl
0x5DFF5E: push    ecx
0x5DFF5F: fstp    [esp+30h+a2]; float
0x5DFF62: mov     ds:0B06D34h, dl
0x5DFF68: call    sub_497AE0
0x5DFF6D: add     esp, 4
0x5DFF70: call    sub_497C30
0x5DFF75: mov     ecx, [esi+4Ch]
0x5DFF78: cmp     ecx, ebx
0x5DFF7A: jz      short loc_5DFF8C
0x5DFF7C: mov     eax, ds:0B38DA8h
0x5DFF81: push    eax
0x5DFF82: push    0FDEh
0x5DFF87: call    Tile_SetString
0x5DFF8C: mov     ecx, [esi+78h]
0x5DFF8F: cmp     ecx, ebx
0x5DFF91: jz      short loc_5DFFA4
0x5DFF93: mov     edx, ds:0B38DA8h
0x5DFF99: push    edx
0x5DFF9A: push    0FDEh
0x5DFF9F: call    Tile_SetString
0x5DFFA4: mov     ecx, [esi+50h]
0x5DFFA7: cmp     ecx, ebx
0x5DFFA9: jz      short loc_5DFFBB
0x5DFFAB: mov     eax, ds:0B38DA0h
0x5DFFB0: push    eax
0x5DFFB1: push    0FDEh
0x5DFFB6: call    Tile_SetString
0x5DFFBB: movzx   ecx, byte ptr ds:0B06DE4h
0x5DFFC2: mov     edx, [esi+0BCh]
0x5DFFC8: push    ecx
0x5DFFC9: push    edx
0x5DFFCA: mov     ecx, esi
0x5DFFCC: call    sub_59B640
0x5DFFD1: mov     ecx, [esi+0C4h]
0x5DFFD7: cmp     ecx, ebx
0x5DFFD9: jz      short loc_5DFFEB
0x5DFFDB: mov     eax, ds:0B38DA0h
0x5DFFE0: push    eax
0x5DFFE1: push    0FDEh
0x5DFFE6: call    Tile_SetString
0x5DFFEB: mov     ecx, [esi+9Ch]
0x5DFFF1: cmp     ecx, ebx
0x5DFFF3: jz      short loc_5E0006
0x5DFFF5: mov     edx, ds:0B38DA0h
0x5DFFFB: push    edx
0x5DFFFC: push    0FDEh
0x5E0001: call    Tile_SetString
0x5E0006: mov     ecx, [esi+0A0h]
0x5E000C: cmp     ecx, ebx
0x5E000E: jz      short loc_5E0020
0x5E0010: mov     eax, ds:0B38DA0h
0x5E0015: push    eax
0x5E0016: push    0FDEh
0x5E001B: call    Tile_SetString
0x5E0020: mov     ecx, [esi+0C8h]
0x5E0026: cmp     ecx, ebx
0x5E0028: jz      short loc_5E003B
0x5E002A: mov     edx, ds:0B38DA0h
0x5E0030: push    edx
0x5E0031: push    0FDEh
0x5E0036: call    Tile_SetString
0x5E003B: mov     ecx, [esi+0CCh]
0x5E0041: cmp     ecx, ebx
0x5E0043: jz      short loc_5E0055
0x5E0045: mov     eax, ds:0B38DA0h
0x5E004A: push    eax
0x5E004B: push    0FDEh
0x5E0050: call    Tile_SetString
0x5E0055: movzx   ecx, byte ptr ds:0B06D34h
0x5E005C: mov     edx, [esi+0E0h]
0x5E0062: push    ecx
0x5E0063: push    edx
0x5E0064: mov     ecx, esi
0x5E0066: call    sub_59B640
0x5E006B: mov     edi, [esi+104h]
0x5E0071: mov     eax, edi
0x5E0073: cmp     eax, ebx
0x5E0075: jz      short loc_5E009F
0x5E0077: mov     ebx, 1E0h
0x5E007C: lea     esp, [esp+0]
0x5E0080: cmp     dword ptr [eax+8], 280h
0x5E0087: lea     ecx, [eax+8]
0x5E008A: mov     edx, eax
0x5E008C: mov     eax, [eax]
0x5E008E: jnz     short loc_5E0099
0x5E0090: cmp     [ecx+4], ebx
0x5E0093: jz      loc_5E0122
0x5E0099: test    eax, eax
0x5E009B: jnz     short loc_5E0080
0x5E009D: xor     ebx, ebx
0x5E009F: xor     eax, eax
0x5E00A1: cmp     eax, ebx
0x5E00A3: mov     [esi+110h], eax
0x5E00A9: jnz     short loc_5E00B1
0x5E00AB: mov     [esi+110h], edi
0x5E00B1: mov     ecx, esi
0x5E00B3: call    sub_5DEAD0
0x5E00B8: fld     dword ptr ds:0A34A80h
0x5E00BE: push    ecx
0x5E00BF: mov     edi, 2
0x5E00C4: fstp    [esp+30h+a2]; float
0x5E00C7: mov     ds:0B06EFCh, edi
0x5E00CD: mov     dword ptr ds:0B06F04h, 4
0x5E00D7: call    sub_497D20
0x5E00DC: fld1
0x5E00DE: fstp    dword ptr ds:0B0312Ch
0x5E00E4: add     esp, 4
0x5E00E7: mov     ecx, esi
0x5E00E9: mov     [esi+0F0h], edi
0x5E00EF: mov     [esi+0F4h], ebx
0x5E00F5: mov     [esi+0F8h], ebx
0x5E00FB: mov     [esi+0FCh], ebx
0x5E0101: call    sub_5DE920
0x5E0106: mov     ecx, esi
0x5E0108: call    sub_5DE2E0
0x5E010D: mov     ecx, dword ptr [esp+34h+var_18+4]; jumptable 005DF1A4 default case, cases 2,3,5-7,12-19,22-25,27-29,32-37,44
0x5E0111: mov     large fs:0, ecx
0x5E0118: pop     ecx
0x5E0119: pop     edi
0x5E011A: pop     esi
0x5E011B: pop     ebx
0x5E011C: mov     esp, ebp
0x5E011E: pop     ebp
0x5E011F: retn    8
0x5E0122: mov     eax, edx
0x5E0124: xor     ebx, ebx
0x5E0126: jmp     loc_5E00A1
