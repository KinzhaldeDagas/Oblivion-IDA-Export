0x6E2EA0: push    esi
0x6E2EA1: mov     esi, [esp+4+arg_0]
0x6E2EA5: push    edi
0x6E2EA6: push    esi
0x6E2EA7: mov     edi, ecx
0x6E2EA9: call    sub_75E460
0x6E2EAE: mov     eax, [esi+21Ch]
0x6E2EB4: mov     edx, [eax+4]
0x6E2EB7: push    1
0x6E2EB9: lea     ecx, [esp+0Ch+arg_0]
0x6E2EBD: push    ecx
0x6E2EBE: push    4
0x6E2EC0: add     edi, 48h ; 'H'
0x6E2EC3: push    edi
0x6E2EC4: push    eax
0x6E2EC5: mov     [esp+1Ch+arg_0], 4
0x6E2ECD: call    edx
0x6E2ECF: add     esp, 14h
0x6E2ED2: cmp     dword ptr [esi+0D8h], 0A010068h
0x6E2EDC: jnb     short loc_6E2EE5
0x6E2EDE: mov     ecx, esi
0x6E2EE0: call    sub_712A20
0x6E2EE5: pop     edi
0x6E2EE6: pop     esi
0x6E2EE7: retn    4
