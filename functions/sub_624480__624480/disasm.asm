0x624480: push    ecx
0x624481: push    ebx
0x624482: push    ebp
0x624483: push    esi
0x624484: push    edi
0x624485: mov     esi, ecx
0x624487: call    sub_61E8A0
0x62448C: mov     edi, [esi+3Ch]
0x62448F: push    1
0x624491: push    0
0x624493: push    11h
0x624495: mov     ecx, edi
0x624497: mov     byte ptr [esi+174h], 1
0x62449E: xor     bl, bl
0x6244A0: call    Actor_LoadAnimGroup?
0x6244A5: movzx   ebp, ax
0x6244A8: test    bp, bp
0x6244AB: jz      short loc_6244D6
0x6244AD: mov     eax, [edi]
0x6244AF: mov     edx, [eax+164h]
0x6244B5: mov     ecx, edi
0x6244B7: call    edx
0x6244B9: test    eax, eax
0x6244BB: jz      short loc_6244D6
0x6244BD: mov     eax, [eax+9Ch]
0x6244C3: lea     ecx, [esp+14h+var_4]
0x6244C7: push    ecx
0x6244C8: push    ebp
0x6244C9: mov     ecx, eax
0x6244CB: call    sub_470960
0x6244D0: test    al, al
0x6244D2: jz      short loc_6244D6
0x6244D4: mov     bl, 1
0x6244D6: mov     eax, [esi+3Ch]
0x6244D9: test    eax, eax
0x6244DB: mov     [esi+1BCh], bl
0x6244E1: jz      loc_62458F
0x6244E7: mov     eax, [eax+58h]
0x6244EA: test    eax, eax
0x6244EC: jz      loc_62458F
0x6244F2: mov     edx, [eax]
0x6244F4: mov     ecx, eax
0x6244F6: mov     eax, [edx+0ECh]
0x6244FC: push    1
0x6244FE: call    eax
0x624500: test    eax, eax
0x624502: jz      loc_62458F
0x624508: mov     ecx, [esi+3Ch]
0x62450B: mov     ecx, [ecx+58h]
0x62450E: mov     edx, [ecx]
0x624510: mov     eax, [edx+0ECh]
0x624516: push    1
0x624518: call    eax
0x62451A: mov     eax, [eax+8]
0x62451D: test    eax, eax
0x62451F: jz      short loc_62458F
0x624521: mov     al, [eax+90h]
0x624527: cmp     al, 5
0x624529: jz      short loc_624564
0x62452B: cmp     al, 4
0x62452D: jz      short loc_624564
0x62452F: push    1
0x624531: mov     ecx, esi
0x624533: mov     byte ptr [esi+130h], 0
0x62453A: call    sub_612960
0x62453F: mov     edi, eax
0x624541: test    edi, edi
0x624543: jz      short loc_624596
0x624545: mov     ecx, edi
0x624547: call    ContainerEntryExtraData_DestroyDataTable
0x62454C: push    edi
0x62454D: call    FormHeapFree
0x624552: add     esp, 4
0x624555: push    0
0x624557: mov     ecx, esi
0x624559: call    sub_624030
0x62455E: pop     edi
0x62455F: pop     esi
0x624560: pop     ebp
0x624561: pop     ebx
0x624562: pop     ecx
0x624563: retn
0x624564: push    1
0x624566: mov     ecx, esi
0x624568: mov     byte ptr [esi+131h], 0
0x62456F: call    sub_612960
0x624574: mov     edi, eax
0x624576: test    edi, edi
0x624578: jnz     short loc_624545
0x62457A: push    eax
0x62457B: mov     ecx, esi
0x62457D: mov     byte ptr [esi+130h], 1
0x624584: call    sub_624030
0x624589: pop     edi
0x62458A: pop     esi
0x62458B: pop     ebp
0x62458C: pop     ebx
0x62458D: pop     ecx
0x62458E: retn
0x62458F: mov     byte ptr [esi+130h], 1
0x624596: push    0
0x624598: mov     ecx, esi
0x62459A: mov     byte ptr [esi+131h], 1
0x6245A1: call    sub_624030
0x6245A6: pop     edi
0x6245A7: pop     esi
0x6245A8: pop     ebp
0x6245A9: pop     ebx
0x6245AA: pop     ecx
0x6245AB: retn
