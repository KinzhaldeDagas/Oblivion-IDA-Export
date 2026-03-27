0x944060: mov     al, ds:0BA94E5h
0x944065: sub     esp, 24Ch
0x94406B: test    al, al
0x94406D: push    ebx
0x94406E: push    ebp
0x94406F: push    esi
0x944070: push    edi
0x944071: mov     ebp, ecx
0x944073: jnz     short loc_94408C
0x944075: push    4
0x944077: call    sub_9246E0
0x94407C: add     esp, 4
0x94407F: test    al, al
0x944081: mov     ds:0BA94E5h, al
0x944086: jz      loc_94468A; jumptable 009440B3 case 0
0x94408C: mov     ebx, [esp+25Ch+arg_4]
0x944093: mov     esi, [esp+25Ch+arg_0]
0x94409A: lea     ebx, [ebx+0]
0x9440A0: movzx   ecx, byte ptr [ebx]
0x9440A3: cmp     ecx, 6Bh; switch 108 cases
0x9440A6: ja      def_9440B3; jumptable 009440B3 default case, cases 8,12-15,29-31,44-47,84-95
0x9440AC: movzx   eax, ds:byte_944718[ecx]
0x9440B3: jmp     ds:jpt_9440B3[eax*4]; switch jump
0x9440BA: mov     ecx, [esi+14h]; jumptable 009440B3 case 19
0x9440BD: movzx   edx, byte ptr [ebx+1]
0x9440C1: movzx   edi, byte ptr [ebx+2]
0x9440C5: mov     eax, [esi+18h]
0x9440C8: add     eax, ecx
0x9440CA: mov     ecx, [esi+8]
0x9440CD: shl     edx, 1
0x9440CF: shl     edi, 1
0x9440D1: add     ecx, [esi+4]
0x9440D4: jmp     loc_94422B
0x9440D9: mov     ecx, [esi+8]; jumptable 009440B3 case 20
0x9440DC: mov     eax, [esi+14h]
0x9440DF: movzx   edx, byte ptr [ebx+1]
0x9440E3: movzx   edi, byte ptr [ebx+2]
0x9440E7: sub     eax, ecx
0x9440E9: mov     ecx, [esi+4]
0x9440EC: sub     ecx, [esi+18h]
0x9440EF: lea     edx, [edx+edx-0FFh]
0x9440F6: lea     edi, [edi+edi-0FFh]
0x9440FD: jmp     loc_94422B
0x944102: mov     ecx, [esi+10h]; jumptable 009440B3 case 21
0x944105: movzx   edx, byte ptr [ebx+1]
0x944109: movzx   edi, byte ptr [ebx+2]
0x94410D: mov     eax, [esi+18h]
0x944110: add     eax, ecx
0x944112: mov     ecx, [esi+8]
0x944115: shl     edx, 1
0x944117: shl     edi, 1
0x944119: add     ecx, [esi]
0x94411B: jmp     loc_94422B
0x944120: mov     ecx, [esi+8]; jumptable 009440B3 case 22
0x944123: mov     eax, [esi+10h]
0x944126: movzx   edx, byte ptr [ebx+1]
0x94412A: movzx   edi, byte ptr [ebx+2]
0x94412E: sub     eax, ecx
0x944130: mov     ecx, [esi]
0x944132: sub     ecx, [esi+18h]
0x944135: lea     edx, [edx+edx-0FFh]
0x94413C: lea     edi, [edi+edi-0FFh]
0x944143: jmp     loc_94422B
0x944148: mov     ecx, [esi+10h]; jumptable 009440B3 case 23
0x94414B: movzx   edx, byte ptr [ebx+1]
0x94414F: movzx   edi, byte ptr [ebx+2]
0x944153: mov     eax, [esi+14h]
0x944156: add     eax, ecx
0x944158: mov     ecx, [esi+4]
0x94415B: shl     edx, 1
0x94415D: shl     edi, 1
0x94415F: add     ecx, [esi]
0x944161: jmp     loc_94422B
0x944166: movzx   edx, byte ptr [ebx+1]; jumptable 009440B3 case 24
0x94416A: movzx   edi, byte ptr [ebx+2]
0x94416E: mov     ecx, [esi+4]
0x944171: mov     eax, [esi+10h]
0x944174: sub     eax, ecx
0x944176: mov     ecx, [esi]
0x944178: lea     edx, [edx+edx-0FFh]
0x94417F: lea     edi, [edi+edi-0FFh]
0x944186: jmp     loc_944228
0x94418B: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 25
0x94418F: mov     ecx, [esi+14h]
0x944192: lea     edx, [eax+eax*2]
0x944195: movzx   eax, byte ptr [ebx+2]
0x944199: lea     edi, [eax+eax*2]
0x94419C: mov     eax, [esi+18h]
0x94419F: add     eax, ecx
0x9441A1: add     eax, [esi+10h]
0x9441A4: mov     ecx, [esi+8]
0x9441A7: add     ecx, [esi+4]
0x9441AA: add     ecx, [esi]
0x9441AC: jmp     short loc_94422B
0x9441AE: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 26
0x9441B2: mov     ecx, [esi+8]
0x9441B5: sub     eax, 55h ; 'U'
0x9441B8: lea     edx, [eax+eax*2]
0x9441BB: movzx   eax, byte ptr [ebx+2]
0x9441BF: sub     eax, 55h ; 'U'
0x9441C2: lea     edi, [eax+eax*2]
0x9441C5: mov     eax, [esi+14h]
0x9441C8: sub     eax, ecx
0x9441CA: add     eax, [esi+10h]
0x9441CD: mov     ecx, [esi+4]
0x9441D0: sub     ecx, [esi+18h]
0x9441D3: add     ecx, [esi]
0x9441D5: jmp     short loc_94422B
0x9441D7: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 27
0x9441DB: mov     ecx, [esi+4]
0x9441DE: sub     eax, 55h ; 'U'
0x9441E1: lea     edx, [eax+eax*2]
0x9441E4: movzx   eax, byte ptr [ebx+2]
0x9441E8: sub     eax, 55h ; 'U'
0x9441EB: lea     edi, [eax+eax*2]
0x9441EE: mov     eax, [esi+18h]
0x9441F1: sub     eax, ecx
0x9441F3: add     eax, [esi+10h]
0x9441F6: mov     ecx, [esi+8]
0x9441F9: sub     ecx, [esi+14h]
0x9441FC: add     ecx, [esi]
0x9441FE: jmp     short loc_94422B
0x944200: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 28
0x944204: mov     ecx, [esi+8]
0x944207: sub     eax, 0AAh ; 'ª'
0x94420C: lea     edx, [eax+eax*2]
0x94420F: movzx   eax, byte ptr [ebx+2]
0x944213: sub     eax, 0AAh ; 'ª'
0x944218: lea     edi, [eax+eax*2]
0x94421B: mov     eax, [esi+10h]
0x94421E: sub     eax, ecx
0x944220: sub     eax, [esi+4]
0x944223: mov     ecx, [esi]
0x944225: sub     ecx, [esi+18h]
0x944228: sub     ecx, [esi+14h]
0x94422B: add     ebx, 4
0x94422E: cmp     ecx, edi
0x944230: jg      short loc_944247
0x944232: cmp     eax, edx
0x944234: jl      loc_9440A0
0x94423A: pop     edi
0x94423B: pop     esi
0x94423C: pop     ebp
0x94423D: pop     ebx
0x94423E: add     esp, 24Ch
0x944244: retn    8
0x944247: cmp     eax, edx
0x944249: movzx   edi, byte ptr [ebx-1]
0x94424D: jl      short loc_944256
0x94424F: add     ebx, edi
0x944251: jmp     loc_9440A0
0x944256: push    ebx
0x944257: push    esi
0x944258: mov     ecx, ebp
0x94425A: call    sub_944060
0x94425F: add     ebx, edi
0x944261: jmp     loc_9440A0
0x944266: movzx   eax, byte ptr [ebx+2]; jumptable 009440B3 cases 16-18
0x94426A: movzx   edx, byte ptr [ebx+1]
0x94426E: mov     edi, [esi+ecx*4-30h]
0x944272: add     ebx, 4
0x944275: cmp     [esi+ecx*4-40h], eax
0x944279: jg      short loc_944290
0x94427B: cmp     edi, edx
0x94427D: jl      loc_9440A0
0x944283: pop     edi
0x944284: pop     esi
0x944285: pop     ebp
0x944286: pop     ebx
0x944287: add     esp, 24Ch
0x94428D: retn    8
0x944290: movzx   eax, byte ptr [ebx-1]
0x944294: add     ebx, eax
0x944296: cmp     edi, edx
0x944298: jge     loc_9440A0
0x94429E: mov     ecx, ebx
0x9442A0: sub     ecx, eax
0x9442A2: push    ecx
0x9442A3: push    esi
0x9442A4: mov     ecx, ebp
0x9442A6: call    sub_944060
0x9442AB: jmp     loc_9440A0
0x9442B0: movzx   edx, byte ptr [ebx+1]; jumptable 009440B3 cases 32-34
0x9442B4: mov     eax, [esi+ecx*4-80h]
0x9442B8: add     ebx, 3
0x9442BB: cmp     eax, edx
0x9442BD: jle     loc_9440A0
0x9442C3: movzx   eax, byte ptr [ebx-1]
0x9442C7: mov     edi, [esi+ecx*4-70h]
0x9442CB: add     ebx, eax
0x9442CD: cmp     edi, edx
0x9442CF: jg      loc_9440A0
0x9442D5: mov     edx, ebx
0x9442D7: sub     edx, eax
0x9442D9: push    edx
0x9442DA: push    esi
0x9442DB: mov     ecx, ebp
0x9442DD: call    sub_944060
0x9442E2: jmp     loc_9440A0
0x9442E7: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 35-37
0x9442EB: movzx   edi, byte ptr [ebx+4]
0x9442EF: movzx   edx, byte ptr [ebx+2]
0x9442F3: mov     [esp+25Ch+var_248], eax
0x9442F7: mov     eax, [esi+ecx*4-7Ch]
0x9442FB: mov     [esp+25Ch+var_24C], eax
0x9442FF: movzx   eax, byte ptr [ebx+3]
0x944303: shl     eax, 8
0x944306: add     eax, edi
0x944308: mov     edi, [esi+ecx*4-8Ch]
0x94430F: add     ebx, 7
0x944312: cmp     edi, edx
0x944314: jg      short loc_94432B
0x944316: mov     ecx, [esp+25Ch+var_248]
0x94431A: cmp     [esp+25Ch+var_24C], ecx
0x94431E: jge     loc_94468A; jumptable 009440B3 case 0
0x944324: add     ebx, eax
0x944326: jmp     loc_9440A0
0x94432B: movzx   ecx, byte ptr [ebx-2]
0x94432F: movzx   edx, byte ptr [ebx-1]
0x944333: mov     edi, [esp+25Ch+var_24C]
0x944337: shl     ecx, 8
0x94433A: add     ecx, edx
0x94433C: mov     edx, [esp+25Ch+var_248]
0x944340: add     ebx, ecx
0x944342: cmp     edi, edx
0x944344: jge     loc_9440A0
0x94434A: sub     eax, ecx
0x94434C: add     eax, ebx
0x94434E: push    eax
0x94434F: push    esi
0x944350: mov     ecx, ebp
0x944352: call    sub_944060
0x944357: jmp     loc_9440A0
0x94435C: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 38-40
0x944360: cmp     [esi+ecx*4-98h], eax
0x944367: jl      loc_94468A; jumptable 009440B3 case 0
0x94436D: movzx   edx, byte ptr [ebx+2]
0x944371: cmp     [esi+ecx*4-88h], edx
0x944378: jge     loc_94468A; jumptable 009440B3 case 0
0x94437E: add     ebx, 3
0x944381: jmp     loc_9440A0
0x944386: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 41-43
0x94438A: movzx   edx, byte ptr [ebx+2]
0x94438E: shl     eax, 8
0x944391: add     eax, edx
0x944393: movzx   edx, byte ptr [ebx+3]
0x944397: shl     eax, 8
0x94439A: add     eax, edx
0x94439C: cmp     [ebp+ecx*4-94h], eax
0x9443A3: jl      loc_94468A; jumptable 009440B3 case 0
0x9443A9: movzx   edx, byte ptr [ebx+4]
0x9443AD: movzx   eax, byte ptr [ebx+5]
0x9443B1: shl     edx, 8
0x9443B4: add     eax, edx
0x9443B6: movzx   edx, byte ptr [ebx+6]
0x9443BA: shl     eax, 8
0x9443BD: add     eax, edx
0x9443BF: cmp     [ebp+ecx*4-84h], eax
0x9443C6: jg      loc_94468A; jumptable 009440B3 case 0
0x9443CC: add     ebx, 7
0x9443CF: jmp     loc_9440A0
0x9443D4: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 5
0x9443D8: lea     ebx, [ebx+eax+2]
0x9443DC: jmp     loc_9440A0
0x9443E1: movzx   ecx, byte ptr [ebx+1]; jumptable 009440B3 case 6
0x9443E5: movzx   edx, byte ptr [ebx+2]
0x9443E9: shl     ecx, 8
0x9443EC: add     edx, ebx
0x9443EE: lea     ebx, [edx+ecx+3]
0x9443F2: jmp     loc_9440A0
0x9443F7: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 7
0x9443FB: movzx   ecx, byte ptr [ebx+2]
0x9443FF: movzx   edx, byte ptr [ebx+3]
0x944403: shl     eax, 8
0x944406: add     eax, ecx
0x944408: shl     eax, 8
0x94440B: add     edx, ebx
0x94440D: lea     ebx, [edx+eax+4]
0x944411: jmp     loc_9440A0
0x944416: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 1-4
0x94441A: add     eax, [esi+20h]
0x94441D: shl     eax, cl
0x94441F: mov     [esp+25Ch+var_224], eax
0x944423: movzx   edx, byte ptr [ebx+2]
0x944427: add     edx, [esi+24h]
0x94442A: shl     edx, cl
0x94442C: mov     [esp+25Ch+var_220], edx
0x944430: movzx   edi, byte ptr [ebx+3]
0x944434: add     edi, [esi+28h]
0x944437: shl     edi, cl
0x944439: mov     [esp+25Ch+var_21C], edi
0x94443D: mov     edi, [esi+30h]
0x944440: add     edi, ecx
0x944442: mov     [esp+25Ch+var_214], edi
0x944446: mov     ecx, 10h
0x94444B: sub     ecx, edi
0x94444D: mov     edi, [ebp+20h]
0x944450: sar     edi, cl
0x944452: sub     edi, eax
0x944454: mov     [esp+25Ch+var_234], edi
0x944458: mov     edi, [ebp+24h]
0x94445B: sar     edi, cl
0x94445D: sub     edi, edx
0x94445F: mov     [esp+25Ch+var_230], edi
0x944463: mov     edi, [ebp+28h]
0x944466: sar     edi, cl
0x944468: sub     edi, [esp+25Ch+var_21C]
0x94446C: mov     [esp+25Ch+var_22C], edi
0x944470: mov     edi, [ebp+10h]
0x944473: sar     edi, cl
0x944475: inc     edi
0x944476: sub     edi, eax
0x944478: mov     eax, [ebp+14h]
0x94447B: sar     eax, cl
0x94447D: mov     [esp+25Ch+var_244], edi
0x944481: inc     eax
0x944482: sub     eax, edx
0x944484: mov     [esp+25Ch+var_240], eax
0x944488: mov     eax, [ebp+18h]
0x94448B: sar     eax, cl
0x94448D: mov     ecx, [esp+25Ch+var_21C]
0x944491: inc     eax
0x944492: sub     eax, ecx
0x944494: mov     [esp+25Ch+var_23C], eax
0x944498: mov     eax, [esi+34h]
0x94449B: mov     [esp+25Ch+var_210], eax
0x94449F: mov     ecx, [esi+2Ch]
0x9444A2: mov     [esp+25Ch+var_218], ecx
0x9444A6: lea     esi, [esp+25Ch+var_244]
0x9444AA: add     ebx, 4
0x9444AD: jmp     loc_9440A0
0x9444B2: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 9
0x9444B6: lea     edx, [esp+25Ch+var_244]
0x9444BA: cmp     esi, edx
0x9444BC: jz      short loc_9444C9
0x9444BE: mov     ecx, 0Eh
0x9444C3: mov     edi, edx
0x9444C5: rep movsd
0x9444C7: mov     esi, edx
0x9444C9: add     [esp+25Ch+var_218], eax
0x9444CD: add     ebx, 2
0x9444D0: jmp     loc_9440A0
0x9444D5: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 10
0x9444D9: movzx   ecx, byte ptr [ebx+2]
0x9444DD: shl     eax, 8
0x9444E0: lea     edx, [esp+25Ch+var_244]
0x9444E4: add     eax, ecx
0x9444E6: cmp     esi, edx
0x9444E8: jz      short loc_9444F5
0x9444EA: mov     ecx, 0Eh
0x9444EF: mov     edi, edx
0x9444F1: rep movsd
0x9444F3: mov     esi, edx
0x9444F5: add     [esp+25Ch+var_218], eax
0x9444F9: add     ebx, 3
0x9444FC: jmp     loc_9440A0
0x944501: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 case 11
0x944505: movzx   ecx, byte ptr [ebx+2]
0x944509: movzx   edx, byte ptr [ebx+3]
0x94450D: shl     eax, 8
0x944510: add     eax, ecx
0x944512: movzx   ecx, byte ptr [ebx+4]
0x944516: shl     eax, 8
0x944519: add     eax, edx
0x94451B: shl     eax, 8
0x94451E: lea     edx, [esp+25Ch+var_244]
0x944522: add     eax, ecx
0x944524: cmp     esi, edx
0x944526: jz      short loc_944533
0x944528: mov     ecx, 0Eh
0x94452D: mov     edi, edx
0x94452F: rep movsd
0x944531: mov     esi, edx
0x944533: mov     [esp+25Ch+var_218], eax
0x944537: add     ebx, 5
0x94453A: jmp     loc_9440A0
0x94453F: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 96-99
0x944543: add     ebx, 2
0x944546: mov     [esp+ecx*4+25Ch+var_390], eax
0x94454D: jmp     short loc_944591
0x94454F: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 100-103
0x944553: movzx   edx, byte ptr [ebx+2]
0x944557: shl     eax, 8
0x94455A: add     eax, edx
0x94455C: mov     [esp+ecx*4+25Ch+var_3A0], eax
0x944563: add     ebx, 3
0x944566: jmp     short loc_944591
0x944568: movzx   eax, byte ptr [ebx+1]; jumptable 009440B3 cases 104-107
0x94456C: movzx   edx, byte ptr [ebx+2]
0x944570: shl     eax, 8
0x944573: add     eax, edx
0x944575: movzx   edx, byte ptr [ebx+3]
0x944579: shl     eax, 8
0x94457C: add     eax, edx
0x94457E: movzx   edx, byte ptr [ebx+4]
0x944582: shl     eax, 8
0x944585: add     eax, edx
0x944587: mov     [esp+ecx*4+25Ch+var_3B0], eax
0x94458E: add     ebx, 5
0x944591: mov     eax, [esp+25Ch+var_210]
0x944595: lea     ecx, [esp+25Ch+var_244]
0x944599: cmp     esi, ecx
0x94459B: jz      short loc_9445AC
0x94459D: mov     ecx, 0Eh
0x9445A2: lea     edi, [esp+25Ch+var_244]
0x9445A6: rep movsd
0x9445A8: lea     esi, [esp+25Ch+var_244]
0x9445AC: mov     [esp+25Ch+var_210], eax
0x9445B0: jmp     loc_9440A0
0x9445B5: push    ecx; jumptable 009440B3 default case, cases 8,12-15,29-31,44-47,84-95
0x9445B6: mov     eax, esp
0x9445B8: push    200h
0x9445BD: lea     edx, [esp+264h+var_200]
0x9445C1: push    edx
0x9445C2: lea     ecx, [esp+268h+var_20C]
0x9445C6: mov     byte ptr [eax], 1
0x9445C9: call    sub_8BBFB0
0x9445CE: push    offset aUnknownCommand; "Unknown command.\n"
0x9445D3: lea     ecx, [esp+260h+var_20C]
0x9445D7: call    sub_8BBDB0
0x9445DC: mov     ecx, ds:0BA7FB0h
0x9445E2: mov     eax, [ecx]
0x9445E4: push    173h
0x9445E9: push    offset a_CollideMopp_1; ".\\collide\\mopp\\machine\\hkMoppObbVir"...
0x9445EE: lea     edx, [esp+264h+var_200]
0x9445F2: push    edx
0x9445F3: push    1298FEDDh
0x9445F8: push    3
0x9445FA: call    dword ptr [eax+8]
0x9445FD: lea     ecx, [esp+25Ch+var_20C]
0x944601: call    sub_8BC000
0x944606: jmp     loc_9440A0
0x94460B: movzx   ecx, byte ptr [ebx+1]; jumptable 009440B3 case 80
0x94460F: jmp     short loc_94465C
0x944611: movzx   ecx, byte ptr [ebx+1]; jumptable 009440B3 case 81
0x944615: movzx   eax, byte ptr [ebx+2]
0x944619: shl     ecx, 8
0x94461C: add     ecx, eax
0x94461E: jmp     short loc_94465C
0x944620: movzx   ecx, byte ptr [ebx+1]; jumptable 009440B3 case 82
0x944624: movzx   edx, byte ptr [ebx+2]
0x944628: movzx   eax, byte ptr [ebx+3]
0x94462C: shl     ecx, 8
0x94462F: add     ecx, edx
0x944631: shl     ecx, 8
0x944634: add     ecx, eax
0x944636: jmp     short loc_94465C
0x944638: movzx   ecx, byte ptr [ebx+1]; jumptable 009440B3 case 83
0x94463C: movzx   edx, byte ptr [ebx+2]
0x944640: movzx   eax, byte ptr [ebx+3]
0x944644: shl     ecx, 8
0x944647: add     ecx, edx
0x944649: movzx   edx, byte ptr [ebx+4]
0x94464D: shl     ecx, 8
0x944650: add     ecx, eax
0x944652: shl     ecx, 8
0x944655: add     ecx, edx
0x944657: jmp     short loc_94465C
0x944659: add     ecx, 0FFFFFFD0h; jumptable 009440B3 cases 48-79
0x94465C: mov     ebp, [ebp+0]
0x94465F: mov     esi, [esi+2Ch]
0x944662: mov     eax, [ebp+8]
0x944665: add     esi, ecx
0x944667: mov     ecx, [ebp+4]
0x94466A: and     eax, 3FFFFFFFh
0x94466F: cmp     ecx, eax
0x944671: jnz     short loc_94467E
0x944673: push    4
0x944675: push    ebp
0x944676: call    sub_8A6EE0
0x94467B: add     esp, 8
0x94467E: mov     ecx, [ebp+4]
0x944681: mov     edx, [ebp+0]
0x944684: mov     [edx+ecx*4], esi
0x944687: inc     dword ptr [ebp+4]
0x94468A: pop     edi; jumptable 009440B3 case 0
0x94468B: pop     esi
0x94468C: pop     ebp
0x94468D: pop     ebx
0x94468E: add     esp, 24Ch
0x944694: retn    8
