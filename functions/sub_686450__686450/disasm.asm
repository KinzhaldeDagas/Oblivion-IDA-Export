0x686450: push    ebp
0x686451: mov     ebp, esp
0x686453: and     esp, 0FFFFFFF0h
0x686456: push    0FFFFFFFFh
0x686458: push    offset SEH_686450
0x68645D: mov     eax, large fs:0
0x686463: push    eax
0x686464: sub     esp, 128h
0x68646A: mov     eax, ds:0B30AACh
0x68646F: xor     eax, esp
0x686471: mov     [esp+134h+var_14], eax
0x686478: push    ebx
0x686479: push    esi
0x68647A: push    edi
0x68647B: mov     eax, ds:0B30AACh
0x686480: xor     eax, esp
0x686482: push    eax
0x686483: lea     eax, [esp+144h+var_C]
0x68648A: mov     large fs:0, eax
0x686490: mov     ebx, [ebp+arg_8]
0x686493: mov     esi, [ebp+arg_4]
0x686496: mov     edi, [ebp+arg_0]
0x686499: push    esi
0x68649A: mov     ecx, ebx
0x68649C: mov     [esp+148h+var_F4], ebx
0x6864A0: call    TeleportData__SetTeleportPosition
0x6864A5: cmp     byte ptr ds:0B3C089h, 0
0x6864AC: jnz     loc_686A35
0x6864B2: mov     ecx, ds:0B333A0h
0x6864B8: cmp     dword ptr [ecx+34h], 0
0x6864BC: jnz     short loc_6864CC
0x6864BE: push    esi
0x6864BF: call    sub_43F840
0x6864C4: test    al, al
0x6864C6: jz      loc_686A35
0x6864CC: test    edi, edi
0x6864CE: jz      loc_6868E2
0x6864D4: mov     ecx, edi; this
0x6864D6: call    MobileObject_GetCharProxy
0x6864DB: test    eax, eax
0x6864DD: jz      loc_6868E2
0x6864E3: mov     ecx, [edi+58h]
0x6864E6: test    ecx, ecx
0x6864E8: jz      loc_6868E2
0x6864EE: mov     eax, [ecx]
0x6864F0: mov     edx, [eax+8]
0x6864F3: call    edx
0x6864F5: test    eax, eax
0x6864F7: jnz     loc_686A35
0x6864FD: mov     [esp+144h+var_12A], al
0x686501: lea     eax, [esp+144h+var_12A]
0x686505: push    eax
0x686506: push    ebx
0x686507: push    esi
0x686508: push    edi
0x686509: call    sub_685D60
0x68650E: add     esp, 10h
0x686511: test    al, al
0x686513: jz      short loc_68651E
0x686515: mov     al, [esp+144h+var_12A]
0x686519: jmp     loc_6868E4
0x68651E: cmp     [ebp+arg_10], 0
0x686522: mov     [esp+144h+var_129], 0
0x686527: jz      short loc_68652E
0x686529: mov     [esp+144h+var_129], 1
0x68652E: mov     ecx, edi
0x686530: call    sub_5E0660
0x686535: fstp    [esp+144h+var_128]
0x686539: fldz
0x68653B: fld     [esp+144h+var_128]
0x68653F: fucom   st(1)
0x686541: fnstsw  ax
0x686543: fstp    st(1)
0x686545: test    ah, 44h
0x686548: jp      short loc_68655A
0x68654A: fstp    st
0x68654C: fld     dword ptr ds:0A2FFE8h
0x686552: fstp    [esp+144h+var_128]
0x686556: fld     [esp+144h+var_128]
0x68655A: fst     [esp+144h+var_124]
0x68655E: fld     dword ptr ds:0A3F458h
0x686564: fcom    st(1)
0x686566: fnstsw  ax
0x686568: fstp    st(1)
0x68656A: test    ah, 41h
0x68656D: jnz     short loc_686575
0x68656F: fstp    [esp+144h+var_124]
0x686573: jmp     short loc_686577
0x686575: fstp    st
0x686577: mov     ecx, ds:0B333A0h
0x68657D: fld     dword ptr ds:0A3B888h
0x686583: mov     ebx, [ecx+34h]
0x686586: fstp    [esp+144h+var_104]
0x68658A: test    ebx, ebx
0x68658C: mov     [esp+144h+var_12A], 0
0x686591: jnz     short loc_6865C9
0x686593: call    TES__GetCurrentWorldspace
0x686598: test    eax, eax
0x68659A: jz      short loc_6865FF
0x68659C: mov     ecx, ds:0B333A0h
0x6865A2: push    ebx; int
0x6865A3: call    TES__GetCurrentWorldspace
0x6865A8: fld     dword ptr [esi+4]
0x6865AB: mov     ecx, ds:0B33A98h
0x6865B1: push    eax; int
0x6865B2: sub     esp, 8
0x6865B5: fstp    [esp+154h+var_150]; float
0x6865B9: fld     dword ptr [esi]
0x6865BB: fstp    [esp+154h+var_154]; float
0x6865BE: call    sub_44A270
0x6865C3: mov     ebx, eax
0x6865C5: test    ebx, ebx
0x6865C7: jz      short loc_6865FF
0x6865C9: movzx   ecx, byte ptr [ebx+24h]
0x6865CD: shr     ecx, 1
0x6865CF: test    cl, 1
0x6865D2: jz      short loc_6865FF
0x6865D4: mov     ecx, ebx
0x6865D6: call    TESObjectCELL_GetWaterHeight
0x6865DB: fstp    [esp+144h+var_104]
0x6865DF: mov     ecx, ebx; this
0x6865E1: call    TESObjectCELL__GetWaterForm
0x6865E6: test    eax, eax
0x6865E8: jz      short loc_6865FF
0x6865EA: mov     edx, [eax]
0x6865EC: mov     ecx, eax
0x6865EE: mov     eax, [edx+88h]
0x6865F4: call    eax
0x6865F6: test    al, al
0x6865F8: jz      short loc_6865FF
0x6865FA: mov     [esp+144h+var_12A], 1
0x6865FF: fld1
0x686601: xor     eax, eax
0x686603: fst     [esp+144h+var_BC]
0x68660A: mov     [esp+144h+var_E0], offset ??_7hkClosestRayHitCollector@@6B@; const hkClosestRayHitCollector::`vftable'
0x686612: fstp    [esp+144h+var_DC]
0x686616: mov     [esp+144h+var_B0], eax
0x68661D: lea     ecx, [esp+144h+a2]
0x686624: mov     [esp+144h+var_4], eax
0x68662B: call    bhkWorldRayCastData__Init
0x686630: mov     ecx, edi; this
0x686632: call    MobileObject_GetCharProxy
0x686637: mov     ecx, eax
0x686639: call    sub_608B30
0x68663E: mov     edx, [esi+8]
0x686641: shl     eax, 10h
0x686644: mov     [esp+144h+var_F8], edx
0x686648: fld     [esp+144h+var_F8]
0x68664C: fadd    [esp+144h+var_128]
0x686650: or      eax, 1Bh
0x686653: lea     ecx, [esp+144h+var_E0]
0x686657: mov     [esp+144h+a2.RayHitCollector1], ecx
0x68665E: mov     ecx, [esi+4]
0x686661: fstp    [esp+144h+var_F8]
0x686665: mov     [esp+144h+a2.WorldRayCastInput.FilterInfo], eax
0x68666C: mov     eax, [esi]
0x68666E: mov     [esp+144h+var_FC], ecx
0x686672: mov     [esp+144h+var_11C], ecx
0x686676: lea     ecx, [esp+144h+var_100]
0x68667A: mov     [esp+144h+var_100], eax
0x68667E: mov     [esp+144h+var_120], eax
0x686682: mov     eax, [esp+144h+var_F8]
0x686686: push    ecx
0x686687: lea     ecx, [esp+148h+a2]
0x68668E: mov     [esp+148h+a2.RayHitCollector2], 0
0x686699: mov     [esp+148h+var_118], eax
0x68669D: call    bhkWorldRayCastData__SetCastInputFrom
0x6866A2: fld     [esp+144h+var_124]
0x6866A6: fadd    [esp+144h+var_128]
0x6866AA: lea     edx, [esp+144h+var_114]
0x6866AE: push    edx
0x6866AF: lea     ecx, [esp+148h+a2]
0x6866B6: fst     [esp+148h+var_F0]
0x6866BA: fstp    [esp+148h+var_124]
0x6866BE: fld     [esp+148h+var_124]
0x6866C2: fld     qword ptr ds:0A2FC68h
0x6866C8: fmul    st, st(1)
0x6866CA: fstp    [esp+148h+var_124]
0x6866CE: fld     [esp+148h+var_124]
0x6866D2: fst     [esp+148h+var_114]
0x6866D6: fstp    [esp+148h+var_110]
0x6866DA: fmul    qword ptr ds:0A3D360h
0x6866E0: fstp    [esp+148h+var_10C]
0x6866E4: call    sub_663FF0
0x6866E9: mov     ecx, ds:0B333A0h; this
0x6866EF: lea     eax, [esp+144h+a2]
0x6866F6: push    eax; a2
0x6866F7: call    TES__CastRay
0x6866FC: fld     [esp+144h+var_118]
0x686700: cmp     [esp+144h+a2.WorldRayCastOutput.RootCollidable], 0
0x686708: mov     esi, eax
0x68670A: jz      short loc_68671B
0x68670C: fld     [esp+144h+a2.WorldRayCastOutput.HitFraction]
0x686713: fmul    [esp+144h+var_F0]
0x686717: fsubp   st(1), st
0x686719: jmp     short loc_68671F
0x68671B: fsub    [esp+144h+var_F0]
0x68671F: mov     edx, [edi]
0x686721: fstp    [esp+144h+var_118]
0x686725: mov     eax, [edx+288h]
0x68672B: push    38h ; '8'
0x68672D: mov     ecx, edi
0x68672F: call    eax
0x686731: fldz
0x686733: fcom    st(1)
0x686735: fnstsw  ax
0x686737: fstp    st(1)
0x686739: test    ah, 5
0x68673C: jnp     short loc_68674D
0x68673E: mov     ecx, edi
0x686740: fstp    st
0x686742: call    Actor_CanFly
0x686747: fldz
0x686749: test    al, al
0x68674B: jz      short loc_68676C
0x68674D: test    ebx, ebx
0x68674F: jz      short loc_68676C
0x686751: fld     [esp+144h+var_118]
0x686755: fld     [esp+144h+var_104]
0x686759: fcom    st(1)
0x68675B: fnstsw  ax
0x68675D: fstp    st(1)
0x68675F: test    ah, 41h
0x686762: jnz     short loc_68676A
0x686764: fstp    [esp+144h+var_118]
0x686768: jmp     short loc_68676C
0x68676A: fstp    st
0x68676C: cmp     [esp+144h+var_129], 0
0x686771: jz      short loc_6867D8
0x686773: fld1
0x686775: lea     ecx, [esp+144h+var_114]
0x686779: fst     [esp+144h+var_114]
0x68677D: push    ecx
0x68677E: fstp    dword ptr [esp+148h+var_F0+4]
0x686782: lea     edx, [esp+148h+var_120]
0x686786: push    edx
0x686787: lea     eax, [esp+14Ch+var_F0]
0x68678B: fst     [esp+14Ch+var_110]
0x68678F: push    eax
0x686790: fst     [esp+150h+var_10C]
0x686794: lea     ecx, [esp+150h+var_100]
0x686798: fst     [esp+150h+var_108]
0x68679C: push    ecx
0x68679D: fst     dword ptr [esp+154h+var_F0]
0x6867A1: fst     [esp+154h+var_E8]
0x6867A5: fstp    [esp+154h+var_E4]
0x6867A9: call    sub_47F070
0x6867AE: add     esp, 10h
0x6867B1: mov     ebx, eax
0x6867B3: call    sub_4E70B0
0x6867B8: push    eax; a2
0x6867B9: mov     ecx, ebx; this
0x6867BB: call    sub_405680
0x6867C0: fld     dword ptr ds:0A3D8F0h
0x6867C6: push    ecx
0x6867C7: mov     ecx, ds:0B333A0h
0x6867CD: fstp    [esp+148h+var_148]; float
0x6867D0: push    ebx; int
0x6867D1: call    sub_440E60
0x6867D6: jmp     short loc_6867DA
0x6867D8: fstp    st
0x6867DA: mov     ebx, [esp+144h+var_F4]
0x6867DE: lea     edx, [esp+144h+var_120]
0x6867E2: push    edx
0x6867E3: mov     ecx, ebx
0x6867E5: call    TeleportData__SetTeleportPosition
0x6867EA: push    edi
0x6867EB: mov     ecx, ebx
0x6867ED: call    sub_68CB40
0x6867F2: mov     ecx, ebx
0x6867F4: call    sub_68CAB0
0x6867F9: test    al, al
0x6867FB: jnz     loc_686A00
0x686801: mov     ecx, edi
0x686803: call    sub_5E1E90
0x686808: test    al, al
0x68680A: jnz     loc_6868D6
0x686810: mov     ecx, ebx
0x686812: call    sub_68CA80
0x686817: test    al, al
0x686819: jz      loc_686908
0x68681F: cmp     [esp+144h+var_12A], 0
0x686824: jnz     short loc_68686A
0x686826: mov     ecx, edi; this
0x686828: call    Actor_CanSwim
0x68682D: test    al, al
0x68682F: jz      short loc_686840
0x686831: mov     ecx, edi; this
0x686833: call    sub_5E3400
0x686838: test    al, al
0x68683A: jnz     loc_68696D
0x686840: mov     ecx, edi; this
0x686842: call    Actor_IsCreature
0x686847: test    al, al
0x686849: jz      short loc_68686A
0x68684B: fld     [esp+144h+var_104]
0x68684F: fsub    [esp+144h+var_118]
0x686853: fld     [esp+144h+var_128]
0x686857: fmul    qword ptr ds:0A432F0h
0x68685D: fcompp
0x68685F: fnstsw  ax
0x686861: test    ah, 41h
0x686864: jz      loc_68696D
0x68686A: cmp     [esp+144h+var_129], 0
0x68686F: jz      short loc_6868D6
0x686871: fldz
0x686873: lea     eax, [esp+144h+var_114]
0x686877: fst     [esp+144h+var_114]
0x68687B: push    eax; int
0x68687C: fst     [esp+148h+var_110]
0x686880: push    ecx
0x686881: fld1
0x686883: fstp    [esp+14Ch+var_10C]
0x686887: fstp    [esp+14Ch+var_108]
0x68688B: fld     dword ptr ds:0A31E2Ch
0x686891: fstp    [esp+14Ch+var_14C]; float
0x686894: call    sub_47FD30
0x686899: add     esp, 8
0x68689C: mov     esi, eax
0x68689E: call    sub_4E70B0
0x6868A3: push    eax; a2
0x6868A4: mov     ecx, esi; this
0x6868A6: call    sub_405680
0x6868AB: mov     ecx, [esp+144h+var_120]
0x6868AF: mov     [esi+54h], ecx
0x6868B2: mov     edx, [esp+144h+var_11C]
0x6868B6: mov     [esi+58h], edx
0x6868B9: mov     eax, [esp+144h+var_118]
0x6868BD: mov     [esi+5Ch], eax
0x6868C0: fld     dword ptr ds:0A3D8F0h
0x6868C6: push    ecx
0x6868C7: mov     ecx, ds:0B333A0h
0x6868CD: fstp    [esp+148h+var_148]; float
0x6868D0: push    esi; int
0x6868D1: call    sub_440E60
0x6868D6: push    0
0x6868D8: push    ebx
0x6868D9: push    edi
0x6868DA: call    sub_684530
0x6868DF: add     esp, 0Ch
0x6868E2: xor     al, al
0x6868E4: mov     ecx, dword ptr [esp+144h+var_C]
0x6868EB: mov     large fs:0, ecx
0x6868F2: pop     ecx
0x6868F3: pop     edi
0x6868F4: pop     esi
0x6868F5: pop     ebx
0x6868F6: mov     ecx, [esp+134h+var_14]
0x6868FD: xor     ecx, esp
0x6868FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x686904: mov     esp, ebp
0x686906: pop     ebp
0x686907: retn
0x686908: cmp     [esp+144h+a2.WorldRayCastOutput.RootCollidable], 0
0x686910: jnz     short loc_68696D
0x686912: cmp     [esp+144h+var_129], 0
0x686917: jz      short loc_6868D6
0x686919: fld1
0x68691B: fst     [esp+144h+var_114]
0x68691F: fst     [esp+144h+var_110]
0x686923: fstp    [esp+144h+var_10C]
0x686927: fldz
0x686929: lea     ecx, [esp+144h+var_114]
0x68692D: fstp    [esp+144h+var_108]
0x686931: fld     dword ptr ds:0A31E2Ch
0x686937: push    ecx; int
0x686938: push    ecx
0x686939: fstp    [esp+14Ch+var_14C]; float
0x68693C: call    sub_47FD30
0x686941: add     esp, 8
0x686944: mov     esi, eax
0x686946: call    sub_4E70B0
0x68694B: push    eax; a2
0x68694C: mov     ecx, esi; this
0x68694E: call    sub_405680
0x686953: mov     edx, [esp+144h+var_120]
0x686957: mov     [esi+54h], edx
0x68695A: mov     eax, [esp+144h+var_11C]
0x68695E: mov     [esi+58h], eax
0x686961: mov     ecx, [esp+144h+var_118]
0x686965: mov     [esi+5Ch], ecx
0x686968: jmp     loc_6868C0
0x68696D: cmp     [ebp+arg_C], 0
0x686971: jz      loc_686A29
0x686977: test    esi, esi
0x686979: jz      loc_686A29
0x68697F: push    esi
0x686980: call    sub_4DC270
0x686985: mov     esi, eax
0x686987: add     esp, 4
0x68698A: test    esi, esi
0x68698C: jz      loc_686A29
0x686992: mov     edx, [esi]
0x686994: mov     eax, [edx+170h]
0x68699A: mov     ecx, esi
0x68699C: call    eax
0x68699E: movzx   eax, byte ptr [eax+4]
0x6869A2: cmp     eax, 12h
0x6869A5: jz      short loc_6869C4
0x6869A7: cmp     eax, 18h
0x6869AA: jz      short loc_686A29
0x6869AC: cmp     eax, 1Ch
0x6869AF: jnz     short loc_6869E0
0x6869B1: push    1
0x6869B3: push    ebx
0x6869B4: push    edi
0x6869B5: call    sub_684530
0x6869BA: add     esp, 0Ch
0x6869BD: mov     al, 1
0x6869BF: jmp     loc_6868E4
0x6869C4: mov     edx, [esi]
0x6869C6: mov     eax, [edx+170h]
0x6869CC: mov     ecx, esi
0x6869CE: call    eax
0x6869D0: mov     edx, [eax]
0x6869D2: mov     ecx, eax
0x6869D4: mov     eax, [edx+88h]
0x6869DA: call    eax
0x6869DC: test    al, al
0x6869DE: jz      short loc_686A29
0x6869E0: cmp     [esp+144h+var_129], 0
0x6869E5: jz      loc_6868D6
0x6869EB: fld1
0x6869ED: fstp    [esp+144h+var_114]
0x6869F1: fldz
0x6869F3: fst     [esp+144h+var_110]
0x6869F7: fst     [esp+144h+var_10C]
0x6869FB: jmp     loc_686929
0x686A00: cmp     [esp+144h+var_12A], 0
0x686A05: jnz     loc_6868D6
0x686A0B: mov     ecx, edi; this
0x686A0D: call    Actor_CanSwim
0x686A12: test    al, al
0x686A14: jz      loc_6868D6
0x686A1A: mov     ecx, edi; this
0x686A1C: call    sub_5E3400
0x686A21: test    al, al
0x686A23: jz      loc_6868D6
0x686A29: push    1
0x686A2B: push    ebx
0x686A2C: push    edi
0x686A2D: call    sub_684530
0x686A32: add     esp, 0Ch
0x686A35: mov     al, 1
0x686A37: jmp     loc_6868E4
