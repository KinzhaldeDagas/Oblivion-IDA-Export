0x730CA0: sub     esp, 8
0x730CA3: push    edi
0x730CA4: mov     edi, [esp+0Ch+Size]
0x730CA8: cmp     dword ptr [edi+0D8h], 5000010h
0x730CB2: jnb     short loc_730D1F
0x730CB4: push    esi
0x730CB5: push    edi; Size
0x730CB6: call    sub_721610
0x730CBB: mov     eax, [edi+21Ch]
0x730CC1: push    1
0x730CC3: lea     ecx, [esp+14h+var_8]
0x730CC7: push    ecx
0x730CC8: push    4
0x730CCA: lea     edx, [esp+1Ch+Size]
0x730CCE: push    edx
0x730CCF: push    eax
0x730CD0: mov     eax, [eax+4]
0x730CD3: mov     [esp+24h+var_8], 4
0x730CDB: call    eax
0x730CDD: xor     esi, esi
0x730CDF: add     esp, 14h
0x730CE2: cmp     [esp+10h+Size], esi
0x730CE6: jbe     short loc_730D1E
0x730CE8: jmp     short loc_730CF0
0x730CEA: align 10h
0x730CF0: mov     eax, [edi+21Ch]
0x730CF6: push    1
0x730CF8: lea     ecx, [esp+14h+var_8]
0x730CFC: push    ecx
0x730CFD: push    4
0x730CFF: lea     edx, [esp+1Ch+var_4]
0x730D03: push    edx
0x730D04: push    eax
0x730D05: mov     eax, [eax+4]
0x730D08: mov     [esp+24h+var_8], 4
0x730D10: call    eax
0x730D12: add     esi, 1
0x730D15: add     esp, 14h
0x730D18: cmp     esi, [esp+10h+Size]
0x730D1C: jb      short loc_730CF0
0x730D1E: pop     esi
0x730D1F: pop     edi
0x730D20: add     esp, 8
0x730D23: retn    4
