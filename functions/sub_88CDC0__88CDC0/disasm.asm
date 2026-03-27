0x88CDC0: sub     esp, 1Ch
0x88CDC3: push    ebx
0x88CDC4: push    esi
0x88CDC5: mov     esi, [esp+24h+arg_0]
0x88CDC9: xor     bl, bl
0x88CDCB: test    esi, esi
0x88CDCD: jz      short loc_88CE1C
0x88CDCF: cmp     [esp+24h+arg_8], bl
0x88CDD3: jnz     short loc_88CDEA
0x88CDD5: push    esi
0x88CDD6: call    sub_6FA970
0x88CDDB: add     esp, 4
0x88CDDE: test    eax, eax
0x88CDE0: jz      short loc_88CE1C
0x88CDE2: mov     eax, [eax+0Ch]
0x88CDE5: and     eax, 2
0x88CDE8: jz      short loc_88CE1C
0x88CDEA: mov     al, [esp+24h+arg_4]
0x88CDEE: mov     [esp+24h+var_18], al
0x88CDF2: mov     eax, ds:0B2E308h
0x88CDF7: test    eax, eax
0x88CDF9: mov     bl, 1
0x88CDFB: mov     [esp+24h+var_1C], 0
0x88CE03: mov     [esp+24h+var_14], 2
0x88CE0B: jz      short loc_88CE1C
0x88CE0D: push    eax
0x88CE0E: lea     ecx, [esp+28h+var_1C]
0x88CE12: push    ecx
0x88CE13: push    esi
0x88CE14: call    sub_88A7D0
0x88CE19: add     esp, 0Ch
0x88CE1C: pop     esi
0x88CE1D: mov     al, bl
0x88CE1F: pop     ebx
0x88CE20: add     esp, 1Ch
0x88CE23: retn
