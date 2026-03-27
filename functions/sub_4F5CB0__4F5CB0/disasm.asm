0x4F5CB0: fldz
0x4F5CB2: push    esi
0x4F5CB3: mov     esi, [esp+4+arg_0]
0x4F5CB7: test    esi, esi
0x4F5CB9: push    edi
0x4F5CBA: mov     edi, [esp+8+arg_C]
0x4F5CBE: fstp    qword ptr [edi]
0x4F5CC0: jz      short loc_4F5D12
0x4F5CC2: mov     eax, [esi]
0x4F5CC4: mov     edx, [eax+190h]
0x4F5CCA: mov     ecx, esi
0x4F5CCC: call    edx
0x4F5CCE: test    al, al
0x4F5CD0: jz      short loc_4F5D12
0x4F5CD2: mov     eax, [esi]
0x4F5CD4: mov     edx, [eax+18Ch]
0x4F5CDA: mov     ecx, esi
0x4F5CDC: call    edx
0x4F5CDE: cmp     eax, 4
0x4F5CE1: jz      short loc_4F5CEE
0x4F5CE3: mov     ecx, esi
0x4F5CE5: call    sub_5E3290
0x4F5CEA: test    al, al
0x4F5CEC: jz      short loc_4F5D12
0x4F5CEE: mov     eax, [esi]
0x4F5CF0: mov     edx, [eax+380h]
0x4F5CF6: mov     ecx, esi
0x4F5CF8: call    edx
0x4F5CFA: test    eax, eax
0x4F5CFC: jnz     short loc_4F5D0E
0x4F5CFE: mov     eax, [esi]
0x4F5D00: mov     edx, [eax+388h]
0x4F5D06: mov     ecx, esi
0x4F5D08: call    edx
0x4F5D0A: test    eax, eax
0x4F5D0C: jz      short loc_4F5D12
0x4F5D0E: fld1
0x4F5D10: fstp    qword ptr [edi]
0x4F5D12: pop     edi
0x4F5D13: mov     al, 1
0x4F5D15: pop     esi
0x4F5D16: retn
