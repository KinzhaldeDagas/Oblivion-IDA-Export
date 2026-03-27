0x62B070: sub     esp, 30h
0x62B073: push    ebx
0x62B074: mov     ebx, ecx
0x62B076: mov     eax, [ebx]
0x62B078: mov     edx, [eax+184h]
0x62B07E: push    esi
0x62B07F: push    edi
0x62B080: call    edx
0x62B082: mov     esi, eax
0x62B084: mov     eax, [ebx]
0x62B086: mov     edx, [eax+3B8h]
0x62B08C: mov     ecx, ebx
0x62B08E: mov     [esp+3Ch+var_28], esi
0x62B092: call    edx
0x62B094: mov     edi, eax
0x62B096: test    edi, edi
0x62B098: jnz     short loc_62B0B4
0x62B09A: mov     ecx, [esi+24h]
0x62B09D: test    ecx, ecx
0x62B09F: jz      loc_62B40C
0x62B0A5: call    sub_5697E0
0x62B0AA: mov     edi, eax
0x62B0AC: test    edi, edi
0x62B0AE: jz      loc_62B40C
0x62B0B4: mov     eax, [edi]
0x62B0B6: mov     edx, [eax+170h]
0x62B0BC: mov     ecx, edi
0x62B0BE: call    edx
0x62B0C0: cmp     eax, ds:0B35EB0h
0x62B0C6: jnz     short loc_62B0D2
0x62B0C8: lea     ecx, [edi+44h]
0x62B0CB: call    ExtraDataList__GetExtraXTarget
0x62B0D0: mov     edi, eax
0x62B0D2: test    edi, edi
0x62B0D4: jz      loc_62B40C
0x62B0DA: mov     eax, [ebx]
0x62B0DC: mov     edx, [eax+2A8h]
0x62B0E2: mov     ecx, ebx
0x62B0E4: call    edx
0x62B0E6: test    eax, eax
0x62B0E8: jz      short loc_62B0FC
0x62B0EA: push    2
0x62B0EC: mov     ecx, eax
0x62B0EE: call    MagicItem_GetFXEffect
0x62B0F3: test    eax, eax
0x62B0F5: jz      short loc_62B0FC
0x62B0F7: fld     dword ptr [eax+74h]
0x62B0FA: jmp     short loc_62B0FE
0x62B0FC: fld1
0x62B0FE: mov     eax, [edi]
0x62B100: fstp    [esp+3Ch+var_30]
0x62B104: fld     [esp+3Ch+var_30]
0x62B108: mov     edx, [eax+174h]
0x62B10E: fmul    dword ptr ds:0B37EE8h
0x62B114: mov     ecx, edi
0x62B116: fstp    [esp+3Ch+var_30]
0x62B11A: call    edx
0x62B11C: mov     edx, [eax+4]
0x62B11F: mov     ecx, [eax]
0x62B121: mov     eax, [eax+8]
0x62B124: mov     esi, [esp+3Ch+arg_0]
0x62B128: mov     [esp+3Ch+var_14], edx
0x62B12C: mov     edx, [esi]
0x62B12E: mov     [esp+3Ch+var_18], ecx
0x62B132: mov     [esp+3Ch+var_10], eax
0x62B136: mov     eax, [edx+174h]
0x62B13C: mov     ecx, esi
0x62B13E: call    eax
0x62B140: mov     ecx, [eax]
0x62B142: mov     edx, [eax+4]
0x62B145: mov     eax, [eax+8]
0x62B148: mov     [esp+3Ch+var_24], ecx
0x62B14C: mov     ecx, esi
0x62B14E: mov     [esp+3Ch+var_20], edx
0x62B152: mov     [esp+3Ch+var_1C], eax
0x62B156: call    sub_5E0660
0x62B15B: fmul    qword ptr ds:0A31C70h
0x62B161: fadd    [esp+3Ch+var_1C]
0x62B165: fstp    [esp+3Ch+var_1C]
0x62B169: fld     [esp+3Ch+var_18]
0x62B16D: fsub    [esp+3Ch+var_24]
0x62B171: fstp    [esp+3Ch+var_C]
0x62B175: fld     [esp+3Ch+var_14]
0x62B179: fsub    [esp+3Ch+var_20]
0x62B17D: fstp    [esp+3Ch+var_8]
0x62B181: fld     [esp+3Ch+var_10]
0x62B185: fsub    [esp+3Ch+var_1C]
0x62B189: fstp    [esp+3Ch+var_4]
0x62B18D: fld     [esp+3Ch+var_8]
0x62B191: fld     [esp+3Ch+var_C]
0x62B195: fmul    st, st
0x62B197: fld     st(1)
0x62B199: fmulp   st(2), st
0x62B19B: faddp   st(1), st
0x62B19D: fldz
0x62B19F: fmul    st, st
0x62B1A1: faddp   st(1), st
0x62B1A3: fstp    [esp+3Ch+arg_0]
0x62B1A7: fld     [esp+3Ch+arg_0]
0x62B1AB: call    __CIsqrt
0x62B1B0: fstp    [esp+3Ch+arg_0]
0x62B1B4: fld     [esp+3Ch+arg_0]
0x62B1B8: sub     esp, 10h
0x62B1BB: fstp    [esp+4Ch+arg_0]
0x62B1BF: fldz
0x62B1C1: fstp    [esp+4Ch+var_40]; float
0x62B1C5: fld     [esp+4Ch+var_30]
0x62B1C9: fstp    [esp+4Ch+var_44]; float
0x62B1CD: fld     [esp+4Ch+var_4]
0x62B1D1: fstp    [esp+4Ch+var_48]; float
0x62B1D5: fld     [esp+4Ch+arg_0]
0x62B1D9: fstp    [esp+4Ch+var_4C]; float
0x62B1DC: call    sub_6132D0
0x62B1E1: fstp    [esp+4Ch+var_2C]
0x62B1E5: fld     [esp+4Ch+var_30]
0x62B1E9: add     esp, 4
0x62B1EC: fstp    [esp+48h+var_40]; float
0x62B1F0: fld     [esp+48h+var_2C]
0x62B1F4: fstp    [esp+48h+var_44]; float
0x62B1F8: fld     [esp+48h+arg_0]
0x62B1FC: fstp    [esp+48h+var_48]; float
0x62B1FF: call    sub_613410
0x62B204: fstp    st
0x62B206: mov     edx, [edi]
0x62B208: mov     eax, [edx+174h]
0x62B20E: add     esp, 0Ch
0x62B211: mov     ecx, edi
0x62B213: call    eax
0x62B215: fld     [esp+3Ch+var_2C]
0x62B219: fchs
0x62B21B: mov     ecx, esi
0x62B21D: fstp    [esp+3Ch+arg_0]
0x62B221: call    sub_4A9720
0x62B226: fsubr   [esp+3Ch+arg_0]
0x62B22A: fstp    [esp+3Ch+arg_0]
0x62B22E: fldz
0x62B230: fld     [esp+3Ch+arg_0]
0x62B234: fucom   st(1)
0x62B236: fnstsw  ax
0x62B238: fstp    st(1)
0x62B23A: test    ah, 44h
0x62B23D: jnp     short loc_62B271
0x62B23F: fcom    qword ptr ds:0A491E0h
0x62B245: fnstsw  ax
0x62B247: test    ah, 41h
0x62B24A: jp      short loc_62B258
0x62B24C: fsubr   qword ptr ds:0A3D5B0h
0x62B252: fstp    [esp+3Ch+arg_0]
0x62B256: jmp     short loc_62B273
0x62B258: fcom    qword ptr ds:0A3D5B8h
0x62B25E: fnstsw  ax
0x62B260: test    ah, 41h
0x62B263: jnz     short loc_62B271
0x62B265: fadd    qword ptr ds:0A3D5B0h
0x62B26B: fstp    [esp+3Ch+arg_0]
0x62B26F: jmp     short loc_62B273
0x62B271: fstp    st
0x62B273: mov     ecx, esi
0x62B275: call    sub_4A9720
0x62B27A: fadd    [esp+3Ch+arg_0]
0x62B27E: push    ecx
0x62B27F: mov     ecx, esi; int
0x62B281: fstp    [esp+40h+arg_0]
0x62B285: fld     [esp+40h+arg_0]
0x62B289: fstp    [esp+40h+var_40]; float
0x62B28C: call    sub_65A650
0x62B291: mov     ecx, [esi+58h]
0x62B294: mov     edx, [ecx]
0x62B296: mov     eax, [edx+36Ch]
0x62B29C: call    eax
0x62B29E: test    eax, eax
0x62B2A0: jnz     loc_62B40C
0x62B2A6: mov     edx, [esi]
0x62B2A8: mov     eax, [edx+174h]
0x62B2AE: push    ebp
0x62B2AF: mov     ecx, esi
0x62B2B1: call    eax
0x62B2B3: mov     edx, [edi]
0x62B2B5: mov     ebp, eax
0x62B2B7: mov     eax, [edx+174h]
0x62B2BD: mov     ecx, edi
0x62B2BF: call    eax
0x62B2C1: fld     dword ptr [eax+4]
0x62B2C4: fsub    dword ptr [ebp+4]
0x62B2C7: lea     ecx, [esp+40h+var_C]
0x62B2CB: push    ecx
0x62B2CC: fstp    [esp+44h+arg_0]
0x62B2D0: fld     dword ptr [eax+8]
0x62B2D3: fsub    dword ptr [ebp+8]
0x62B2D6: fstp    [esp+44h+var_2C]
0x62B2DA: fld     dword ptr [eax]
0x62B2DC: fsub    dword ptr [ebp+0]
0x62B2DF: fstp    [esp+44h+var_C]
0x62B2E3: fld     [esp+44h+arg_0]
0x62B2E7: fstp    [esp+44h+var_8]
0x62B2EB: fld     [esp+44h+var_2C]
0x62B2EF: fstp    [esp+44h+var_4]
0x62B2F3: call    sub_683CB0
0x62B2F8: fstp    [esp+44h+arg_0]
0x62B2FC: add     esp, 4
0x62B2FF: fldz
0x62B301: lea     edx, [esp+40h+var_30]
0x62B305: push    edx; int
0x62B306: fstp    [esp+44h+var_30]
0x62B30A: fld     [esp+44h+arg_0]
0x62B30E: push    ecx
0x62B30F: fstp    [esp+48h+var_48]; float
0x62B312: push    esi; int
0x62B313: call    sub_683D80
0x62B318: fstp    [esp+4Ch+var_2C]
0x62B31C: fld     [esp+4Ch+var_2C]
0x62B320: add     esp, 0Ch
0x62B323: fabs
0x62B325: fstp    [esp+40h+var_2C]
0x62B329: fld     [esp+40h+var_2C]
0x62B32D: fild    dword ptr ds:0B36C18h
0x62B333: fmul    qword ptr ds:0A31C78h
0x62B339: fstp    [esp+40h+var_2C]
0x62B33D: fld     [esp+40h+var_2C]
0x62B341: fcompp
0x62B343: fnstsw  ax
0x62B345: test    ah, 5
0x62B348: jp      short loc_62B367
0x62B34A: fld     [esp+40h+arg_0]
0x62B34E: push    1; char
0x62B350: push    ecx
0x62B351: fstp    [esp+48h+var_48]; float
0x62B354: push    esi; Concurrency::details::SchedulerBase *
0x62B355: call    sub_685530
0x62B35A: add     esp, 0Ch
0x62B35D: pop     ebp
0x62B35E: pop     edi
0x62B35F: pop     esi
0x62B360: pop     ebx
0x62B361: add     esp, 30h
0x62B364: retn    4
0x62B367: push    30h ; '0'
0x62B369: mov     ecx, esi
0x62B36B: call    sub_5E05F0
0x62B370: mov     eax, [ebx]
0x62B372: mov     edx, [eax+188h]
0x62B378: push    1
0x62B37A: push    esi
0x62B37B: mov     ecx, ebx
0x62B37D: call    edx
0x62B37F: mov     eax, [edi]
0x62B381: mov     edx, [eax+190h]
0x62B387: mov     ecx, edi
0x62B389: call    edx
0x62B38B: test    al, al
0x62B38D: jz      short loc_62B39A
0x62B38F: cmp     edi, esi
0x62B391: jz      short loc_62B39A
0x62B393: mov     ecx, edi; this
0x62B395: call    sub_5F8000
0x62B39A: mov     eax, [esi]
0x62B39C: fld     [esp+3Ch+arg_4]
0x62B3A0: mov     edx, [eax+1E8h]
0x62B3A6: push    ecx
0x62B3A7: mov     ecx, esi
0x62B3A9: fstp    [esp+40h+var_40]
0x62B3AC: call    edx
0x62B3AE: mov     eax, [esp+40h+var_28]
0x62B3B2: mov     ecx, [eax+28h]
0x62B3B5: push    0; int
0x62B3B7: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x62B3BC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62B3C1: push    0; int
0x62B3C3: call    sub_569E70
0x62B3C8: push    eax; void *
0x62B3C9: call    OblivionDynamicCast
0x62B3CE: mov     edx, [esi]
0x62B3D0: mov     ebx, eax
0x62B3D2: mov     eax, [edx+120h]
0x62B3D8: add     esp, 14h
0x62B3DB: mov     ecx, esi
0x62B3DD: call    eax
0x62B3DF: mov     edx, [edi]
0x62B3E1: mov     ebp, eax
0x62B3E3: mov     eax, [edx+124h]
0x62B3E9: mov     ecx, edi
0x62B3EB: call    eax
0x62B3ED: push    0
0x62B3EF: push    eax
0x62B3F0: push    ebx
0x62B3F1: mov     ecx, ebp
0x62B3F3: call    MagicCaster_CastMagicItem
0x62B3F8: fld     dword ptr ds:0A34A80h
0x62B3FE: push    0; float
0x62B400: push    ecx
0x62B401: mov     ecx, esi
0x62B403: fstp    [esp+48h+var_48]; float
0x62B406: call    sub_5F25F0
0x62B40B: pop     ebp
0x62B40C: pop     edi
0x62B40D: pop     esi
0x62B40E: pop     ebx
0x62B40F: add     esp, 30h
0x62B412: retn    4
