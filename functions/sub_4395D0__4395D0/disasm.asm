0x4395D0: sub     esp, 14h
0x4395D3: push    esi
0x4395D4: push    edi
0x4395D5: mov     edi, ecx
0x4395D7: mov     eax, [edi+28h]
0x4395DA: test    eax, eax
0x4395DC: lea     esi, [edi+28h]
0x4395DF: jz      loc_43976A
0x4395E5: test    byte ptr [edi+34h], 2
0x4395E9: jz      short loc_4395F5
0x4395EB: add     eax, 4
0x4395EE: push    eax; lpAddend
0x4395EF: call    ds:InterlockedIncrement
0x4395F5: mov     al, [edi+34h]
0x4395F8: test    al, 10h
0x4395FA: jnz     loc_43976A
0x439600: test    al, 4
0x439602: push    ebx
0x439603: jz      loc_43970C
0x439609: cmp     dword ptr [edi+30h], 0
0x43960D: jz      loc_43970C
0x439613: mov     ecx, [esi]
0x439615: call    sub_434B40
0x43961A: fldz
0x43961C: push    0; a3
0x43961E: mov     ebx, eax
0x439620: push    ecx
0x439621: mov     ecx, ebx; this
0x439623: fstp    [esp+28h+a2]; a2
0x439626: call    NiAVObject_UpdateNiAVObject
0x43962B: fld     dword ptr [ebx+2Ch]
0x43962E: fstp    [esp+20h+var_14]
0x439632: fld     ds:flt_A37080
0x439638: fld     [esp+20h+var_14]
0x43963C: fcom    st(1)
0x43963E: fnstsw  ax
0x439640: fstp    st(1)
0x439642: test    ah, 5
0x439645: jp      short loc_43966D
0x439647: mov     eax, [esi]
0x439649: fstp    st
0x43964B: mov     eax, [eax+8]
0x43964E: push    eax
0x43964F: lea     ecx, [esp+24h+var_C]
0x439653: push    ecx
0x439654: call    sub_4DC4B0
0x439659: fld     dword ptr [eax+8]
0x43965C: fmul    ds:dbl_A2FAA0
0x439662: add     esp, 8
0x439665: fstp    [esp+20h+var_14]
0x439669: fld     [esp+20h+var_14]
0x43966D: mov     edx, uGridsToLoad
0x439673: shl     edx, 0Ch
0x439676: test    edx, edx
0x439678: mov     [esp+20h+var_10], edx
0x43967C: fild    [esp+20h+var_10]
0x439680: jge     short loc_439688
0x439682: fadd    ds:flt_A2FC78
0x439688: fmul    ds:dbl_A2FAA0
0x43968E: fld     st(1)
0x439690: fadd    ds:dbl_A30F70
0x439696: fsubp   st(1), st
0x439698: fstp    [esp+20h+var_10]
0x43969C: fldz
0x43969E: fucompp
0x4396A0: fnstsw  ax
0x4396A2: test    ah, 44h
0x4396A5: jnp     short loc_4396D6
0x4396A7: mov     ecx, offset dword_B05148
0x4396AC: call    GameSetting_GetSafeFloatPointer
0x4396B1: fld     dword ptr [eax]
0x4396B3: fmul    [esp+20h+var_14]
0x4396B7: fld     [esp+20h+var_10]
0x4396BB: fcompp
0x4396BD: fnstsw  ax
0x4396BF: test    ah, 41h
0x4396C2: jnz     short loc_4396D6
0x4396C4: mov     ecx, offset dword_B05148
0x4396C9: call    GameSetting_GetSafeFloatPointer
0x4396CE: fld     dword ptr [eax]
0x4396D0: fmul    [esp+20h+var_14]
0x4396D4: jmp     short loc_4396DA
0x4396D6: fld     [esp+20h+var_10]
0x4396DA: fstp    [esp+20h+var_10]
0x4396DE: sub     esp, 8
0x4396E1: fld     [esp+28h+var_10]
0x4396E5: mov     ecx, ebx
0x4396E7: fst     [esp+28h+var_24]; float
0x4396EB: fmul    flt_B05150
0x4396F1: fstp    [esp+28h+var_10]
0x4396F5: fld     [esp+28h+var_10]
0x4396F9: fstp    [esp+28h+a2]; float
0x4396FC: call    sub_4A02A0
0x439701: mov     eax, [edi+30h]
0x439704: push    eax
0x439705: mov     ecx, ebx
0x439707: call    sub_4A01B0
0x43970C: mov     ecx, [esi]
0x43970E: mov     edx, [ecx+8]
0x439711: mov     ecx, ModelLoaderPtr
0x439717: push    edx
0x439718: call    sub_438730
0x43971D: mov     ecx, ModelLoaderPtr
0x439723: mov     eax, [esi]
0x439725: mov     edx, [edi+20h]
0x439728: mov     ecx, [ecx]
0x43972A: mov     ebx, [ecx]
0x43972C: push    0
0x43972E: push    eax
0x43972F: push    edx
0x439730: mov     edx, [ebx+0Ch]
0x439733: call    edx
0x439735: test    al, al
0x439737: jnz     short loc_439769
0x439739: mov     ecx, ModelLoaderPtr
0x43973F: mov     eax, [edi+20h]
0x439742: mov     ecx, [ecx]
0x439744: lea     ebx, [esp+20h+var_10]
0x439748: mov     [esp+20h+var_10], 0
0x439750: mov     edx, [ecx]
0x439752: push    ebx
0x439753: push    eax
0x439754: mov     eax, [edx+4]
0x439757: call    eax
0x439759: neg     al
0x43975B: mov     ecx, esi
0x43975D: sbb     eax, eax
0x43975F: and     eax, [esp+20h+var_10]
0x439763: push    eax
0x439764: call    sub_435AB0
0x439769: pop     ebx
0x43976A: mov     edx, [edi]
0x43976C: mov     eax, [edx+28h]
0x43976F: mov     ecx, edi
0x439771: pop     edi
0x439772: pop     esi
0x439773: add     esp, 14h
0x439776: jmp     eax
