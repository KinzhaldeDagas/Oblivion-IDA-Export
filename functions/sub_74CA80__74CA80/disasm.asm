0x74CA80: push    ebx
0x74CA81: mov     ebx, [esp+4+arg_0]
0x74CA85: push    esi
0x74CA86: push    edi
0x74CA87: push    ebx
0x74CA88: mov     esi, ecx
0x74CA8A: call    sub_74E220
0x74CA8F: mov     ecx, ebx
0x74CA91: call    sub_7124D0
0x74CA96: mov     edi, eax
0x74CA98: test    edi, edi
0x74CA9A: jz      short loc_74CAC4
0x74CA9C: push    edi
0x74CA9D: lea     ecx, [esi+50h]
0x74CAA0: call    sub_74A8C0
0x74CAA5: test    edi, edi
0x74CAA7: jbe     short loc_74CAC4
0x74CAA9: lea     esp, [esp+0]
0x74CAB0: mov     ecx, ebx
0x74CAB2: call    sub_7124A0
0x74CAB7: push    eax
0x74CAB8: mov     ecx, esi
0x74CABA: call    sub_74C910
0x74CABF: sub     edi, 1
0x74CAC2: jnz     short loc_74CAB0
0x74CAC4: pop     edi
0x74CAC5: pop     esi
0x74CAC6: pop     ebx
0x74CAC7: retn    4
