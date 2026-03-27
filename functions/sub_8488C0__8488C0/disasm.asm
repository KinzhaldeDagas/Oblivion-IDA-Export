0x8488C0: push    0FFFFFFFFh
0x8488C2: push    offset SEH_852030
0x8488C7: mov     eax, large fs:0
0x8488CD: push    eax
0x8488CE: push    ecx
0x8488CF: push    ebx
0x8488D0: push    esi
0x8488D1: push    edi
0x8488D2: mov     eax, ds:0B30AACh
0x8488D7: xor     eax, esp
0x8488D9: push    eax
0x8488DA: lea     eax, [esp+20h+var_C]
0x8488DE: mov     large fs:0, eax
0x8488E4: mov     esi, ecx
0x8488E6: mov     edi, ds:0B45B3Ch
0x8488EC: test    edi, edi
0x8488EE: mov     [esp+20h+var_10], edi
0x8488F2: mov     ebx, 1
0x8488F7: jz      short loc_8488FC
0x8488F9: add     [edi+60h], ebx
0x8488FC: mov     ecx, [esi+38h]
0x8488FF: lea     eax, [esp+20h+var_10]
0x848903: push    eax
0x848904: push    ecx
0x848905: lea     ecx, [esi+40h]
0x848908: mov     [esp+28h+var_4], 0
0x848910: call    sub_76CE40
0x848915: or      eax, 0FFFFFFFFh
0x848918: test    edi, edi
0x84891A: mov     [esp+20h+var_4], eax
0x84891E: jz      short loc_84892C
0x848920: add     [edi+60h], eax
0x848923: jnz     short loc_84892C
0x848925: mov     ecx, edi
0x848927: call    sub_7604D0
0x84892C: add     [esi+38h], ebx
0x84892F: mov     ecx, [esp+20h+var_C]
0x848933: mov     large fs:0, ecx
0x84893A: pop     ecx
0x84893B: pop     edi
0x84893C: pop     esi
0x84893D: pop     ebx
0x84893E: add     esp, 10h
0x848941: retn    10h
