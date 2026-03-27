0x85CA00: push    0FFFFFFFFh
0x85CA02: push    offset SEH_85E160
0x85CA07: mov     eax, large fs:0
0x85CA0D: push    eax
0x85CA0E: push    ebx
0x85CA0F: push    ebp
0x85CA10: push    esi
0x85CA11: push    edi
0x85CA12: mov     eax, ds:0B30AACh
0x85CA17: xor     eax, esp
0x85CA19: push    eax
0x85CA1A: lea     eax, [esp+20h+var_C]
0x85CA1E: mov     large fs:0, eax
0x85CA24: mov     esi, ecx
0x85CA26: mov     ebx, [esp+20h+arg_8]
0x85CA2A: mov     eax, [ebx+10h]
0x85CA2D: mov     edi, ds:0B477CCh
0x85CA33: push    eax
0x85CA34: call    sub_848C40
0x85CA39: mov     ebx, [ebx+0Ch]
0x85CA3C: push    ebx
0x85CA3D: mov     ecx, esi
0x85CA3F: call    sub_848E50
0x85CA44: mov     ecx, [esp+20h+arg_0]
0x85CA48: mov     eax, [esi]
0x85CA4A: mov     edx, [eax+0BCh]
0x85CA50: push    0
0x85CA52: push    ebx
0x85CA53: push    ecx
0x85CA54: mov     ecx, esi
0x85CA56: call    edx
0x85CA58: mov     eax, [edi+24h]
0x85CA5B: mov     ebx, [esp+20h+arg_C]
0x85CA5F: mov     ebp, [eax]
0x85CA61: mov     edx, [ebx]
0x85CA63: mov     eax, [edx+88h]
0x85CA69: push    0
0x85CA6B: mov     ecx, ebx
0x85CA6D: mov     [esp+24h+arg_8], ebp
0x85CA71: call    eax
0x85CA73: mov     ebp, [ebp+4]
0x85CA76: cmp     ebp, eax
0x85CA78: mov     [esp+20h+arg_0], eax
0x85CA7C: jz      short loc_85CAB8
0x85CA7E: test    ebp, ebp
0x85CA80: jz      short loc_85CAA3
0x85CA82: lea     ecx, [ebp+4]
0x85CA85: push    ecx; lpAddend
0x85CA86: call    dword ptr ds:0A2807Ch
0x85CA8C: test    eax, eax
0x85CA8E: jnz     short loc_85CA9F
0x85CA90: test    ebp, ebp
0x85CA92: jz      short loc_85CA9F
0x85CA94: mov     edx, [ebp+0]
0x85CA97: mov     eax, [edx]
0x85CA99: push    1
0x85CA9B: mov     ecx, ebp
0x85CA9D: call    eax
0x85CA9F: mov     eax, [esp+20h+arg_0]
0x85CAA3: test    eax, eax
0x85CAA5: mov     ecx, [esp+20h+arg_8]
0x85CAA9: mov     [ecx+4], eax
0x85CAAC: jz      short loc_85CAB8
0x85CAAE: add     eax, 4
0x85CAB1: push    eax; lpAddend
0x85CAB2: call    dword ptr ds:0A28078h
0x85CAB8: mov     edx, [esp+20h+arg_8]
0x85CABC: push    ebx
0x85CABD: push    edx
0x85CABE: mov     ecx, esi
0x85CAC0: call    sub_848FA0
0x85CAC5: mov     eax, [edi+24h]
0x85CAC8: mov     ebp, [eax+4]
0x85CACB: push    0
0x85CACD: push    ebx
0x85CACE: mov     ecx, esi
0x85CAD0: mov     [esp+28h+arg_8], ebp
0x85CAD4: call    sub_848FD0
0x85CAD9: mov     ebp, [ebp+4]
0x85CADC: cmp     ebp, eax
0x85CADE: mov     [esp+20h+arg_0], eax
0x85CAE2: jz      short loc_85CB1E
0x85CAE4: test    ebp, ebp
0x85CAE6: jz      short loc_85CB09
0x85CAE8: lea     ecx, [ebp+4]
0x85CAEB: push    ecx; lpAddend
0x85CAEC: call    dword ptr ds:0A2807Ch
0x85CAF2: test    eax, eax
0x85CAF4: jnz     short loc_85CB05
0x85CAF6: test    ebp, ebp
0x85CAF8: jz      short loc_85CB05
0x85CAFA: mov     edx, [ebp+0]
0x85CAFD: mov     eax, [edx]
0x85CAFF: push    1
0x85CB01: mov     ecx, ebp
0x85CB03: call    eax
0x85CB05: mov     eax, [esp+20h+arg_0]
0x85CB09: test    eax, eax
0x85CB0B: mov     ecx, [esp+20h+arg_8]
0x85CB0F: mov     [ecx+4], eax
0x85CB12: jz      short loc_85CB1E
0x85CB14: add     eax, 4
0x85CB17: push    eax; lpAddend
0x85CB18: call    dword ptr ds:0A28078h
0x85CB1E: mov     edx, [esp+20h+arg_8]
0x85CB22: push    ebx
0x85CB23: push    edx
0x85CB24: mov     ecx, esi
0x85CB26: call    sub_848FA0
0x85CB2B: mov     ecx, [edi+24h]
0x85CB2E: mov     ebx, [ecx+18h]
0x85CB31: mov     eax, ds:0B43108h
0x85CB36: mov     ebp, [ebx+4]
0x85CB39: add     ebx, 4
0x85CB3C: cmp     ebp, eax
0x85CB3E: mov     [esp+20h+arg_8], eax
0x85CB42: jz      short loc_85CB79
0x85CB44: test    ebp, ebp
0x85CB46: jz      short loc_85CB69
0x85CB48: lea     edx, [ebp+4]
0x85CB4B: push    edx; lpAddend
0x85CB4C: call    dword ptr ds:0A2807Ch
0x85CB52: test    eax, eax
0x85CB54: jnz     short loc_85CB65
0x85CB56: test    ebp, ebp
0x85CB58: jz      short loc_85CB65
0x85CB5A: mov     eax, [ebp+0]
0x85CB5D: mov     edx, [eax]
0x85CB5F: push    1
0x85CB61: mov     ecx, ebp
0x85CB63: call    edx
0x85CB65: mov     eax, [esp+20h+arg_8]
0x85CB69: test    eax, eax
0x85CB6B: mov     [ebx], eax
0x85CB6D: jz      short loc_85CB79
0x85CB6F: add     eax, 4
0x85CB72: push    eax; lpAddend
0x85CB73: call    dword ptr ds:0A28078h
0x85CB79: mov     eax, [edi+24h]
0x85CB7C: mov     ebp, [eax+1Ch]
0x85CB7F: mov     eax, ds:0B4310Ch
0x85CB84: mov     ebx, [ebp+4]
0x85CB87: cmp     ebx, eax
0x85CB89: mov     ecx, eax
0x85CB8B: mov     [esp+20h+arg_8], ecx
0x85CB8F: jz      short loc_85CBC6
0x85CB91: test    ebx, ebx
0x85CB93: jz      short loc_85CBB5
0x85CB95: lea     ecx, [ebx+4]
0x85CB98: push    ecx; lpAddend
0x85CB99: call    dword ptr ds:0A2807Ch
0x85CB9F: test    eax, eax
0x85CBA1: jnz     short loc_85CBB1
0x85CBA3: test    ebx, ebx
0x85CBA5: jz      short loc_85CBB1
0x85CBA7: mov     edx, [ebx]
0x85CBA9: mov     eax, [edx]
0x85CBAB: push    1
0x85CBAD: mov     ecx, ebx
0x85CBAF: call    eax
0x85CBB1: mov     ecx, [esp+20h+arg_8]
0x85CBB5: test    ecx, ecx
0x85CBB7: mov     [ebp+4], ecx
0x85CBBA: jz      short loc_85CBC6
0x85CBBC: add     ecx, 4
0x85CBBF: push    ecx; lpAddend
0x85CBC0: call    dword ptr ds:0A28078h
0x85CBC6: cmp     byte ptr [esp+20h+arg_10], 0
0x85CBCB: jnz     short loc_85CC08
0x85CBCD: mov     ebx, 1
0x85CBD2: add     [edi+60h], ebx
0x85CBD5: mov     [esp+20h+arg_10], edi
0x85CBD9: mov     edx, [esi+38h]
0x85CBDC: lea     ecx, [esp+20h+arg_10]
0x85CBE0: push    ecx
0x85CBE1: push    edx
0x85CBE2: lea     ecx, [esi+40h]
0x85CBE5: mov     [esp+28h+var_4], 0
0x85CBED: call    sub_76CE40
0x85CBF2: or      eax, 0FFFFFFFFh
0x85CBF5: add     [edi+60h], eax
0x85CBF8: mov     [esp+20h+var_4], eax
0x85CBFC: jnz     short loc_85CC05
0x85CBFE: mov     ecx, edi
0x85CC00: call    sub_7604D0
0x85CC05: add     [esi+38h], ebx
0x85CC08: mov     ecx, [esp+20h+var_C]
0x85CC0C: mov     large fs:0, ecx
0x85CC13: pop     ecx
0x85CC14: pop     edi
0x85CC15: pop     esi
0x85CC16: pop     ebp
0x85CC17: pop     ebx
0x85CC18: add     esp, 0Ch
0x85CC1B: retn    14h
