0x65AE80: push    esi
0x65AE81: mov     esi, ecx
0x65AE83: cmp     dword ptr [esi+58h], 0
0x65AE87: jz      loc_65AF15
0x65AE8D: mov     ecx, [esi+58h]
0x65AE90: mov     eax, [ecx]
0x65AE92: mov     edx, [eax+46Ch]
0x65AE98: call    edx
0x65AE9A: test    eax, eax
0x65AE9C: jz      short loc_65AF15
0x65AE9E: mov     ecx, [esi+58h]
0x65AEA1: mov     eax, [ecx]
0x65AEA3: mov     edx, [eax+46Ch]
0x65AEA9: call    edx
0x65AEAB: fld     dword ptr [eax+18h]
0x65AEAE: fstp    dword ptr ds:0B3BAB8h
0x65AEB4: pop     esi
0x65AEB5: fld     dword ptr [eax+1Ch]
0x65AEB8: fstp    dword ptr ds:0B3BABCh
0x65AEBE: fld     dword ptr [eax+20h]
0x65AEC1: fstp    dword ptr ds:0B3BAC0h
0x65AEC7: fld     dword ptr [eax+0Ch]
0x65AECA: fadd    dword ptr ds:0B3BAB8h
0x65AED0: fstp    dword ptr ds:0B3BAB8h
0x65AED6: mov     ecx, ds:0B3BAB8h
0x65AEDC: fld     dword ptr [eax+10h]
0x65AEDF: fadd    dword ptr ds:0B3BABCh
0x65AEE5: fstp    dword ptr ds:0B3BABCh
0x65AEEB: fld     dword ptr [eax+14h]
0x65AEEE: mov     eax, [esp+arg_0]
0x65AEF2: fadd    dword ptr ds:0B3BAC0h
0x65AEF8: fstp    dword ptr ds:0B3BAC0h
0x65AEFE: mov     [eax], ecx
0x65AF00: mov     edx, ds:0B3BABCh
0x65AF06: mov     [eax+4], edx
0x65AF09: mov     ecx, ds:0B3BAC0h
0x65AF0F: mov     [eax+8], ecx
0x65AF12: retn    4
0x65AF15: push    edi
0x65AF16: mov     edi, [esp+8+arg_0]
0x65AF1A: push    edi
0x65AF1B: mov     ecx, esi
0x65AF1D: call    sub_4DC410
0x65AF22: mov     eax, edi
0x65AF24: pop     edi
0x65AF25: pop     esi
0x65AF26: retn    4
