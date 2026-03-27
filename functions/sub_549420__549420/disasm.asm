0x549420: mov     edx, [esp+arg_C]
0x549424: push    ebx
0x549425: mov     ebx, [esp+4+arg_4]
0x549429: push    esi
0x54942A: mov     esi, ecx
0x54942C: mov     ecx, [esp+8+arg_10]
0x549430: mov     eax, [esi]
0x549432: push    edi
0x549433: push    ecx
0x549434: mov     ecx, [esp+10h+arg_8]
0x549438: push    edx
0x549439: mov     edx, [eax+0B8h]
0x54943F: push    ecx
0x549440: push    ebx
0x549441: mov     ecx, esi
0x549443: call    edx
0x549445: test    bl, bl
0x549447: jz      short loc_54948E
0x549449: mov     eax, [esi+34h]
0x54944C: fldz
0x54944E: mov     edx, [eax+10h]
0x549451: lea     edi, [esi+34h]
0x549454: push    ecx
0x549455: mov     ecx, edi
0x549457: fstp    [esp+10h+var_10]
0x54945A: call    edx
0x54945C: fldz
0x54945E: fld     [esp+8+arg_4]
0x549462: push    1
0x549464: fcom    st(1)
0x549466: fnstsw  ax
0x549468: fstp    st(1)
0x54946A: test    ah, 41h
0x54946D: jnz     short loc_549483
0x54946F: mov     eax, [esi]
0x549471: mov     edx, [eax+0ACh]
0x549477: push    ecx
0x549478: fstp    [esp+10h+var_10]
0x54947B: push    1
0x54947D: mov     ecx, esi
0x54947F: call    edx
0x549481: jmp     short loc_54948E
0x549483: mov     eax, [edi]
0x549485: fstp    st
0x549487: mov     edx, [eax+20h]
0x54948A: mov     ecx, edi
0x54948C: call    edx
0x54948E: cmp     byte ptr [esp+0Ch+arg_C], 0
0x549493: jz      short loc_5494E0
0x549495: mov     eax, [esi+90h]
0x54949B: fldz
0x54949D: mov     edx, [eax+10h]
0x5494A0: lea     edi, [esi+90h]
0x5494A6: push    ecx
0x5494A7: mov     ecx, edi
0x5494A9: fstp    [esp+10h+var_10]
0x5494AC: call    edx
0x5494AE: fldz
0x5494B0: fld     [esp+8+arg_4]
0x5494B4: push    1
0x5494B6: fcom    st(1)
0x5494B8: fnstsw  ax
0x5494BA: fstp    st(1)
0x5494BC: test    ah, 41h
0x5494BF: jnz     short loc_5494D5
0x5494C1: mov     eax, [esi]
0x5494C3: mov     edx, [eax+0ACh]
0x5494C9: push    ecx
0x5494CA: fstp    [esp+10h+var_10]
0x5494CD: push    2
0x5494CF: mov     ecx, esi
0x5494D1: call    edx
0x5494D3: jmp     short loc_5494E0
0x5494D5: mov     eax, [edi]
0x5494D7: fstp    st
0x5494D9: mov     edx, [eax+20h]
0x5494DC: mov     ecx, edi
0x5494DE: call    edx
0x5494E0: cmp     byte ptr [esp+0Ch+arg_8], 0
0x5494E5: jz      short loc_549532
0x5494E7: mov     eax, [esi+0ECh]
0x5494ED: fldz
0x5494EF: mov     edx, [eax+10h]
0x5494F2: lea     edi, [esi+0ECh]
0x5494F8: push    ecx
0x5494F9: mov     ecx, edi
0x5494FB: fstp    [esp+10h+var_10]
0x5494FE: call    edx
0x549500: fldz
0x549502: fld     [esp+8+arg_4]
0x549506: push    1
0x549508: fcom    st(1)
0x54950A: fnstsw  ax
0x54950C: fstp    st(1)
0x54950E: test    ah, 41h
0x549511: jnz     short loc_549527
0x549513: mov     eax, [esi]
0x549515: mov     edx, [eax+0ACh]
0x54951B: push    ecx
0x54951C: fstp    [esp+10h+var_10]
0x54951F: push    0
0x549521: mov     ecx, esi
0x549523: call    edx
0x549525: jmp     short loc_549532
0x549527: mov     eax, [edi]
0x549529: fstp    st
0x54952B: mov     edx, [eax+20h]
0x54952E: mov     ecx, edi
0x549530: call    edx
0x549532: cmp     byte ptr [esp+0Ch+arg_10], 0
0x549537: jz      short loc_549588
0x549539: mov     eax, [esi+148h]
0x54953F: fldz
0x549541: mov     edx, [eax+10h]
0x549544: lea     edi, [esi+148h]
0x54954A: push    ecx
0x54954B: mov     ecx, edi
0x54954D: fstp    [esp+10h+var_10]
0x549550: call    edx
0x549552: fldz
0x549554: fld     [esp+8+arg_4]
0x549558: push    1
0x54955A: fcom    st(1)
0x54955C: fnstsw  ax
0x54955E: fstp    st(1)
0x549560: test    ah, 41h
0x549563: jnz     short loc_54957D
0x549565: mov     eax, [esi]
0x549567: mov     edx, [eax+0ACh]
0x54956D: push    ecx
0x54956E: fstp    [esp+10h+var_10]
0x549571: push    3
0x549573: mov     ecx, esi
0x549575: call    edx
0x549577: pop     edi
0x549578: pop     esi
0x549579: pop     ebx
0x54957A: retn    14h
0x54957D: mov     eax, [edi]
0x54957F: fstp    st
0x549581: mov     edx, [eax+20h]
0x549584: mov     ecx, edi
0x549586: call    edx
0x549588: pop     edi
0x549589: pop     esi
0x54958A: pop     ebx
0x54958B: retn    14h
