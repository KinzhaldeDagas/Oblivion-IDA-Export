0x8437B0: push    0FFFFFFFFh
0x8437B2: push    offset SEH_882120
0x8437B7: mov     eax, large fs:0
0x8437BD: push    eax
0x8437BE: push    ebx
0x8437BF: push    ebp
0x8437C0: push    esi
0x8437C1: push    edi
0x8437C2: mov     eax, ds:0B30AACh
0x8437C7: xor     eax, esp
0x8437C9: push    eax
0x8437CA: lea     eax, [esp+20h+var_C]
0x8437CE: mov     large fs:0, eax
0x8437D4: mov     esi, ecx
0x8437D6: mov     edi, [esp+20h+arg_8]
0x8437DA: mov     eax, [edi+10h]
0x8437DD: mov     ebx, ds:0B45768h
0x8437E3: push    eax
0x8437E4: call    sub_848DA0
0x8437E9: mov     edi, [edi+0Ch]
0x8437EC: push    edi
0x8437ED: mov     ecx, esi
0x8437EF: call    sub_848E50
0x8437F4: mov     ecx, [esp+20h+arg_0]
0x8437F8: mov     eax, [esi]
0x8437FA: mov     edx, [eax+0BCh]
0x843800: push    0
0x843802: push    edi
0x843803: push    ecx
0x843804: mov     ecx, esi
0x843806: call    edx
0x843808: mov     eax, [ebx+24h]
0x84380B: mov     edi, [esp+20h+arg_C]
0x84380F: mov     ebp, [eax]
0x843811: mov     edx, [edi]
0x843813: mov     eax, [edx+88h]
0x843819: push    0
0x84381B: mov     ecx, edi
0x84381D: mov     [esp+24h+arg_8], ebp
0x843821: call    eax
0x843823: mov     ebp, [ebp+4]
0x843826: cmp     ebp, eax
0x843828: mov     [esp+20h+arg_0], eax
0x84382C: jz      short loc_843868
0x84382E: test    ebp, ebp
0x843830: jz      short loc_843853
0x843832: lea     ecx, [ebp+4]
0x843835: push    ecx; lpAddend
0x843836: call    dword ptr ds:0A2807Ch
0x84383C: test    eax, eax
0x84383E: jnz     short loc_84384F
0x843840: test    ebp, ebp
0x843842: jz      short loc_84384F
0x843844: mov     edx, [ebp+0]
0x843847: mov     eax, [edx]
0x843849: push    1
0x84384B: mov     ecx, ebp
0x84384D: call    eax
0x84384F: mov     eax, [esp+20h+arg_0]
0x843853: test    eax, eax
0x843855: mov     ecx, [esp+20h+arg_8]
0x843859: mov     [ecx+4], eax
0x84385C: jz      short loc_843868
0x84385E: add     eax, 4
0x843861: push    eax; lpAddend
0x843862: call    dword ptr ds:0A28078h
0x843868: mov     edx, [esp+20h+arg_8]
0x84386C: push    edi
0x84386D: push    edx
0x84386E: mov     ecx, esi
0x843870: call    sub_848FA0
0x843875: mov     eax, [ebx+24h]
0x843878: mov     ebp, [eax+4]
0x84387B: push    0
0x84387D: push    edi
0x84387E: mov     ecx, esi
0x843880: mov     [esp+28h+arg_8], ebp
0x843884: call    sub_848FD0
0x843889: mov     ebp, [ebp+4]
0x84388C: cmp     ebp, eax
0x84388E: mov     [esp+20h+arg_0], eax
0x843892: jz      short loc_8438CE
0x843894: test    ebp, ebp
0x843896: jz      short loc_8438B9
0x843898: lea     ecx, [ebp+4]
0x84389B: push    ecx; lpAddend
0x84389C: call    dword ptr ds:0A2807Ch
0x8438A2: test    eax, eax
0x8438A4: jnz     short loc_8438B5
0x8438A6: test    ebp, ebp
0x8438A8: jz      short loc_8438B5
0x8438AA: mov     edx, [ebp+0]
0x8438AD: mov     eax, [edx]
0x8438AF: push    1
0x8438B1: mov     ecx, ebp
0x8438B3: call    eax
0x8438B5: mov     eax, [esp+20h+arg_0]
0x8438B9: test    eax, eax
0x8438BB: mov     ecx, [esp+20h+arg_8]
0x8438BF: mov     [ecx+4], eax
0x8438C2: jz      short loc_8438CE
0x8438C4: add     eax, 4
0x8438C7: push    eax; lpAddend
0x8438C8: call    dword ptr ds:0A28078h
0x8438CE: mov     edx, [esp+20h+arg_8]
0x8438D2: push    edi
0x8438D3: push    edx
0x8438D4: mov     ecx, esi
0x8438D6: call    sub_848FA0
0x8438DB: mov     eax, [ebx+24h]
0x8438DE: mov     ebp, [eax+0Ch]
0x8438E1: mov     edx, [edi]
0x8438E3: mov     eax, [edx+90h]
0x8438E9: push    0
0x8438EB: mov     ecx, edi
0x8438ED: mov     [esp+24h+arg_8], ebp
0x8438F1: call    eax
0x8438F3: mov     ebp, [ebp+4]
0x8438F6: cmp     ebp, eax
0x8438F8: mov     [esp+20h+arg_0], eax
0x8438FC: jz      short loc_843938
0x8438FE: test    ebp, ebp
0x843900: jz      short loc_843923
0x843902: lea     ecx, [ebp+4]
0x843905: push    ecx; lpAddend
0x843906: call    dword ptr ds:0A2807Ch
0x84390C: test    eax, eax
0x84390E: jnz     short loc_84391F
0x843910: test    ebp, ebp
0x843912: jz      short loc_84391F
0x843914: mov     edx, [ebp+0]
0x843917: mov     eax, [edx]
0x843919: push    1
0x84391B: mov     ecx, ebp
0x84391D: call    eax
0x84391F: mov     eax, [esp+20h+arg_0]
0x843923: test    eax, eax
0x843925: mov     ecx, [esp+20h+arg_8]
0x843929: mov     [ecx+4], eax
0x84392C: jz      short loc_843938
0x84392E: add     eax, 4
0x843931: push    eax; lpAddend
0x843932: call    dword ptr ds:0A28078h
0x843938: mov     edx, [esp+20h+arg_8]
0x84393C: push    edi
0x84393D: push    edx
0x84393E: mov     ecx, esi
0x843940: call    sub_848FA0
0x843945: mov     ecx, [ebx+24h]
0x843948: mov     edi, [ecx+14h]
0x84394B: mov     eax, ds:0B43108h
0x843950: mov     ebp, [edi+4]
0x843953: add     edi, 4
0x843956: cmp     ebp, eax
0x843958: mov     [esp+20h+arg_8], eax
0x84395C: jz      short loc_843993
0x84395E: test    ebp, ebp
0x843960: jz      short loc_843983
0x843962: lea     edx, [ebp+4]
0x843965: push    edx; lpAddend
0x843966: call    dword ptr ds:0A2807Ch
0x84396C: test    eax, eax
0x84396E: jnz     short loc_84397F
0x843970: test    ebp, ebp
0x843972: jz      short loc_84397F
0x843974: mov     eax, [ebp+0]
0x843977: mov     edx, [eax]
0x843979: push    1
0x84397B: mov     ecx, ebp
0x84397D: call    edx
0x84397F: mov     eax, [esp+20h+arg_8]
0x843983: test    eax, eax
0x843985: mov     [edi], eax
0x843987: jz      short loc_843993
0x843989: add     eax, 4
0x84398C: push    eax; lpAddend
0x84398D: call    dword ptr ds:0A28078h
0x843993: mov     eax, [ebx+24h]
0x843996: mov     ebp, [eax+18h]
0x843999: mov     eax, ds:0B4310Ch
0x84399E: mov     edi, [ebp+4]
0x8439A1: cmp     edi, eax
0x8439A3: mov     ecx, eax
0x8439A5: mov     [esp+20h+arg_8], ecx
0x8439A9: jz      short loc_8439E0
0x8439AB: test    edi, edi
0x8439AD: jz      short loc_8439CF
0x8439AF: lea     ecx, [edi+4]
0x8439B2: push    ecx; lpAddend
0x8439B3: call    dword ptr ds:0A2807Ch
0x8439B9: test    eax, eax
0x8439BB: jnz     short loc_8439CB
0x8439BD: test    edi, edi
0x8439BF: jz      short loc_8439CB
0x8439C1: mov     edx, [edi]
0x8439C3: mov     eax, [edx]
0x8439C5: push    1
0x8439C7: mov     ecx, edi
0x8439C9: call    eax
0x8439CB: mov     ecx, [esp+20h+arg_8]
0x8439CF: test    ecx, ecx
0x8439D1: mov     [ebp+4], ecx
0x8439D4: jz      short loc_8439E0
0x8439D6: add     ecx, 4
0x8439D9: push    ecx; lpAddend
0x8439DA: call    dword ptr ds:0A28078h
0x8439E0: mov     edi, 1
0x8439E5: add     [ebx+60h], edi
0x8439E8: mov     [esp+20h+arg_8], ebx
0x8439EC: mov     edx, [esi+38h]
0x8439EF: lea     ecx, [esp+20h+arg_8]
0x8439F3: push    ecx
0x8439F4: push    edx
0x8439F5: lea     ecx, [esi+40h]
0x8439F8: mov     [esp+28h+var_4], 0
0x843A00: call    sub_76CE40
0x843A05: or      eax, 0FFFFFFFFh
0x843A08: add     [ebx+60h], eax
0x843A0B: mov     [esp+20h+var_4], eax
0x843A0F: jnz     short loc_843A18
0x843A11: mov     ecx, ebx
0x843A13: call    sub_7604D0
0x843A18: add     [esi+38h], edi
0x843A1B: mov     ecx, [esp+20h+var_C]
0x843A1F: mov     large fs:0, ecx
0x843A26: pop     ecx
0x843A27: pop     edi
0x843A28: pop     esi
0x843A29: pop     ebp
0x843A2A: pop     ebx
0x843A2B: add     esp, 0Ch
0x843A2E: retn    10h
