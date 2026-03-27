0x79F1E0: push    0FFFFFFFFh
0x79F1E2: push    offset SEH_79F1E0
0x79F1E7: mov     eax, large fs:0
0x79F1ED: push    eax
0x79F1EE: sub     esp, 0FCh
0x79F1F4: mov     eax, ds:0B30AACh
0x79F1F9: xor     eax, esp
0x79F1FB: mov     [esp+108h+var_10], eax
0x79F202: push    ebx
0x79F203: push    ebp
0x79F204: push    esi
0x79F205: push    edi
0x79F206: mov     eax, ds:0B30AACh
0x79F20B: xor     eax, esp
0x79F20D: push    eax
0x79F20E: lea     eax, [esp+11Ch+var_C]
0x79F215: mov     large fs:0, eax
0x79F21B: mov     esi, [esp+11Ch+arg_0]
0x79F222: mov     edi, ecx
0x79F224: mov     ecx, esi
0x79F226: mov     [esp+11Ch+var_108], edi
0x79F22A: call    sub_78EB40
0x79F22F: xor     ebx, ebx
0x79F231: mov     ebp, 10h
0x79F236: jmp     short loc_79F240
0x79F238: align 10h
0x79F240: cmp     eax, 36B7h
0x79F245: jg      loc_79F555
0x79F24B: jz      loc_79F549
0x79F251: lea     ecx, [eax-32CAh]; switch 12 cases
0x79F257: cmp     ecx, 0Bh
0x79F25A: ja      def_79F260; jumptable 0079F260 default case
0x79F260: jmp     ds:jpt_79F260[ecx*4]; switch jump
0x79F267: mov     ecx, esi; jumptable 0079F260 case 13002
0x79F269: call    sub_78EB40
0x79F26E: mov     [edi+38h], eax
0x79F271: jmp     loc_79F50D
0x79F276: mov     ecx, esi; jumptable 0079F260 case 13003
0x79F278: call    sub_78EB40
0x79F27D: mov     [edi+28h], eax
0x79F280: jmp     loc_79F50D
0x79F285: mov     ecx, esi; jumptable 0079F260 case 13004
0x79F287: call    sub_78EB40
0x79F28C: mov     [edi+2Ch], eax
0x79F28F: jmp     loc_79F50D
0x79F294: mov     ecx, esi; jumptable 0079F260 case 13005
0x79F296: call    sub_7909D0
0x79F29B: push    eax
0x79F29C: mov     ecx, edi
0x79F29E: call    sub_799EB0
0x79F2A3: jmp     loc_79F50D
0x79F2A8: mov     ecx, esi; jumptable 0079F260 case 13006
0x79F2AA: call    sub_78EB40
0x79F2AF: mov     [edi+34h], eax
0x79F2B2: jmp     loc_79F50D
0x79F2B7: mov     ecx, esi; jumptable 0079F260 case 13007
0x79F2B9: call    sub_7877E0
0x79F2BE: mov     [edi+3Ch], al
0x79F2C1: jmp     loc_79F50D
0x79F2C6: mov     ecx, esi; jumptable 0079F260 case 13009
0x79F2C8: call    sub_78EB40
0x79F2CD: mov     [edi+50h], eax
0x79F2D0: jmp     loc_79F50D
0x79F2D5: mov     ecx, esi; jumptable 0079F260 case 13010
0x79F2D7: call    sub_78EB10
0x79F2DC: fstp    dword ptr [edi+54h]
0x79F2DF: jmp     loc_79F50D
0x79F2E4: mov     ecx, esi; jumptable 0079F260 case 13011
0x79F2E6: call    sub_78EB10
0x79F2EB: fstp    dword ptr [edi+58h]
0x79F2EE: jmp     loc_79F50D
0x79F2F3: mov     ecx, esi; jumptable 0079F260 case 13012
0x79F2F5: call    sub_78EB10
0x79F2FA: fstp    dword ptr [edi+5Ch]
0x79F2FD: jmp     loc_79F50D
0x79F302: mov     ecx, esi; jumptable 0079F260 case 13013
0x79F304: call    sub_78EB10
0x79F309: fstp    dword ptr [edi+60h]
0x79F30C: jmp     loc_79F50D
0x79F311: lea     ecx, [edi+40h]; jumptable 0079F260 case 13008
0x79F314: call    sub_79E380
0x79F319: mov     ecx, esi
0x79F31B: call    sub_78EB40
0x79F320: xor     edi, edi
0x79F322: cmp     eax, ebx
0x79F324: mov     [esp+11Ch+var_104], eax
0x79F328: jle     loc_79F509
0x79F32E: mov     edi, edi
0x79F330: fld     dword ptr ds:0A3D65Ch
0x79F336: mov     [esp+11Ch+var_24], 0Fh
0x79F341: fstp    [esp+11Ch+var_20]
0x79F348: mov     [esp+11Ch+var_28], ebx
0x79F34F: fld1
0x79F351: mov     byte ptr [esp+11Ch+var_38], bl
0x79F358: fstp    [esp+11Ch+var_1C]
0x79F35F: fldz
0x79F361: fst     [esp+11Ch+var_18]
0x79F368: fstp    [esp+11Ch+var_14]
0x79F36F: mov     ecx, esi
0x79F371: mov     [esp+11Ch+var_4], ebx
0x79F378: call    sub_78EB40
0x79F37D: mov     ecx, esi
0x79F37F: call    sub_78EB40
0x79F384: jmp     short loc_79F390
0x79F386: align 10h
0x79F390: lea     ecx, [eax-36B2h]; switch 5 cases
0x79F396: cmp     ecx, 4
0x79F399: ja      def_79F39F
0x79F39F: jmp     ds:jpt_79F39F[ecx*4]; switch jump
0x79F3A6: sub     esp, 1Ch; jumptable 0079F39F case 14002
0x79F3A9: mov     eax, esp
0x79F3AB: mov     [esp+138h+var_100], esp
0x79F3AF: push    eax
0x79F3B0: mov     ecx, esi
0x79F3B2: call    sub_78EC20
0x79F3B7: lea     ecx, [esp+138h+var_FC]
0x79F3BB: call    sub_789120
0x79F3C0: push    0FFFFFFFFh
0x79F3C2: push    ebx
0x79F3C3: lea     ecx, [esp+124h+var_FC]
0x79F3C7: push    ecx
0x79F3C8: lea     ecx, [esp+128h+var_3C]
0x79F3CF: mov     byte ptr [esp+128h+var_4], 1
0x79F3D7: call    sub_414420
0x79F3DC: cmp     [esp+11Ch+var_E4], ebp
0x79F3E0: mov     byte ptr [esp+11Ch+var_4], bl
0x79F3E7: jb      short loc_79F3F6
0x79F3E9: mov     edx, [esp+11Ch+var_F8]
0x79F3ED: push    edx
0x79F3EE: call    FormHeapFree
0x79F3F3: add     esp, 4
0x79F3F6: lea     eax, [esp+11Ch+var_E0]
0x79F3FA: push    eax
0x79F3FB: lea     ecx, [esp+120h+var_3C]
0x79F402: mov     [esp+120h+var_E4], 0Fh
0x79F40A: mov     [esp+120h+var_E8], ebx
0x79F40E: mov     byte ptr [esp+120h+var_F8], bl
0x79F412: call    sub_789430
0x79F417: push    0FFFFFFFFh
0x79F419: push    ebx
0x79F41A: push    eax
0x79F41B: lea     ecx, [esp+128h+var_3C]
0x79F422: mov     byte ptr [esp+128h+var_4], 2
0x79F42A: call    sub_414420
0x79F42F: cmp     [esp+11Ch+var_C8], ebp
0x79F433: mov     byte ptr [esp+11Ch+var_4], bl
0x79F43A: jb      short loc_79F449
0x79F43C: mov     ecx, [esp+11Ch+var_DC]
0x79F440: push    ecx
0x79F441: call    FormHeapFree
0x79F446: add     esp, 4
0x79F449: mov     [esp+11Ch+var_C8], 0Fh
0x79F451: mov     [esp+11Ch+var_CC], ebx
0x79F455: mov     byte ptr [esp+11Ch+var_DC], bl
0x79F459: jmp     short loc_79F499
0x79F45B: mov     ecx, esi; jumptable 0079F39F case 14003
0x79F45D: call    sub_78EB10
0x79F462: fstp    [esp+11Ch+var_20]
0x79F469: jmp     short loc_79F499
0x79F46B: mov     ecx, esi; jumptable 0079F39F case 14004
0x79F46D: call    sub_78EB10
0x79F472: fstp    [esp+11Ch+var_1C]
0x79F479: jmp     short loc_79F499
0x79F47B: mov     ecx, esi; jumptable 0079F39F case 14005
0x79F47D: call    sub_78EB10
0x79F482: fstp    [esp+11Ch+var_18]
0x79F489: jmp     short loc_79F499
0x79F48B: mov     ecx, esi; jumptable 0079F39F case 14006
0x79F48D: call    sub_78EB10
0x79F492: fstp    [esp+11Ch+var_14]
0x79F499: mov     ecx, esi
0x79F49B: call    sub_78EB40
0x79F4A0: cmp     eax, 36B1h
0x79F4A5: jnz     loc_79F390
0x79F4AB: mov     ecx, [esp+11Ch+var_108]
0x79F4AF: lea     edx, [esp+11Ch+var_3C]
0x79F4B6: push    edx
0x79F4B7: add     ecx, 40h ; '@'
0x79F4BA: call    sub_79F040
0x79F4BF: cmp     [esp+11Ch+var_24], ebp
0x79F4C6: mov     [esp+11Ch+var_4], 0FFFFFFFFh
0x79F4D1: jb      short loc_79F4E3
0x79F4D3: mov     eax, [esp+11Ch+var_38]
0x79F4DA: push    eax
0x79F4DB: call    FormHeapFree
0x79F4E0: add     esp, 4
0x79F4E3: add     edi, 1
0x79F4E6: cmp     edi, [esp+11Ch+var_104]
0x79F4EA: mov     [esp+11Ch+var_24], 0Fh
0x79F4F5: mov     [esp+11Ch+var_28], ebx
0x79F4FC: mov     byte ptr [esp+11Ch+var_38], bl
0x79F503: jl      loc_79F330
0x79F509: mov     edi, [esp+11Ch+var_108]
0x79F50D: mov     ecx, esi
0x79F50F: call    sub_78EB40
0x79F514: cmp     eax, 32C9h
0x79F519: jnz     loc_79F240
0x79F51F: mov     ecx, [esp+11Ch+var_C]
0x79F526: mov     large fs:0, ecx
0x79F52D: pop     ecx
0x79F52E: pop     edi
0x79F52F: pop     esi
0x79F530: pop     ebp
0x79F531: pop     ebx
0x79F532: mov     ecx, [esp+108h+var_10]
0x79F539: xor     ecx, esp
0x79F53B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x79F540: add     esp, 108h
0x79F546: retn    4
0x79F549: mov     ecx, esi
0x79F54B: call    sub_78EB40
0x79F550: mov     [edi+64h], eax
0x79F553: jmp     short loc_79F50D
0x79F555: cmp     eax, 36B8h
0x79F55A: jnz     short def_79F260; jumptable 0079F260 default case
0x79F55C: mov     ecx, esi
0x79F55E: call    sub_78EB40
0x79F563: mov     [edi+68h], eax
0x79F566: jmp     short loc_79F50D
