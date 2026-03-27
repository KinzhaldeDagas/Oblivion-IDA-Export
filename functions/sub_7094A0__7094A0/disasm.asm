0x7094A0: push    esi
0x7094A1: push    edi
0x7094A2: mov     edi, [esp+8+arg_0]
0x7094A6: mov     eax, [edi+220h]
0x7094AC: mov     edx, [eax+8]
0x7094AF: mov     esi, ecx
0x7094B1: push    1
0x7094B3: lea     ecx, [esp+0Ch+arg_0]
0x7094B7: push    ecx
0x7094B8: push    4
0x7094BA: push    esi
0x7094BB: push    eax
0x7094BC: mov     [esp+1Ch+arg_0], 4
0x7094C4: call    edx
0x7094C6: mov     eax, [edi+220h]
0x7094CC: push    1
0x7094CE: lea     ecx, [esp+20h+arg_0]
0x7094D2: push    ecx
0x7094D3: push    4
0x7094D5: lea     edx, [esi+4]
0x7094D8: push    edx
0x7094D9: push    eax
0x7094DA: mov     eax, [eax+8]
0x7094DD: mov     [esp+30h+arg_0], 4
0x7094E5: call    eax
0x7094E7: mov     edi, [edi+220h]
0x7094ED: mov     edx, [edi+8]
0x7094F0: push    1
0x7094F2: lea     ecx, [esp+34h+arg_0]
0x7094F6: push    ecx
0x7094F7: push    4
0x7094F9: add     esi, 8
0x7094FC: push    esi
0x7094FD: push    edi
0x7094FE: mov     [esp+44h+arg_0], 4
0x709506: call    edx
0x709508: add     esp, 3Ch
0x70950B: pop     edi
0x70950C: pop     esi
0x70950D: retn    4
