0x9601C0: push    esi
0x9601C1: mov     esi, [esp+4+arg_0]
0x9601C5: mov     eax, [esi]
0x9601C7: mov     edx, [eax+0Ch]
0x9601CA: push    edi
0x9601CB: mov     edi, ecx
0x9601CD: mov     ecx, esi
0x9601CF: call    edx
0x9601D1: cmp     eax, 2
0x9601D4: jnz     short loc_9601F0
0x9601D6: add     edi, 20h ; ' '
0x9601D9: push    edi
0x9601DA: lea     ecx, [esi+20h]
0x9601DD: call    sub_96F0A0
0x9601E2: test    al, al
0x9601E4: jz      short loc_9601F0
0x9601E6: pop     edi
0x9601E7: mov     eax, 1
0x9601EC: pop     esi
0x9601ED: retn    4
0x9601F0: pop     edi
0x9601F1: xor     eax, eax
0x9601F3: pop     esi
0x9601F4: retn    4
