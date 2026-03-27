0x7E2700: push    0FFFFFFFFh
0x7E2702: push    offset SEH_864830
0x7E2707: mov     eax, large fs:0
0x7E270D: push    eax
0x7E270E: push    esi
0x7E270F: push    edi
0x7E2710: mov     eax, ds:0B30AACh
0x7E2715: xor     eax, esp
0x7E2717: push    eax
0x7E2718: lea     eax, [esp+18h+var_C]
0x7E271C: mov     large fs:0, eax
0x7E2722: mov     esi, ecx
0x7E2724: mov     eax, ds:0B42EACh
0x7E2729: cmp     ax, 5
0x7E272D: jnz     short loc_7E2746
0x7E272F: lea     eax, [esi+38h]
0x7E2732: mov     ecx, [esp+18h+var_C]
0x7E2736: mov     large fs:0, ecx
0x7E273D: pop     ecx
0x7E273E: pop     edi
0x7E273F: pop     esi
0x7E2740: add     esp, 0Ch
0x7E2743: retn    10h
0x7E2746: cmp     ax, 6
0x7E274A: jnz     short loc_7E2763
0x7E274C: lea     eax, [esi+48h]
0x7E274F: mov     ecx, [esp+18h+var_C]
0x7E2753: mov     large fs:0, ecx
0x7E275A: pop     ecx
0x7E275B: pop     edi
0x7E275C: pop     esi
0x7E275D: add     esp, 0Ch
0x7E2760: retn    10h
0x7E2763: mov     edi, [esp+18h+arg_4]
0x7E2767: cmp     [esi+24h], edi
0x7E276A: jz      short loc_7E27CD
0x7E276C: call    sub_7E24C0
0x7E2771: push    10h; Size
0x7E2773: call    FormHeapAlloc
0x7E2778: add     esp, 4
0x7E277B: mov     [esp+18h+arg_4], eax
0x7E277F: test    eax, eax
0x7E2781: mov     [esp+18h+var_4], 0
0x7E2789: jz      short loc_7E27A3
0x7E278B: mov     ecx, [esp+18h+arg_0]
0x7E278F: push    0
0x7E2791: push    0
0x7E2793: push    1
0x7E2795: push    0
0x7E2797: push    ecx
0x7E2798: push    eax
0x7E2799: call    sub_7E2370
0x7E279E: add     esp, 18h
0x7E27A1: jmp     short loc_7E27A5
0x7E27A3: xor     eax, eax
0x7E27A5: lea     edx, [esp+18h+arg_4]
0x7E27A9: push    edx
0x7E27AA: lea     ecx, [esi+28h]
0x7E27AD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7E27B5: mov     [esp+1Ch+arg_4], eax
0x7E27B9: call    sub_6AA320
0x7E27BE: movzx   eax, word ptr ds:0B42EACh
0x7E27C5: shl     eax, 8
0x7E27C8: or      eax, edi
0x7E27CA: mov     [esi+24h], eax
0x7E27CD: lea     eax, [esi+28h]
0x7E27D0: mov     ecx, [esp+18h+var_C]
0x7E27D4: mov     large fs:0, ecx
0x7E27DB: pop     ecx
0x7E27DC: pop     edi
0x7E27DD: pop     esi
0x7E27DE: add     esp, 0Ch
0x7E27E1: retn    10h
