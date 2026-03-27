0x65F6A0: push    esi
0x65F6A1: push    edi
0x65F6A2: mov     edi, [esp+8+arg_0]
0x65F6A6: mov     eax, [edi+18h]
0x65F6A9: mov     edx, [eax+18h]
0x65F6AC: lea     esi, [edi+18h]
0x65F6AF: mov     ecx, esi
0x65F6B1: call    edx
0x65F6B3: test    eax, eax
0x65F6B5: jz      short loc_65F6E1
0x65F6B7: mov     eax, [esi]
0x65F6B9: mov     edx, [eax+18h]
0x65F6BC: mov     ecx, esi
0x65F6BE: call    edx
0x65F6C0: cmp     eax, 4
0x65F6C3: jz      short loc_65F6E1
0x65F6C5: mov     eax, [esi]
0x65F6C7: mov     edx, [eax+18h]
0x65F6CA: mov     ecx, esi
0x65F6CC: call    edx
0x65F6CE: cmp     eax, 2
0x65F6D1: jz      short loc_65F6E1
0x65F6D3: mov     eax, [esi]
0x65F6D5: mov     edx, [eax+18h]
0x65F6D8: mov     ecx, esi
0x65F6DA: call    edx
0x65F6DC: cmp     eax, 3
0x65F6DF: jnz     short PlayerCharacter_SetKnownEffect___Done
0x65F6E1: mov     eax, edi
0x65F6E3: mov     edx, 200000h
