0x743970: push    esi
0x743971: mov     esi, [esp+4+arg_0]
0x743975: test    esi, esi
0x743977: jz      short loc_7439B3
0x743979: mov     eax, [esi+1Ch]
0x74397C: test    eax, eax
0x74397E: jz      short loc_7439B3
0x743980: mov     ecx, [esi+24h]
0x743983: test    ecx, ecx
0x743985: jz      short loc_7439B3
0x743987: mov     eax, [eax+2Ch]
0x74398A: test    eax, eax
0x74398C: jz      short loc_743998
0x74398E: push    eax
0x74398F: mov     eax, [esi+28h]
0x743992: push    eax
0x743993: call    ecx
0x743995: add     esp, 8
0x743998: mov     ecx, [esi+1Ch]
0x74399B: mov     edx, [esi+28h]
0x74399E: mov     eax, [esi+24h]
0x7439A1: push    ecx
0x7439A2: push    edx
0x7439A3: call    eax
0x7439A5: add     esp, 8
0x7439A8: mov     dword ptr [esi+1Ch], 0
0x7439AF: xor     eax, eax
0x7439B1: pop     esi
0x7439B2: retn
0x7439B3: mov     eax, 0FFFFFFFEh
0x7439B8: pop     esi
0x7439B9: retn
