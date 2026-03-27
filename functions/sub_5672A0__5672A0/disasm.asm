0x5672A0: sub     esp, 108h
0x5672A6: mov     eax, ds:0B30AACh
0x5672AB: xor     eax, esp
0x5672AD: mov     [esp+108h+var_4], eax
0x5672B4: push    esi
0x5672B5: mov     esi, ecx
0x5672B7: movsx   eax, byte ptr [esi+20h]
0x5672BB: push    edi
0x5672BC: or      edi, 0FFFFFFFFh
0x5672BF: cmp     eax, 20h; switch 33 cases
0x5672C2: ja      def_5672C8; jumptable 005672C8 default case, cases 13,16,20,27
0x5672C8: jmp     ds:jpt_5672C8[eax*4]; switch jump
0x5672CF: mov     dword ptr [esi+18h], 1; jumptable 005672C8 case 5
0x5672D6: jmp     loc_567606
0x5672DB: mov     dword ptr [esi+18h], 0; jumptable 005672C8 case 6
0x5672E2: jmp     loc_567606
0x5672E7: mov     ecx, [esi+28h]; jumptable 005672C8 case 0
0x5672EA: test    ecx, ecx
0x5672EC: jnz     short loc_56730A
0x5672EE: mov     ecx, [esi+24h]
0x5672F1: test    ecx, ecx
0x5672F3: jz      short loc_5672DB; jumptable 005672C8 case 6
0x5672F5: call    TESPackage_LocationData_GetRadius
0x5672FA: test    eax, eax
0x5672FC: jz      short loc_5672DB; jumptable 005672C8 case 6
0x5672FE: mov     dword ptr [esi+18h], 1
0x567305: jmp     loc_567606
0x56730A: call    sub_569E60
0x56730F: test    eax, eax
0x567311: jnz     short loc_56732F
0x567313: mov     ecx, [esi+28h]
0x567316: call    sub_569E70
0x56731B: test    eax, eax
0x56731D: jnz     short loc_56732F
0x56731F: mov     ecx, [esi+28h]
0x567322: call    sub_569E80
0x567327: test    eax, eax
0x567329: jz      loc_567606
0x56732F: mov     ecx, [esi+28h]
0x567332: call    TargetData__GetTargetType
0x567337: sub     eax, 0
0x56733A: jz      short loc_5673A8
0x56733C: sub     eax, 1
0x56733F: jz      short loc_567368
0x567341: sub     eax, 1
0x567344: jnz     def_5673CF; jumptable 005673CF default case, cases 19-22,25-27,29,33,34
0x56734A: mov     ecx, [esi+28h]
0x56734D: call    sub_569E80
0x567352: add     eax, 0FFFFFFFFh; switch 16 cases
0x567355: cmp     eax, 0Fh
0x567358: ja      short def_567361; jumptable 00567361 default case, cases 2-6,8-10,13,14
0x56735A: movzx   eax, ds:byte_5676DC[eax]
0x567361: jmp     ds:jpt_567361[eax*4]; switch jump
0x567368: mov     ecx, [esi+28h]
0x56736B: call    sub_569E70
0x567370: movzx   eax, byte ptr [eax+4]
0x567374: add     eax, 0FFFFFFEEh; switch 19 cases
0x567377: cmp     eax, 12h
0x56737A: ja      short def_567361; jumptable 00567361 default case, cases 2-6,8-10,13,14
0x56737C: movzx   ecx, ds:byte_5676F8[eax]
0x567383: jmp     ds:jpt_567383[ecx*4]; switch jump
0x56738A: pop     edi; jumptable 00567361 default case, cases 2-6,8-10,13,14
0x56738B: mov     dword ptr [esi+18h], 1Ah
0x567392: pop     esi
0x567393: mov     ecx, [esp+108h+var_4]
0x56739A: xor     ecx, esp
0x56739C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5673A1: add     esp, 108h
0x5673A7: retn
0x5673A8: mov     ecx, [esi+28h]
0x5673AB: call    sub_569E60
0x5673B0: mov     edx, [eax]
0x5673B2: mov     ecx, eax
0x5673B4: mov     eax, [edx+170h]
0x5673BA: call    eax
0x5673BC: movzx   eax, byte ptr [eax+4]
0x5673C0: add     eax, 0FFFFFFEEh; switch 19 cases
0x5673C3: cmp     eax, 12h
0x5673C6: ja      short def_5673CF; jumptable 005673CF default case, cases 19-22,25-27,29,33,34
0x5673C8: movzx   ecx, ds:byte_567718[eax]
0x5673CF: jmp     ds:jpt_5673CF[ecx*4]; switch jump
0x5673D6: pop     edi; jumptable 00567361 case 15
0x5673D7: mov     dword ptr [esi+18h], 16h
0x5673DE: pop     esi
0x5673DF: mov     ecx, [esp+108h+var_4]
0x5673E6: xor     ecx, esp
0x5673E8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5673ED: add     esp, 108h
0x5673F3: retn
0x5673F4: mov     dword ptr [esi+18h], 2; jumptable 00567361 cases 1,7,11,12,16
0x5673FB: jmp     loc_567606
0x567400: mov     dword ptr [esi+18h], 3; jumptable 005673CF default case, cases 19-22,25-27,29,33,34
0x567407: jmp     loc_567606
0x56740C: mov     dword ptr [esi+18h], 5; jumptable 005672C8 case 3
0x567413: jmp     loc_567606
0x567418: mov     dword ptr [esi+18h], 4; jumptable 005672C8 case 4
0x56741F: jmp     loc_567606
0x567424: mov     ecx, [esi+28h]; jumptable 005672C8 case 1
0x567427: test    ecx, ecx
0x567429: jz      def_5672C8; jumptable 005672C8 default case, cases 13,16,20,27
0x56742F: call    sub_569E60
0x567434: test    eax, eax
0x567436: jnz     short loc_567454
0x567438: mov     ecx, [esi+28h]
0x56743B: call    sub_569E70
0x567440: test    eax, eax
0x567442: jnz     short loc_567454
0x567444: mov     ecx, [esi+28h]
0x567447: call    sub_569E80
0x56744C: test    eax, eax
0x56744E: jz      def_5672C8; jumptable 005672C8 default case, cases 13,16,20,27
0x567454: mov     dword ptr [esi+18h], 7
0x56745B: jmp     loc_567606
0x567460: mov     ecx, [esi+28h]; jumptable 005672C8 case 2
0x567463: test    ecx, ecx
0x567465: jz      def_5672C8; jumptable 005672C8 default case, cases 13,16,20,27
0x56746B: call    sub_569E60
0x567470: test    eax, eax
0x567472: jnz     short loc_567490
0x567474: mov     ecx, [esi+28h]
0x567477: call    sub_569E70
0x56747C: test    eax, eax
0x56747E: jnz     short loc_567490
0x567480: mov     ecx, [esi+28h]
0x567483: call    sub_569E80
0x567488: test    eax, eax
0x56748A: jz      def_5672C8; jumptable 005672C8 default case, cases 13,16,20,27
0x567490: mov     ecx, [esi+28h]
0x567493: call    TargetData__GetTargetType
0x567498: sub     eax, 0
0x56749B: jz      short loc_5674D9
0x56749D: sub     eax, 1
0x5674A0: jz      short loc_5674C1
0x5674A2: sub     eax, 1
0x5674A5: jnz     short loc_567519
0x5674A7: mov     ecx, [esi+28h]
0x5674AA: call    sub_569E80
0x5674AF: cmp     eax, 0Fh
0x5674B2: jz      short loc_56750D
0x5674B4: mov     ecx, [esi+28h]
0x5674B7: call    sub_569E80
0x5674BC: cmp     eax, 10h
0x5674BF: jmp     short loc_56750B
0x5674C1: mov     ecx, [esi+28h]
0x5674C4: call    sub_569E70
0x5674C9: cmp     byte ptr [eax+4], 23h ; '#'
0x5674CD: jz      short loc_56750D
0x5674CF: mov     ecx, [esi+28h]
0x5674D2: call    sub_569E70
0x5674D7: jmp     short loc_567507
0x5674D9: mov     ecx, [esi+28h]
0x5674DC: call    sub_569E60
0x5674E1: mov     edx, [eax]
0x5674E3: mov     ecx, eax
0x5674E5: mov     eax, [edx+170h]
0x5674EB: call    eax
0x5674ED: cmp     byte ptr [eax+4], 23h ; '#'
0x5674F1: jz      short loc_56750D
0x5674F3: mov     ecx, [esi+28h]
0x5674F6: call    sub_569E60
0x5674FB: mov     edx, [eax]
0x5674FD: mov     ecx, eax
0x5674FF: mov     eax, [edx+170h]
0x567505: call    eax
0x567507: cmp     byte ptr [eax+4], 24h ; '$'
0x56750B: jnz     short loc_567519
0x56750D: mov     dword ptr [esi+18h], 8
0x567514: jmp     loc_567606
0x567519: mov     dword ptr [esi+18h], 9
0x567520: jmp     loc_567606
0x567525: mov     dword ptr [esi+18h], 0Ch; jumptable 005672C8 case 12
0x56752C: jmp     loc_567606
0x567531: mov     dword ptr [esi+18h], 0Ah; jumptable 005672C8 case 18
0x567538: jmp     loc_567606
0x56753D: mov     dword ptr [esi+18h], 0Dh; jumptable 005672C8 case 14
0x567544: jmp     loc_567606
0x567549: mov     dword ptr [esi+18h], 0Bh; jumptable 005672C8 case 15
0x567550: jmp     loc_567606
0x567555: mov     dword ptr [esi+18h], 14h; jumptable 005672C8 case 17
0x56755C: jmp     loc_567606
0x567561: mov     dword ptr [esi+18h], 15h; jumptable 005672C8 case 21
0x567568: jmp     loc_567606
0x56756D: mov     dword ptr [esi+18h], 19h; jumptable 005672C8 case 24
0x567574: jmp     loc_567606
0x567579: mov     dword ptr [esi+18h], 18h; jumptable 005672C8 case 23
0x567580: jmp     loc_567606
0x567585: mov     dword ptr [esi+18h], 17h; jumptable 005672C8 case 22
0x56758C: jmp     short loc_567606
0x56758E: mov     dword ptr [esi+18h], 1Bh; jumptable 005672C8 case 25
0x567595: jmp     short loc_567606
0x567597: mov     dword ptr [esi+18h], 1Ch; jumptable 005672C8 case 26
0x56759E: jmp     short loc_567606
0x5675A0: mov     dword ptr [esi+18h], 1Dh; jumptable 005672C8 case 7
0x5675A7: jmp     short loc_567606
0x5675A9: mov     dword ptr [esi+18h], 1Eh; jumptable 005672C8 case 8
0x5675B0: jmp     short loc_567606
0x5675B2: mov     dword ptr [esi+18h], 20h ; ' '; jumptable 005672C8 case 9
0x5675B9: jmp     short loc_567606
0x5675BB: mov     dword ptr [esi+18h], 21h ; '!'; jumptable 005672C8 case 28
0x5675C2: jmp     short loc_567606
0x5675C4: mov     dword ptr [esi+18h], 23h ; '#'; jumptable 005672C8 case 10
0x5675CB: jmp     short loc_567606
0x5675CD: mov     dword ptr [esi+18h], 22h ; '"'; jumptable 005672C8 case 11
0x5675D4: jmp     short loc_567606
0x5675D6: mov     dword ptr [esi+18h], 0Fh; jumptable 005672C8 case 19
0x5675DD: jmp     short loc_567606
0x5675DF: mov     dword ptr [esi+18h], 24h ; '$'; jumptable 005672C8 case 29
0x5675E6: jmp     short loc_567606
0x5675E8: mov     dword ptr [esi+18h], 25h ; '%'; jumptable 005672C8 case 30
0x5675EF: jmp     short loc_567606
0x5675F1: mov     dword ptr [esi+18h], 26h ; '&'; jumptable 005672C8 case 31
0x5675F8: jmp     short loc_567606
0x5675FA: mov     dword ptr [esi+18h], 27h ; '''; jumptable 005672C8 case 32
0x567601: jmp     short loc_567606
0x567603: mov     [esi+18h], edi; jumptable 005672C8 default case, cases 13,16,20,27
0x567606: cmp     [esi+18h], edi
0x567609: jnz     short loc_567634
0x56760B: mov     edx, [esi]
0x56760D: mov     eax, [edx+0D4h]
0x567613: mov     ecx, esi
0x567615: call    eax
0x567617: push    eax
0x567618: lea     ecx, [esp+114h+Format]
0x56761C: push    offset aPackageSIsNotA; "Package '%s' is not a valid package bec"...
0x567621: push    ecx; ArgList
0x567622: call    __sprintf
0x567627: lea     edx, [esp+11Ch+Format]
0x56762B: push    edx; Format
0x56762C: call    PrintError
0x567631: add     esp, 10h
0x567634: mov     ecx, [esp+110h+var_4]
0x56763B: pop     edi
0x56763C: pop     esi
0x56763D: xor     ecx, esp
0x56763F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x567644: add     esp, 108h
0x56764A: retn
