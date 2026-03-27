0x78BAA0: push    ebp
0x78BAA1: mov     ebp, esp
0x78BAA3: push    0FFFFFFFFh
0x78BAA5: push    offset SEH_78BAA0
0x78BAAA: mov     eax, large fs:0
0x78BAB0: push    eax
0x78BAB1: sub     esp, 40h
0x78BAB4: push    ebx
0x78BAB5: push    esi
0x78BAB6: push    edi
0x78BAB7: mov     eax, ds:0B30AACh
0x78BABC: xor     eax, ebp
0x78BABE: push    eax
0x78BABF: lea     eax, [ebp+var_C]
0x78BAC2: mov     large fs:0, eax
0x78BAC8: mov     [ebp+var_10], esp
0x78BACB: mov     esi, ecx
0x78BACD: xor     ecx, ecx
0x78BACF: cmp     [esi+45h], cl
0x78BAD2: mov     [ebp+var_4], ecx
0x78BAD5: jnz     short loc_78BB23
0x78BAD7: mov     edi, [ebp+arg_0]
0x78BADA: cmp     edi, 2
0x78BADD: jnz     short loc_78BAF7
0x78BADF: mov     eax, [esi+10h]
0x78BAE2: cmp     dword ptr [eax+0Ch], 1
0x78BAE6: jnz     short loc_78BAF7
0x78BAE8: mov     eax, [esi+60h]
0x78BAEB: mov     [eax+12h], cl
0x78BAEE: push    ecx
0x78BAEF: mov     ecx, [esi+60h]
0x78BAF2: call    sub_794AE0
0x78BAF7: mov     ecx, [esi+10h]
0x78BAFA: mov     [ecx+0Ch], edi
0x78BAFD: mov     eax, [esi+60h]
0x78BB00: cmp     edi, 2
0x78BB03: setnz   dl
0x78BB06: mov     [eax+8], dl
0x78BB09: mov     ecx, [esi+60h]
0x78BB0C: mov     [ecx+14h], edi
0x78BB0F: mov     ecx, [ebp+var_C]
0x78BB12: mov     large fs:0, ecx
0x78BB19: pop     ecx
0x78BB1A: pop     edi
0x78BB1B: pop     esi
0x78BB1C: pop     ebx
0x78BB1D: mov     esp, ebp
0x78BB1F: pop     ebp
0x78BB20: retn    4
0x78BB23: push    42h ; 'B'; MaxCount
0x78BB25: push    offset aSetfrondwindme; "SetFrondWindMethod() has no effect afte"...
0x78BB2A: mov     ecx, offset dword_B2B614
0x78BB2F: call    sub_414500
0x78BB34: mov     ecx, [ebp+var_C]
0x78BB37: mov     large fs:0, ecx
0x78BB3E: pop     ecx
0x78BB3F: pop     edi
0x78BB40: pop     esi
0x78BB41: pop     ebx
0x78BB42: mov     esp, ebp
0x78BB44: pop     ebp
0x78BB45: retn    4
0x78BB48: mov     ecx, [ebp+var_14]
0x78BB4B: mov     edx, [ecx]
0x78BB4D: mov     eax, [edx+4]
0x78BB50: call    eax
0x78BB52: push    eax
0x78BB53: push    offset aCspeedtreert_7; "CSpeedTreeRT::SetFrondWindMethod"
0x78BB58: push    offset aSFailedS; "%s - failed [%s]"
0x78BB5D: lea     esi, [ebp+var_30]
0x78BB60: call    sub_7A54A0
0x78BB65: add     esp, 0Ch
0x78BB68: cmp     dword ptr [eax+18h], 10h
0x78BB6C: mov     byte ptr [ebp+var_4], 2
0x78BB70: jb      short loc_78BB77
0x78BB72: mov     eax, [eax+4]
0x78BB75: jmp     short loc_78BB7A
0x78BB77: add     eax, 4
0x78BB7A: push    eax; Src
0x78BB7B: call    sub_7895E0
0x78BB80: add     esp, 4
0x78BB83: lea     ecx, [ebp+var_30]
0x78BB86: call    sub_79AB00
0x78BB8B: mov     eax, offset loc_78BB91
0x78BB90: retn
0x78BB91: mov     ecx, [ebp+var_C]
0x78BB94: mov     large fs:0, ecx
0x78BB9B: pop     ecx
0x78BB9C: pop     edi
0x78BB9D: pop     esi
0x78BB9E: pop     ebx
0x78BB9F: mov     esp, ebp
0x78BBA1: pop     ebp
0x78BBA2: retn    4
0x78BBA5: push    offset aCspeedtreert_7; "CSpeedTreeRT::SetFrondWindMethod"
0x78BBAA: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BBAF: lea     esi, [ebp+var_4C]
0x78BBB2: call    sub_7A54A0
0x78BBB7: add     esp, 8
0x78BBBA: cmp     dword ptr [eax+18h], 10h
0x78BBBE: mov     byte ptr [ebp+var_4], 3
0x78BBC2: jb      short loc_78BBC9
0x78BBC4: mov     eax, [eax+4]
0x78BBC7: jmp     short loc_78BBCC
0x78BBC9: add     eax, 4
0x78BBCC: push    eax; Src
0x78BBCD: call    sub_7895E0
0x78BBD2: add     esp, 4
0x78BBD5: lea     ecx, [ebp+var_4C]
0x78BBD8: call    sub_79AB00
0x78BBDD: mov     eax, offset loc_78BB0F
0x78BBE2: retn
