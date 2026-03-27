0x6D8F60: sub     esp, 8
0x6D8F63: push    ebx
0x6D8F64: mov     ebx, [esp+0Ch+a2]
0x6D8F68: push    esi
0x6D8F69: push    edi
0x6D8F6A: push    ebx; a2
0x6D8F6B: mov     esi, ecx
0x6D8F6D: call    sub_7008A0
0x6D8F72: mov     eax, [ebx+21Ch]
0x6D8F78: push    1
0x6D8F7A: lea     ecx, [esp+18h+var_8]
0x6D8F7E: push    ecx
0x6D8F7F: mov     edi, 4
0x6D8F84: push    edi
0x6D8F85: lea     edx, [esp+20h+a2]
0x6D8F89: push    edx
0x6D8F8A: push    eax
0x6D8F8B: mov     eax, [eax+4]
0x6D8F8E: mov     [esp+28h+var_8], edi
0x6D8F92: call    eax
0x6D8F94: add     esp, 14h
0x6D8F97: cmp     [esp+14h+a2], 0
0x6D8F9C: jbe     short loc_6D8FFE
0x6D8F9E: mov     eax, [ebx+21Ch]
0x6D8FA4: push    1
0x6D8FA6: lea     ecx, [esp+18h+var_8]
0x6D8FAA: push    ecx
0x6D8FAB: push    edi
0x6D8FAC: lea     edx, [esp+20h+var_4]
0x6D8FB0: push    edx
0x6D8FB1: push    eax
0x6D8FB2: mov     eax, [eax+4]
0x6D8FB5: mov     [esp+28h+var_8], edi
0x6D8FB9: call    eax
0x6D8FBB: mov     edi, [esp+28h+var_4]
0x6D8FBF: mov     edx, [esp+28h+a2]
0x6D8FC3: mov     cl, ds:byte_B3D3F4[edi]
0x6D8FC9: push    edx
0x6D8FCA: mov     [esi+14h], cl
0x6D8FCD: mov     eax, ds:0B3D0B8h[edi*4]
0x6D8FD4: push    ebx
0x6D8FD5: call    eax ; dword_B3D0B8
0x6D8FD7: mov     ecx, [esp+30h+a2]
0x6D8FDB: mov     edx, ds:0B3D440h[edi*4]
0x6D8FE2: mov     ebx, eax
0x6D8FE4: movzx   eax, byte ptr [esi+14h]
0x6D8FE8: push    eax
0x6D8FE9: push    ecx
0x6D8FEA: push    ebx
0x6D8FEB: call    edx ; dword_B3D440
0x6D8FED: mov     eax, [esp+3Ch+a2]
0x6D8FF1: add     esp, 28h
0x6D8FF4: push    edi
0x6D8FF5: push    eax
0x6D8FF6: push    ebx
0x6D8FF7: mov     ecx, esi
0x6D8FF9: call    sub_6D8E10
0x6D8FFE: pop     edi
0x6D8FFF: pop     esi
0x6D9000: pop     ebx
0x6D9001: add     esp, 8
0x6D9004: retn    4
