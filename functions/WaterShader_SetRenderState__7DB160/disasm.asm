0x7DB160: mov     eax, ds:0B3F928h
0x7DB165: push    esi
0x7DB166: mov     esi, ecx
0x7DB168: mov     ecx, [eax+8ACh]
0x7DB16E: mov     edx, [ecx]
0x7DB170: mov     eax, [edx+64h]
0x7DB173: push    0
0x7DB175: push    0
0x7DB177: push    34h ; '4'
0x7DB179: call    eax
0x7DB17B: mov     ecx, [esp+4+arg_1C]
0x7DB17F: mov     edx, [esp+4+arg_18]
0x7DB183: mov     eax, [esp+4+arg_14]
0x7DB187: push    ecx
0x7DB188: mov     ecx, [esp+8+arg_10]
0x7DB18C: push    edx
0x7DB18D: mov     edx, [esp+0Ch+arg_C]
0x7DB191: push    eax
0x7DB192: mov     eax, [esp+10h+arg_8]
0x7DB196: push    ecx
0x7DB197: mov     ecx, [esp+14h+arg_4]
0x7DB19B: push    edx
0x7DB19C: mov     edx, [esp+18h+arg_0]
0x7DB1A0: push    eax
0x7DB1A1: push    ecx
0x7DB1A2: push    edx
0x7DB1A3: mov     ecx, esi
0x7DB1A5: call    nullsub_ret0_20
0x7DB1AA: pop     esi
0x7DB1AB: retn    20h ; ' '
