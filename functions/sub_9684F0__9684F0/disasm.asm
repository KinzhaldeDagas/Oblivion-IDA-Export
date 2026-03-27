0x9684F0: sub     esp, 50h
0x9684F3: fld1
0x9684F5: push    ebx
0x9684F6: push    ebp
0x9684F7: push    esi
0x9684F8: push    edi
0x9684F9: push    offset Vector3_InitValue?; int
0x9684FE: push    ecx
0x9684FF: lea     ecx, [esp+68h+var_14]
0x968503: fstp    [esp+68h+var_68]; float
0x968506: call    sub_96C420
0x96850B: fld     dword ptr ds:0A34BA0h
0x968511: mov     edi, [esp+60h+arg_18]
0x968515: fstp    [esp+60h+var_4]
0x968519: mov     eax, [edi]
0x96851B: fld     [esp+60h+arg_0]
0x96851F: mov     ebx, [esp+60h+arg_8]
0x968523: mov     ecx, [edi+4]
0x968526: mov     esi, [esp+60h+arg_4]
0x96852A: mov     edx, [edi+8]
0x96852D: push    offset Vector3_InitValue?; int
0x968532: mov     [esp+64h+var_10], eax
0x968536: lea     eax, [esp+64h+var_14]
0x96853A: push    eax; int
0x96853B: push    ebx; int
0x96853C: push    esi; int
0x96853D: push    ecx
0x96853E: fstp    [esp+74h+var_74]; float
0x968541: mov     [esp+74h+var_C], ecx
0x968545: mov     [esp+74h+var_8], edx
0x968549: call    sub_9682F0
0x96854E: fld     qword ptr ds:0A88D40h
0x968554: mov     ebp, [esp+74h+arg_14]
0x96855B: add     esp, 14h
0x96855E: test    al, al
0x968560: jnz     loc_9687FB
0x968566: fld     dword ptr [ebp+0]
0x968569: fstp    [esp+60h+arg_18]
0x96856D: fld     dword ptr [ebx]
0x96856F: fld     [esp+60h+arg_18]
0x968573: fld     st
0x968575: fmulp   st(2), st
0x968577: fxch    st(1)
0x968579: fstp    [esp+60h+var_50]
0x96857D: fld     dword ptr [ebx+4]
0x968580: fmul    st, st(1)
0x968582: fstp    [esp+60h+var_4C]
0x968586: fmul    dword ptr [ebx+8]
0x968589: fstp    [esp+60h+var_48]
0x96858D: fld     [esp+60h+var_50]
0x968591: fadd    dword ptr [esi+4]
0x968594: fstp    [esp+60h+var_44]
0x968598: fld     dword ptr [esi+8]
0x96859B: fadd    [esp+60h+var_4C]
0x96859F: fstp    [esp+60h+var_40]
0x9685A3: fld     dword ptr [esi+0Ch]
0x9685A6: fadd    [esp+60h+var_48]
0x9685AA: fstp    [esp+60h+var_3C]
0x9685AE: fld     dword ptr [edi]
0x9685B0: fld     [esp+60h+var_44]
0x9685B4: fld     st
0x9685B6: fsubp   st(2), st
0x9685B8: fxch    st(1)
0x9685BA: fstp    [esp+60h+var_50]
0x9685BE: fld     dword ptr [edi+4]
0x9685C1: fsub    [esp+60h+var_40]
0x9685C5: fstp    [esp+60h+var_4C]
0x9685C9: fld     dword ptr [edi+8]
0x9685CC: fsub    [esp+60h+var_3C]
0x9685D0: fstp    [esp+60h+var_48]
0x9685D4: fld     dword ptr [esi+14h]
0x9685D7: fld     [esp+60h+var_4C]
0x9685DB: fld     st
0x9685DD: fmulp   st(2), st
0x9685DF: fld     dword ptr [esi+10h]
0x9685E2: fld     [esp+60h+var_50]
0x9685E6: fld     st
0x9685E8: fmulp   st(2), st
0x9685EA: fxch    st(3)
0x9685EC: faddp   st(1), st
0x9685EE: fld     dword ptr [esi+18h]
0x9685F1: fld     [esp+60h+var_48]
0x9685F5: fld     st
0x9685F7: fmulp   st(2), st
0x9685F9: fxch    st(2)
0x9685FB: faddp   st(1), st
0x9685FD: fstp    [esp+60h+arg_18]
0x968601: fld     [esp+60h+arg_18]
0x968605: fstp    [esp+60h+var_50]
0x968609: fld     dword ptr [esi+20h]
0x96860C: fmul    st, st(2)
0x96860E: fld     st(3)
0x968610: fmul    dword ptr [esi+1Ch]
0x968613: faddp   st(1), st
0x968615: fld     dword ptr [esi+24h]
0x968618: fmul    st, st(2)
0x96861A: faddp   st(1), st
0x96861C: fstp    [esp+60h+arg_18]
0x968620: fld     [esp+60h+arg_18]
0x968624: fstp    [esp+60h+var_4C]
0x968628: fld     dword ptr [esi+2Ch]
0x96862B: fmulp   st(2), st
0x96862D: fld     dword ptr [esi+28h]
0x968630: fmulp   st(3), st
0x968632: fxch    st(1)
0x968634: faddp   st(2), st
0x968636: fmul    dword ptr [esi+30h]
0x968639: faddp   st(1), st
0x96863B: fstp    [esp+60h+arg_18]
0x96863F: fld     [esp+60h+arg_18]
0x968643: fstp    [esp+60h+var_48]
0x968647: fld     [esp+60h+var_50]
0x96864B: fld     dword ptr [esi+34h]
0x96864E: fmul    st, st(3)
0x968650: fcomp   st(1)
0x968652: fnstsw  ax
0x968654: test    ah, 5
0x968657: jp      short loc_968668
0x968659: fstp    st
0x96865B: fld     dword ptr [esi+34h]
0x96865E: fstp    [esp+60h+var_50]
0x968662: fld     [esp+60h+var_50]
0x968666: jmp     short loc_968690
0x968668: fld     dword ptr [esi+34h]
0x96866B: fchs
0x96866D: fstp    [esp+60h+arg_18]
0x968671: fld     [esp+60h+arg_18]
0x968675: fld     st
0x968677: fmul    st, st(4)
0x968679: fcomp   st(2)
0x96867B: fnstsw  ax
0x96867D: test    ah, 41h
0x968680: jnz     short loc_96868E
0x968682: fstp    st(1)
0x968684: fstp    [esp+60h+var_50]
0x968688: fld     [esp+60h+var_50]
0x96868C: jmp     short loc_968690
0x96868E: fstp    st
0x968690: fld     [esp+60h+var_4C]
0x968694: fld     dword ptr [esi+38h]
0x968697: fmul    st, st(4)
0x968699: fcomp   st(1)
0x96869B: fnstsw  ax
0x96869D: test    ah, 5
0x9686A0: jp      short loc_9686B1
0x9686A2: fstp    st
0x9686A4: fld     dword ptr [esi+38h]
0x9686A7: fstp    [esp+60h+var_4C]
0x9686AB: fld     [esp+60h+var_4C]
0x9686AF: jmp     short loc_9686D9
0x9686B1: fld     dword ptr [esi+38h]
0x9686B4: fchs
0x9686B6: fstp    [esp+60h+arg_18]
0x9686BA: fld     [esp+60h+arg_18]
0x9686BE: fld     st
0x9686C0: fmul    st, st(5)
0x9686C2: fcomp   st(2)
0x9686C4: fnstsw  ax
0x9686C6: test    ah, 41h
0x9686C9: jnz     short loc_9686D7
0x9686CB: fstp    st(1)
0x9686CD: fstp    [esp+60h+var_4C]
0x9686D1: fld     [esp+60h+var_4C]
0x9686D5: jmp     short loc_9686D9
0x9686D7: fstp    st
0x9686D9: fld     [esp+60h+var_48]
0x9686DD: fld     dword ptr [esi+3Ch]
0x9686E0: fmul    st, st(5)
0x9686E2: fcomp   st(1)
0x9686E4: fnstsw  ax
0x9686E6: test    ah, 5
0x9686E9: jp      short loc_9686FC
0x9686EB: fstp    st
0x9686ED: fstp    st(3)
0x9686EF: fld     dword ptr [esi+3Ch]
0x9686F2: fstp    [esp+60h+var_48]
0x9686F6: fld     [esp+60h+var_48]
0x9686FA: jmp     short loc_96872A
0x9686FC: fld     dword ptr [esi+3Ch]
0x9686FF: fchs
0x968701: fstp    [esp+60h+arg_18]
0x968705: fld     [esp+60h+arg_18]
0x968709: fld     st
0x96870B: fmulp   st(6), st
0x96870D: fxch    st(5)
0x96870F: fcomp   st(1)
0x968711: fnstsw  ax
0x968713: test    ah, 41h
0x968716: jnz     short loc_968726
0x968718: fstp    st
0x96871A: fxch    st(3)
0x96871C: fstp    [esp+60h+var_48]
0x968720: fld     [esp+60h+var_48]
0x968724: jmp     short loc_96872A
0x968726: fstp    st(4)
0x968728: fxch    st(3)
0x96872A: fld     dword ptr [esi+28h]
0x96872D: fmul    st, st(1)
0x96872F: fstp    [esp+60h+var_20]
0x968733: fld     dword ptr [esi+2Ch]
0x968736: fmul    st, st(1)
0x968738: fstp    [esp+60h+var_1C]
0x96873C: fmul    dword ptr [esi+30h]
0x96873F: fstp    [esp+60h+var_18]
0x968743: fld     dword ptr [esi+1Ch]
0x968746: fmul    st, st(3)
0x968748: fstp    [esp+60h+var_2C]
0x96874C: fld     dword ptr [esi+20h]
0x96874F: fmul    st, st(3)
0x968751: fstp    [esp+60h+var_28]
0x968755: fld     dword ptr [esi+24h]
0x968758: fmulp   st(3), st
0x96875A: fxch    st(2)
0x96875C: fstp    [esp+60h+var_24]
0x968760: fld     dword ptr [esi+10h]
0x968763: fmul    st, st(2)
0x968765: fstp    [esp+60h+var_50]
0x968769: fld     dword ptr [esi+14h]
0x96876C: fmul    st, st(2)
0x96876E: fstp    [esp+60h+var_4C]
0x968772: fld     dword ptr [esi+18h]
0x968775: fmulp   st(2), st
0x968777: fxch    st(1)
0x968779: fstp    [esp+60h+var_48]
0x96877D: fadd    [esp+60h+var_50]
0x968781: fstp    [esp+60h+var_38]
0x968785: fld     [esp+60h+var_4C]
0x968789: fadd    [esp+60h+var_40]
0x96878D: fstp    [esp+60h+var_34]
0x968791: fld     [esp+60h+var_48]
0x968795: fadd    [esp+60h+var_3C]
0x968799: fstp    [esp+60h+var_30]
0x96879D: fld     [esp+60h+var_38]
0x9687A1: fadd    [esp+60h+var_2C]
0x9687A5: fstp    [esp+60h+var_44]
0x9687A9: fld     [esp+60h+var_34]
0x9687AD: fadd    [esp+60h+var_28]
0x9687B1: fstp    [esp+60h+var_40]
0x9687B5: fld     [esp+60h+var_30]
0x9687B9: fadd    [esp+60h+var_24]
0x9687BD: fstp    [esp+60h+var_3C]
0x9687C1: fld     [esp+60h+var_44]
0x9687C5: fadd    [esp+60h+var_20]
0x9687C9: fstp    [esp+60h+var_2C]
0x9687CD: mov     ecx, [esp+60h+var_2C]
0x9687D1: fld     [esp+60h+var_40]
0x9687D5: mov     [edi], ecx
0x9687D7: fadd    [esp+60h+var_1C]
0x9687DB: fstp    [esp+60h+var_28]
0x9687DF: mov     edx, [esp+60h+var_28]
0x9687E3: fld     [esp+60h+var_3C]
0x9687E7: mov     [edi+4], edx
0x9687EA: fadd    [esp+60h+var_18]
0x9687EE: fstp    [esp+60h+var_24]
0x9687F2: mov     eax, [esp+60h+var_24]
0x9687F6: mov     [edi+8], eax
0x9687F9: jmp     short loc_9687FD
0x9687FB: fstp    st
0x9687FD: mov     ebx, [esp+60h+arg_10]
0x968801: fld     [esp+60h+arg_0]
0x968805: mov     esi, [esp+60h+arg_C]
0x968809: push    offset Vector3_InitValue?; int
0x96880E: lea     ecx, [esp+64h+var_14]
0x968812: push    ecx; int
0x968813: push    ebx; int
0x968814: push    esi; int
0x968815: push    ecx
0x968816: fstp    [esp+74h+var_74]; float
0x968819: call    sub_9682F0
0x96881E: add     esp, 14h
0x968821: test    al, al
0x968823: jnz     loc_968ABE
0x968829: fld     dword ptr [ebp+0]
0x96882C: fstp    [esp+60h+arg_18]
0x968830: fld     dword ptr [ebx]
0x968832: fld     [esp+60h+arg_18]
0x968836: fld     st
0x968838: fmulp   st(2), st
0x96883A: fxch    st(1)
0x96883C: fstp    [esp+60h+var_20]
0x968840: fld     dword ptr [ebx+4]
0x968843: fmul    st, st(1)
0x968845: fstp    [esp+60h+var_1C]
0x968849: fmul    dword ptr [ebx+8]
0x96884C: fstp    [esp+60h+var_18]
0x968850: fld     [esp+60h+var_20]
0x968854: fadd    dword ptr [esi+4]
0x968857: fstp    [esp+60h+var_44]
0x96885B: fld     dword ptr [esi+8]
0x96885E: fadd    [esp+60h+var_1C]
0x968862: fstp    [esp+60h+var_40]
0x968866: fld     dword ptr [esi+0Ch]
0x968869: fadd    [esp+60h+var_18]
0x96886D: fstp    [esp+60h+var_3C]
0x968871: fld     dword ptr [edi]
0x968873: fld     [esp+60h+var_44]
0x968877: fld     st
0x968879: fsubp   st(2), st
0x96887B: fxch    st(1)
0x96887D: fstp    [esp+60h+var_20]
0x968881: fld     dword ptr [edi+4]
0x968884: fsub    [esp+60h+var_40]
0x968888: fstp    [esp+60h+var_1C]
0x96888C: fld     dword ptr [edi+8]
0x96888F: fsub    [esp+60h+var_3C]
0x968893: fstp    [esp+60h+var_18]
0x968897: fld     dword ptr [esi+14h]
0x96889A: fld     [esp+60h+var_1C]
0x96889E: fld     st
0x9688A0: fmulp   st(2), st
0x9688A2: fld     [esp+60h+var_20]
0x9688A6: fld     st
0x9688A8: fmul    dword ptr [esi+10h]
0x9688AB: faddp   st(3), st
0x9688AD: fld     dword ptr [esi+18h]
0x9688B0: fld     [esp+60h+var_18]
0x9688B4: fld     st
0x9688B6: fmulp   st(2), st
0x9688B8: fxch    st(4)
0x9688BA: faddp   st(1), st
0x9688BC: fstp    [esp+60h+arg_18]
0x9688C0: fld     [esp+60h+arg_18]
0x9688C4: fstp    [esp+60h+var_50]
0x9688C8: fld     dword ptr [esi+20h]
0x9688CB: fmul    st, st(2)
0x9688CD: fld     dword ptr [esi+1Ch]
0x9688D0: fmul    st, st(2)
0x9688D2: faddp   st(1), st
0x9688D4: fld     dword ptr [esi+24h]
0x9688D7: fmul    st, st(4)
0x9688D9: faddp   st(1), st
0x9688DB: fstp    [esp+60h+arg_18]
0x9688DF: fld     [esp+60h+arg_18]
0x9688E3: fstp    [esp+60h+var_4C]
0x9688E7: fld     dword ptr [esi+2Ch]
0x9688EA: fmulp   st(2), st
0x9688EC: fmul    dword ptr [esi+28h]
0x9688EF: faddp   st(1), st
0x9688F1: fld     dword ptr [esi+30h]
0x9688F4: fmulp   st(2), st
0x9688F6: faddp   st(1), st
0x9688F8: fstp    [esp+60h+arg_18]
0x9688FC: fld     [esp+60h+arg_18]
0x968900: fstp    [esp+60h+var_48]
0x968904: fld     [esp+60h+var_50]
0x968908: fld     dword ptr [esi+34h]
0x96890B: fld     qword ptr ds:0A88D40h
0x968911: fmul    st(1), st
0x968913: fxch    st(1)
0x968915: fcomp   st(2)
0x968917: fnstsw  ax
0x968919: test    ah, 5
0x96891C: jp      short loc_96892D
0x96891E: fstp    st(1)
0x968920: fld     dword ptr [esi+34h]
0x968923: fstp    [esp+60h+var_50]
0x968927: fld     [esp+60h+var_50]
0x96892B: jmp     short loc_968959
0x96892D: fld     dword ptr [esi+34h]
0x968930: fchs
0x968932: fstp    [esp+60h+arg_18]
0x968936: fld     [esp+60h+arg_18]
0x96893A: fld     st
0x96893C: fmul    st, st(2)
0x96893E: fcomp   st(3)
0x968940: fnstsw  ax
0x968942: test    ah, 41h
0x968945: jnz     short loc_968955
0x968947: fstp    st(2)
0x968949: fxch    st(1)
0x96894B: fstp    [esp+60h+var_50]
0x96894F: fld     [esp+60h+var_50]
0x968953: jmp     short loc_968959
0x968955: fstp    st
0x968957: fxch    st(1)
0x968959: fld     [esp+60h+var_4C]
0x96895D: fld     dword ptr [esi+38h]
0x968960: fmul    st, st(3)
0x968962: fcomp   st(1)
0x968964: fnstsw  ax
0x968966: test    ah, 5
0x968969: jp      short loc_96897A
0x96896B: fstp    st
0x96896D: fld     dword ptr [esi+38h]
0x968970: fstp    [esp+60h+var_4C]
0x968974: fld     [esp+60h+var_4C]
0x968978: jmp     short loc_9689A2
0x96897A: fld     dword ptr [esi+38h]
0x96897D: fchs
0x96897F: fstp    [esp+60h+arg_18]
0x968983: fld     [esp+60h+arg_18]
0x968987: fld     st
0x968989: fmul    st, st(4)
0x96898B: fcomp   st(2)
0x96898D: fnstsw  ax
0x96898F: test    ah, 41h
0x968992: jnz     short loc_9689A0
0x968994: fstp    st(1)
0x968996: fstp    [esp+60h+var_4C]
0x96899A: fld     [esp+60h+var_4C]
0x96899E: jmp     short loc_9689A2
0x9689A0: fstp    st
0x9689A2: fld     [esp+60h+var_48]
0x9689A6: fld     dword ptr [esi+3Ch]
0x9689A9: fmul    st, st(4)
0x9689AB: fcomp   st(1)
0x9689AD: fnstsw  ax
0x9689AF: test    ah, 5
0x9689B2: jp      short loc_9689C5
0x9689B4: fstp    st
0x9689B6: fstp    st(2)
0x9689B8: fld     dword ptr [esi+3Ch]
0x9689BB: fstp    [esp+60h+var_48]
0x9689BF: fld     [esp+60h+var_48]
0x9689C3: jmp     short loc_9689F3
0x9689C5: fld     dword ptr [esi+3Ch]
0x9689C8: fchs
0x9689CA: fstp    [esp+60h+arg_18]
0x9689CE: fld     [esp+60h+arg_18]
0x9689D2: fld     st
0x9689D4: fmulp   st(5), st
0x9689D6: fxch    st(4)
0x9689D8: fcomp   st(1)
0x9689DA: fnstsw  ax
0x9689DC: test    ah, 41h
0x9689DF: jnz     short loc_9689EF
0x9689E1: fstp    st
0x9689E3: fxch    st(2)
0x9689E5: fstp    [esp+60h+var_48]
0x9689E9: fld     [esp+60h+var_48]
0x9689ED: jmp     short loc_9689F3
0x9689EF: fstp    st(3)
0x9689F1: fxch    st(2)
0x9689F3: fld     st
0x9689F5: fmul    dword ptr [esi+28h]
0x9689F8: fstp    [esp+60h+var_50]
0x9689FC: fld     dword ptr [esi+2Ch]
0x9689FF: fmul    st, st(1)
0x968A01: fstp    [esp+60h+var_4C]
0x968A05: fmul    dword ptr [esi+30h]
0x968A08: fstp    [esp+60h+var_48]
0x968A0C: fld     dword ptr [esi+1Ch]
0x968A0F: fmul    st, st(2)
0x968A11: fstp    [esp+60h+var_38]
0x968A15: fld     dword ptr [esi+20h]
0x968A18: fmul    st, st(2)
0x968A1A: fstp    [esp+60h+var_34]
0x968A1E: fld     dword ptr [esi+24h]
0x968A21: fmulp   st(2), st
0x968A23: fxch    st(1)
0x968A25: fstp    [esp+60h+var_30]
0x968A29: fld     dword ptr [esi+10h]
0x968A2C: fmul    st, st(1)
0x968A2E: fstp    [esp+60h+var_20]
0x968A32: fld     dword ptr [esi+14h]
0x968A35: fmul    st, st(1)
0x968A37: fstp    [esp+60h+var_1C]
0x968A3B: fmul    dword ptr [esi+18h]
0x968A3E: fstp    [esp+60h+var_18]
0x968A42: fadd    [esp+60h+var_20]
0x968A46: fstp    [esp+60h+var_2C]
0x968A4A: fld     [esp+60h+var_1C]
0x968A4E: fadd    [esp+60h+var_40]
0x968A52: fstp    [esp+60h+var_28]
0x968A56: fld     [esp+60h+var_18]
0x968A5A: fadd    [esp+60h+var_3C]
0x968A5E: fstp    [esp+60h+var_24]
0x968A62: fld     [esp+60h+var_2C]
0x968A66: fadd    [esp+60h+var_38]
0x968A6A: fstp    [esp+60h+var_20]
0x968A6E: fld     [esp+60h+var_28]
0x968A72: fadd    [esp+60h+var_34]
0x968A76: fstp    [esp+60h+var_1C]
0x968A7A: fld     [esp+60h+var_24]
0x968A7E: fadd    [esp+60h+var_30]
0x968A82: fstp    [esp+60h+var_18]
0x968A86: fld     [esp+60h+var_20]
0x968A8A: fadd    [esp+60h+var_50]
0x968A8E: fstp    [esp+60h+var_2C]
0x968A92: mov     edx, [esp+60h+var_2C]
0x968A96: fld     [esp+60h+var_1C]
0x968A9A: mov     [edi], edx
0x968A9C: fadd    [esp+60h+var_4C]
0x968AA0: fstp    [esp+60h+var_28]
0x968AA4: mov     eax, [esp+60h+var_28]
0x968AA8: fld     [esp+60h+var_18]
0x968AAC: mov     [edi+4], eax
0x968AAF: fadd    [esp+60h+var_48]
0x968AB3: fstp    [esp+60h+var_24]
0x968AB7: mov     ecx, [esp+60h+var_24]
0x968ABB: mov     [edi+8], ecx
0x968ABE: pop     edi
0x968ABF: pop     esi
0x968AC0: pop     ebp
0x968AC1: pop     ebx
0x968AC2: add     esp, 50h
0x968AC5: retn
