0x6D9F90: sub     esp, 8
0x6D9F93: push    ebx
0x6D9F94: mov     ebx, [esp+0Ch+a2]
0x6D9F98: push    esi
0x6D9F99: push    edi
0x6D9F9A: push    ebx; a2
0x6D9F9B: mov     esi, ecx
0x6D9F9D: call    sub_7008A0
0x6D9FA2: mov     eax, [ebx+21Ch]
0x6D9FA8: push    1
0x6D9FAA: lea     ecx, [esp+18h+var_8]
0x6D9FAE: push    ecx
0x6D9FAF: mov     edi, 4
0x6D9FB4: push    edi
0x6D9FB5: lea     edx, [esp+20h+a2]
0x6D9FB9: push    edx
0x6D9FBA: push    eax
0x6D9FBB: mov     eax, [eax+4]
0x6D9FBE: mov     [esp+28h+var_8], edi
0x6D9FC2: call    eax
0x6D9FC4: add     esp, 14h
0x6D9FC7: cmp     [esp+14h+a2], 0
0x6D9FCC: jbe     short loc_6DA02E
0x6D9FCE: mov     eax, [ebx+21Ch]
0x6D9FD4: push    1
0x6D9FD6: lea     ecx, [esp+18h+var_8]
0x6D9FDA: push    ecx
0x6D9FDB: push    edi
0x6D9FDC: lea     edx, [esp+20h+var_4]
0x6D9FE0: push    edx
0x6D9FE1: push    eax
0x6D9FE2: mov     eax, [eax+4]
0x6D9FE5: mov     [esp+28h+var_8], edi
0x6D9FE9: call    eax
0x6D9FEB: mov     edi, [esp+28h+var_4]
0x6D9FEF: mov     edx, [esp+28h+a2]
0x6D9FF3: mov     cl, ds:byte_B3D3EE[edi]
0x6D9FF9: push    edx
0x6D9FFA: mov     [esi+14h], cl
0x6D9FFD: mov     eax, ds:0B3D0A0h[edi*4]
0x6DA004: push    ebx
0x6DA005: call    eax ; dword_B3D0A0
0x6DA007: mov     ecx, [esp+30h+a2]
0x6DA00B: mov     edx, ds:0B3D428h[edi*4]
0x6DA012: mov     ebx, eax
0x6DA014: movzx   eax, byte ptr [esi+14h]
0x6DA018: push    eax
0x6DA019: push    ecx
0x6DA01A: push    ebx
0x6DA01B: call    edx
0x6DA01D: mov     eax, [esp+3Ch+a2]
0x6DA021: add     esp, 28h
0x6DA024: push    edi
0x6DA025: push    eax
0x6DA026: push    ebx
0x6DA027: mov     ecx, esi
0x6DA029: call    sub_6D9E40
0x6DA02E: pop     edi
0x6DA02F: pop     esi
0x6DA030: pop     ebx
0x6DA031: add     esp, 8
0x6DA034: retn    4
