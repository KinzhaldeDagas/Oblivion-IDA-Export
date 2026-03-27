0x707AB0: push    esi
0x707AB1: push    edi
0x707AB2: mov     edi, [esp+8+arg_0]
0x707AB6: push    edi
0x707AB7: mov     esi, ecx
0x707AB9: call    sub_6FFE10
0x707ABE: cmp     dword ptr [esi+0A4h], 0
0x707AC5: jz      short loc_707AD6
0x707AC7: push    edi
0x707AC8: lea     eax, [esi+98h]
0x707ACE: push    eax
0x707ACF: mov     ecx, esi
0x707AD1: call    sub_707A60
0x707AD6: mov     ecx, [esi+0A8h]
0x707ADC: test    ecx, ecx
0x707ADE: jz      short loc_707AE8
0x707AE0: mov     edx, [ecx]
0x707AE2: mov     eax, [edx+38h]
0x707AE5: push    edi
0x707AE6: call    eax
0x707AE8: pop     edi
0x707AE9: pop     esi
0x707AEA: retn    4
