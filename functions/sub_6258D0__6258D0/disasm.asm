0x6258D0: push    esi
0x6258D1: push    edi
0x6258D2: push    0; int
0x6258D4: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6258D9: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x6258DE: push    0; int
0x6258E0: push    0; a2
0x6258E2: mov     esi, ecx
0x6258E4: call    Actor_GetActorBaseForm
0x6258E9: push    eax; void *
0x6258EA: call    OblivionDynamicCast
0x6258EF: mov     edi, eax
0x6258F1: add     esp, 14h
0x6258F4: test    edi, edi
0x6258F6: jz      loc_625989
0x6258FC: mov     eax, [esi]
0x6258FE: mov     edx, [eax+164h]
0x625904: mov     ecx, esi
0x625906: call    edx
0x625908: test    eax, eax
0x62590A: jz      short loc_625989
0x62590C: mov     eax, [eax+98h]
0x625912: test    eax, eax
0x625914: jz      short loc_625989
0x625916: mov     esi, [eax+7Ch]
0x625919: mov     eax, [edi+24h]
0x62591C: mov     edx, [eax+18h]
0x62591F: add     edi, 24h ; '$'
0x625922: mov     ecx, edi
0x625924: call    edx
0x625926: test    al, al
0x625928: jz      short loc_625941
0x62592A: mov     eax, [esi]
0x62592C: mov     edx, [eax+4Ch]
0x62592F: push    offset aBip01LUpperarm; "Bip01 L UpperArm"
0x625934: mov     ecx, esi
0x625936: call    edx
0x625938: push    eax
0x625939: call    sub_536740
0x62593E: add     esp, 4
0x625941: mov     eax, [edi]
0x625943: mov     edx, [eax+1Ch]
0x625946: mov     ecx, edi
0x625948: call    edx
0x62594A: test    al, al
0x62594C: jz      short loc_625965
0x62594E: mov     eax, [esi]
0x625950: mov     edx, [eax+4Ch]
0x625953: push    offset aBip01RUpperarm; "Bip01 R UpperArm"
0x625958: mov     ecx, esi
0x62595A: call    edx
0x62595C: push    eax
0x62595D: call    sub_536740
0x625962: add     esp, 4
0x625965: mov     eax, [edi]
0x625967: mov     edx, [eax+20h]
0x62596A: mov     ecx, edi
0x62596C: call    edx
0x62596E: test    al, al
0x625970: jz      short loc_625989
0x625972: mov     eax, [esi]
0x625974: mov     edx, [eax+4Ch]
0x625977: push    offset aBip01Head; "Bip01 Head"
0x62597C: mov     ecx, esi
0x62597E: call    edx
0x625980: push    eax
0x625981: call    sub_536740
0x625986: add     esp, 4
0x625989: pop     edi
0x62598A: pop     esi
0x62598B: retn
