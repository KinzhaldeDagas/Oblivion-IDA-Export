0x8C07C0: push    esi
0x8C07C1: mov     esi, [esp+4+arg_0]
0x8C07C5: push    edi
0x8C07C6: push    esi
0x8C07C7: mov     edi, ecx
0x8C07C9: call    sub_8A0C80
0x8C07CE: mov     edi, [edi+4]
0x8C07D1: mov     eax, [esi+220h]
0x8C07D7: push    1
0x8C07D9: lea     ecx, [esp+0Ch+arg_0]
0x8C07DD: push    ecx
0x8C07DE: push    10h
0x8C07E0: lea     edx, [edi+10h]
0x8C07E3: push    edx
0x8C07E4: push    eax
0x8C07E5: mov     eax, [eax+8]
0x8C07E8: mov     [esp+1Ch+arg_0], 10h
0x8C07F0: call    eax
0x8C07F2: mov     eax, [esi+220h]
0x8C07F8: push    1
0x8C07FA: lea     ecx, [esp+20h+arg_0]
0x8C07FE: push    ecx
0x8C07FF: push    10h
0x8C0801: lea     edx, [edi+20h]
0x8C0804: push    edx
0x8C0805: push    eax
0x8C0806: mov     eax, [eax+8]
0x8C0809: mov     [esp+30h+arg_0], 10h
0x8C0811: call    eax
0x8C0813: mov     esi, [esi+220h]
0x8C0819: mov     edx, [esi+8]
0x8C081C: push    1
0x8C081E: lea     ecx, [esp+34h+arg_0]
0x8C0822: push    ecx
0x8C0823: push    4
0x8C0825: add     edi, 0Ch
0x8C0828: push    edi
0x8C0829: push    esi
0x8C082A: mov     [esp+44h+arg_0], 4
0x8C0832: call    edx
0x8C0834: add     esp, 3Ch
0x8C0837: pop     edi
0x8C0838: pop     esi
0x8C0839: retn    4
