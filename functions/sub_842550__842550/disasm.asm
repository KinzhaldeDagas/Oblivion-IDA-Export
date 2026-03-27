0x842550: push    0FFFFFFFFh
0x842552: push    offset SEH_882120
0x842557: mov     eax, large fs:0
0x84255D: push    eax
0x84255E: push    ebx
0x84255F: push    ebp
0x842560: push    esi
0x842561: push    edi
0x842562: mov     eax, ds:0B30AACh
0x842567: xor     eax, esp
0x842569: push    eax
0x84256A: lea     eax, [esp+20h+var_C]
0x84256E: mov     large fs:0, eax
0x842574: mov     esi, ecx
0x842576: mov     ebx, [esp+20h+arg_8]
0x84257A: mov     eax, [ebx+10h]
0x84257D: mov     edi, ds:0B45708h
0x842583: push    eax
0x842584: call    sub_848C40
0x842589: mov     ebx, [ebx+0Ch]
0x84258C: push    ebx
0x84258D: mov     ecx, esi
0x84258F: call    sub_848E50
0x842594: mov     ecx, [esp+20h+arg_0]
0x842598: mov     eax, [esi]
0x84259A: mov     edx, [eax+0BCh]
0x8425A0: push    0
0x8425A2: push    ebx
0x8425A3: push    ecx
0x8425A4: mov     ecx, esi
0x8425A6: call    edx
0x8425A8: mov     eax, [edi+24h]
0x8425AB: mov     ebx, [esp+20h+arg_C]
0x8425AF: mov     ebp, [eax]
0x8425B1: mov     edx, [ebx]
0x8425B3: mov     eax, [edx+88h]
0x8425B9: push    0
0x8425BB: mov     ecx, ebx
0x8425BD: mov     [esp+24h+arg_8], ebp
0x8425C1: call    eax
0x8425C3: mov     ebp, [ebp+4]
0x8425C6: cmp     ebp, eax
0x8425C8: mov     [esp+20h+arg_0], eax
0x8425CC: jz      short loc_842608
0x8425CE: test    ebp, ebp
0x8425D0: jz      short loc_8425F3
0x8425D2: lea     ecx, [ebp+4]
0x8425D5: push    ecx; lpAddend
0x8425D6: call    dword ptr ds:0A2807Ch
0x8425DC: test    eax, eax
0x8425DE: jnz     short loc_8425EF
0x8425E0: test    ebp, ebp
0x8425E2: jz      short loc_8425EF
0x8425E4: mov     edx, [ebp+0]
0x8425E7: mov     eax, [edx]
0x8425E9: push    1
0x8425EB: mov     ecx, ebp
0x8425ED: call    eax
0x8425EF: mov     eax, [esp+20h+arg_0]
0x8425F3: test    eax, eax
0x8425F5: mov     ecx, [esp+20h+arg_8]
0x8425F9: mov     [ecx+4], eax
0x8425FC: jz      short loc_842608
0x8425FE: add     eax, 4
0x842601: push    eax; lpAddend
0x842602: call    dword ptr ds:0A28078h
0x842608: mov     edx, [esp+20h+arg_8]
0x84260C: push    ebx
0x84260D: push    edx
0x84260E: mov     ecx, esi
0x842610: call    sub_848FA0
0x842615: mov     eax, [edi+24h]
0x842618: mov     ebp, [eax+4]
0x84261B: push    0
0x84261D: push    ebx
0x84261E: mov     ecx, esi
0x842620: mov     [esp+28h+arg_8], ebp
0x842624: call    sub_848FD0
0x842629: mov     ebp, [ebp+4]
0x84262C: cmp     ebp, eax
0x84262E: mov     [esp+20h+arg_0], eax
0x842632: jz      short loc_84266E
0x842634: test    ebp, ebp
0x842636: jz      short loc_842659
0x842638: lea     ecx, [ebp+4]
0x84263B: push    ecx; lpAddend
0x84263C: call    dword ptr ds:0A2807Ch
0x842642: test    eax, eax
0x842644: jnz     short loc_842655
0x842646: test    ebp, ebp
0x842648: jz      short loc_842655
0x84264A: mov     edx, [ebp+0]
0x84264D: mov     eax, [edx]
0x84264F: push    1
0x842651: mov     ecx, ebp
0x842653: call    eax
0x842655: mov     eax, [esp+20h+arg_0]
0x842659: test    eax, eax
0x84265B: mov     ecx, [esp+20h+arg_8]
0x84265F: mov     [ecx+4], eax
0x842662: jz      short loc_84266E
0x842664: add     eax, 4
0x842667: push    eax; lpAddend
0x842668: call    dword ptr ds:0A28078h
0x84266E: mov     edx, [esp+20h+arg_8]
0x842672: push    ebx
0x842673: push    edx
0x842674: mov     ecx, esi
0x842676: call    sub_848FA0
0x84267B: mov     ecx, [edi+24h]
0x84267E: mov     ebx, [ecx+14h]
0x842681: mov     eax, ds:0B43108h
0x842686: mov     ebp, [ebx+4]
0x842689: add     ebx, 4
0x84268C: cmp     ebp, eax
0x84268E: mov     [esp+20h+arg_8], eax
0x842692: jz      short loc_8426C9
0x842694: test    ebp, ebp
0x842696: jz      short loc_8426B9
0x842698: lea     edx, [ebp+4]
0x84269B: push    edx; lpAddend
0x84269C: call    dword ptr ds:0A2807Ch
0x8426A2: test    eax, eax
0x8426A4: jnz     short loc_8426B5
0x8426A6: test    ebp, ebp
0x8426A8: jz      short loc_8426B5
0x8426AA: mov     eax, [ebp+0]
0x8426AD: mov     edx, [eax]
0x8426AF: push    1
0x8426B1: mov     ecx, ebp
0x8426B3: call    edx
0x8426B5: mov     eax, [esp+20h+arg_8]
0x8426B9: test    eax, eax
0x8426BB: mov     [ebx], eax
0x8426BD: jz      short loc_8426C9
0x8426BF: add     eax, 4
0x8426C2: push    eax; lpAddend
0x8426C3: call    dword ptr ds:0A28078h
0x8426C9: mov     eax, [edi+24h]
0x8426CC: mov     ebp, [eax+18h]
0x8426CF: mov     eax, ds:0B4310Ch
0x8426D4: mov     ebx, [ebp+4]
0x8426D7: cmp     ebx, eax
0x8426D9: mov     ecx, eax
0x8426DB: mov     [esp+20h+arg_8], ecx
0x8426DF: jz      short loc_842716
0x8426E1: test    ebx, ebx
0x8426E3: jz      short loc_842705
0x8426E5: lea     ecx, [ebx+4]
0x8426E8: push    ecx; lpAddend
0x8426E9: call    dword ptr ds:0A2807Ch
0x8426EF: test    eax, eax
0x8426F1: jnz     short loc_842701
0x8426F3: test    ebx, ebx
0x8426F5: jz      short loc_842701
0x8426F7: mov     edx, [ebx]
0x8426F9: mov     eax, [edx]
0x8426FB: push    1
0x8426FD: mov     ecx, ebx
0x8426FF: call    eax
0x842701: mov     ecx, [esp+20h+arg_8]
0x842705: test    ecx, ecx
0x842707: mov     [ebp+4], ecx
0x84270A: jz      short loc_842716
0x84270C: add     ecx, 4
0x84270F: push    ecx; lpAddend
0x842710: call    dword ptr ds:0A28078h
0x842716: mov     ebx, 1
0x84271B: add     [edi+60h], ebx
0x84271E: mov     [esp+20h+arg_8], edi
0x842722: mov     edx, [esi+38h]
0x842725: lea     ecx, [esp+20h+arg_8]
0x842729: push    ecx
0x84272A: push    edx
0x84272B: lea     ecx, [esi+40h]
0x84272E: mov     [esp+28h+var_4], 0
0x842736: call    sub_76CE40
0x84273B: or      eax, 0FFFFFFFFh
0x84273E: add     [edi+60h], eax
0x842741: mov     [esp+20h+var_4], eax
0x842745: jnz     short loc_84274E
0x842747: mov     ecx, edi
0x842749: call    sub_7604D0
0x84274E: add     [esi+38h], ebx
0x842751: mov     ecx, [esp+20h+var_C]
0x842755: mov     large fs:0, ecx
0x84275C: pop     ecx
0x84275D: pop     edi
0x84275E: pop     esi
0x84275F: pop     ebp
0x842760: pop     ebx
0x842761: add     esp, 0Ch
0x842764: retn    10h
