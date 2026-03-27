0x8E7CB0: push    esi
0x8E7CB1: mov     esi, ecx
0x8E7CB3: mov     ecx, [esi+18h]
0x8E7CB6: test    ecx, ecx
0x8E7CB8: mov     dword ptr [esi], offset off_A9A77C
0x8E7CBE: jz      short loc_8E7CCC
0x8E7CC0: call    sub_8BC730
0x8E7CC5: mov     dword ptr [esi+18h], 0
0x8E7CCC: mov     ecx, [esi+1Ch]
0x8E7CCF: test    ecx, ecx
0x8E7CD1: jz      short loc_8E7CDF
0x8E7CD3: call    sub_8BC730
0x8E7CD8: mov     dword ptr [esi+1Ch], 0
0x8E7CDF: test    [esp+4+arg_0], 1
0x8E7CE4: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E7CEA: jz      short loc_8E7CFF
0x8E7CEC: movzx   edx, word ptr [esi+4]
0x8E7CF0: mov     ecx, ds:0BA7D98h
0x8E7CF6: mov     eax, [ecx]
0x8E7CF8: push    26h ; '&'
0x8E7CFA: push    edx
0x8E7CFB: push    esi
0x8E7CFC: call    dword ptr [eax+14h]
0x8E7CFF: mov     eax, esi
0x8E7D01: pop     esi
0x8E7D02: retn    4
