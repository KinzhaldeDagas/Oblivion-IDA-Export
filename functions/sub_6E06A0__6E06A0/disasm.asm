0x6E06A0: push    esi
0x6E06A1: push    edi
0x6E06A2: mov     edi, [esp+8+arg_0]
0x6E06A6: push    edi
0x6E06A7: mov     esi, ecx
0x6E06A9: call    sub_716050
0x6E06AE: mov     eax, [edi+220h]
0x6E06B4: push    1
0x6E06B6: lea     ecx, [esp+0Ch+arg_0]
0x6E06BA: push    ecx
0x6E06BB: push    2
0x6E06BD: lea     edx, [esi+3Ch]
0x6E06C0: push    edx
0x6E06C1: push    eax
0x6E06C2: mov     eax, [eax+8]
0x6E06C5: mov     [esp+1Ch+arg_0], 2
0x6E06CD: call    eax
0x6E06CF: mov     edx, [edi]
0x6E06D1: mov     eax, [esi+40h]
0x6E06D4: mov     edx, [edx+2Ch]
0x6E06D7: add     esp, 14h
0x6E06DA: push    eax
0x6E06DB: mov     ecx, edi
0x6E06DD: call    edx
0x6E06DF: pop     edi
0x6E06E0: pop     esi
0x6E06E1: retn    4
