0x7F6150: movzx   eax, [esp+arg_4]
0x7F6155: cmp     eax, 168h
0x7F615A: jg      short loc_7F61C9
0x7F615C: jz      short loc_7F61AA
0x7F615E: sub     eax, 48h ; 'H'
0x7F6161: jz      short loc_7F618B
0x7F6163: sub     eax, 1
0x7F6166: jnz     def_7F61D7
0x7F616C: mov     eax, [esp+arg_C]
0x7F6170: mov     ecx, [esp+arg_8]
0x7F6174: mov     edx, [esp+arg_0]
0x7F6178: push    0
0x7F617A: push    eax
0x7F617B: push    ecx
0x7F617C: mov     ecx, [esp+0Ch+arg_10]
0x7F6180: push    0
0x7F6182: push    edx
0x7F6183: call    sub_846250
0x7F6188: retn    14h
0x7F618B: mov     eax, [esp+arg_C]
0x7F618F: mov     ecx, [esp+arg_8]
0x7F6193: mov     edx, [esp+arg_0]
0x7F6197: push    0
0x7F6199: push    eax
0x7F619A: push    ecx
0x7F619B: mov     ecx, [esp+0Ch+arg_10]
0x7F619F: push    0
0x7F61A1: push    edx
0x7F61A2: call    sub_850C70
0x7F61A7: retn    14h
0x7F61AA: mov     eax, [esp+arg_C]
0x7F61AE: mov     ecx, [esp+arg_8]
0x7F61B2: mov     edx, [esp+arg_0]
0x7F61B6: push    0
0x7F61B8: push    eax
0x7F61B9: push    ecx
0x7F61BA: mov     ecx, [esp+0Ch+arg_10]
0x7F61BE: push    0
0x7F61C0: push    edx
0x7F61C1: call    sub_8517F0
0x7F61C6: retn    14h
0x7F61C9: sub     eax, 169h; switch 14 cases
0x7F61CE: cmp     eax, 0Dh
0x7F61D1: ja      def_7F61D7
0x7F61D7: jmp     ds:jpt_7F61D7[eax*4]; switch jump
0x7F61DE: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 366
0x7F61E2: mov     ecx, [esp+arg_8]
0x7F61E6: mov     edx, [esp+arg_0]
0x7F61EA: push    0
0x7F61EC: push    eax
0x7F61ED: push    ecx
0x7F61EE: mov     ecx, [esp+0Ch+arg_10]
0x7F61F2: push    0
0x7F61F4: push    edx
0x7F61F5: call    sub_850F60
0x7F61FA: retn    14h
0x7F61FD: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 365
0x7F6201: mov     ecx, [esp+arg_8]
0x7F6205: mov     edx, [esp+arg_0]
0x7F6209: push    0
0x7F620B: push    eax
0x7F620C: push    ecx
0x7F620D: mov     ecx, [esp+0Ch+arg_10]
0x7F6211: push    0
0x7F6213: push    edx
0x7F6214: call    sub_851250
0x7F6219: retn    14h
0x7F621C: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 368
0x7F6220: mov     ecx, [esp+arg_8]
0x7F6224: mov     edx, [esp+arg_0]
0x7F6228: push    0
0x7F622A: push    eax
0x7F622B: push    ecx
0x7F622C: mov     ecx, [esp+0Ch+arg_10]
0x7F6230: push    0
0x7F6232: push    edx
0x7F6233: call    sub_851520
0x7F6238: retn    14h
0x7F623B: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 369
0x7F623F: mov     ecx, [esp+arg_8]
0x7F6243: mov     edx, [esp+arg_0]
0x7F6247: push    0
0x7F6249: push    eax
0x7F624A: push    ecx
0x7F624B: mov     ecx, [esp+0Ch+arg_10]
0x7F624F: push    0
0x7F6251: push    edx
0x7F6252: call    sub_8519B0
0x7F6257: retn    14h
0x7F625A: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 367
0x7F625E: mov     ecx, [esp+arg_8]
0x7F6262: mov     edx, [esp+arg_0]
0x7F6266: push    0
0x7F6268: push    eax
0x7F6269: push    ecx
0x7F626A: mov     ecx, [esp+0Ch+arg_10]
0x7F626E: push    0
0x7F6270: push    edx
0x7F6271: call    sub_846570
0x7F6276: retn    14h
0x7F6279: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 361
0x7F627D: mov     ecx, [esp+arg_8]
0x7F6281: mov     edx, [esp+arg_0]
0x7F6285: push    0
0x7F6287: push    eax
0x7F6288: push    ecx
0x7F6289: mov     ecx, [esp+0Ch+arg_10]
0x7F628D: push    0
0x7F628F: push    edx
0x7F6290: call    loc_846C50
0x7F6295: retn    14h
0x7F6298: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 362
0x7F629C: mov     ecx, [esp+arg_8]
0x7F62A0: mov     edx, [esp+arg_0]
0x7F62A4: push    0
0x7F62A6: push    eax
0x7F62A7: push    ecx
0x7F62A8: mov     ecx, [esp+0Ch+arg_10]
0x7F62AC: push    0
0x7F62AE: push    edx
0x7F62AF: call    sub_846DC0
0x7F62B4: retn    14h
0x7F62B7: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 364
0x7F62BB: mov     ecx, [esp+arg_8]
0x7F62BF: mov     edx, [esp+arg_0]
0x7F62C3: push    0
0x7F62C5: push    eax
0x7F62C6: push    ecx
0x7F62C7: mov     ecx, [esp+0Ch+arg_10]
0x7F62CB: push    0
0x7F62CD: push    edx
0x7F62CE: call    sub_846F90
0x7F62D3: retn    14h
0x7F62D6: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 370
0x7F62DA: mov     ecx, [esp+arg_8]
0x7F62DE: mov     edx, [esp+arg_0]
0x7F62E2: push    0
0x7F62E4: push    eax
0x7F62E5: push    ecx
0x7F62E6: mov     ecx, [esp+0Ch+arg_10]
0x7F62EA: push    0
0x7F62EC: push    edx
0x7F62ED: call    sub_847160
0x7F62F2: retn    14h
0x7F62F5: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 371
0x7F62F9: mov     ecx, [esp+arg_8]
0x7F62FD: mov     edx, [esp+arg_0]
0x7F6301: push    0
0x7F6303: push    eax
0x7F6304: push    ecx
0x7F6305: mov     ecx, [esp+0Ch+arg_10]
0x7F6309: push    0
0x7F630B: push    edx
0x7F630C: call    sub_847400
0x7F6311: retn    14h
0x7F6314: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 372
0x7F6318: mov     ecx, [esp+arg_8]
0x7F631C: mov     edx, [esp+arg_0]
0x7F6320: push    0
0x7F6322: push    eax
0x7F6323: push    ecx
0x7F6324: mov     ecx, [esp+0Ch+arg_10]
0x7F6328: push    0
0x7F632A: push    edx
0x7F632B: call    sub_8476F0
0x7F6330: retn    14h
0x7F6333: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 363
0x7F6337: mov     ecx, [esp+arg_8]
0x7F633B: mov     edx, [esp+arg_0]
0x7F633F: push    0
0x7F6341: push    eax
0x7F6342: push    ecx
0x7F6343: mov     ecx, [esp+0Ch+arg_10]
0x7F6347: push    0
0x7F6349: push    edx
0x7F634A: call    sub_8479E0
0x7F634F: retn    14h
0x7F6352: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 373
0x7F6356: mov     ecx, [esp+arg_8]
0x7F635A: mov     edx, [esp+arg_0]
0x7F635E: push    0
0x7F6360: push    eax
0x7F6361: push    ecx
0x7F6362: mov     ecx, [esp+0Ch+arg_10]
0x7F6366: push    0
0x7F6368: push    edx
0x7F6369: call    sub_847D50
0x7F636E: retn    14h
0x7F6371: mov     eax, [esp+arg_C]; jumptable 007F61D7 case 374
0x7F6375: mov     ecx, [esp+arg_8]
0x7F6379: mov     edx, [esp+arg_0]
0x7F637D: push    0
0x7F637F: push    eax
0x7F6380: push    ecx
0x7F6381: mov     ecx, [esp+0Ch+arg_10]
0x7F6385: push    0
0x7F6387: push    edx
0x7F6388: call    sub_846890
