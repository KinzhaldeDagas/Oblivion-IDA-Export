0x7916D0: sub     esp, 8
0x7916D3: push    esi
0x7916D4: mov     esi, ecx
0x7916D6: push    edi
0x7916D7: mov     edi, [esi+4]
0x7916DA: test    edi, edi
0x7916DC: jnz     short loc_7916E2
0x7916DE: xor     ecx, ecx
0x7916E0: jmp     short loc_7916F8
0x7916E2: mov     ecx, [esi+8]
0x7916E5: sub     ecx, edi
0x7916E7: mov     eax, 2AAAAAABh
0x7916EC: imul    ecx
0x7916EE: sar     edx, 2
0x7916F1: mov     ecx, edx
0x7916F3: shr     ecx, 1Fh
0x7916F6: add     ecx, edx
0x7916F8: test    edi, edi
0x7916FA: jz      short loc_791747
0x7916FC: mov     edx, [esi+0Ch]
0x7916FF: sub     edx, edi
0x791701: mov     eax, 2AAAAAABh
0x791706: imul    edx
0x791708: sar     edx, 2
0x79170B: mov     eax, edx
0x79170D: shr     eax, 1Fh
0x791710: add     eax, edx
0x791712: cmp     ecx, eax
0x791714: jnb     short loc_791747
0x791716: mov     ecx, [esp+10h+arg_0]
0x79171A: mov     edx, [esp+10h+arg_0]
0x79171E: mov     edi, [esi+8]
0x791721: mov     byte ptr [esp+10h+var_8], 0
0x791726: mov     eax, [esp+10h+var_8]
0x79172A: push    eax
0x79172B: push    ecx
0x79172C: push    esi
0x79172D: push    edx
0x79172E: push    1
0x791730: push    edi
0x791731: call    sub_7848E0
0x791736: add     esp, 18h
0x791739: add     edi, 18h
0x79173C: mov     [esi+8], edi
0x79173F: pop     edi
0x791740: pop     esi
0x791741: add     esp, 8
0x791744: retn    4
0x791747: push    ebx
0x791748: mov     ebx, [esi+8]
0x79174B: cmp     edi, ebx
0x79174D: jbe     short loc_791754
0x79174F: call    __invalid_parameter_noinfo
0x791754: mov     eax, [esp+14h+arg_0]
0x791758: push    eax
0x791759: push    ebx
0x79175A: push    esi
0x79175B: lea     ecx, [esp+20h+var_8]
0x79175F: push    ecx
0x791760: mov     ecx, esi
0x791762: call    sub_791510
0x791767: pop     ebx
0x791768: pop     edi
0x791769: pop     esi
0x79176A: add     esp, 8
0x79176D: retn    4
