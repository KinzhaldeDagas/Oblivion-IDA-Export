0x403C90: sub     esp, 18h
0x403C93: cmp     dword ptr [ecx+28h], 0
0x403C97: jz      short loc_403CE0
0x403C99: mov     eax, [ecx+28h]
0x403C9C: push    0
0x403C9E: lea     edx, [esp+1Ch+var_18]
0x403CA2: push    edx
0x403CA3: lea     edx, [esp+20h+var_14]
0x403CA7: push    edx
0x403CA8: mov     [esp+24h+var_18], 1
0x403CB0: mov     ecx, [eax]
0x403CB2: push    14h
0x403CB4: push    eax
0x403CB5: mov     eax, [ecx+28h]
0x403CB8: call    eax
0x403CBA: test    eax, eax
0x403CBC: jnz     short loc_403CE0
0x403CBE: cmp     [esp+18h+var_18], eax
0x403CC1: jz      short loc_403CE0
0x403CC3: mov     eax, [esp+18h+var_14.dwData]
0x403CC7: mov     ecx, [esp+18h+arg_0]
0x403CCB: mov     edx, [esp+18h+var_14.dwOfs]
0x403CCF: and     al, 80h; dwData & 0x80 -> dwData == 0x80
0x403CD1: neg     al; - (dwData & 0x80); Set CF = (dwData & 0x80) (1 if dwData 0x80 or a composition)
0x403CD3: mov     [ecx], edx
0x403CD5: sbb     eax, eax; res = eax - eax - CF -> res = -CF
0x403CD7: add     eax, 2; -CF +2
0x403CDA: add     esp, 18h
0x403CDD: retn    4
0x403CE0: xor     eax, eax
0x403CE2: add     esp, 18h
0x403CE5: retn    4
