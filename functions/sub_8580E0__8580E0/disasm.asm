0x8580E0: push    0FFFFFFFFh
0x8580E2: push    offset SEH_8580E0
0x8580E7: mov     eax, large fs:0
0x8580ED: push    eax
0x8580EE: push    esi
0x8580EF: mov     eax, ds:0B30AACh
0x8580F4: xor     eax, esp
0x8580F6: push    eax
0x8580F7: lea     eax, [esp+14h+var_C]
0x8580FB: mov     large fs:0, eax
0x858101: mov     esi, ecx
0x858103: cmp     [esp+14h+arg_14], 0
0x858108: jnz     loc_858535
0x85810E: cmp     [esp+14h+arg_18], 0
0x858113: jz      loc_85827F
0x858119: cmp     [esp+14h+arg_1C], 0
0x85811E: jz      short loc_85813E
0x858120: mov     eax, ds:0B42E8Ch
0x858125: test    eax, eax
0x858127: jz      loc_8588C5
0x85812D: push    0; _DWORD
0x85812F: push    offset aShaderError_29; "SHADER ERROR : no shader to handle ADTS"...
0x858134: call    eax ; dword_B42E8C
0x858136: add     esp, 8
0x858139: jmp     loc_8588C5
0x85813E: cmp     [esp+14h+arg_28], 0
0x858143: jnz     loc_8581E4
0x858149: cmp     [esp+14h+arg_24], 0
0x85814E: jnz     short loc_85819A
0x858150: cmp     byte ptr [esp+14h+arg_C], 1
0x858155: jnz     loc_8588BD
0x85815B: push    10h; Size
0x85815D: call    FormHeapAlloc
0x858162: add     esp, 4
0x858165: mov     [esp+14h+arg_C], eax
0x858169: test    eax, eax
0x85816B: mov     [esp+14h+var_4], 0
0x858173: jz      loc_8588A0
0x858179: mov     ecx, [esp+14h+arg_4]
0x85817D: mov     edx, [esp+14h+arg_0]
0x858181: push    ecx
0x858182: push    1
0x858184: push    1
0x858186: push    0ADh ; '­'
0x85818B: push    edx
0x85818C: push    eax
0x85818D: call    sub_7E2370
0x858192: add     esp, 18h
0x858195: jmp     loc_8588A2
0x85819A: cmp     byte ptr [esp+14h+arg_C], 1
0x85819F: jnz     loc_8588BD
0x8581A5: push    10h; Size
0x8581A7: call    FormHeapAlloc
0x8581AC: add     esp, 4
0x8581AF: mov     [esp+14h+arg_C], eax
0x8581B3: test    eax, eax
0x8581B5: mov     [esp+14h+var_4], 1
0x8581BD: jz      loc_8588A0
0x8581C3: mov     ecx, [esp+14h+arg_4]
0x8581C7: mov     edx, [esp+14h+arg_0]
0x8581CB: push    ecx
0x8581CC: push    1
0x8581CE: push    1
0x8581D0: push    0BAh ; 'º'
0x8581D5: push    edx
0x8581D6: push    eax
0x8581D7: call    sub_7E2370
0x8581DC: add     esp, 18h
0x8581DF: jmp     loc_8588A2
0x8581E4: cmp     [esp+14h+arg_24], 0
0x8581E9: jnz     short loc_858235
0x8581EB: cmp     byte ptr [esp+14h+arg_C], 1
0x8581F0: jnz     loc_8588BD
0x8581F6: push    10h; Size
0x8581F8: call    FormHeapAlloc
0x8581FD: add     esp, 4
0x858200: mov     [esp+14h+arg_C], eax
0x858204: test    eax, eax
0x858206: mov     [esp+14h+var_4], 2
0x85820E: jz      loc_8588A0
0x858214: mov     ecx, [esp+14h+arg_4]
0x858218: mov     edx, [esp+14h+arg_0]
0x85821C: push    ecx
0x85821D: push    1
0x85821F: push    1
0x858221: push    0B1h ; '±'
0x858226: push    edx
0x858227: push    eax
0x858228: call    sub_7E2370
0x85822D: add     esp, 18h
0x858230: jmp     loc_8588A2
0x858235: cmp     byte ptr [esp+14h+arg_C], 1
0x85823A: jnz     loc_8588BD
0x858240: push    10h; Size
0x858242: call    FormHeapAlloc
0x858247: add     esp, 4
0x85824A: mov     [esp+14h+arg_C], eax
0x85824E: test    eax, eax
0x858250: mov     [esp+14h+var_4], 3
0x858258: jz      loc_8588A0
0x85825E: mov     ecx, [esp+14h+arg_4]
0x858262: mov     edx, [esp+14h+arg_0]
0x858266: push    ecx
0x858267: push    1
0x858269: push    1
0x85826B: push    0BEh ; '¾'
0x858270: push    edx
0x858271: push    eax
0x858272: call    sub_7E2370
0x858277: add     esp, 18h
0x85827A: jmp     loc_8588A2
0x85827F: cmp     [esp+14h+arg_1C], 0
0x858284: jz      short loc_8582A4
0x858286: mov     eax, ds:0B42E8Ch
0x85828B: test    eax, eax
0x85828D: jz      loc_8588C5
0x858293: push    0; _DWORD
0x858295: push    offset aShaderError_30; "SHADER ERROR : no shader to handle ADTS"...
0x85829A: call    eax ; dword_B42E8C
0x85829C: add     esp, 8
0x85829F: jmp     loc_8588C5
0x8582A4: cmp     [esp+14h+arg_28], 0
0x8582A9: jnz     loc_85849A
0x8582AF: cmp     [esp+14h+arg_24], 0
0x8582B4: jnz     loc_8583AA
0x8582BA: cmp     [esp+14h+arg_2C], 0
0x8582BF: jnz     loc_858360
0x8582C5: cmp     [esp+14h+arg_30], 0
0x8582CA: jnz     short loc_858316
0x8582CC: cmp     byte ptr [esp+14h+arg_C], 1
0x8582D1: jnz     loc_8588BD
0x8582D7: push    10h; Size
0x8582D9: call    FormHeapAlloc
0x8582DE: add     esp, 4
0x8582E1: mov     [esp+14h+arg_C], eax
0x8582E5: test    eax, eax
0x8582E7: mov     [esp+14h+var_4], 4
0x8582EF: jz      loc_8588A0
0x8582F5: mov     ecx, [esp+14h+arg_4]
0x8582F9: mov     edx, [esp+14h+arg_0]
0x8582FD: push    ecx
0x8582FE: push    1
0x858300: push    1
0x858302: push    0ACh ; '¬'
0x858307: push    edx
0x858308: push    eax
0x858309: call    sub_7E2370
0x85830E: add     esp, 18h
0x858311: jmp     loc_8588A2
0x858316: cmp     byte ptr [esp+14h+arg_C], 1
0x85831B: jnz     loc_8588BD
0x858321: push    10h; Size
0x858323: call    FormHeapAlloc
0x858328: add     esp, 4
0x85832B: mov     [esp+14h+arg_C], eax
0x85832F: test    eax, eax
0x858331: mov     [esp+14h+var_4], 5
0x858339: jz      loc_8588A0
0x85833F: mov     ecx, [esp+14h+arg_4]
0x858343: mov     edx, [esp+14h+arg_0]
0x858347: push    ecx
0x858348: push    1
0x85834A: push    1
0x85834C: push    0AEh ; '®'
0x858351: push    edx
0x858352: push    eax
0x858353: call    sub_7E2370
0x858358: add     esp, 18h
0x85835B: jmp     loc_8588A2
0x858360: cmp     byte ptr [esp+14h+arg_C], 1
0x858365: jnz     loc_8588BD
0x85836B: push    10h; Size
0x85836D: call    FormHeapAlloc
0x858372: add     esp, 4
0x858375: mov     [esp+14h+arg_C], eax
0x858379: test    eax, eax
0x85837B: mov     [esp+14h+var_4], 6
0x858383: jz      loc_8588A0
0x858389: mov     ecx, [esp+14h+arg_4]
0x85838D: mov     edx, [esp+14h+arg_0]
0x858391: push    ecx
0x858392: push    1
0x858394: push    1
0x858396: push    0B8h ; '¸'
0x85839B: push    edx
0x85839C: push    eax
0x85839D: call    sub_7E2370
0x8583A2: add     esp, 18h
0x8583A5: jmp     loc_8588A2
0x8583AA: cmp     [esp+14h+arg_2C], 0
0x8583AF: jnz     loc_858450
0x8583B5: cmp     [esp+14h+arg_30], 0
0x8583BA: jnz     short loc_858406
0x8583BC: cmp     byte ptr [esp+14h+arg_C], 1
0x8583C1: jnz     loc_8588BD
0x8583C7: push    10h; Size
0x8583C9: call    FormHeapAlloc
0x8583CE: add     esp, 4
0x8583D1: mov     [esp+14h+arg_C], eax
0x8583D5: test    eax, eax
0x8583D7: mov     [esp+14h+var_4], 7
0x8583DF: jz      loc_8588A0
0x8583E5: mov     ecx, [esp+14h+arg_4]
0x8583E9: mov     edx, [esp+14h+arg_0]
0x8583ED: push    ecx
0x8583EE: push    1
0x8583F0: push    1
0x8583F2: push    0B9h ; '¹'
0x8583F7: push    edx
0x8583F8: push    eax
0x8583F9: call    sub_7E2370
0x8583FE: add     esp, 18h
0x858401: jmp     loc_8588A2
0x858406: cmp     byte ptr [esp+14h+arg_C], 1
0x85840B: jnz     loc_8588BD
0x858411: push    10h; Size
0x858413: call    FormHeapAlloc
0x858418: add     esp, 4
0x85841B: mov     [esp+14h+arg_C], eax
0x85841F: test    eax, eax
0x858421: mov     [esp+14h+var_4], 8
0x858429: jz      loc_8588A0
0x85842F: mov     ecx, [esp+14h+arg_4]
0x858433: mov     edx, [esp+14h+arg_0]
0x858437: push    ecx
0x858438: push    1
0x85843A: push    1
0x85843C: push    0BBh ; '»'
0x858441: push    edx
0x858442: push    eax
0x858443: call    sub_7E2370
0x858448: add     esp, 18h
0x85844B: jmp     loc_8588A2
0x858450: cmp     byte ptr [esp+14h+arg_C], 1
0x858455: jnz     loc_8588BD
0x85845B: push    10h; Size
0x85845D: call    FormHeapAlloc
0x858462: add     esp, 4
0x858465: mov     [esp+14h+arg_C], eax
0x858469: test    eax, eax
0x85846B: mov     [esp+14h+var_4], 9
0x858473: jz      loc_8588A0
0x858479: mov     ecx, [esp+14h+arg_4]
0x85847D: mov     edx, [esp+14h+arg_0]
0x858481: push    ecx
0x858482: push    1
0x858484: push    1
0x858486: push    0C5h ; 'Å'
0x85848B: push    edx
0x85848C: push    eax
0x85848D: call    sub_7E2370
0x858492: add     esp, 18h
0x858495: jmp     loc_8588A2
0x85849A: cmp     [esp+14h+arg_24], 0
0x85849F: jnz     short loc_8584EB
0x8584A1: cmp     byte ptr [esp+14h+arg_C], 1
0x8584A6: jnz     loc_8588BD
0x8584AC: push    10h; Size
0x8584AE: call    FormHeapAlloc
0x8584B3: add     esp, 4
0x8584B6: mov     [esp+14h+arg_C], eax
0x8584BA: test    eax, eax
0x8584BC: mov     [esp+14h+var_4], 0Ah
0x8584C4: jz      loc_8588A0
0x8584CA: mov     ecx, [esp+14h+arg_4]
0x8584CE: mov     edx, [esp+14h+arg_0]
0x8584D2: push    ecx
0x8584D3: push    1
0x8584D5: push    1
0x8584D7: push    0B0h ; '°'
0x8584DC: push    edx
0x8584DD: push    eax
0x8584DE: call    sub_7E2370
0x8584E3: add     esp, 18h
0x8584E6: jmp     loc_8588A2
0x8584EB: cmp     byte ptr [esp+14h+arg_C], 1
0x8584F0: jnz     loc_8588BD
0x8584F6: push    10h; Size
0x8584F8: call    FormHeapAlloc
0x8584FD: add     esp, 4
0x858500: mov     [esp+14h+arg_C], eax
0x858504: test    eax, eax
0x858506: mov     [esp+14h+var_4], 0Bh
0x85850E: jz      loc_8588A0
0x858514: mov     ecx, [esp+14h+arg_4]
0x858518: mov     edx, [esp+14h+arg_0]
0x85851C: push    ecx
0x85851D: push    1
0x85851F: push    1
0x858521: push    0BDh ; '½'
0x858526: push    edx
0x858527: push    eax
0x858528: call    sub_7E2370
0x85852D: add     esp, 18h
0x858530: jmp     loc_8588A2
0x858535: cmp     [esp+14h+arg_18], 0
0x85853A: jz      loc_8586A6
0x858540: cmp     [esp+14h+arg_1C], 0
0x858545: jz      short loc_858565
0x858547: mov     eax, ds:0B42E8Ch
0x85854C: test    eax, eax
0x85854E: jz      loc_8588C5
0x858554: push    0; _DWORD
0x858556: push    offset aShaderError_26; "SHADER ERROR : no shader to handle ADT_"...
0x85855B: call    eax ; dword_B42E8C
0x85855D: add     esp, 8
0x858560: jmp     loc_8588C5
0x858565: cmp     [esp+14h+arg_28], 0
0x85856A: jnz     loc_85860B
0x858570: cmp     [esp+14h+arg_24], 0
0x858575: jnz     short loc_8585C1
0x858577: cmp     byte ptr [esp+14h+arg_C], 1
0x85857C: jnz     loc_8588BD
0x858582: push    10h; Size
0x858584: call    FormHeapAlloc
0x858589: add     esp, 4
0x85858C: mov     [esp+14h+arg_C], eax
0x858590: test    eax, eax
0x858592: mov     [esp+14h+var_4], 0Ch
0x85859A: jz      loc_8588A0
0x8585A0: mov     ecx, [esp+14h+arg_4]
0x8585A4: mov     edx, [esp+14h+arg_0]
0x8585A8: push    ecx
0x8585A9: push    1
0x8585AB: push    1
0x8585AD: push    0B3h ; '³'
0x8585B2: push    edx
0x8585B3: push    eax
0x8585B4: call    sub_7E2370
0x8585B9: add     esp, 18h
0x8585BC: jmp     loc_8588A2
0x8585C1: cmp     byte ptr [esp+14h+arg_C], 1
0x8585C6: jnz     loc_8588BD
0x8585CC: push    10h; Size
0x8585CE: call    FormHeapAlloc
0x8585D3: add     esp, 4
0x8585D6: mov     [esp+14h+arg_C], eax
0x8585DA: test    eax, eax
0x8585DC: mov     [esp+14h+var_4], 0Dh
0x8585E4: jz      loc_8588A0
0x8585EA: mov     ecx, [esp+14h+arg_4]
0x8585EE: mov     edx, [esp+14h+arg_0]
0x8585F2: push    ecx
0x8585F3: push    1
0x8585F5: push    1
0x8585F7: push    0C0h ; 'À'
0x8585FC: push    edx
0x8585FD: push    eax
0x8585FE: call    sub_7E2370
0x858603: add     esp, 18h
0x858606: jmp     loc_8588A2
0x85860B: cmp     [esp+14h+arg_24], 0
0x858610: jnz     short loc_85865C
0x858612: cmp     byte ptr [esp+14h+arg_C], 1
0x858617: jnz     loc_8588BD
0x85861D: push    10h; Size
0x85861F: call    FormHeapAlloc
0x858624: add     esp, 4
0x858627: mov     [esp+14h+arg_C], eax
0x85862B: test    eax, eax
0x85862D: mov     [esp+14h+var_4], 0Eh
0x858635: jz      loc_8588A0
0x85863B: mov     ecx, [esp+14h+arg_4]
0x85863F: mov     edx, [esp+14h+arg_0]
0x858643: push    ecx
0x858644: push    1
0x858646: push    1
0x858648: push    0B7h ; '·'
0x85864D: push    edx
0x85864E: push    eax
0x85864F: call    sub_7E2370
0x858654: add     esp, 18h
0x858657: jmp     loc_8588A2
0x85865C: cmp     byte ptr [esp+14h+arg_C], 1
0x858661: jnz     loc_8588BD
0x858667: push    10h; Size
0x858669: call    FormHeapAlloc
0x85866E: add     esp, 4
0x858671: mov     [esp+14h+arg_C], eax
0x858675: test    eax, eax
0x858677: mov     [esp+14h+var_4], 0Fh
0x85867F: jz      loc_8588A0
0x858685: mov     ecx, [esp+14h+arg_4]
0x858689: mov     edx, [esp+14h+arg_0]
0x85868D: push    ecx
0x85868E: push    1
0x858690: push    1
0x858692: push    0C4h ; 'Ä'
0x858697: push    edx
0x858698: push    eax
0x858699: call    sub_7E2370
0x85869E: add     esp, 18h
0x8586A1: jmp     loc_8588A2
0x8586A6: cmp     [esp+14h+arg_1C], 0
0x8586AB: jz      short loc_8586CB
0x8586AD: mov     eax, ds:0B42E8Ch
0x8586B2: test    eax, eax
0x8586B4: jz      loc_8588C5
0x8586BA: push    0; _DWORD
0x8586BC: push    offset aShaderError_31; "SHADER ERROR : no shader to handle ADTS"...
0x8586C1: call    eax ; dword_B42E8C
0x8586C3: add     esp, 8
0x8586C6: jmp     loc_8588C5
0x8586CB: cmp     [esp+14h+arg_28], 0
0x8586D0: jnz     loc_858817
0x8586D6: cmp     [esp+14h+arg_24], 0
0x8586DB: jnz     loc_85877C
0x8586E1: cmp     [esp+14h+arg_30], 0
0x8586E6: jnz     short loc_858732
0x8586E8: cmp     byte ptr [esp+14h+arg_C], 1
0x8586ED: jnz     loc_8588BD
0x8586F3: push    10h; Size
0x8586F5: call    FormHeapAlloc
0x8586FA: add     esp, 4
0x8586FD: mov     [esp+14h+arg_C], eax
0x858701: test    eax, eax
0x858703: mov     [esp+14h+var_4], 10h
0x85870B: jz      loc_8588A0
0x858711: mov     ecx, [esp+14h+arg_4]
0x858715: mov     edx, [esp+14h+arg_0]
0x858719: push    ecx
0x85871A: push    1
0x85871C: push    1
0x85871E: push    0B2h ; '²'
0x858723: push    edx
0x858724: push    eax
0x858725: call    sub_7E2370
0x85872A: add     esp, 18h
0x85872D: jmp     loc_8588A2
0x858732: cmp     byte ptr [esp+14h+arg_C], 1
0x858737: jnz     loc_8588BD
0x85873D: push    10h; Size
0x85873F: call    FormHeapAlloc
0x858744: add     esp, 4
0x858747: mov     [esp+14h+arg_C], eax
0x85874B: test    eax, eax
0x85874D: mov     [esp+14h+var_4], 11h
0x858755: jz      loc_8588A0
0x85875B: mov     ecx, [esp+14h+arg_4]
0x85875F: mov     edx, [esp+14h+arg_0]
0x858763: push    ecx
0x858764: push    1
0x858766: push    1
0x858768: push    0B4h ; '´'
0x85876D: push    edx
0x85876E: push    eax
0x85876F: call    sub_7E2370
0x858774: add     esp, 18h
0x858777: jmp     loc_8588A2
0x85877C: cmp     [esp+14h+arg_30], 0
0x858781: jnz     short loc_8587CD
0x858783: cmp     byte ptr [esp+14h+arg_C], 1
0x858788: jnz     loc_8588BD
0x85878E: push    10h; Size
0x858790: call    FormHeapAlloc
0x858795: add     esp, 4
0x858798: mov     [esp+14h+arg_C], eax
0x85879C: test    eax, eax
0x85879E: mov     [esp+14h+var_4], 12h
0x8587A6: jz      loc_8588A0
0x8587AC: mov     ecx, [esp+14h+arg_4]
0x8587B0: mov     edx, [esp+14h+arg_0]
0x8587B4: push    ecx
0x8587B5: push    1
0x8587B7: push    1
0x8587B9: push    0BFh ; '¿'
0x8587BE: push    edx
0x8587BF: push    eax
0x8587C0: call    sub_7E2370
0x8587C5: add     esp, 18h
0x8587C8: jmp     loc_8588A2
0x8587CD: cmp     byte ptr [esp+14h+arg_C], 1
0x8587D2: jnz     loc_8588BD
0x8587D8: push    10h; Size
0x8587DA: call    FormHeapAlloc
0x8587DF: add     esp, 4
0x8587E2: mov     [esp+14h+arg_C], eax
0x8587E6: test    eax, eax
0x8587E8: mov     [esp+14h+var_4], 13h
0x8587F0: jz      loc_8588A0
0x8587F6: mov     ecx, [esp+14h+arg_4]
0x8587FA: mov     edx, [esp+14h+arg_0]
0x8587FE: push    ecx
0x8587FF: push    1
0x858801: push    1
0x858803: push    0C1h ; 'Á'
0x858808: push    edx
0x858809: push    eax
0x85880A: call    sub_7E2370
0x85880F: add     esp, 18h
0x858812: jmp     loc_8588A2
0x858817: cmp     [esp+14h+arg_24], 0
0x85881C: jnz     short loc_858861
0x85881E: cmp     byte ptr [esp+14h+arg_C], 1
0x858823: jnz     loc_8588BD
0x858829: push    10h; Size
0x85882B: call    FormHeapAlloc
0x858830: add     esp, 4
0x858833: mov     [esp+14h+arg_C], eax
0x858837: test    eax, eax
0x858839: mov     [esp+14h+var_4], 14h
0x858841: jz      short loc_8588A0
0x858843: mov     ecx, [esp+14h+arg_4]
0x858847: mov     edx, [esp+14h+arg_0]
0x85884B: push    ecx
0x85884C: push    1
0x85884E: push    1
0x858850: push    0B6h ; '¶'
0x858855: push    edx
0x858856: push    eax
0x858857: call    sub_7E2370
0x85885C: add     esp, 18h
0x85885F: jmp     short loc_8588A2
0x858861: cmp     byte ptr [esp+14h+arg_C], 1
0x858866: jnz     short loc_8588BD
0x858868: push    10h; Size
0x85886A: call    FormHeapAlloc
0x85886F: add     esp, 4
0x858872: mov     [esp+14h+arg_C], eax
0x858876: test    eax, eax
0x858878: mov     [esp+14h+var_4], 15h
0x858880: jz      short loc_8588A0
0x858882: mov     ecx, [esp+14h+arg_4]
0x858886: mov     edx, [esp+14h+arg_0]
0x85888A: push    ecx
0x85888B: push    1
0x85888D: push    1
0x85888F: push    0C3h ; 'Ã'
0x858894: push    edx
0x858895: push    eax
0x858896: call    sub_7E2370
0x85889B: add     esp, 18h
0x85889E: jmp     short loc_8588A2
0x8588A0: xor     eax, eax
0x8588A2: mov     [esp+14h+arg_C], eax
0x8588A6: lea     eax, [esp+14h+arg_C]
0x8588AA: push    eax
0x8588AB: lea     ecx, [esi+28h]
0x8588AE: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8588B6: call    sub_5B1E20
0x8588BB: jmp     short loc_8588C5
0x8588BD: mov     eax, [esp+14h+arg_8]
0x8588C1: add     word ptr [eax], 1
0x8588C5: mov     ecx, [esp+14h+arg_10]
0x8588C9: mov     byte ptr [ecx], 0
0x8588CC: mov     ecx, [esp+14h+var_C]
0x8588D0: mov     large fs:0, ecx
0x8588D7: pop     ecx
0x8588D8: pop     esi
0x8588D9: add     esp, 0Ch
0x8588DC: retn    34h ; '4'
