0x6E5CB0: push    esi
0x6E5CB1: push    edi
0x6E5CB2: mov     edi, [esp+8+arg_0]
0x6E5CB6: push    edi
0x6E5CB7: mov     esi, ecx
0x6E5CB9: call    sub_6E4EF0
0x6E5CBE: mov     eax, [edi+220h]
0x6E5CC4: mov     edx, [eax+8]
0x6E5CC7: push    1
0x6E5CC9: lea     ecx, [esp+0Ch+arg_0]
0x6E5CCD: push    ecx
0x6E5CCE: push    18h
0x6E5CD0: add     esi, 48h ; 'H'
0x6E5CD3: push    esi
0x6E5CD4: push    eax
0x6E5CD5: mov     [esp+1Ch+arg_0], 4
0x6E5CDD: call    edx
0x6E5CDF: add     esp, 14h
0x6E5CE2: pop     edi
0x6E5CE3: pop     esi
0x6E5CE4: retn    4
