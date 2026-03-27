0x6A7560: push    0FFFFFFFFh
0x6A7562: push    offset SEH_6A7560
0x6A7567: mov     eax, large fs:0
0x6A756D: push    eax
0x6A756E: sub     esp, 30h
0x6A7571: push    ebx
0x6A7572: push    ebp
0x6A7573: push    esi
0x6A7574: push    edi
0x6A7575: mov     eax, ds:0B30AACh
0x6A757A: xor     eax, esp
0x6A757C: push    eax
0x6A757D: lea     eax, [esp+50h+var_C]
0x6A7581: mov     large fs:0, eax
0x6A7587: mov     esi, ecx
0x6A7589: mov     ecx, [esi+48h]
0x6A758C: test    ecx, ecx
0x6A758E: jz      loc_6A780E
0x6A7594: cmp     dword ptr [esi+24h], 0
0x6A7598: jz      loc_6A780E
0x6A759E: mov     eax, [ecx]
0x6A75A0: mov     edx, [eax+170h]
0x6A75A6: call    edx
0x6A75A8: cmp     byte ptr [eax+4], 17h
0x6A75AC: jz      loc_6A780E
0x6A75B2: mov     ecx, [esi+48h]
0x6A75B5: mov     eax, [ecx]
0x6A75B7: mov     edx, [eax+154h]
0x6A75BD: call    edx
0x6A75BF: mov     ebp, eax
0x6A75C1: test    ebp, ebp
0x6A75C3: jz      loc_6A780E
0x6A75C9: push    ebp
0x6A75CA: call    sub_480340
0x6A75CF: add     esp, 4
0x6A75D2: test    eax, eax
0x6A75D4: jz      loc_6A780E
0x6A75DA: mov     edi, [eax+10h]
0x6A75DD: test    edi, edi
0x6A75DF: jz      loc_6A780E
0x6A75E5: push    edi
0x6A75E6: call    sub_68FA90
0x6A75EB: add     esp, 4
0x6A75EE: lea     eax, [esp+50h+var_34]
0x6A75F2: push    eax
0x6A75F3: mov     ecx, edi
0x6A75F5: call    sub_497340
0x6A75FA: mov     ecx, [eax]
0x6A75FC: and     cl, 3Fh
0x6A75FF: cmp     cl, 4
0x6A7602: jz      short loc_6A761D
0x6A7604: lea     edx, [esp+50h+var_34]
0x6A7608: push    edx
0x6A7609: mov     ecx, edi
0x6A760B: call    sub_497340
0x6A7610: mov     eax, [eax]
0x6A7612: and     eax, 3Fh
0x6A7615: cmp     al, 5
0x6A7617: jnz     loc_6A780E
0x6A761D: push    1Ch; Size
0x6A761F: call    FormHeapAlloc
0x6A7624: mov     ebx, eax
0x6A7626: add     esp, 4
0x6A7629: mov     [esp+50h+var_34], ebx
0x6A762D: test    ebx, ebx
0x6A762F: mov     [esp+50h+var_4], 0
0x6A7637: jz      short loc_6A7654
0x6A7639: lea     ecx, [esp+50h+var_38]
0x6A763D: push    ecx
0x6A763E: mov     ecx, edi
0x6A7640: call    sub_497340
0x6A7645: mov     edx, [eax]
0x6A7647: mov     eax, [esi+48h]
0x6A764A: push    edx
0x6A764B: push    edi
0x6A764C: push    eax
0x6A764D: mov     ecx, ebx
0x6A764F: call    sub_68FAF0
0x6A7654: push    ebp
0x6A7655: or      edi, 0FFFFFFFFh
0x6A7658: push    offset dword_B35288
0x6A765D: mov     [esp+58h+var_4], edi
0x6A7661: call    NiRTTI_Cast
0x6A7666: add     esp, 8
0x6A7669: test    eax, eax
0x6A766B: jz      short loc_6A7676
0x6A766D: push    6
0x6A766F: mov     ecx, eax
0x6A7671: call    sub_4A01B0
0x6A7676: mov     ecx, ds:0B333C4h
0x6A767C: cmp     dword ptr [ecx+574h], 0
0x6A7683: jz      short loc_6A768A
0x6A7685: call    sub_66A670
0x6A768A: mov     ecx, ds:0B33B00h
0x6A7690: call    sub_45A500
0x6A7695: test    al, al
0x6A7697: jnz     short loc_6A76A2
0x6A7699: fld     dword ptr ds:0A5A04Ch
0x6A769F: fstp    dword ptr [esi+40h]
0x6A76A2: fld     dword ptr [esi+40h]
0x6A76A5: push    ecx
0x6A76A6: mov     ecx, [esi+48h]
0x6A76A9: fstp    [esp+54h+var_54]; float
0x6A76AC: push    3; int
0x6A76AE: push    ecx; int
0x6A76AF: mov     ecx, ds:0B333C4h
0x6A76B5: call    sub_66D120
0x6A76BA: mov     ecx, ds:0B333C4h
0x6A76C0: lea     edx, [esp+50h+var_18]
0x6A76C4: push    edx
0x6A76C5: lea     eax, [esp+54h+var_24]
0x6A76C9: push    eax
0x6A76CA: call    sub_5F11F0
0x6A76CF: mov     ecx, ds:0B33B00h
0x6A76D5: call    sub_45A500
0x6A76DA: test    al, al
0x6A76DC: jnz     loc_6A7771
0x6A76E2: mov     ecx, ds:0B333C4h
0x6A76E8: mov     ecx, [ecx+574h]
0x6A76EE: lea     edx, [esp+50h+var_30]
0x6A76F2: push    edx
0x6A76F3: call    sub_6A7290
0x6A76F8: fld     [esp+50h+var_30]
0x6A76FC: fsub    [esp+50h+var_24]
0x6A7700: lea     eax, [esp+50h+var_30]
0x6A7704: push    eax
0x6A7705: lea     ecx, [esp+54h+var_18]
0x6A7709: fstp    [esp+54h+var_3C]
0x6A770D: fld     [esp+54h+var_2C]
0x6A7711: fsub    [esp+54h+var_20]
0x6A7715: fstp    [esp+54h+var_38]
0x6A7719: fld     [esp+54h+var_28]
0x6A771D: fsub    [esp+54h+var_1C]
0x6A7721: fstp    [esp+54h+var_34]
0x6A7725: fld     [esp+54h+var_3C]
0x6A7729: fstp    [esp+54h+var_30]
0x6A772D: fld     [esp+54h+var_38]
0x6A7731: fstp    [esp+54h+var_2C]
0x6A7735: fld     [esp+54h+var_34]
0x6A7739: fstp    [esp+54h+var_28]
0x6A773D: call    sub_47D9E0
0x6A7742: fstp    [esp+50h+var_34]
0x6A7746: fld     [esp+50h+var_34]
0x6A774A: fst     dword ptr [esi+40h]
0x6A774D: mov     ecx, ds:0B333C4h
0x6A7753: fstp    [esp+50h+var_34]
0x6A7757: push    ecx
0x6A7758: fld     [esp+54h+var_34]
0x6A775C: fstp    dword ptr [ecx+584h]
0x6A7762: lea     ecx, [esp+54h+var_18]
0x6A7766: fld     dword ptr [esi+40h]
0x6A7769: fstp    [esp+54h+var_54]; float
0x6A776C: call    NiPoint3__MutliplyByValue
0x6A7771: mov     edx, [esi+0Ch]
0x6A7774: mov     eax, [edx+1Ch]
0x6A7777: cmp     dword ptr [eax+78h], 0
0x6A777B: jz      loc_6A7817
0x6A7781: push    4Ch ; 'L'; Size
0x6A7783: call    FormHeapAlloc
0x6A7788: add     esp, 4
0x6A778B: mov     [esp+50h+var_34], eax
0x6A778F: test    eax, eax
0x6A7791: mov     [esp+50h+var_4], 1
0x6A7799: jz      short loc_6A77BE
0x6A779B: mov     ecx, [esi+0Ch]
0x6A779E: fld     dword ptr ds:0A30634h
0x6A77A4: mov     ecx, [ecx+1Ch]
0x6A77A7: mov     ecx, [ecx+78h]
0x6A77AA: mov     edx, [esi+48h]
0x6A77AD: push    ecx
0x6A77AE: fstp    [esp+54h+var_54]; float
0x6A77B1: push    ecx; int
0x6A77B2: push    edx; int
0x6A77B3: mov     ecx, eax
0x6A77B5: call    MagicShaderHitEffect_constr_args2
0x6A77BA: mov     esi, eax
0x6A77BC: jmp     short loc_6A77C0
0x6A77BE: xor     esi, esi
0x6A77C0: mov     eax, [esi]
0x6A77C2: mov     edx, [eax+68h]
0x6A77C5: mov     ecx, esi
0x6A77C7: mov     [esp+50h+var_4], edi
0x6A77CB: call    edx
0x6A77CD: test    al, al
0x6A77CF: jz      short loc_6A77F0
0x6A77D1: push    esi
0x6A77D2: mov     ecx, offset ActorProcessManager_ptr
0x6A77D7: call    sub_678D30
0x6A77DC: mov     ecx, [esp+50h+var_C]
0x6A77E0: mov     large fs:0, ecx
0x6A77E7: pop     ecx
0x6A77E8: pop     edi
0x6A77E9: pop     esi
0x6A77EA: pop     ebp
0x6A77EB: pop     ebx
0x6A77EC: add     esp, 3Ch
0x6A77EF: retn
0x6A77F0: mov     eax, [esi]
0x6A77F2: mov     edx, [eax]
0x6A77F4: push    1
0x6A77F6: mov     ecx, esi
0x6A77F8: call    edx
0x6A77FA: mov     ecx, [esp+50h+var_C]
0x6A77FE: mov     large fs:0, ecx
0x6A7805: pop     ecx
0x6A7806: pop     edi
0x6A7807: pop     esi
0x6A7808: pop     ebp
0x6A7809: pop     ebx
0x6A780A: add     esp, 3Ch
0x6A780D: retn
0x6A780E: push    0
0x6A7810: mov     ecx, esi
0x6A7812: call    ActiveEffect_Base_Remove
0x6A7817: mov     ecx, [esp+50h+var_C]
0x6A781B: mov     large fs:0, ecx
0x6A7822: pop     ecx
0x6A7823: pop     edi
0x6A7824: pop     esi
0x6A7825: pop     ebp
0x6A7826: pop     ebx
0x6A7827: add     esp, 3Ch
0x6A782A: retn
