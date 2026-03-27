0x780140: push    esi
0x780141: mov     esi, ecx
0x780143: mov     eax, [esi]
0x780145: mov     edx, [eax+54h]
0x780148: call    edx
0x78014A: mov     eax, [esi]
0x78014C: mov     edx, [eax+6Ch]
0x78014F: mov     ecx, esi
0x780151: call    edx
0x780153: mov     eax, [esi]
0x780155: mov     edx, [eax+0B8h]
0x78015B: mov     ecx, esi
0x78015D: call    edx
0x78015F: mov     eax, [esi]
0x780161: mov     edx, [eax+0DCh]
0x780167: mov     ecx, esi
0x780169: call    edx
0x78016B: lea     ecx, [esi+0F8h]
0x780171: call    sub_780A20
0x780176: mov     eax, [esi]
0x780178: mov     edx, [eax+64h]
0x78017B: push    0
0x78017D: push    2
0x78017F: push    16h
0x780181: mov     ecx, esi
0x780183: call    edx
0x780185: mov     eax, [esi]
0x780187: mov     edx, [eax+64h]
0x78018A: push    0
0x78018C: push    0
0x78018E: push    0A1h ; '¡'
0x780193: mov     ecx, esi
0x780195: call    edx
0x780197: mov     eax, [esi]
0x780199: mov     edx, [eax+64h]
0x78019C: push    0
0x78019E: push    3
0x7801A0: push    8
0x7801A2: mov     ecx, esi
0x7801A4: call    edx
0x7801A6: mov     eax, [esi]
0x7801A8: mov     edx, [eax+64h]
0x7801AB: push    0
0x7801AD: push    2
0x7801AF: push    9
0x7801B1: mov     ecx, esi
0x7801B3: call    edx
0x7801B5: mov     eax, [esi]
0x7801B7: mov     edx, [eax+64h]
0x7801BA: push    0
0x7801BC: push    0
0x7801BE: push    1Bh
0x7801C0: mov     ecx, esi
0x7801C2: call    edx
0x7801C4: mov     ecx, [esi+38h]
0x7801C7: mov     eax, [esi]
0x7801C9: mov     edx, [eax+64h]
0x7801CC: push    0
0x7801CE: push    ecx
0x7801CF: push    13h
0x7801D1: mov     ecx, esi
0x7801D3: call    edx
0x7801D5: mov     ecx, [esi+3Ch]
0x7801D8: mov     eax, [esi]
0x7801DA: mov     edx, [eax+64h]
0x7801DD: push    0
0x7801DF: push    ecx
0x7801E0: push    14h
0x7801E2: mov     ecx, esi
0x7801E4: call    edx
0x7801E6: mov     eax, [esi]
0x7801E8: mov     edx, [eax+64h]
0x7801EB: push    0
0x7801ED: push    0
0x7801EF: push    0Fh
0x7801F1: mov     ecx, esi
0x7801F3: call    edx
0x7801F5: mov     eax, [esi]
0x7801F7: push    0
0x7801F9: push    8
0x7801FB: push    19h
0x7801FD: mov     edx, [eax+64h]
0x780200: mov     ecx, esi
0x780202: call    edx
0x780204: mov     eax, [esi]
0x780206: mov     edx, [eax+64h]
0x780209: push    0
0x78020B: push    0
0x78020D: push    18h
0x78020F: mov     ecx, esi
0x780211: call    edx
0x780213: mov     eax, [esi]
0x780215: mov     edx, [eax+64h]
0x780218: push    0
0x78021A: push    8
0x78021C: push    17h
0x78021E: mov     ecx, esi
0x780220: call    edx
0x780222: mov     eax, [esi]
0x780224: mov     edx, [eax+64h]
0x780227: push    0
0x780229: push    0
0x78022B: push    0Eh
0x78022D: mov     ecx, esi
0x78022F: call    edx
0x780231: mov     eax, [esi]
0x780233: mov     edx, [eax+64h]
0x780236: push    0
0x780238: push    0
0x78023A: push    1Ah
0x78023C: mov     ecx, esi
0x78023E: call    edx
0x780240: mov     eax, [esi]
0x780242: mov     edx, [eax+64h]
0x780245: push    0
0x780247: push    0
0x780249: push    1Dh
0x78024B: mov     ecx, esi
0x78024D: call    edx
0x78024F: mov     eax, [esi]
0x780251: mov     edx, [eax+64h]
0x780254: push    0
0x780256: push    0
0x780258: push    1Ch
0x78025A: mov     ecx, esi
0x78025C: call    edx
0x78025E: mov     cl, [esi+8]
0x780261: mov     eax, [esi]
0x780263: mov     edx, [eax+64h]
0x780266: and     cl, 1
0x780269: neg     cl
0x78026B: push    0
0x78026D: sbb     ecx, ecx
0x78026F: and     ecx, 3
0x780272: push    ecx
0x780273: push    23h ; '#'
0x780275: mov     ecx, esi
0x780277: call    edx
0x780279: mov     eax, [esi]
0x78027B: mov     edx, [eax+64h]
0x78027E: push    0
0x780280: push    0
0x780282: push    30h ; '0'
0x780284: mov     ecx, esi
0x780286: call    edx
0x780288: mov     eax, [esi]
0x78028A: mov     edx, [eax+64h]
0x78028D: push    0
0x78028F: push    0
0x780291: push    22h ; '"'
0x780293: mov     ecx, esi
0x780295: call    edx
0x780297: mov     eax, [esi]
0x780299: mov     edx, [eax+64h]
0x78029C: push    0
0x78029E: push    1
0x7802A0: push    8Fh
0x7802A5: mov     ecx, esi
0x7802A7: call    edx
0x7802A9: mov     eax, [esi]
0x7802AB: push    0
0x7802AD: push    1
0x7802AF: mov     edx, [eax+64h]
0x7802B2: push    7
0x7802B4: mov     ecx, esi
0x7802B6: call    edx
0x7802B8: mov     eax, [esi]
0x7802BA: mov     edx, [eax+64h]
0x7802BD: push    0
0x7802BF: push    1
0x7802C1: push    8Dh
0x7802C6: mov     ecx, esi
0x7802C8: call    edx
0x7802CA: pop     esi
0x7802CB: retn
