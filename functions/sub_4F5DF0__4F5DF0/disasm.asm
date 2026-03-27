0x4F5DF0: fldz
0x4F5DF2: push    esi
0x4F5DF3: mov     esi, [esp+4+arg_0]
0x4F5DF7: mov     eax, [esi]
0x4F5DF9: mov     edx, [eax+190h]
0x4F5DFF: push    edi
0x4F5E00: mov     edi, [esp+8+arg_C]
0x4F5E04: mov     ecx, esi
0x4F5E06: fstp    qword ptr [edi]
0x4F5E08: call    edx
0x4F5E0A: test    al, al
0x4F5E0C: jz      short loc_4F5E22
0x4F5E0E: mov     ecx, esi
0x4F5E10: call    Actor__IsEssential
0x4F5E15: test    al, al
0x4F5E17: mov     al, 1
0x4F5E19: jz      short loc_4F5E24
0x4F5E1B: fld1
0x4F5E1D: fstp    qword ptr [edi]
0x4F5E1F: pop     edi
0x4F5E20: pop     esi
0x4F5E21: retn
0x4F5E22: mov     al, 1
0x4F5E24: pop     edi
0x4F5E25: pop     esi
0x4F5E26: retn
