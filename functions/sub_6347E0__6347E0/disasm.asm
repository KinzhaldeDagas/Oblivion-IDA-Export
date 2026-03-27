0x6347E0: push    esi
0x6347E1: push    2
0x6347E3: push    1
0x6347E5: call    TESTopic__GEtTopic
0x6347EA: mov     esi, [esp+0Ch+arg_0]
0x6347EE: mov     ecx, ds:0B333C4h
0x6347F4: add     esp, 8
0x6347F7: test    eax, eax
0x6347F9: mov     [esi+0E4h], ecx
0x6347FF: jz      short loc_634816
0x634801: mov     ecx, [esi+58h]
0x634804: mov     edx, [ecx]
0x634806: push    0
0x634808: push    1
0x63480A: push    0
0x63480C: push    eax
0x63480D: mov     eax, [edx+1A4h]
0x634813: push    esi
0x634814: call    eax
0x634816: mov     edx, [esi]
0x634818: mov     eax, [edx+18Ch]
0x63481E: mov     ecx, esi
0x634820: call    eax
0x634822: test    eax, eax
0x634824: jnz     short loc_63484E
0x634826: mov     ecx, esi
0x634828: call    sub_5E0380
0x63482D: test    eax, eax
0x63482F: jz      short loc_63483E
0x634831: mov     ecx, esi
0x634833: call    sub_5E0380
0x634838: cmp     byte ptr [eax+20h], 6
0x63483C: jz      short loc_63484E
0x63483E: mov     ecx, [esi+58h]
0x634841: mov     edx, [ecx]
0x634843: mov     eax, [edx+158h]
0x634849: push    1
0x63484B: push    esi
0x63484C: call    eax
0x63484E: pop     esi
0x63484F: retn    4
