0x942170: sub     esp, 224h
0x942176: mov     ecx, [esp+224h+arg_8]
0x94217D: push    ebx
0x94217E: mov     ebx, [esp+228h+arg_4]
0x942185: mov     al, [ebx+0Ch]
0x942188: push    ebp
0x942189: push    esi
0x94218A: movzx   esi, word ptr [ebx+12h]
0x94218E: add     esi, ecx
0x942190: cmp     al, 14h
0x942192: push    edi; Args
0x942193: mov     [esp+234h+Format], esi
0x942197: jnz     short loc_9421D1
0x942199: cmp     byte ptr [ebx+0Dh], 2
0x94219D: jnz     short loc_9421D1
0x94219F: cmp     dword ptr [esi], 0
0x9421A2: jnz     short loc_9421D1
0x9421A4: mov     eax, [ebx]
0x9421A6: mov     ecx, [esp+234h+Args]
0x9421AD: mov     edx, [ecx]
0x9421AF: push    eax
0x9421B0: mov     eax, [esp+238h+arg_C]
0x9421B7: push    edx; Args
0x9421B8: push    offset aSHkparamNameSN; "\n%s<!-- <hkparam name=\"%s\">(null)</h"...
0x9421BD: push    eax; int
0x9421BE: call    sub_8BBEE0
0x9421C3: add     esp, 10h
0x9421C6: pop     edi
0x9421C7: pop     esi
0x9421C8: pop     ebp
0x9421C9: pop     ebx
0x9421CA: add     esp, 224h
0x9421D0: retn
0x9421D1: mov     ecx, [ebx]
0x9421D3: mov     edi, [esp+234h+Args]
0x9421DA: mov     edx, [edi]
0x9421DC: mov     ebp, [esp+234h+arg_C]
0x9421E3: push    ecx
0x9421E4: push    edx; Args
0x9421E5: push    offset aSHkparamNameS; "\n%s<hkparam name=\"%s\""
0x9421EA: push    ebp; int
0x9421EB: call    sub_8BBEE0
0x9421F0: movzx   eax, byte ptr [ebx+0Ch]
0x9421F4: add     eax, 0FFFFFFEAh; switch 6 cases
0x9421F7: add     esp, 10h
0x9421FA: cmp     eax, 5
0x9421FD: ja      short def_9421FF; jumptable 009421FF default case, cases 24,25
0x9421FF: jmp     ds:jpt_9421FF[eax*4]; switch jump
0x942206: mov     eax, [esi+4]; jumptable 009421FF cases 22,23,26
0x942209: push    eax
0x94220A: jmp     short loc_942210
0x94220C: mov     ecx, [esi+8]; jumptable 009421FF case 27
0x94220F: push    ecx; Args
0x942210: push    offset aNumelementsI; " numelements=\"%i\""
0x942215: push    ebp; int
0x942216: call    sub_8BBEE0
0x94221B: add     esp, 0Ch
0x94221E: push    offset asc_A67E7C; jumptable 009421FF default case, cases 24,25
0x942223: push    ebp; int
0x942224: call    sub_8BBEE0
0x942229: movzx   eax, byte ptr [ebx+0Ch]
0x94222D: add     esp, 8
0x942230: dec     eax; switch 28 cases
0x942231: cmp     eax, 1Bh
0x942234: ja      def_942241
0x94223A: movzx   edx, ds:byte_942854[eax]
0x942241: jmp     ds:jpt_942241[edx*4]; switch jump
0x942248: mov     ecx, ebx; jumptable 00942241 cases 1-18
0x94224A: call    sub_940B70
0x94224F: test    eax, eax
0x942251: mov     [esp+234h+var_224], eax
0x942255: jnz     short loc_94225F
0x942257: mov     [esp+234h+var_224], 1
0x94225F: mov     ecx, ebx
0x942261: call    sub_940B80
0x942266: cdq
0x942267: idiv    [esp+234h+var_224]
0x94226B: xor     edi, edi
0x94226D: mov     dword ptr [esp+234h+var_21C], edi
0x942271: mov     [esp+234h+Format], eax
0x942275: mov     eax, [esp+234h+var_224]
0x942279: test    eax, eax
0x94227B: jle     loc_9427FF
0x942281: cmp     byte ptr [ebx+0Ch], 2
0x942285: jnz     short loc_94229B
0x942287: movsx   eax, byte ptr [esi]
0x94228A: push    eax; Args
0x94228B: push    offset aC_2; "%c"
0x942290: push    ebp; int
0x942291: call    sub_8BBEE0
0x942296: add     esp, 0Ch
0x942299: jmp     short loc_9422D8
0x94229B: test    edi, edi
0x94229D: jz      short loc_9422C2
0x94229F: xor     edx, edx
0x9422A1: mov     eax, edi
0x9422A3: mov     ecx, 32h ; '2'
0x9422A8: div     ecx
0x9422AA: mov     eax, offset asc_A366D0; "\n"
0x9422AF: test    edx, edx
0x9422B1: jz      short loc_9422B8
0x9422B3: mov     eax, offset word_A36430
0x9422B8: push    eax; Format
0x9422B9: push    ebp; int
0x9422BA: call    sub_8BBEE0
0x9422BF: add     esp, 8
0x9422C2: movzx   eax, byte ptr [ebx+0Ch]
0x9422C6: mov     ecx, [esp+234h+arg_10]
0x9422CD: mov     edi, ebp
0x9422CF: call    sub_941760
0x9422D4: mov     edi, dword ptr [esp+234h+var_21C]
0x9422D8: mov     edx, [esp+234h+Format]
0x9422DC: mov     eax, [esp+234h+var_224]
0x9422E0: add     esi, edx
0x9422E2: inc     edi
0x9422E3: cmp     edi, eax
0x9422E5: mov     dword ptr [esp+234h+var_21C], edi
0x9422E9: jl      short loc_942281
0x9422EB: jmp     loc_9427FF
0x9422F0: mov     edx, [ebx]; jumptable 00942241 case 19
0x9422F2: push    edx; Args
0x9422F3: push    offset aZeroS; "<!-- zero %s -->"
0x9422F8: push    ebp; int
0x9422F9: call    sub_8BBEE0
0x9422FE: add     esp, 0Ch
0x942301: jmp     loc_9427FF
0x942306: mov     ecx, ebx; jumptable 00942241 case 20
0x942308: call    sub_940B70
0x94230D: test    eax, eax
0x94230F: mov     edi, eax
0x942311: jnz     short loc_942318
0x942313: mov     edi, 1
0x942318: mov     al, [ebx+0Dh]
0x94231B: xor     ebx, ebx
0x94231D: cmp     al, 2
0x94231F: mov     [esp+234h+var_224], edi
0x942323: jnz     loc_94241D
0x942329: test    edi, edi
0x94232B: mov     dword ptr [esp+234h+var_21C], ebx
0x94232F: jle     loc_9427FF
0x942335: jmp     short loc_942340
0x942337: mov     esi, [esp+234h+Format]
0x94233B: jmp     short loc_942340
0x942340: mov     esi, [esi+ebx*4]
0x942343: test    esi, esi
0x942345: jz      loc_9423FB
0x94234B: mov     edi, esi
0x94234D: cmp     byte ptr [edi], 0
0x942350: jz      loc_9423EE
0x942356: movsx   eax, byte ptr [esi]
0x942359: add     eax, 0FFFFFFDEh; switch 29 cases
0x94235C: cmp     eax, 1Ch
0x94235F: ja      def_94236C; jumptable 0094236C default case, cases 35-37,40-59,61
0x942365: movzx   eax, ds:byte_942878[eax]
0x94236C: jmp     ds:jpt_94236C[eax*4]; switch jump
0x942373: mov     ecx, esi; jumptable 0094236C cases 34,38,39,60,62
0x942375: sub     ecx, edi
0x942377: push    ecx
0x942378: push    edi
0x942379: mov     ecx, ebp
0x94237B: call    sub_918390
0x942380: mov     dl, [esi]
0x942382: mov     eax, offset aLt; "<&lt;"
0x942387: lea     edi, [esi+1]
0x94238A: mov     [esp+234h+var_218], eax
0x94238E: mov     [esp+234h+var_214], offset aGt; ">&gt;"
0x942396: mov     [esp+234h+var_210], offset aAmp; "&&amp;"
0x94239E: mov     [esp+234h+var_20C], offset aQuot; "\"&quot;"
0x9423A6: mov     [esp+234h+var_208], offset aApos; "'&apos;"
0x9423AE: mov     [esp+234h+var_204], 0
0x9423B6: xor     ecx, ecx
0x9423B8: cmp     [eax], dl
0x9423BA: jz      short loc_9423C7
0x9423BC: mov     eax, [esp+ecx*4+234h+var_214]
0x9423C0: inc     ecx
0x9423C1: test    eax, eax
0x9423C3: jnz     short loc_9423B8
0x9423C5: jmp     short def_94236C; jumptable 0094236C default case, cases 35-37,40-59,61
0x9423C7: mov     ebx, [esp+ecx*4+234h+var_218]
0x9423CB: inc     ebx
0x9423CC: push    ebx
0x9423CD: call    sub_8B1860
0x9423D2: add     esp, 4
0x9423D5: push    eax
0x9423D6: push    ebx
0x9423D7: mov     ecx, ebp
0x9423D9: call    sub_918390
0x9423DE: mov     al, [esi+1]; jumptable 0094236C default case, cases 35-37,40-59,61
0x9423E1: inc     esi
0x9423E2: test    al, al
0x9423E4: jnz     loc_942356
0x9423EA: mov     ebx, dword ptr [esp+234h+var_21C]
0x9423EE: sub     esi, edi
0x9423F0: push    esi
0x9423F1: push    edi
0x9423F2: mov     ecx, ebp
0x9423F4: call    sub_918390
0x9423F9: jmp     short loc_942407
0x9423FB: push    offset a0; "&#0;"
0x942400: mov     ecx, ebp
0x942402: call    sub_8BBDB0
0x942407: mov     eax, [esp+234h+var_224]
0x94240B: inc     ebx
0x94240C: cmp     ebx, eax
0x94240E: mov     dword ptr [esp+234h+var_21C], ebx
0x942412: jl      loc_942337
0x942418: jmp     loc_9427FF
0x94241D: test    edi, edi
0x94241F: jle     loc_9427FF
0x942425: mov     eax, [esi+ebx*4]
0x942428: test    eax, eax
0x94242A: jz      short loc_94247A
0x94242C: mov     ecx, [esp+234h+arg_10]
0x942433: mov     edx, [ecx]
0x942435: push    eax
0x942436: lea     eax, [esp+238h+var_21C]
0x94243A: push    eax
0x94243B: call    dword ptr [edx+10h]
0x94243E: lea     ecx, [edi-1]
0x942441: cmp     ebx, ecx
0x942443: mov     eax, offset word_A36430
0x942448: jl      short loc_94244F
0x94244A: mov     eax, offset EmptyString
0x94244F: mov     edx, dword ptr [esp+234h+var_21C]
0x942453: push    eax
0x942454: push    edx; Args
0x942455: push    offset aSS_0; "%s%s"
0x94245A: push    ebp; int
0x94245B: call    sub_8BBEE0
0x942460: mov     ecx, dword ptr [esp+244h+var_21C]
0x942464: mov     eax, [ecx-4]
0x942467: add     ecx, 0FFFFFFF4h
0x94246A: add     esp, 10h
0x94246D: dec     eax
0x94246E: mov     [ecx+8], eax
0x942471: jns     short loc_942486
0x942473: call    sub_8B1930
0x942478: jmp     short loc_942486
0x94247A: push    offset aNull_2; "null"
0x94247F: mov     ecx, ebp
0x942481: call    sub_8BBDB0
0x942486: inc     ebx
0x942487: cmp     ebx, edi
0x942489: jl      short loc_942425
0x94248B: jmp     loc_9427FF
0x942490: mov     ecx, ebx; jumptable 00942241 case 21
0x942492: call    sub_940B70
0x942497: test    eax, eax
0x942499: jnz     short loc_9424A2
0x94249B: mov     eax, 1
0x9424A0: test    eax, eax
0x9424A2: jle     loc_9427FF
0x9424A8: mov     esi, eax
0x9424AA: lea     ebx, [ebx+0]
0x9424B0: push    offset aNull_3; "&null;"
0x9424B5: mov     ecx, ebp
0x9424B7: call    sub_8BBDB0
0x9424BC: dec     esi
0x9424BD: jnz     short loc_9424B0
0x9424BF: jmp     loc_9427FF
0x9424C4: mov     eax, [esp+234h+arg_10]; jumptable 00942241 cases 22,23,26
0x9424CB: push    eax
0x9424CC: push    ebp
0x9424CD: push    ebx
0x9424CE: mov     ebx, [esp+240h+Format]
0x9424D2: push    edi
0x9424D3: call    sub_941F30
0x9424D8: add     esp, 10h
0x9424DB: jmp     loc_9427FF
0x9424E0: mov     ecx, ebx; jumptable 00942241 case 24
0x9424E2: call    sub_953130
0x9424E7: push    esi
0x9424E8: mov     ecx, ebx
0x9424EA: mov     edi, eax
0x9424EC: call    sub_940D20
0x9424F1: lea     ecx, [esp+234h+Format]
0x9424F5: push    ecx
0x9424F6: mov     esi, eax
0x9424F8: push    esi
0x9424F9: mov     ecx, edi
0x9424FB: mov     [esp+23Ch+Format], 0
0x942503: call    sub_953160
0x942508: test    eax, eax
0x94250A: jnz     short loc_94251F
0x94250C: mov     edx, [esp+234h+Format]
0x942510: push    edx; Format
0x942511: push    ebp; int
0x942512: call    sub_8BBEE0
0x942517: add     esp, 8
0x94251A: jmp     loc_9427FF
0x94251F: push    esi; Args
0x942520: push    offset aInvalid_value_; "INVALID_VALUE_%i"
0x942525: push    ebp; int
0x942526: call    sub_8BBEE0
0x94252B: add     esp, 0Ch
0x94252E: jmp     loc_9427FF
0x942533: mov     ecx, 1; jumptable 00942241 case 25
0x942538: call    sub_941B90
0x94253D: mov     ecx, ebx
0x94253F: call    sub_90D1F0
0x942544: mov     ecx, ebx
0x942546: mov     [esp+234h+Format], eax
0x94254A: call    sub_940B70
0x94254F: test    eax, eax
0x942551: mov     [esp+234h+var_224], eax
0x942555: jnz     short loc_94255F
0x942557: mov     [esp+234h+var_224], 1
0x94255F: mov     ecx, [esp+234h+Format]
0x942563: call    sub_953130
0x942568: mov     ebx, eax
0x94256A: mov     eax, [esp+234h+var_224]
0x94256E: test    eax, eax
0x942570: jle     short loc_9425A5
0x942572: mov     dword ptr [esp+234h+var_21C], eax
0x942576: jmp     short loc_942580
0x942580: mov     ecx, [esp+234h+arg_10]
0x942587: mov     eax, [esp+234h+Format]
0x94258B: push    ecx
0x94258C: push    ebp
0x94258D: push    esi
0x94258E: mov     ecx, edi
0x942590: call    sub_941CE0
0x942595: mov     eax, dword ptr [esp+240h+var_21C]
0x942599: add     esp, 0Ch
0x94259C: add     esi, ebx
0x94259E: dec     eax
0x94259F: mov     dword ptr [esp+234h+var_21C], eax
0x9425A3: jnz     short loc_942580
0x9425A5: or      ecx, 0FFFFFFFFh
0x9425A8: call    sub_941B90
0x9425AD: mov     edi, [edi]
0x9425AF: push    edi
0x9425B0: push    0Ah
0x9425B2: mov     ecx, ebp
0x9425B4: call    sub_8BBD90
0x9425B9: mov     ecx, eax
0x9425BB: call    sub_8BBDB0
0x9425C0: jmp     loc_9427FF
0x9425C5: mov     ebx, [esi]; jumptable 00942241 case 27
0x9425C7: mov     ecx, 1
0x9425CC: call    sub_941B90
0x9425D1: mov     edx, [edi]
0x9425D3: push    edx; Args
0x9425D4: push    offset aSHomogeneousCl; "\n%s<!-- Homogeneous Class -->"
0x9425D9: push    ebp; int
0x9425DA: call    sub_8BBEE0
0x9425DF: mov     eax, [ebp+8]
0x9425E2: add     esp, 0Ch
0x9425E5: mov     ecx, offset unk_BA8788
0x9425EA: mov     [esp+234h+Format], eax
0x9425EE: call    sub_90D1E0
0x9425F3: push    eax
0x9425F4: mov     ecx, ebx
0x9425F6: call    sub_90D1E0
0x9425FB: mov     ecx, [esp+238h+Format]
0x9425FF: push    eax
0x942600: push    ecx
0x942601: mov     ecx, [esp+240h+arg_10]
0x942608: call    sub_941BF0
0x94260D: mov     ecx, offset unk_BA8788
0x942612: mov     [esp+234h+var_224], 0
0x94261A: call    sub_90D240
0x94261F: test    eax, eax
0x942621: jle     short loc_94265F
0x942623: mov     edx, [esp+234h+arg_10]
0x94262A: mov     eax, [esp+234h+var_224]
0x94262E: push    edx; int
0x94262F: push    ebp; int
0x942630: push    ebx; int
0x942631: push    eax
0x942632: mov     ecx, offset unk_BA8788
0x942637: call    sub_90D260
0x94263C: push    eax; int
0x94263D: push    edi; Args
0x94263E: call    sub_942170
0x942643: mov     edx, [esp+248h+var_224]
0x942647: add     esp, 14h
0x94264A: inc     edx
0x94264B: mov     ecx, offset unk_BA8788
0x942650: mov     [esp+234h+var_224], edx
0x942654: call    sub_90D240
0x942659: cmp     [esp+234h+var_224], eax
0x94265D: jl      short loc_942623
0x94265F: mov     ecx, [ebp+8]
0x942662: push    ecx
0x942663: mov     ecx, [esp+238h+arg_10]
0x94266A: call    sub_941C90
0x94266F: mov     edx, [edi]
0x942671: push    edx; Args
0x942672: push    offset aSHomogeneousDa; "\n%s<!-- Homogeneous Data -->"
0x942677: push    ebp; int
0x942678: call    sub_8BBEE0
0x94267D: add     esp, 0Ch
0x942680: mov     ecx, ebx
0x942682: call    sub_953130
0x942687: mov     dword ptr [esp+234h+var_21C], eax
0x94268B: mov     eax, [esi+4]
0x94268E: mov     [esp+234h+var_224], eax
0x942692: mov     eax, [esi+8]
0x942695: test    eax, eax
0x942697: mov     [esp+234h+Format], 0
0x94269F: jle     short loc_9426D9
0x9426A1: mov     ecx, [esp+234h+arg_10]
0x9426A8: mov     edx, [esp+234h+var_224]
0x9426AC: push    ecx
0x9426AD: push    ebp
0x9426AE: push    edx
0x9426AF: mov     eax, ebx
0x9426B1: mov     ecx, edi
0x9426B3: call    sub_941CE0
0x9426B8: mov     eax, dword ptr [esp+240h+var_21C]
0x9426BC: mov     ecx, [esp+240h+var_224]
0x9426C0: add     ecx, eax
0x9426C2: mov     eax, [esp+240h+Format]
0x9426C6: add     esp, 0Ch
0x9426C9: mov     [esp+234h+var_224], ecx
0x9426CD: mov     ecx, [esi+8]
0x9426D0: inc     eax
0x9426D1: cmp     eax, ecx
0x9426D3: mov     [esp+234h+Format], eax
0x9426D7: jl      short loc_9426A1
0x9426D9: or      ecx, 0FFFFFFFFh
0x9426DC: call    sub_941B90
0x9426E1: jmp     loc_9427FF
0x9426E6: mov     ecx, ebx; jumptable 00942241 case 28
0x9426E8: call    sub_940B70
0x9426ED: test    eax, eax
0x9426EF: mov     [esp+234h+var_224], eax
0x9426F3: jnz     short loc_9426FD
0x9426F5: mov     [esp+234h+var_224], 1
0x9426FD: mov     eax, [esp+234h+var_224]
0x942701: xor     edi, edi
0x942703: test    eax, eax
0x942705: jle     loc_9427FF
0x94270B: mov     ebx, [esp+234h+arg_10]
0x942712: mov     eax, [esi+edi*8]
0x942715: test    eax, eax
0x942717: jz      loc_94279F
0x94271D: mov     ecx, [esi+edi*8+4]
0x942721: test    ecx, ecx
0x942723: jz      loc_94279F
0x942729: mov     edx, [ebx]
0x94272B: push    eax
0x94272C: lea     eax, [esp+238h+var_21C]
0x942730: push    eax
0x942731: mov     ecx, ebx
0x942733: call    dword ptr [edx+10h]
0x942736: mov     eax, [esi+edi*8+4]
0x94273A: mov     edx, [ebx]
0x94273C: push    eax
0x94273D: lea     ecx, [esp+238h+Format]
0x942741: push    ecx
0x942742: mov     ecx, ebx
0x942744: call    dword ptr [edx+10h]
0x942747: mov     eax, [esp+234h+var_224]
0x94274B: lea     edx, [edi+1]
0x94274E: cmp     edx, eax
0x942750: mov     eax, offset word_A36430
0x942755: jl      short loc_94275C
0x942757: mov     eax, offset EmptyString
0x94275C: mov     ecx, dword ptr [esp+234h+var_21C]
0x942760: push    eax
0x942761: mov     eax, [esp+238h+Format]
0x942765: push    eax
0x942766: push    ecx; Args
0x942767: push    offset aSSS_10; "(%s %s%s)"
0x94276C: push    ebp; int
0x94276D: call    sub_8BBEE0
0x942772: mov     ecx, [esp+248h+Format]
0x942776: mov     eax, [ecx-4]
0x942779: add     ecx, 0FFFFFFF4h
0x94277C: add     esp, 14h
0x94277F: dec     eax
0x942780: mov     [ecx+8], eax
0x942783: jns     short loc_94278A
0x942785: call    sub_8B1930
0x94278A: mov     ecx, dword ptr [esp+234h+var_21C]
0x94278E: mov     eax, [ecx-4]
0x942791: add     ecx, 0FFFFFFF4h
0x942794: dec     eax
0x942795: mov     [ecx+8], eax
0x942798: jns     short loc_94279F
0x94279A: call    sub_8B1930
0x94279F: mov     eax, [esp+234h+var_224]
0x9427A3: inc     edi
0x9427A4: cmp     edi, eax
0x9427A6: jl      loc_942712
0x9427AC: jmp     short loc_9427FF
