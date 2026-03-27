0x49A8B0: push    ecx
0x49A8B1: push    ebx
0x49A8B2: xor     ebx, ebx
0x49A8B4: cmp     byte ptr [esp+8+arg_0], bl
0x49A8B8: push    ebp
0x49A8B9: mov     ebp, ecx
0x49A8BB: mov     ds:0B0703Ch, bl
0x49A8C1: jz      loc_49AC49
0x49A8C7: push    3
0x49A8C9: call    nullsub_returnTrue_0arg
0x49A8CE: mov     eax, [ebp+4]
0x49A8D1: add     esp, 4
0x49A8D4: cmp     eax, ebx
0x49A8D6: jz      short loc_49A8E4
0x49A8D8: mov     ecx, ds:0B42F50h; this
0x49A8DE: push    eax; a2
0x49A8DF: call    sub_7C1EE0
0x49A8E4: mov     eax, [ebp+8]
0x49A8E7: cmp     eax, ebx
0x49A8E9: jz      short loc_49A8F7
0x49A8EB: mov     ecx, ds:0B42F50h; this
0x49A8F1: push    eax; a2
0x49A8F2: call    sub_7C1EE0
0x49A8F7: mov     eax, [ebp+10h]
0x49A8FA: cmp     eax, ebx
0x49A8FC: jz      short loc_49A90A
0x49A8FE: mov     ecx, ds:0B42F50h; this
0x49A904: push    eax; a2
0x49A905: call    sub_7C1EE0
0x49A90A: mov     eax, [ebp+14h]
0x49A90D: cmp     eax, ebx
0x49A90F: jz      short loc_49A91D
0x49A911: mov     ecx, ds:0B42F50h; this
0x49A917: push    eax; a2
0x49A918: call    sub_7C1EE0
0x49A91D: push    esi
0x49A91E: mov     esi, [ebp+4]
0x49A921: cmp     esi, ebx
0x49A923: push    edi
0x49A924: mov     edi, ds:0A2807Ch
0x49A92A: jz      short loc_49A947
0x49A92C: lea     eax, [esi+4]
0x49A92F: push    eax; lpAddend
0x49A930: call    edi ; InterlockedDecrement
0x49A932: test    eax, eax
0x49A934: jnz     short loc_49A944
0x49A936: cmp     esi, ebx
0x49A938: jz      short loc_49A944
0x49A93A: mov     edx, [esi]
0x49A93C: mov     eax, [edx]
0x49A93E: push    1
0x49A940: mov     ecx, esi
0x49A942: call    eax
0x49A944: mov     [ebp+4], ebx
0x49A947: mov     esi, [ebp+8]
0x49A94A: cmp     esi, ebx
0x49A94C: jz      short loc_49A969
0x49A94E: lea     ecx, [esi+4]
0x49A951: push    ecx; lpAddend
0x49A952: call    edi ; InterlockedDecrement
0x49A954: test    eax, eax
0x49A956: jnz     short loc_49A966
0x49A958: cmp     esi, ebx
0x49A95A: jz      short loc_49A966
0x49A95C: mov     edx, [esi]
0x49A95E: mov     eax, [edx]
0x49A960: push    1
0x49A962: mov     ecx, esi
0x49A964: call    eax
0x49A966: mov     [ebp+8], ebx
0x49A969: mov     esi, [ebp+10h]
0x49A96C: cmp     esi, ebx
0x49A96E: jz      short loc_49A98B
0x49A970: lea     ecx, [esi+4]
0x49A973: push    ecx; lpAddend
0x49A974: call    edi ; InterlockedDecrement
0x49A976: test    eax, eax
0x49A978: jnz     short loc_49A988
0x49A97A: cmp     esi, ebx
0x49A97C: jz      short loc_49A988
0x49A97E: mov     edx, [esi]
0x49A980: mov     eax, [edx]
0x49A982: push    1
0x49A984: mov     ecx, esi
0x49A986: call    eax
0x49A988: mov     [ebp+10h], ebx
0x49A98B: mov     esi, [ebp+14h]
0x49A98E: cmp     esi, ebx
0x49A990: jz      short loc_49A9AD
0x49A992: lea     ecx, [esi+4]
0x49A995: push    ecx; lpAddend
0x49A996: call    edi ; InterlockedDecrement
0x49A998: test    eax, eax
0x49A99A: jnz     short loc_49A9AA
0x49A99C: cmp     esi, ebx
0x49A99E: jz      short loc_49A9AA
0x49A9A0: mov     edx, [esi]
0x49A9A2: mov     eax, [edx]
0x49A9A4: push    1
0x49A9A6: mov     ecx, esi
0x49A9A8: call    eax
0x49A9AA: mov     [ebp+14h], ebx
0x49A9AD: mov     eax, ds:0B45DCCh
0x49A9B2: cmp     eax, ebx
0x49A9B4: jz      loc_49AA4E
0x49A9BA: mov     esi, [eax+104h]
0x49A9C0: cmp     esi, ebx
0x49A9C2: lea     edi, [eax+104h]
0x49A9C8: jz      short loc_49A9ED
0x49A9CA: lea     ecx, [esi+4]
0x49A9CD: push    ecx; lpAddend
0x49A9CE: call    dword ptr ds:0A2807Ch
0x49A9D4: test    eax, eax
0x49A9D6: jnz     short loc_49A9E6
0x49A9D8: cmp     esi, ebx
0x49A9DA: jz      short loc_49A9E6
0x49A9DC: mov     edx, [esi]
0x49A9DE: mov     eax, [edx]
0x49A9E0: push    1
0x49A9E2: mov     ecx, esi
0x49A9E4: call    eax
0x49A9E6: mov     [edi], ebx
0x49A9E8: mov     eax, ds:0B45DCCh
0x49A9ED: mov     esi, [eax+108h]
0x49A9F3: cmp     esi, ebx
0x49A9F5: lea     edi, [eax+108h]
0x49A9FB: jz      short loc_49AA20
0x49A9FD: lea     ecx, [esi+4]
0x49AA00: push    ecx; lpAddend
0x49AA01: call    dword ptr ds:0A2807Ch
0x49AA07: test    eax, eax
0x49AA09: jnz     short loc_49AA19
0x49AA0B: cmp     esi, ebx
0x49AA0D: jz      short loc_49AA19
0x49AA0F: mov     edx, [esi]
0x49AA11: mov     eax, [edx]
0x49AA13: push    1
0x49AA15: mov     ecx, esi
0x49AA17: call    eax
0x49AA19: mov     [edi], ebx
0x49AA1B: mov     eax, ds:0B45DCCh
0x49AA20: mov     esi, [eax+114h]
0x49AA26: cmp     esi, ebx
0x49AA28: lea     edi, [eax+114h]
0x49AA2E: jz      short loc_49AA4E
0x49AA30: lea     ecx, [esi+4]
0x49AA33: push    ecx; lpAddend
0x49AA34: call    dword ptr ds:0A2807Ch
0x49AA3A: test    eax, eax
0x49AA3C: jnz     short loc_49AA4C
0x49AA3E: cmp     esi, ebx
0x49AA40: jz      short loc_49AA4C
0x49AA42: mov     edx, [esi]
0x49AA44: mov     eax, [edx]
0x49AA46: push    1
0x49AA48: mov     ecx, esi
0x49AA4A: call    eax
0x49AA4C: mov     [edi], ebx
0x49AA4E: mov     ecx, ds:0B45FE0h
0x49AA54: cmp     ecx, ebx
0x49AA56: jz      short loc_49AA5D
0x49AA58: call    sub_7E0CB0
0x49AA5D: mov     ecx, ds:0B45F54h
0x49AA63: cmp     ecx, ebx
0x49AA65: jz      short loc_49AA6C
0x49AA67: call    sub_7DE0B0
0x49AA6C: mov     eax, [ebp+34h]
0x49AA6F: cmp     eax, ebx
0x49AA71: mov     [esp+14h+arg_0], eax
0x49AA75: jz      loc_49AB71
0x49AA7B: jmp     short loc_49AA80
0x49AA7D: align 10h
0x49AA80: test    eax, eax
0x49AA82: jz      loc_49AC51
0x49AA88: mov     esi, [eax+8]
0x49AA8B: mov     ebx, [eax]
0x49AA8D: mov     eax, [esi+8]
0x49AA90: test    eax, eax
0x49AA92: jz      short loc_49AAA0
0x49AA94: mov     ecx, ds:0B42F50h; this
0x49AA9A: push    eax; a2
0x49AA9B: call    sub_7C1EE0
0x49AAA0: mov     eax, [esi+0Ch]
0x49AAA3: test    eax, eax
0x49AAA5: jz      short loc_49AAB3
0x49AAA7: mov     ecx, ds:0B42F50h; this
0x49AAAD: push    eax; a2
0x49AAAE: call    sub_7C1EE0
0x49AAB3: mov     edi, [esi+8]
0x49AAB6: test    edi, edi
0x49AAB8: jz      short loc_49AADD
0x49AABA: lea     ecx, [edi+4]
0x49AABD: push    ecx; lpAddend
0x49AABE: call    dword ptr ds:0A2807Ch
0x49AAC4: test    eax, eax
0x49AAC6: jnz     short loc_49AAD6
0x49AAC8: test    edi, edi
0x49AACA: jz      short loc_49AAD6
0x49AACC: mov     edx, [edi]
0x49AACE: mov     eax, [edx]
0x49AAD0: push    1
0x49AAD2: mov     ecx, edi
0x49AAD4: call    eax
0x49AAD6: mov     dword ptr [esi+8], 0
0x49AADD: mov     edi, [esi+0Ch]
0x49AAE0: test    edi, edi
0x49AAE2: jz      short loc_49AB07
0x49AAE4: lea     ecx, [edi+4]
0x49AAE7: push    ecx; lpAddend
0x49AAE8: call    dword ptr ds:0A2807Ch
0x49AAEE: test    eax, eax
0x49AAF0: jnz     short loc_49AB00
0x49AAF2: test    edi, edi
0x49AAF4: jz      short loc_49AB00
0x49AAF6: mov     edx, [edi]
0x49AAF8: mov     eax, [edx]
0x49AAFA: push    1
0x49AAFC: mov     ecx, edi
0x49AAFE: call    eax
0x49AB00: mov     dword ptr [esi+0Ch], 0
0x49AB07: lea     ecx, [esp+14h+arg_0]
0x49AB0B: push    ecx
0x49AB0C: lea     ecx, [ebp+30h]
0x49AB0F: call    sub_7AA860
0x49AB14: mov     eax, [esi+4]
0x49AB17: mov     ecx, ds:0B35230h
0x49AB1D: mov     edx, [ecx]
0x49AB1F: mov     edx, [edx+88h]
0x49AB25: push    eax
0x49AB26: lea     eax, [esp+18h+var_4]
0x49AB2A: push    eax
0x49AB2B: call    edx
0x49AB2D: mov     eax, [esp+14h+var_4]
0x49AB31: test    eax, eax
0x49AB33: jz      short loc_49AB53
0x49AB35: mov     edi, eax
0x49AB37: add     eax, 4
0x49AB3A: push    eax; lpAddend
0x49AB3B: call    dword ptr ds:0A2807Ch
0x49AB41: test    eax, eax
0x49AB43: jnz     short loc_49AB53
0x49AB45: test    edi, edi
0x49AB47: jz      short loc_49AB53
0x49AB49: mov     eax, [edi]
0x49AB4B: mov     edx, [eax]
0x49AB4D: push    1
0x49AB4F: mov     ecx, edi
0x49AB51: call    edx
0x49AB53: mov     ecx, esi
0x49AB55: call    sub_4993B0
0x49AB5A: push    esi
0x49AB5B: call    FormHeapFree
0x49AB60: add     esp, 4
0x49AB63: test    ebx, ebx
0x49AB65: mov     eax, ebx
0x49AB67: mov     [esp+14h+arg_0], eax
0x49AB6B: jnz     loc_49AA80
0x49AB71: mov     ecx, [ebp+40h]
0x49AB74: test    ecx, ecx
0x49AB76: jz      short loc_49AB9B
0x49AB78: call    sub_6B73C0
0x49AB7D: mov     esi, [ebp+40h]
0x49AB80: test    esi, esi
0x49AB82: jz      short loc_49AB94
0x49AB84: mov     ecx, esi; this
0x49AB86: call    sub_6B73E0
0x49AB8B: push    esi
0x49AB8C: call    FormHeapFree
0x49AB91: add     esp, 4
0x49AB94: mov     dword ptr [ebp+40h], 0
0x49AB9B: mov     esi, [ebp+0]
0x49AB9E: test    esi, esi
0x49ABA0: jz      short loc_49ABC5
0x49ABA2: lea     eax, [esi+4]
0x49ABA5: push    eax; lpAddend
0x49ABA6: call    dword ptr ds:0A2807Ch
0x49ABAC: test    eax, eax
0x49ABAE: jnz     short loc_49ABBE
0x49ABB0: test    esi, esi
0x49ABB2: jz      short loc_49ABBE
0x49ABB4: mov     edx, [esi]
0x49ABB6: mov     eax, [edx]
0x49ABB8: push    1
0x49ABBA: mov     ecx, esi
0x49ABBC: call    eax
0x49ABBE: mov     dword ptr [ebp+0], 0
0x49ABC5: mov     eax, [ebp+48h]
0x49ABC8: test    eax, eax
0x49ABCA: jz      short loc_49AC3D
0x49ABCC: mov     ecx, ds:0B42F50h; this
0x49ABD2: push    eax; a2
0x49ABD3: call    sub_7C1EE0
0x49ABD8: mov     esi, [ebp+48h]
0x49ABDB: test    esi, esi
0x49ABDD: jz      short loc_49AC02
0x49ABDF: lea     ecx, [esi+4]
0x49ABE2: push    ecx; lpAddend
0x49ABE3: call    dword ptr ds:0A2807Ch
0x49ABE9: test    eax, eax
0x49ABEB: jnz     short loc_49ABFB
0x49ABED: test    esi, esi
0x49ABEF: jz      short loc_49ABFB
0x49ABF1: mov     edx, [esi]
0x49ABF3: mov     eax, [edx]
0x49ABF5: push    1
0x49ABF7: mov     ecx, esi
0x49ABF9: call    eax
0x49ABFB: mov     dword ptr [ebp+48h], 0
0x49AC02: mov     eax, ds:0B45DCCh
0x49AC07: test    eax, eax
0x49AC09: jz      short loc_49AC3D
0x49AC0B: mov     esi, [eax+10Ch]
0x49AC11: test    esi, esi
0x49AC13: lea     edi, [eax+10Ch]
0x49AC19: jz      short loc_49AC3D
0x49AC1B: lea     ecx, [esi+4]
0x49AC1E: push    ecx; lpAddend
0x49AC1F: call    dword ptr ds:0A2807Ch
0x49AC25: test    eax, eax
0x49AC27: jnz     short loc_49AC37
0x49AC29: test    esi, esi
0x49AC2B: jz      short loc_49AC37
0x49AC2D: mov     edx, [esi]
0x49AC2F: mov     eax, [edx]
0x49AC31: push    1
0x49AC33: mov     ecx, esi
0x49AC35: call    eax
0x49AC37: mov     dword ptr [edi], 0
0x49AC3D: push    2
0x49AC3F: call    nullsub_returnTrue_0arg
0x49AC44: add     esp, 4
0x49AC47: pop     edi
0x49AC48: pop     esi
0x49AC49: pop     ebp
0x49AC4A: mov     al, 1
0x49AC4C: pop     ebx
0x49AC4D: pop     ecx
0x49AC4E: retn    4
0x49AC51: xor     ebx, ebx
0x49AC53: jmp     loc_49AB63
