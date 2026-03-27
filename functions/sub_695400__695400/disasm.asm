0x695400: sub     esp, 10h
0x695403: push    ebx
0x695404: push    ebp
0x695405: push    esi
0x695406: push    edi
0x695407: mov     edi, [esp+20h+arg_10]
0x69540B: test    edi, edi
0x69540D: mov     esi, ecx
0x69540F: jz      short loc_695430
0x695411: mov     eax, [edi]
0x695413: mov     edx, [eax+190h]
0x695419: mov     ecx, edi
0x69541B: call    edx
0x69541D: test    al, al
0x69541F: jz      short loc_695430
0x695421: mov     ecx, edi; this
0x695423: call    Actor_IsGhost
0x695428: test    al, al
0x69542A: jnz     loc_6957A2
0x695430: mov     ecx, [esi+70h]
0x695433: call    EffectItem_GetArea
0x695438: mov     [esp+20h+var_10], eax
0x69543C: fild    [esp+20h+var_10]
0x695440: fmul    dword ptr ds:0B37ED0h
0x695446: fstp    [esp+20h+var_10]
0x69544A: fld     [esp+20h+var_10]
0x69544E: fst     dword ptr [esi+84h]
0x695454: fld     dword ptr ds:0B37ED8h
0x69545A: fcom    st(1)
0x69545C: fnstsw  ax
0x69545E: test    ah, 5
0x695461: jp      short loc_69546D
0x695463: fstp    st(1)
0x695465: fstp    dword ptr [esi+84h]
0x69546B: jmp     short loc_69548A
0x69546D: fstp    st
0x69546F: fld     dword ptr ds:0B37EE0h
0x695475: fcom    st(1)
0x695477: fnstsw  ax
0x695479: fstp    st(1)
0x69547B: test    ah, 41h
0x69547E: jnz     short loc_695488
0x695480: fstp    dword ptr [esi+84h]
0x695486: jmp     short loc_69548A
0x695488: fstp    st
0x69548A: mov     ebp, [esp+20h+arg_0]
0x69548E: mov     ebx, [esp+20h+arg_4]
0x695492: mov     ecx, [esp+20h+arg_8]
0x695496: sub     esp, 0Ch
0x695499: mov     eax, esp
0x69549B: mov     [eax], ebp
0x69549D: mov     [eax+4], ebx
0x6954A0: mov     [eax+8], ecx
0x6954A3: mov     ecx, esi; this
0x6954A5: call    TESObjectREFR_SetPosition
0x6954AA: mov     edx, [esi]
0x6954AC: mov     eax, [edx+154h]
0x6954B2: mov     ecx, esi
0x6954B4: call    eax
0x6954B6: mov     edi, eax
0x6954B8: test    edi, edi
0x6954BA: jz      short loc_695539
0x6954BC: push    offset dword_B258DC
0x6954C1: lea     ecx, [esp+24h+var_C]
0x6954C5: push    ecx; float
0x6954C6: lea     ecx, [edi+64h]
0x6954C9: call    sub_7101F0
0x6954CE: mov     edx, [esp+20h+arg_C]
0x6954D2: push    edx; int
0x6954D3: mov     edx, [eax]
0x6954D5: sub     esp, 0Ch
0x6954D8: mov     ecx, esp
0x6954DA: mov     [ecx], edx
0x6954DC: mov     edx, [eax+4]
0x6954DF: mov     eax, [eax+8]
0x6954E2: mov     [ecx+4], edx
0x6954E5: mov     [ecx+8], eax
0x6954E8: mov     ecx, [esp+30h+arg_8]
0x6954EC: sub     esp, 0Ch
0x6954EF: mov     eax, esp
0x6954F1: mov     [eax], ebp
0x6954F3: mov     [eax+4], ebx
0x6954F6: mov     [eax+8], ecx
0x6954F9: mov     ecx, esi
0x6954FB: call    sub_69F880
0x695500: cmp     byte ptr [esp+20h+arg_14], 0
0x695505: jnz     short loc_695539
0x695507: mov     edx, [esp+20h+arg_8]
0x69550B: mov     eax, [edi]
0x69550D: mov     [edi+54h], ebp
0x695510: mov     [edi+58h], ebx
0x695513: mov     [edi+5Ch], edx
0x695516: mov     edx, [eax+58h]
0x695519: push    offset aAreaeffect; "AreaEffect"
0x69551E: mov     ecx, edi
0x695520: call    edx
0x695522: test    eax, eax
0x695524: jz      short loc_695539
0x695526: fld     dword ptr [esi+84h]
0x69552C: fabs
0x69552E: fstp    [esp+20h+arg_C]
0x695532: fld     [esp+20h+arg_C]
0x695536: fstp    dword ptr [eax+60h]
0x695539: mov     ecx, [esi+88h]
0x69553F: test    ecx, ecx
0x695541: jz      short loc_695548
0x695543: call    sub_6B7240
0x695548: mov     ecx, esi; this
0x69554A: call    MobileObject_GetCharProxy
0x69554F: test    eax, eax
0x695551: mov     bl, byte ptr [esp+20h+arg_14]
0x695555: jz      short loc_6955C3
0x695557: test    bl, bl
0x695559: jnz     short loc_6955C3
0x69555B: mov     ecx, esi; this
0x69555D: call    MobileObject_GetCharProxy
0x695562: add     eax, 1F0h
0x695567: test    dword ptr [eax+4], 8000h
0x69556E: jz      short loc_69557C
0x695570: mov     eax, [esi]
0x695572: mov     edx, [eax+214h]
0x695578: mov     ecx, esi
0x69557A: call    edx
0x69557C: lea     eax, [esp+20h+arg_14]
0x695580: push    eax
0x695581: mov     ecx, esi; this
0x695583: call    MobileObject_GetCharProxy
0x695588: mov     ecx, eax
0x69558A: call    sub_57E270
0x69558F: mov     edi, [esp+20h+arg_14]
0x695593: mov     ecx, esi; this
0x695595: or      edi, 4000h
0x69559B: call    MobileObject_GetCharProxy
0x6955A0: mov     ecx, [eax+364h]
0x6955A6: test    ecx, ecx
0x6955A8: jz      short loc_6955C3
0x6955AA: mov     eax, [ecx+8]
0x6955AD: test    eax, eax
0x6955AF: jz      short loc_6955B9
0x6955B1: add     eax, 14h
0x6955B4: jz      short loc_6955B9
0x6955B6: mov     [eax+1Ch], edi
0x6955B9: mov     edx, [ecx]
0x6955BB: mov     eax, [edx+80h]
0x6955C1: call    eax
0x6955C3: test    bl, bl
0x6955C5: mov     dword ptr [esi+80h], 2
0x6955CF: jnz     short loc_69561C
0x6955D1: mov     edx, [esi]
0x6955D3: mov     eax, [edx+174h]
0x6955D9: mov     edi, [esi+6Ch]
0x6955DC: mov     ebp, [esi+68h]
0x6955DF: mov     ecx, esi
0x6955E1: call    eax
0x6955E3: fld1
0x6955E5: mov     ecx, [esp+20h+arg_10]
0x6955E9: mov     edx, [eax]
0x6955EB: sub     esp, 8
0x6955EE: fst     [esp+28h+var_24]; float
0x6955F2: fstp    [esp+28h+var_28]; float
0x6955F5: push    0; int
0x6955F7: push    ecx; int
0x6955F8: push    esi; int
0x6955F9: sub     esp, 0Ch
0x6955FC: mov     ecx, esp
0x6955FE: mov     [ecx], edx
0x695600: mov     edx, [eax+4]
0x695603: mov     eax, [eax+8]
0x695606: mov     [ecx+4], edx
0x695609: mov     [ecx+8], eax
0x69560C: mov     ecx, esi; this
0x69560E: call    TESObjectREFR_GetParentCell
0x695613: push    eax; int
0x695614: push    edi; int
0x695615: mov     ecx, ebp
0x695617: call    MagicCaster_TargetEffectHit??
0x69561C: mov     edx, [esi]
0x69561E: mov     eax, [edx+154h]
0x695624: mov     ecx, esi
0x695626: call    eax
0x695628: mov     edi, eax
0x69562A: mov     eax, [esi+74h]
0x69562D: test    eax, eax
0x69562F: jz      short loc_695646
0x695631: cmp     dword ptr [eax+98h], 47444946h
0x69563B: jnz     short loc_695646
0x69563D: push    edi
0x69563E: call    sub_481660
0x695643: add     esp, 4
0x695646: test    edi, edi
0x695648: jz      loc_695710
0x69564E: mov     edi, [edi+0Ch]
0x695651: test    edi, edi
0x695653: jz      loc_695710
0x695659: mov     edx, [edi]
0x69565B: mov     eax, [edx+4]
0x69565E: mov     ecx, edi
0x695660: call    eax
0x695662: test    eax, eax
0x695664: jz      short loc_695682
0x695666: jmp     short loc_695670
0x695668: align 10h
0x695670: cmp     eax, offset stru_B3CAC0
0x695675: jz      loc_6957AC
0x69567B: mov     eax, [eax+4]
0x69567E: test    eax, eax
0x695680: jnz     short loc_695670
0x695682: xor     al, al
0x695684: neg     al
0x695686: sbb     eax, eax
0x695688: and     eax, edi
0x69568A: mov     edi, eax
0x69568C: jz      loc_695710
0x695692: lea     ecx, [esp+20h+arg_14]
0x695696: push    ecx
0x695697: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x69569C: lea     ecx, [edi+58h]
0x69569F: call    NiTMap_GetAt
0x6956A4: test    al, al
0x6956A6: jz      short loc_695710
0x6956A8: mov     ebp, [esp+20h+arg_14]
0x6956AC: test    ebp, ebp
0x6956AE: jz      short loc_695710
0x6956B0: fldz
0x6956B2: push    ecx
0x6956B3: mov     ecx, edi
0x6956B5: fstp    [esp+24h+var_24]; float
0x6956B8: call    sub_4715C0
0x6956BD: fldz
0x6956BF: push    0; int
0x6956C1: push    0; int
0x6956C3: sub     esp, 8
0x6956C6: fstp    [esp+30h+var_2C]; float
0x6956CA: mov     ecx, ebp
0x6956CC: fld1
0x6956CE: fstp    [esp+30h+var_30]; float
0x6956D1: push    0; char
0x6956D3: push    0; int
0x6956D5: call    sub_6C9BA0
0x6956DA: or      word ptr [edi+8], 8
0x6956DF: fld     dword ptr ds:0A7DEB4h
0x6956E5: fchs
0x6956E7: fstp    dword ptr [ebp+48h]
0x6956EA: mov     ecx, [esi+8Ch]
0x6956F0: test    ecx, ecx
0x6956F2: jz      short loc_695710
0x6956F4: fld     dword ptr [ebp+30h]
0x6956F7: push    ecx
0x6956F8: fmul    qword ptr ds:0A31C70h
0x6956FE: fstp    [esp+24h+arg_14]
0x695702: fld     [esp+24h+arg_14]
0x695706: fstp    [esp+24h+var_24]; float
0x695709: push    0; char
0x69570B: call    MagicCaster_CastingVFX_ClearSomething???
0x695710: mov     edx, ds:0B33398h
0x695716: mov     ecx, [edx+24h]
0x695719: test    ecx, ecx
0x69571B: jz      loc_6957A2
0x695721: mov     eax, [esi+74h]
0x695724: mov     eax, [eax+8Ch]
0x69572A: test    eax, eax
0x69572C: jz      short loc_6957A2
0x69572E: test    bl, bl
0x695730: jnz     short loc_6957A2
0x695732: mov     eax, [eax+0Ch]
0x695735: push    1
0x695737: push    102h
0x69573C: push    eax
0x69573D: call    OSGLobals_PlaySound
0x695742: mov     edi, eax
0x695744: test    edi, edi
0x695746: jz      short loc_6957A2
0x695748: mov     edx, [esi]
0x69574A: mov     eax, [edx+174h]
0x695750: mov     ecx, esi
0x695752: call    eax
0x695754: mov     ecx, [eax]
0x695756: mov     edx, [eax+4]
0x695759: mov     eax, [eax+8]
0x69575C: sub     esp, 0Ch
0x69575F: mov     [esp+2Ch+arg_8], eax
0x695763: fld     [esp+2Ch+arg_8]
0x695767: fstp    [esp+2Ch+var_24]; float
0x69576B: mov     [esp+2Ch+arg_4], edx
0x69576F: fld     [esp+2Ch+arg_4]
0x695773: mov     [esp+2Ch+arg_0], ecx
0x695777: fstp    [esp+2Ch+var_28]; float
0x69577B: mov     ecx, edi
0x69577D: fld     [esp+2Ch+arg_0]
0x695781: fstp    [esp+2Ch+var_2C]; float
0x695784: call    sub_6B7360
0x695789: push    0
0x69578B: mov     ecx, edi
0x69578D: call    sub_6B71C0
0x695792: mov     ecx, edi; this
0x695794: call    sub_6B73E0
0x695799: push    edi
0x69579A: call    FormHeapFree
0x69579F: add     esp, 4
0x6957A2: pop     edi
0x6957A3: pop     esi
0x6957A4: pop     ebp
0x6957A5: pop     ebx
0x6957A6: add     esp, 10h
0x6957A9: retn    18h
0x6957AC: mov     al, 1
0x6957AE: jmp     loc_695684
