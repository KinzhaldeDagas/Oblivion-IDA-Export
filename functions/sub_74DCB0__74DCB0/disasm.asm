0x74DCB0: push    ecx
0x74DCB1: push    ebx
0x74DCB2: push    esi
0x74DCB3: push    edi
0x74DCB4: mov     edi, [esp+10h+arg_0]
0x74DCB8: push    edi
0x74DCB9: mov     ebx, ecx
0x74DCBB: call    sub_752E40
0x74DCC0: movzx   eax, word ptr [ebx+22h]
0x74DCC4: push    1
0x74DCC6: lea     ecx, [esp+14h+var_4]
0x74DCCA: push    ecx
0x74DCCB: mov     [esp+18h+arg_0], eax
0x74DCCF: mov     eax, [edi+220h]
0x74DCD5: push    4
0x74DCD7: lea     edx, [esp+1Ch+arg_0]
0x74DCDB: push    edx
0x74DCDC: push    eax
0x74DCDD: mov     eax, [eax+8]
0x74DCE0: mov     [esp+24h+var_4], 4
0x74DCE8: call    eax
0x74DCEA: xor     esi, esi
0x74DCEC: add     esp, 14h
0x74DCEF: cmp     [esp+10h+arg_0], esi
0x74DCF3: jbe     short loc_74DD0E
0x74DCF5: mov     eax, [ebx+1Ch]
0x74DCF8: mov     ecx, [eax+esi*4]
0x74DCFB: mov     edx, [edi]
0x74DCFD: mov     edx, [edx+2Ch]
0x74DD00: push    ecx
0x74DD01: mov     ecx, edi
0x74DD03: call    edx
0x74DD05: add     esi, 1
0x74DD08: cmp     esi, [esp+10h+arg_0]
0x74DD0C: jb      short loc_74DCF5
0x74DD0E: pop     edi
0x74DD0F: pop     esi
0x74DD10: pop     ebx
0x74DD11: pop     ecx
0x74DD12: retn    4
