0x679850: push    0FFFFFFFFh
0x679852: push    offset SEH_679850
0x679857: mov     eax, large fs:0
0x67985D: push    eax
0x67985E: sub     esp, 14h
0x679861: push    ebp
0x679862: push    esi
0x679863: push    edi
0x679864: mov     eax, ds:0B30AACh
0x679869: xor     eax, esp
0x67986B: push    eax
0x67986C: lea     eax, [esp+30h+var_C]
0x679870: mov     large fs:0, eax
0x679876: mov     [esp+30h+var_18], ecx
0x67987A: mov     ecx, ds:0B33B00h
0x679880: mov     al, [ecx+7Ch]
0x679883: cmp     al, 26h ; '&'
0x679885: jnb     short loc_679894
0x679887: push    6
0x679889: call    SaveLoad_AdvanceBufferOffset
0x67988E: mov     ecx, ds:0B33B00h
0x679894: push    2; Size
0x679896: lea     eax, [esp+34h+Dst]
0x67989A: push    eax; Dst
0x67989B: call    SaveLoad_LoadData
0x6798A0: cmp     [esp+30h+Dst], 0
0x6798A6: mov     [esp+30h+var_14], 0
0x6798AE: jbe     loc_679A40
0x6798B4: mov     ebp, ds:0A28078h
0x6798BA: or      edi, 0FFFFFFFFh
0x6798BD: push    1; Size
0x6798BF: lea     ecx, [esp+34h+var_1D]
0x6798C3: push    ecx; Dst
0x6798C4: mov     ecx, ds:0B33B00h
0x6798CA: call    SaveLoad_LoadData
0x6798CF: movzx   eax, [esp+30h+var_1D]
0x6798D4: cmp     eax, 6; switch 7 cases
0x6798D7: ja      def_6798DD; jumptable 006798DD default case, cases 3,4
0x6798DD: jmp     ds:jpt_6798DD[eax*4]; switch jump
0x6798E4: push    1Ch; jumptable 006798DD case 0
0x6798E6: call    FormHeapAlloc
0x6798EB: add     esp, 4
0x6798EE: mov     [esp+30h+var_10], eax
0x6798F2: test    eax, eax
0x6798F4: mov     [esp+30h+var_4], 0
0x6798FC: jz      short loc_679907
0x6798FE: mov     ecx, eax
0x679900: call    sub_56BDE0
0x679905: jmp     short loc_679909
0x679907: xor     eax, eax
0x679909: mov     esi, eax
0x67990B: test    esi, esi
0x67990D: mov     [esp+30h+var_4], edi
0x679911: jz      loc_679A28
0x679917: mov     edx, [esi]
0x679919: mov     eax, [edx+64h]
0x67991C: mov     ecx, esi
0x67991E: call    eax
0x679920: test    al, al
0x679922: mov     edx, [esi]
0x679924: mov     ecx, esi
0x679926: jz      loc_679A22
0x67992C: mov     eax, [edx+54h]
0x67992F: call    eax
0x679931: add     eax, 0FFFFFFFCh
0x679934: push    ecx
0x679935: cmp     eax, 2
0x679938: mov     eax, esp
0x67993A: mov     [esp+34h+var_10], esp
0x67993E: mov     [eax], esi
0x679940: ja      loc_679A0E
0x679946: add     esi, 4
0x679949: push    esi; lpAddend
0x67994A: call    ebp ; InterlockedIncrement
0x67994C: mov     ecx, [esp+34h+var_18]
0x679950: add     ecx, 48h ; 'H'
0x679953: call    sub_677CF0
0x679958: jmp     loc_679A28
0x67995D: push    54h ; 'T'; jumptable 006798DD case 1
0x67995F: call    FormHeapAlloc
0x679964: add     esp, 4
0x679967: mov     [esp+30h+var_10], eax
0x67996B: test    eax, eax
0x67996D: mov     [esp+30h+var_4], 1
0x679975: jz      short loc_679907
0x679977: mov     ecx, eax
0x679979: call    sub_56CDE0
0x67997E: jmp     short loc_679909
0x679980: push    20h ; ' '; jumptable 006798DD case 2
0x679982: call    FormHeapAlloc
0x679987: add     esp, 4
0x67998A: mov     [esp+30h+var_10], eax
0x67998E: test    eax, eax
0x679990: mov     [esp+30h+var_4], 2
0x679998: jz      loc_679907
0x67999E: mov     ecx, eax
0x6799A0: call    sub_570700
0x6799A5: jmp     loc_679909
0x6799AA: push    38h ; '8'; jumptable 006798DD case 5
0x6799AC: call    FormHeapAlloc
0x6799B1: add     esp, 4
0x6799B4: mov     [esp+30h+var_10], eax
0x6799B8: test    eax, eax
0x6799BA: mov     [esp+30h+var_4], 3
0x6799C2: jz      loc_679907
0x6799C8: mov     ecx, eax
0x6799CA: call    MagicModelHitEffect_constr
0x6799CF: jmp     loc_679909
0x6799D4: push    4Ch ; 'L'; jumptable 006798DD case 6
0x6799D6: call    FormHeapAlloc
0x6799DB: add     esp, 4
0x6799DE: mov     [esp+30h+var_10], eax
0x6799E2: test    eax, eax
0x6799E4: mov     [esp+30h+var_4], 4
0x6799EC: jz      loc_679907
0x6799F2: mov     ecx, eax
0x6799F4: call    MagicShaderHitEffect_constr
0x6799F9: jmp     loc_679909
0x6799FE: push    eax; jumptable 006798DD default case, cases 3,4
0x6799FF: push    offset aUnknownTempEff
0x679A04: call    PrintError
0x679A09: add     esp, 8
0x679A0C: jmp     short loc_679A28
0x679A0E: add     esi, 4
0x679A11: push    esi; lpAddend
0x679A12: call    ebp ; InterlockedIncrement
0x679A14: mov     ecx, [esp+34h+var_18]
0x679A18: add     ecx, 40h ; '@'
0x679A1B: call    sub_677CF0
0x679A20: jmp     short loc_679A28
0x679A22: mov     eax, [edx]
0x679A24: push    1
0x679A26: call    eax
0x679A28: mov     eax, [esp+30h+var_14]
0x679A2C: movzx   ecx, [esp+30h+Dst]
0x679A31: add     eax, 1
0x679A34: cmp     eax, ecx
0x679A36: mov     [esp+30h+var_14], eax
0x679A3A: jb      loc_6798BD
0x679A40: mov     ecx, dword ptr [esp+30h+var_C]
0x679A44: mov     large fs:0, ecx
0x679A4B: pop     ecx
0x679A4C: pop     edi
0x679A4D: pop     esi
0x679A4E: pop     ebp
0x679A4F: add     esp, 20h
0x679A52: retn
