0x766177: fld     dword ptr [edi+8]
0x76617A: mov     [esi-0Ch], ebx
0x76617D: fadd    [esp+arg_6C]
0x766181: fstp    [esp+arg_50]
0x766185: fld     [esp+arg_48]
0x766189: fstp    dword ptr [esi-24h]
0x76618C: fld     [esp+arg_4C]
0x766190: fstp    dword ptr [esi-20h]
0x766193: fld     [esp+arg_50]
0x766197: fstp    dword ptr [esi-1Ch]
0x76619A: fxch    st(2)
0x76619C: fst     dword ptr [esi-18h]
0x76619F: fxch    st(1)
0x7661A1: fst     dword ptr [esi-14h]
0x7661A4: fxch    st(3)
0x7661A6: fst     dword ptr [esi-10h]
0x7661A9: fxch    st(4)
0x7661AB: fstp    dword ptr [esi-8]
0x7661AE: fxch    st(1)
0x7661B0: fst     dword ptr [esi-4]
0x7661B3: fld     [esp+arg_2C]
0x7661B7: fadd    dword ptr [edi]
0x7661B9: fstp    [esp+arg_3C]
0x7661BD: fld     [esp+arg_30]
0x7661C1: mov     eax, 4
0x7661C6: fadd    dword ptr [edi+4]
0x7661C9: add     [esp+arg_24], eax
0x7661CD: add     [esp+arg_28], eax
0x7661D1: add     [esp+arg_54], eax
0x7661D5: fstp    [esp+arg_40]
0x7661D9: add     esi, 24h ; '$'
0x7661DC: fld     dword ptr [edi+8]
0x7661DF: mov     [esi-0Ch], ebx
0x7661E2: fadd    [esp+arg_34]
0x7661E6: add     edi, 0Ch
0x7661E9: sub     [esp+arg_38], 1
0x7661EE: fstp    [esp+arg_44]
0x7661F2: fld     [esp+arg_3C]
0x7661F6: fstp    dword ptr [esi-24h]
0x7661F9: fld     [esp+arg_40]
0x7661FD: fstp    dword ptr [esi-20h]
0x766200: fld     [esp+arg_44]
0x766204: fstp    dword ptr [esi-1Ch]
0x766207: fxch    st(1)
0x766209: fstp    dword ptr [esi-18h]
0x76620C: fxch    st(1)
0x76620E: fstp    dword ptr [esi-14h]
0x766211: fxch    st(1)
0x766213: fstp    dword ptr [esi-10h]
0x766216: fst     dword ptr [esi-8]
0x766219: fstp    dword ptr [esi-4]
0x76621C: jnz     loc_765FB0
0x766222: jmp     loc_766695
0x766227: lea     eax, [ebp+640h]
0x76622D: push    eax
0x76622E: lea     edx, [esp+4+arg_A8]
0x766235: push    edx
0x766236: lea     ecx, [ebp+64Ch]
0x76623C: call    sub_4121A0
0x766241: lea     eax, [ebp+640h]
0x766247: push    eax
0x766248: lea     eax, [esp+4+arg_F0]
0x76624F: push    eax
0x766250: lea     ecx, [ebp+64Ch]
0x766256: call    sub_47D9B0
0x76625B: test    ebx, ebx
0x76625D: mov     eax, [esp+arg_14]
0x766261: jz      loc_7664B9
0x766267: test    eax, eax
0x766269: jbe     loc_766695
0x76626F: mov     [esp+arg_38], eax
0x766273: fld     dword ptr [ebx+0Ch]
0x766276: fmul    qword ptr ds:0A3DDD8h
0x76627C: fstp    [esp+arg_20]
0x766280: fld     [esp+arg_20]
0x766284: fistp   [esp+arg_10]
0x766288: fld     dword ptr [ebx]
0x76628A: mov     eax, [esp+arg_10]
0x76628E: fmul    qword ptr ds:0A3DDD8h
0x766294: fstp    [esp+arg_20]
0x766298: fld     [esp+arg_20]
0x76629C: fistp   [esp+arg_1C]
0x7662A0: fld     dword ptr [ebx+4]
0x7662A3: mov     ecx, [esp+arg_1C]
0x7662A7: fmul    qword ptr ds:0A3DDD8h
0x7662AD: fstp    [esp+arg_20]
0x7662B1: fld     [esp+arg_20]
0x7662B5: fistp   [esp+arg_14]
0x7662B9: fld     dword ptr [ebx+8]
0x7662BC: mov     edx, [esp+arg_14]
0x7662C0: fmul    qword ptr ds:0A3DDD8h
0x7662C6: fstp    [esp+arg_20]
0x7662CA: fld     [esp+arg_20]
0x7662CE: fistp   [esp+arg_18]
0x7662D2: shl     eax, 8
0x7662D5: or      eax, ecx
0x7662D7: mov     ecx, [esp+arg_28]
0x7662DB: fld     dword ptr [ecx]
0x7662DD: shl     eax, 8
0x7662E0: or      eax, edx
0x7662E2: mov     edx, [esp+arg_24]
0x7662E6: fmul    dword ptr [edx]
0x7662E8: shl     eax, 8
0x7662EB: or      eax, [esp+arg_18]
0x7662EF: mov     [esp+arg_20], eax
0x7662F3: fstp    [esp+arg_C]
0x7662F7: fld     [esp+arg_C]
0x7662FB: lea     eax, [esp+arg_F0]
0x766302: push    eax; int
0x766303: push    ecx
0x766304: lea     ecx, [esp+8+arg_64]
0x766308: fstp    [esp+8+var_8]; float
0x76630B: push    ecx; int
0x76630C: call    sub_47DA10
0x766311: fld     [esp+0Ch+arg_C]
0x766315: add     esp, 0Ch
0x766318: lea     edx, [esp+arg_A8]
0x76631F: push    edx; int
0x766320: push    ecx
0x766321: lea     eax, [esp+8+arg_2C]
0x766325: fstp    [esp+8+var_8]; float
0x766328: push    eax; int
0x766329: call    sub_47DA10
0x76632E: fld     dword ptr [edi]
0x766330: fld     [esp+0Ch+arg_64]
0x766334: mov     eax, [esp+0Ch+arg_20]
0x766338: fld     st
0x76633A: add     esp, 0Ch
0x76633D: fsubp   st(2), st
0x76633F: add     esi, 24h ; '$'
0x766342: fxch    st(1)
0x766344: fstp    [esp+arg_58]
0x766348: fld     dword ptr [edi+4]
0x76634B: fsub    [esp+arg_68]
0x76634F: fstp    [esp+arg_5C]
0x766353: fld     dword ptr [edi+8]
0x766356: mov     [esi-0Ch], eax
0x766359: fsub    [esp+arg_6C]
0x76635D: fstp    [esp+arg_60]
0x766361: fld     [esp+arg_58]
0x766365: fstp    dword ptr [esi-24h]
0x766368: fld     [esp+arg_5C]
0x76636C: fstp    dword ptr [esi-20h]
0x76636F: fld     [esp+arg_60]
0x766373: fstp    dword ptr [esi-1Ch]
0x766376: fld     [esp+arg_8C]
0x76637D: fst     dword ptr [esi-18h]
0x766380: fld     [esp+arg_90]
0x766387: fst     dword ptr [esi-14h]
0x76638A: fld     [esp+arg_94]
0x766391: fst     dword ptr [esi-10h]
0x766394: fldz
0x766396: fst     dword ptr [esi-8]
0x766399: fld1
0x76639B: fst     dword ptr [esi-4]
0x76639E: fld     dword ptr [edi]
0x7663A0: fsub    [esp+arg_2C]
0x7663A4: add     esi, 24h ; '$'
0x7663A7: add     esi, 24h ; '$'
0x7663AA: add     esi, 24h ; '$'
0x7663AD: fstp    [esp+arg_70]
0x7663B1: add     edi, 0Ch
0x7663B4: fld     dword ptr [edi-8]
0x7663B7: add     ebx, 10h
0x7663BA: fsub    [esp+arg_30]
0x7663BE: fstp    [esp+arg_74]
0x7663C2: fld     dword ptr [edi-4]
0x7663C5: mov     [esi-54h], eax
0x7663C8: fsub    [esp+arg_34]
0x7663CC: fstp    [esp+arg_78]
0x7663D0: fld     [esp+arg_70]
0x7663D4: fstp    dword ptr [esi-6Ch]
0x7663D7: fld     [esp+arg_74]
0x7663DB: fstp    dword ptr [esi-68h]
0x7663DE: fld     [esp+arg_78]
0x7663E2: fstp    dword ptr [esi-64h]
0x7663E5: fxch    st(4)
0x7663E7: fst     dword ptr [esi-60h]
0x7663EA: fxch    st(3)
0x7663EC: fst     dword ptr [esi-5Ch]
0x7663EF: fxch    st(2)
0x7663F1: fst     dword ptr [esi-58h]
0x7663F4: fxch    st(4)
0x7663F6: fst     dword ptr [esi-50h]
0x7663F9: fst     dword ptr [esi-4Ch]
0x7663FC: fld     dword ptr [edi-0Ch]
0x7663FF: faddp   st(6), st
0x766401: fxch    st(5)
0x766403: fstp    [esp+arg_48]
0x766407: fld     [esp+arg_68]
0x76640B: fadd    dword ptr [edi-8]
0x76640E: fstp    [esp+arg_4C]
0x766412: fld     dword ptr [edi-4]
0x766415: mov     [esi-30h], eax
0x766418: fadd    [esp+arg_6C]
0x76641C: fstp    [esp+arg_50]
0x766420: fld     [esp+arg_48]
0x766424: fstp    dword ptr [esi-48h]
0x766427: fld     [esp+arg_4C]
0x76642B: fstp    dword ptr [esi-44h]
0x76642E: fld     [esp+arg_50]
0x766432: fstp    dword ptr [esi-40h]
0x766435: fxch    st(2)
0x766437: fst     dword ptr [esi-3Ch]
0x76643A: fxch    st(1)
0x76643C: fst     dword ptr [esi-38h]
0x76643F: fxch    st(3)
0x766441: fst     dword ptr [esi-34h]
0x766444: fxch    st(4)
0x766446: fstp    dword ptr [esi-2Ch]
0x766449: fxch    st(1)
0x76644B: fst     dword ptr [esi-28h]
0x76644E: fld     [esp+arg_2C]
0x766452: fadd    dword ptr [edi-0Ch]
0x766455: fstp    [esp+arg_3C]
0x766459: fld     [esp+arg_30]
0x76645D: fadd    dword ptr [edi-8]
0x766460: fstp    [esp+arg_40]
0x766464: fld     dword ptr [edi-4]
0x766467: mov     [esi-0Ch], eax
0x76646A: fadd    [esp+arg_34]
0x76646E: mov     eax, 4
0x766473: fstp    [esp+arg_44]
0x766477: fld     [esp+arg_3C]
0x76647B: fstp    dword ptr [esi-24h]
0x76647E: fld     [esp+arg_40]
0x766482: fstp    dword ptr [esi-20h]
0x766485: fld     [esp+arg_44]
0x766489: fstp    dword ptr [esi-1Ch]
0x76648C: fxch    st(1)
0x76648E: fstp    dword ptr [esi-18h]
0x766491: fxch    st(1)
0x766493: fstp    dword ptr [esi-14h]
0x766496: fxch    st(1)
0x766498: fstp    dword ptr [esi-10h]
0x76649B: fst     dword ptr [esi-8]
0x76649E: fstp    dword ptr [esi-4]
0x7664A1: add     [esp+arg_24], eax
0x7664A5: add     [esp+arg_28], eax
0x7664A9: sub     [esp+arg_38], 1
0x7664AE: jnz     loc_766273
0x7664B4: jmp     loc_766695
0x7664B9: test    eax, eax
0x7664BB: jbe     loc_766695
0x7664C1: mov     [esp+arg_C], eax
0x7664C5: or      ebx, 0FFFFFFFFh
0x7664C8: jmp     short loc_7664D0
0x7664CA: align 10h
0x7664D0: mov     ecx, [esp+arg_28]
0x7664D4: fld     dword ptr [ecx]
0x7664D6: mov     edx, [esp+arg_24]
0x7664DA: fmul    dword ptr [edx]
0x7664DC: lea     eax, [esp+arg_F0]
0x7664E3: push    eax; int
0x7664E4: push    ecx
0x7664E5: fstp    [esp+8+arg_18]
0x7664E9: lea     ecx, [esp+8+arg_64]
0x7664ED: fld     [esp+8+arg_18]
0x7664F1: fstp    [esp+8+var_8]; float
0x7664F4: push    ecx; int
0x7664F5: call    sub_47DA10
0x7664FA: fld     [esp+0Ch+arg_18]
0x7664FE: add     esp, 0Ch
0x766501: lea     edx, [esp+arg_A8]
0x766508: push    edx; int
0x766509: push    ecx
0x76650A: lea     eax, [esp+8+arg_2C]
0x76650E: fstp    [esp+8+var_8]; float
0x766511: push    eax; int
0x766512: call    sub_47DA10
0x766517: fld     dword ptr [edi]
0x766519: fld     [esp+0Ch+arg_64]
0x76651D: add     esi, 24h ; '$'
0x766520: fld     st
0x766522: add     esp, 0Ch
0x766525: fsubp   st(2), st
0x766527: add     esi, 24h ; '$'
0x76652A: fxch    st(1)
0x76652C: fstp    [esp+arg_58]
0x766530: fld     dword ptr [edi+4]
0x766533: fsub    [esp+arg_68]
0x766537: fstp    [esp+arg_5C]
0x76653B: fld     dword ptr [edi+8]
0x76653E: mov     [esi-30h], ebx
0x766541: fsub    [esp+arg_6C]
0x766545: fstp    [esp+arg_60]
0x766549: fld     [esp+arg_58]
0x76654D: fstp    dword ptr [esi-48h]
0x766550: fld     [esp+arg_5C]
0x766554: fstp    dword ptr [esi-44h]
0x766557: fld     [esp+arg_60]
0x76655B: fstp    dword ptr [esi-40h]
0x76655E: fld     [esp+arg_8C]
0x766565: fst     dword ptr [esi-3Ch]
0x766568: fld     [esp+arg_90]
0x76656F: fst     dword ptr [esi-38h]
0x766572: fld     [esp+arg_94]
0x766579: fst     dword ptr [esi-34h]
0x76657C: fldz
0x76657E: fst     dword ptr [esi-2Ch]
0x766581: fld1
0x766583: fst     dword ptr [esi-28h]
0x766586: fld     dword ptr [edi]
0x766588: fsub    [esp+arg_2C]
0x76658C: fstp    [esp+arg_70]
0x766590: fld     dword ptr [edi+4]
0x766593: fsub    [esp+arg_30]
0x766597: fstp    [esp+arg_74]
0x76659B: fld     dword ptr [edi+8]
0x76659E: mov     [esi-0Ch], ebx
0x7665A1: fsub    [esp+arg_34]
0x7665A5: fstp    [esp+arg_78]
0x7665A9: fld     [esp+arg_70]
0x7665AD: fstp    dword ptr [esi-24h]
0x7665B0: fld     [esp+arg_74]
0x7665B4: fstp    dword ptr [esi-20h]
0x7665B7: fld     [esp+arg_78]
0x7665BB: fstp    dword ptr [esi-1Ch]
0x7665BE: fxch    st(4)
0x7665C0: fst     dword ptr [esi-18h]
0x7665C3: fxch    st(3)
0x7665C5: fst     dword ptr [esi-14h]
0x7665C8: fxch    st(2)
0x7665CA: fst     dword ptr [esi-10h]
0x7665CD: fxch    st(4)
0x7665CF: fst     dword ptr [esi-8]
0x7665D2: fst     dword ptr [esi-4]
0x7665D5: fld     dword ptr [edi]
0x7665D7: faddp   st(6), st
0x7665D9: fxch    st(5)
0x7665DB: add     esi, 24h ; '$'
0x7665DE: fstp    [esp+arg_48]
0x7665E2: mov     eax, 4
0x7665E7: fld     [esp+arg_68]
0x7665EB: add     [esp+arg_24], eax
0x7665EF: fadd    dword ptr [edi+4]
0x7665F2: add     [esp+arg_28], eax
0x7665F6: add     esi, 24h ; '$'
0x7665F9: add     edi, 0Ch
0x7665FC: sub     [esp+arg_C], 1
0x766601: fstp    [esp+arg_4C]
0x766605: fld     dword ptr [edi-4]
0x766608: mov     [esi-30h], ebx
0x76660B: fadd    [esp+arg_6C]
0x76660F: fstp    [esp+arg_50]
0x766613: fld     [esp+arg_48]
0x766617: fstp    dword ptr [esi-48h]
0x76661A: fld     [esp+arg_4C]
0x76661E: fstp    dword ptr [esi-44h]
0x766621: fld     [esp+arg_50]
0x766625: fstp    dword ptr [esi-40h]
0x766628: fxch    st(2)
0x76662A: fst     dword ptr [esi-3Ch]
0x76662D: fxch    st(1)
0x76662F: fst     dword ptr [esi-38h]
0x766632: fxch    st(3)
0x766634: fst     dword ptr [esi-34h]
0x766637: fxch    st(4)
0x766639: fstp    dword ptr [esi-2Ch]
0x76663C: fxch    st(1)
0x76663E: fst     dword ptr [esi-28h]
0x766641: fld     [esp+arg_2C]
0x766645: fadd    dword ptr [edi-0Ch]
0x766648: fstp    [esp+arg_3C]
0x76664C: fld     [esp+arg_30]
0x766650: fadd    dword ptr [edi-8]
0x766653: fstp    [esp+arg_40]
0x766657: fld     dword ptr [edi-4]
0x76665A: mov     [esi-0Ch], ebx
0x76665D: fadd    [esp+arg_34]
0x766661: fstp    [esp+arg_44]
0x766665: fld     [esp+arg_3C]
0x766669: fstp    dword ptr [esi-24h]
0x76666C: fld     [esp+arg_40]
0x766670: fstp    dword ptr [esi-20h]
0x766673: fld     [esp+arg_44]
0x766677: fstp    dword ptr [esi-1Ch]
0x76667A: fxch    st(1)
0x76667C: fstp    dword ptr [esi-18h]
0x76667F: fxch    st(1)
0x766681: fstp    dword ptr [esi-14h]
0x766684: fxch    st(1)
0x766686: fstp    dword ptr [esi-10h]
0x766689: fst     dword ptr [esi-8]
0x76668C: fstp    dword ptr [esi-4]
0x76668F: jnz     loc_7664D0
0x766695: mov     ebx, [esp+arg_9C]
0x76669C: mov     ecx, [ebx+8]
0x76669F: push    ecx
0x7666A0: mov     ecx, [ebp+8B0h]
0x7666A6: call    sub_776D80
0x7666AB: mov     esi, [esp+arg_E8]
0x7666B2: mov     ecx, [ebp+0A94h]
0x7666B8: mov     edx, [ecx]
0x7666BA: mov     edx, [edx+28h]
0x7666BD: lea     eax, [esp+arg_7C]
0x7666C4: push    eax
0x7666C5: lea     eax, [esp+4+arg_B4]
0x7666CC: push    eax
0x7666CD: mov     eax, [ebp+10h]
0x7666D0: push    eax
0x7666D1: mov     eax, [ebp+0Ch]
0x7666D4: push    eax
0x7666D5: push    esi
0x7666D6: push    0
0x7666D8: push    0
0x7666DA: call    edx
0x7666DC: test    eax, eax
0x7666DE: jnz     loc_766869
0x7666E4: mov     ecx, [ebp+0A94h]
0x7666EA: mov     eax, [ecx]
0x7666EC: mov     eax, [eax+2Ch]
0x7666EF: lea     edx, [esp+1Ch+arg_60]
0x7666F6: push    edx
0x7666F7: lea     edx, [esp+20h+arg_98]
0x7666FE: push    edx
0x7666FF: mov     edx, [ebp+10h]
0x766702: push    edx
0x766703: mov     edx, [ebp+0Ch]
0x766706: push    edx
0x766707: push    esi
0x766708: push    0
0x76670A: push    0
0x76670C: call    eax
0x76670E: mov     ecx, [ebp+0A94h]
0x766714: mov     edx, [ecx]
0x766716: mov     eax, [edx+48h]
0x766719: call    eax
0x76671B: cmp     dword ptr [esi+1Ch], 0
0x76671F: mov     edi, eax
0x766721: jbe     short loc_76672A
0x766723: mov     ecx, [esi+20h]
0x766726: mov     ecx, [ecx]
0x766728: jmp     short loc_76672C
0x76672A: xor     ecx, ecx
0x76672C: mov     eax, [ebp+280h]
0x766732: mov     edx, [eax]
0x766734: mov     edx, [edx+190h]
0x76673A: push    ecx
0x76673B: mov     ecx, [ebx+8]
0x76673E: push    0
0x766740: push    ecx
0x766741: push    0
0x766743: push    eax
0x766744: call    edx
0x766746: mov     eax, [ebp+280h]
0x76674C: mov     edx, [esp+4Ch+arg_A0]
0x766753: mov     ecx, [eax]
0x766755: push    edx
0x766756: push    eax
0x766757: mov     eax, [ecx+1A0h]
0x76675D: call    eax
0x76675F: test    edi, edi
0x766761: jz      loc_76683F
0x766767: jmp     short loc_766770
0x766769: align 10h
0x766770: mov     ecx, [ebp+0A94h]
0x766776: mov     edx, [ecx]
0x766778: mov     edx, [edx+30h]
0x76677B: lea     eax, [esp+54h+arg_28]
0x766782: push    eax
0x766783: lea     eax, [esp+58h+arg_60]
0x76678A: push    eax
0x76678B: mov     eax, [ebp+10h]
0x76678E: push    eax
0x76678F: mov     eax, [ebp+0Ch]
0x766792: push    eax
0x766793: push    esi
0x766794: push    0
0x766796: push    0
0x766798: call    edx
0x76679A: mov     ecx, [ebp+0A94h]
0x7667A0: mov     eax, [ecx]
0x7667A2: mov     eax, [eax+38h]
0x7667A5: lea     edx, [esp+70h+arg_C]
0x7667AC: push    edx
0x7667AD: lea     edx, [esp+74h+arg_44]
0x7667B4: push    edx
0x7667B5: mov     edx, [ebp+10h]
0x7667B8: push    edx
0x7667B9: mov     edx, [ebp+0Ch]
0x7667BC: push    edx
0x7667BD: push    esi
0x7667BE: push    0
0x7667C0: push    0
0x7667C2: push    0
0x7667C4: call    eax
0x7667C6: mov     ecx, [ebp+8ACh]
0x7667CC: mov     ecx, [ecx+0FF0h]
0x7667D2: mov     edx, [ecx]
0x7667D4: mov     eax, [edx+4]
0x7667D7: call    eax
0x7667D9: mov     edx, [esi+3Ch]
0x7667DC: mov     eax, [ebp+280h]
0x7667E2: mov     ecx, [eax]
0x7667E4: push    edx
0x7667E5: mov     edx, [esi+14h]
0x7667E8: push    0
0x7667EA: push    edx
0x7667EB: mov     edx, [esi+34h]
0x7667EE: push    0
0x7667F0: push    edx
0x7667F1: mov     edx, [esi+38h]
0x7667F4: push    edx
0x7667F5: push    eax
0x7667F6: mov     eax, [ecx+148h]
0x7667FC: call    eax
0x7667FE: mov     ecx, [ebp+0A94h]
0x766804: mov     edx, [ecx]
0x766806: mov     edx, [edx+40h]
0x766809: lea     eax, [esp+0ACh+var_2C]
0x766810: push    eax
0x766811: lea     eax, [esp+0B0h+arg_8]
0x766818: push    eax
0x766819: mov     eax, [ebp+10h]
0x76681C: push    eax
0x76681D: mov     eax, [ebp+0Ch]
0x766820: push    eax
0x766821: push    esi
0x766822: push    0
0x766824: push    0
0x766826: push    0
0x766828: call    edx
0x76682A: mov     ecx, [ebp+0A94h]
0x766830: mov     eax, [ecx]
0x766832: mov     edx, [eax+4Ch]
0x766835: call    edx
0x766837: test    eax, eax
0x766839: jnz     loc_766770
0x76683F: mov     ecx, [ebp+0A94h]
0x766845: mov     eax, [ecx]
0x766847: mov     eax, [eax+44h]
0x76684A: lea     edx, [esp+0CCh+var_4C]
0x766851: push    edx
0x766852: lea     edx, [esp+0D0h+var_14]
0x766859: push    edx
0x76685A: mov     edx, [ebp+10h]
0x76685D: push    edx
0x76685E: mov     edx, [ebp+0Ch]
0x766861: push    edx
0x766862: push    esi
0x766863: push    0
0x766865: push    0
0x766867: call    eax
0x766869: pop     edi
0x76686A: pop     esi
0x76686B: pop     ebx
0x76686C: pop     ebp
0x76686D: add     esp, 108h
0x766873: retn    4
