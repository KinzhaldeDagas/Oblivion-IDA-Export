0x91E120: push    ebp
0x91E121: mov     ebp, esp
0x91E123: and     esp, 0FFFFFFF0h
0x91E126: sub     esp, 4C4h
0x91E12C: push    ebx
0x91E12D: push    esi
0x91E12E: push    edi
0x91E12F: mov     edi, large fs:2Ch
0x91E136: mov     ebx, ecx
0x91E138: mov     ecx, ds:0BA9DE4h
0x91E13E: mov     eax, [edi+ecx*4]
0x91E141: mov     edx, [eax+1A4h]
0x91E147: cmp     edx, [eax+1A8h]
0x91E14D: jnb     short loc_91E173
0x91E14F: mov     esi, eax
0x91E151: mov     ecx, [esi+1A4h]
0x91E157: mov     dword ptr [ecx], offset aTtdraw; "Ttdraw"
0x91E15D: rdtsc
0x91E15F: mov     [esp+4D0h+var_4BC], eax
0x91E163: mov     eax, [esp+4D0h+var_4BC]
0x91E167: mov     [ecx+4], eax
0x91E16A: add     ecx, 0Ch
0x91E16D: mov     [esi+1A4h], ecx
0x91E173: mov     esi, [ebp+arg_0]
0x91E176: mov     ecx, [esi+0Ch]
0x91E179: mov     edx, [ecx]
0x91E17B: call    dword ptr [edx+0Ch]
0x91E17E: cmp     eax, 0Eh; switch 15 cases
0x91E181: ja      def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E187: jmp     ds:jpt_91E187[eax*4]; switch jump
0x91E18E: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 0
0x91E192: call    sub_94CEF0
0x91E197: mov     eax, ds:0BA845Ch
0x91E19C: mov     ecx, [ebp+arg_4]
0x91E19F: push    eax
0x91E1A0: push    ecx
0x91E1A1: push    esi
0x91E1A2: lea     ecx, [esp+4DCh+var_490]
0x91E1A6: call    sub_94F610
0x91E1AB: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E1B0: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 1
0x91E1B4: call    sub_94CEF0
0x91E1B9: mov     edx, ds:0BA845Ch
0x91E1BF: mov     eax, [ebp+arg_4]
0x91E1C2: push    edx
0x91E1C3: push    eax
0x91E1C4: push    esi
0x91E1C5: lea     ecx, [esp+4DCh+var_490]
0x91E1C9: call    sub_94F4E0
0x91E1CE: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E1D3: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 cases 2,4
0x91E1D7: call    sub_94CEF0
0x91E1DC: lea     ecx, [esp+4D0h+var_3C0]
0x91E1E3: call    sub_94D270
0x91E1E8: mov     ecx, ds:0BA845Ch
0x91E1EE: mov     edx, [ebp+arg_4]
0x91E1F1: push    ecx
0x91E1F2: push    edx
0x91E1F3: push    esi
0x91E1F4: lea     ecx, [esp+4DCh+var_490]
0x91E1F8: call    sub_94F1C0
0x91E1FD: lea     ecx, [esp+4D0h+var_3C0]; this
0x91E204: call    ??1MobileObject@@UAE@XZ; MobileObject::~MobileObject(void)
0x91E209: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E20E: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 6
0x91E212: call    sub_94CEF0
0x91E217: mov     eax, ds:0BA845Ch
0x91E21C: mov     ecx, [ebp+arg_4]
0x91E21F: push    eax
0x91E220: push    ecx
0x91E221: push    esi
0x91E222: lea     ecx, [esp+4DCh+var_490]
0x91E226: call    sub_94EEE0
0x91E22B: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E230: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 8
0x91E234: call    sub_94CEF0
0x91E239: mov     edx, ds:0BA845Ch
0x91E23F: mov     eax, [ebp+arg_4]
0x91E242: push    edx
0x91E243: push    eax
0x91E244: push    esi
0x91E245: lea     ecx, [esp+4DCh+var_490]
0x91E249: call    sub_94ED70
0x91E24E: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E253: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 9
0x91E257: call    sub_94CEF0
0x91E25C: mov     ecx, ds:0BA845Ch
0x91E262: mov     edx, [ebp+arg_4]
0x91E265: push    ecx
0x91E266: push    edx
0x91E267: push    esi
0x91E268: lea     ecx, [esp+4DCh+var_490]
0x91E26C: call    sub_94EA10
0x91E271: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E276: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 3
0x91E27A: call    sub_94CEF0
0x91E27F: mov     eax, ds:0BA845Ch
0x91E284: mov     ecx, [ebp+arg_4]
0x91E287: push    eax
0x91E288: push    ecx
0x91E289: push    esi
0x91E28A: lea     ecx, [esp+4DCh+var_490]
0x91E28E: call    sub_94E860
0x91E293: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E298: lea     ecx, [esp+4D0h+var_490]; jumptable 0091E187 case 14
0x91E29C: call    sub_94CEF0
0x91E2A1: mov     edx, ds:0BA845Ch
0x91E2A7: mov     eax, [ebp+arg_4]
0x91E2AA: push    edx
0x91E2AB: push    eax
0x91E2AC: push    esi
0x91E2AD: lea     ecx, [esp+4DCh+var_490]
0x91E2B1: call    sub_94E5C0
0x91E2B6: jmp     def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E2BB: lea     ecx, [esp+4D0h+var_320]; jumptable 0091E187 cases 5,7
0x91E2C2: call    sub_91E0B0
0x91E2C7: mov     ecx, ds:0BA845Ch
0x91E2CD: mov     edx, [ebp+arg_4]
0x91E2D0: push    ecx
0x91E2D1: push    edx
0x91E2D2: push    esi
0x91E2D3: lea     ecx, [esp+4DCh+var_320]
0x91E2DA: call    sub_94E0A0
0x91E2DF: lea     ecx, [esp+4D0h+var_320]
0x91E2E6: call    sub_91E0F0
0x91E2EB: jmp     short def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E2ED: mov     eax, [esi+0Ch]; jumptable 0091E187 case 12
0x91E2F0: mov     ecx, [eax+0Ch]
0x91E2F3: mov     edx, [esi+14h]
0x91E2F6: mov     eax, [esi+10h]
0x91E2F9: push    1
0x91E2FB: push    1
0x91E2FD: push    ecx
0x91E2FE: push    edx
0x91E2FF: push    eax
0x91E300: lea     ecx, [esp+4E4h+var_4B8]
0x91E304: call    sub_8D99A0
0x91E309: mov     ecx, [ebp+arg_4]
0x91E30C: push    ecx
0x91E30D: lea     edx, [esp+4D4h+var_4B8]
0x91E311: push    edx
0x91E312: mov     ecx, ebx
0x91E314: call    sub_91E120
0x91E319: lea     ecx, [esp+4D0h+var_4B8]
0x91E31D: call    sub_8D98E0
0x91E322: jmp     short def_91E187; jumptable 0091E187 default case, cases 10,11
0x91E324: mov     ecx, [esi+0Ch]; jumptable 0091E187 case 13
0x91E327: mov     edi, [esi+14h]
0x91E32A: mov     esi, [esi+10h]
0x91E32D: push    1
0x91E32F: push    1
0x91E331: call    sub_88D370
0x91E336: push    eax
0x91E337: push    edi
0x91E338: push    esi
0x91E339: lea     ecx, [esp+4E4h+var_4B8]
0x91E33D: call    sub_8D99A0
0x91E342: mov     eax, [ebp+arg_4]
0x91E345: push    eax
0x91E346: lea     ecx, [esp+4D4h+var_4B8]
0x91E34A: push    ecx
0x91E34B: mov     ecx, ebx
0x91E34D: call    sub_91E120
0x91E352: lea     ecx, [esp+4D0h+var_4B8]
0x91E356: call    sub_8D98E0
0x91E35B: mov     edi, large fs:2Ch
0x91E362: mov     ecx, ds:0BA9DE4h; jumptable 0091E187 default case, cases 10,11
0x91E368: mov     eax, [edi+ecx*4]
0x91E36B: mov     edx, [eax+1A4h]
0x91E371: cmp     edx, [eax+1A8h]
0x91E377: jnb     short loc_91E39D
0x91E379: mov     esi, eax
0x91E37B: mov     ecx, [esi+1A4h]
0x91E381: mov     dword ptr [ecx], offset aEt; "Et"
0x91E387: rdtsc
0x91E389: mov     [esp+4D0h+var_4BC], eax
0x91E38D: mov     eax, [esp+4D0h+var_4BC]
0x91E391: mov     [ecx+4], eax
0x91E394: add     ecx, 0Ch
0x91E397: mov     [esi+1A4h], ecx
0x91E39D: pop     edi
0x91E39E: pop     esi
0x91E39F: pop     ebx
0x91E3A0: mov     esp, ebp
0x91E3A2: pop     ebp
0x91E3A3: retn    8
