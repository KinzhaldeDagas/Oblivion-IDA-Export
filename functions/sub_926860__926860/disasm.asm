0x926860: push    esi
0x926861: mov     esi, [esp+4+arg_0]
0x926865: push    edi
0x926866: push    esi
0x926867: mov     edi, ecx
0x926869: call    sub_8A0C30
0x92686E: mov     edi, [edi+4]
0x926871: mov     eax, [esi+21Ch]
0x926877: push    1
0x926879: lea     ecx, [esp+0Ch+arg_0]
0x92687D: push    ecx
0x92687E: push    4
0x926880: lea     edx, [edi+10h]
0x926883: push    edx
0x926884: push    eax
0x926885: mov     eax, [eax+4]
0x926888: mov     [esp+1Ch+arg_0], 4
0x926890: call    eax
0x926892: mov     eax, [esi+21Ch]
0x926898: push    1
0x92689A: lea     ecx, [esp+20h+arg_0]
0x92689E: push    ecx
0x92689F: push    1
0x9268A1: lea     edx, [edi+14h]
0x9268A4: push    edx
0x9268A5: push    eax
0x9268A6: mov     eax, [eax+4]
0x9268A9: mov     [esp+30h+arg_0], 1
0x9268B1: call    eax
0x9268B3: mov     eax, [esi+21Ch]
0x9268B9: mov     edx, [eax+4]
0x9268BC: push    0
0x9268BE: push    0
0x9268C0: push    40h ; '@'
0x9268C2: lea     ecx, [edi+20h]
0x9268C5: push    ecx
0x9268C6: push    eax
0x9268C7: call    edx
0x9268C9: mov     esi, [esi+21Ch]
0x9268CF: mov     eax, [esi+4]
0x9268D2: push    0
0x9268D4: push    0
0x9268D6: push    40h ; '@'
0x9268D8: add     edi, 60h ; '`'
0x9268DB: push    edi
0x9268DC: push    esi
0x9268DD: call    eax
0x9268DF: add     esp, 50h
0x9268E2: pop     edi
0x9268E3: pop     esi
0x9268E4: retn    4
