0x6134C0: push    ecx
0x6134C1: push    ebx
0x6134C2: push    esi
0x6134C3: mov     esi, ecx
0x6134C5: mov     ecx, [esi+3Ch]
0x6134C8: xor     bl, bl
0x6134CA: call    sub_5E0F50
0x6134CF: mov     edx, [eax]
0x6134D1: mov     ecx, eax
0x6134D3: mov     eax, [edx+11Ch]
0x6134D9: call    eax
0x6134DB: movsx   ecx, al
0x6134DE: mov     [esp+0Ch+var_4], ecx
0x6134E2: fild    [esp+0Ch+var_4]
0x6134E6: fcomp   qword ptr ds:0A2FC68h
0x6134EC: fnstsw  ax
0x6134EE: test    ah, 41h
0x6134F1: jnz     def_613527
0x6134F7: mov     ecx, [esi+3Ch]
0x6134FA: mov     bl, 1
0x6134FC: call    sub_5E0F50
0x613501: mov     edx, [eax]
0x613503: mov     ecx, eax
0x613505: mov     eax, [edx+16Ch]
0x61350B: push    2
0x61350D: call    eax
0x61350F: test    al, al
0x613511: jz      def_613527
0x613517: mov     eax, [esp+10h]
0x61351B: add     eax, 0FFFFFFEAh; switch 5 cases
0x61351E: cmp     eax, 4
0x613521: ja      def_613527
0x613527: jmp     ds:jpt_613527[eax*4]; switch jump
0x61352E: mov     ecx, [esi+3Ch]; jumptable 00613527 case 22
0x613531: call    sub_5E0F50
0x613536: mov     edx, [eax]
0x613538: mov     ecx, eax
0x61353A: mov     eax, [edx+128h]
0x613540: call    eax
0x613542: test    al, al
0x613544: setnle  bl
0x613547: pop     esi
0x613548: mov     al, bl
0x61354A: pop     ebx
0x61354B: pop     ecx
0x61354C: retn    4
0x61354F: mov     ecx, [esi+3Ch]; jumptable 00613527 case 23
0x613552: call    sub_5E0F50
0x613557: mov     edx, [eax]
0x613559: mov     ecx, eax
0x61355B: mov     eax, [edx+12Ch]
0x613561: call    eax
0x613563: test    al, al
0x613565: setnle  bl
0x613568: pop     esi
0x613569: mov     al, bl
0x61356B: pop     ebx
0x61356C: pop     ecx
0x61356D: retn    4
0x613570: mov     ecx, [esi+3Ch]; jumptable 00613527 case 24
0x613573: call    sub_5E0F50
0x613578: mov     edx, [eax]
0x61357A: mov     ecx, eax
0x61357C: mov     eax, [edx+130h]
0x613582: call    eax
0x613584: test    al, al
0x613586: setnle  bl
0x613589: pop     esi
0x61358A: mov     al, bl
0x61358C: pop     ebx
0x61358D: pop     ecx
0x61358E: retn    4
0x613591: mov     ecx, [esi+3Ch]; jumptable 00613527 case 25
0x613594: call    sub_5E0F50
0x613599: mov     edx, [eax]
0x61359B: mov     ecx, eax
0x61359D: mov     eax, [edx+134h]
0x6135A3: call    eax
0x6135A5: test    al, al
0x6135A7: setnle  bl
0x6135AA: pop     esi
0x6135AB: mov     al, bl
0x6135AD: pop     ebx
0x6135AE: pop     ecx
0x6135AF: retn    4
0x6135B2: mov     ecx, [esi+3Ch]; jumptable 00613527 case 26
0x6135B5: call    sub_5E0F50
0x6135BA: mov     edx, [eax]
0x6135BC: mov     ecx, eax
0x6135BE: mov     eax, [edx+138h]
0x6135C4: call    eax
0x6135C6: test    al, al
0x6135C8: setnle  bl
