0x83C9D0: push    0FFFFFFFFh
0x83C9D2: push    offset SEH_882120
0x83C9D7: mov     eax, large fs:0
0x83C9DD: push    eax
0x83C9DE: push    ebx
0x83C9DF: push    ebp
0x83C9E0: push    esi
0x83C9E1: push    edi
0x83C9E2: mov     eax, ds:0B30AACh
0x83C9E7: xor     eax, esp
0x83C9E9: push    eax
0x83C9EA: lea     eax, [esp+20h+var_C]
0x83C9EE: mov     large fs:0, eax
0x83C9F4: mov     edi, ecx
0x83C9F6: mov     eax, [esp+20h+arg_8]
0x83C9FA: mov     esi, [eax+0Ch]
0x83C9FD: mov     ebx, ds:0B457E4h
0x83CA03: push    esi
0x83CA04: call    sub_848E50
0x83CA09: mov     edx, [edi]
0x83CA0B: mov     eax, [esp+20h+arg_0]
0x83CA0F: mov     edx, [edx+0BCh]
0x83CA15: push    0
0x83CA17: push    esi
0x83CA18: push    eax
0x83CA19: mov     ecx, edi
0x83CA1B: call    edx
0x83CA1D: mov     esi, [esp+20h+arg_C]
0x83CA21: mov     eax, [esi+0A8h]
0x83CA27: mov     ds:0B46628h, eax
0x83CA2C: mov     ecx, [esi+0ACh]
0x83CA32: mov     ds:0B4662Ch, ecx
0x83CA38: mov     edx, [esi+0B0h]
0x83CA3E: mov     ds:0B46630h, edx
0x83CA44: mov     eax, [esi+0B4h]
0x83CA4A: mov     ds:0B46634h, eax
0x83CA4F: mov     ecx, [ebx+24h]
0x83CA52: mov     ebp, [ecx]
0x83CA54: mov     edx, [esi]
0x83CA56: mov     eax, [edx+88h]
0x83CA5C: push    0
0x83CA5E: mov     ecx, esi
0x83CA60: mov     [esp+24h+arg_8], ebp
0x83CA64: call    eax
0x83CA66: mov     ebp, [ebp+4]
0x83CA69: cmp     ebp, eax
0x83CA6B: mov     [esp+20h+arg_0], eax
0x83CA6F: jz      short loc_83CAAB
0x83CA71: test    ebp, ebp
0x83CA73: jz      short loc_83CA96
0x83CA75: lea     ecx, [ebp+4]
0x83CA78: push    ecx; lpAddend
0x83CA79: call    dword ptr ds:0A2807Ch
0x83CA7F: test    eax, eax
0x83CA81: jnz     short loc_83CA92
0x83CA83: test    ebp, ebp
0x83CA85: jz      short loc_83CA92
0x83CA87: mov     edx, [ebp+0]
0x83CA8A: mov     eax, [edx]
0x83CA8C: push    1
0x83CA8E: mov     ecx, ebp
0x83CA90: call    eax
0x83CA92: mov     eax, [esp+20h+arg_0]
0x83CA96: test    eax, eax
0x83CA98: mov     ecx, [esp+20h+arg_8]
0x83CA9C: mov     [ecx+4], eax
0x83CA9F: jz      short loc_83CAAB
0x83CAA1: add     eax, 4
0x83CAA4: push    eax; lpAddend
0x83CAA5: call    dword ptr ds:0A28078h
0x83CAAB: mov     edx, [esp+20h+arg_8]
0x83CAAF: push    esi
0x83CAB0: push    edx
0x83CAB1: mov     ecx, edi
0x83CAB3: call    sub_848FA0
0x83CAB8: mov     eax, [ebx+24h]
0x83CABB: mov     ebp, [eax+4]
0x83CABE: push    0
0x83CAC0: push    esi
0x83CAC1: mov     ecx, edi
0x83CAC3: mov     [esp+28h+arg_8], ebp
0x83CAC7: call    sub_848FD0
0x83CACC: mov     ebp, [ebp+4]
0x83CACF: cmp     ebp, eax
0x83CAD1: mov     [esp+20h+arg_0], eax
0x83CAD5: jz      short loc_83CB11
0x83CAD7: test    ebp, ebp
0x83CAD9: jz      short loc_83CAFC
0x83CADB: lea     ecx, [ebp+4]
0x83CADE: push    ecx; lpAddend
0x83CADF: call    dword ptr ds:0A2807Ch
0x83CAE5: test    eax, eax
0x83CAE7: jnz     short loc_83CAF8
0x83CAE9: test    ebp, ebp
0x83CAEB: jz      short loc_83CAF8
0x83CAED: mov     edx, [ebp+0]
0x83CAF0: mov     eax, [edx]
0x83CAF2: push    1
0x83CAF4: mov     ecx, ebp
0x83CAF6: call    eax
0x83CAF8: mov     eax, [esp+20h+arg_0]
0x83CAFC: test    eax, eax
0x83CAFE: mov     ecx, [esp+20h+arg_8]
0x83CB02: mov     [ecx+4], eax
0x83CB05: jz      short loc_83CB11
0x83CB07: add     eax, 4
0x83CB0A: push    eax; lpAddend
0x83CB0B: call    dword ptr ds:0A28078h
0x83CB11: mov     edx, [esp+20h+arg_8]
0x83CB15: push    esi
0x83CB16: push    edx
0x83CB17: mov     ecx, edi
0x83CB19: call    sub_848FA0
0x83CB1E: mov     eax, [ebx+24h]
0x83CB21: mov     ebp, [eax+10h]
0x83CB24: mov     edx, [esi]
0x83CB26: mov     eax, [edx+88h]
0x83CB2C: push    1
0x83CB2E: mov     ecx, esi
0x83CB30: mov     [esp+24h+arg_8], ebp
0x83CB34: call    eax
0x83CB36: mov     ebp, [ebp+4]
0x83CB39: cmp     ebp, eax
0x83CB3B: mov     [esp+20h+arg_0], eax
0x83CB3F: jz      short loc_83CB7B
0x83CB41: test    ebp, ebp
0x83CB43: jz      short loc_83CB66
0x83CB45: lea     ecx, [ebp+4]
0x83CB48: push    ecx; lpAddend
0x83CB49: call    dword ptr ds:0A2807Ch
0x83CB4F: test    eax, eax
0x83CB51: jnz     short loc_83CB62
0x83CB53: test    ebp, ebp
0x83CB55: jz      short loc_83CB62
0x83CB57: mov     edx, [ebp+0]
0x83CB5A: mov     eax, [edx]
0x83CB5C: push    1
0x83CB5E: mov     ecx, ebp
0x83CB60: call    eax
0x83CB62: mov     eax, [esp+20h+arg_0]
0x83CB66: test    eax, eax
0x83CB68: mov     ecx, [esp+20h+arg_8]
0x83CB6C: mov     [ecx+4], eax
0x83CB6F: jz      short loc_83CB7B
0x83CB71: add     eax, 4
0x83CB74: push    eax; lpAddend
0x83CB75: call    dword ptr ds:0A28078h
0x83CB7B: mov     edx, [esp+20h+arg_8]
0x83CB7F: push    esi
0x83CB80: push    edx
0x83CB81: mov     ecx, edi
0x83CB83: call    sub_848FA0
0x83CB88: mov     ecx, [ebx+24h]
0x83CB8B: mov     esi, [ecx+18h]
0x83CB8E: mov     eax, ds:0B43108h
0x83CB93: mov     ebp, [esi+4]
0x83CB96: add     esi, 4
0x83CB99: cmp     ebp, eax
0x83CB9B: mov     [esp+20h+arg_8], eax
0x83CB9F: jz      short loc_83CBD6
0x83CBA1: test    ebp, ebp
0x83CBA3: jz      short loc_83CBC6
0x83CBA5: lea     edx, [ebp+4]
0x83CBA8: push    edx; lpAddend
0x83CBA9: call    dword ptr ds:0A2807Ch
0x83CBAF: test    eax, eax
0x83CBB1: jnz     short loc_83CBC2
0x83CBB3: test    ebp, ebp
0x83CBB5: jz      short loc_83CBC2
0x83CBB7: mov     eax, [ebp+0]
0x83CBBA: mov     edx, [eax]
0x83CBBC: push    1
0x83CBBE: mov     ecx, ebp
0x83CBC0: call    edx
0x83CBC2: mov     eax, [esp+20h+arg_8]
0x83CBC6: test    eax, eax
0x83CBC8: mov     [esi], eax
0x83CBCA: jz      short loc_83CBD6
0x83CBCC: add     eax, 4
0x83CBCF: push    eax; lpAddend
0x83CBD0: call    dword ptr ds:0A28078h
0x83CBD6: mov     eax, [ebx+24h]
0x83CBD9: mov     ebp, [eax+1Ch]
0x83CBDC: mov     eax, ds:0B4310Ch
0x83CBE1: mov     esi, [ebp+4]
0x83CBE4: cmp     esi, eax
0x83CBE6: mov     ecx, eax
0x83CBE8: mov     [esp+20h+arg_8], ecx
0x83CBEC: jz      short loc_83CC23
0x83CBEE: test    esi, esi
0x83CBF0: jz      short loc_83CC12
0x83CBF2: lea     ecx, [esi+4]
0x83CBF5: push    ecx; lpAddend
0x83CBF6: call    dword ptr ds:0A2807Ch
0x83CBFC: test    eax, eax
0x83CBFE: jnz     short loc_83CC0E
0x83CC00: test    esi, esi
0x83CC02: jz      short loc_83CC0E
0x83CC04: mov     edx, [esi]
0x83CC06: mov     eax, [edx]
0x83CC08: push    1
0x83CC0A: mov     ecx, esi
0x83CC0C: call    eax
0x83CC0E: mov     ecx, [esp+20h+arg_8]
0x83CC12: test    ecx, ecx
0x83CC14: mov     [ebp+4], ecx
0x83CC17: jz      short loc_83CC23
0x83CC19: add     ecx, 4
0x83CC1C: push    ecx; lpAddend
0x83CC1D: call    dword ptr ds:0A28078h
0x83CC23: mov     esi, 1
0x83CC28: add     [ebx+60h], esi
0x83CC2B: mov     [esp+20h+arg_8], ebx
0x83CC2F: mov     edx, [edi+38h]
0x83CC32: lea     ecx, [esp+20h+arg_8]
0x83CC36: push    ecx
0x83CC37: push    edx
0x83CC38: lea     ecx, [edi+40h]
0x83CC3B: mov     [esp+28h+var_4], 0
0x83CC43: call    sub_76CE40
0x83CC48: or      eax, 0FFFFFFFFh
0x83CC4B: add     [ebx+60h], eax
0x83CC4E: mov     [esp+20h+var_4], eax
0x83CC52: jnz     short loc_83CC5B
0x83CC54: mov     ecx, ebx
0x83CC56: call    sub_7604D0
0x83CC5B: add     [edi+38h], esi
0x83CC5E: mov     ecx, [esp+20h+var_C]
0x83CC62: mov     large fs:0, ecx
0x83CC69: pop     ecx
0x83CC6A: pop     edi
0x83CC6B: pop     esi
0x83CC6C: pop     ebp
0x83CC6D: pop     ebx
0x83CC6E: add     esp, 0Ch
0x83CC71: retn    10h
