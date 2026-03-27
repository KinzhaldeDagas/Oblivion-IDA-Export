0x78C9B0: sub     esp, 8
0x78C9B3: push    ebx
0x78C9B4: push    ebp
0x78C9B5: push    esi
0x78C9B6: mov     esi, ecx
0x78C9B8: xor     ebx, ebx
0x78C9BA: cmp     [esi+34h], ebx
0x78C9BD: push    edi; MaxCount
0x78C9BE: jnz     loc_78CA5C
0x78C9C4: mov     ebp, ds:0B4298Ch
0x78C9CA: mov     ecx, ds:0B42988h
0x78C9D0: cmp     ecx, ebp
0x78C9D2: jbe     short loc_78C9DF
0x78C9D4: call    __invalid_parameter_noinfo
0x78C9D9: mov     ecx, ds:0B42988h
0x78C9DF: cmp     ecx, ds:0B4298Ch
0x78C9E5: mov     edi, ecx
0x78C9E7: jbe     short loc_78C9F4
0x78C9E9: call    __invalid_parameter_noinfo
0x78C9EE: mov     ecx, ds:0B42988h
0x78C9F4: cmp     edi, ebp
0x78C9F6: mov     eax, offset unk_B42984
0x78C9FB: mov     ebx, eax
0x78C9FD: mov     [esp+18h+var_4], edi
0x78CA01: jz      short loc_78CA0E
0x78CA03: cmp     [edi], esi
0x78CA05: jz      short loc_78CA0E
0x78CA07: add     edi, 4
0x78CA0A: cmp     edi, ebp
0x78CA0C: jnz     short loc_78CA03
0x78CA0E: mov     ebp, ds:0B4298Ch
0x78CA14: cmp     ecx, ebp
0x78CA16: jbe     short loc_78CA1D
0x78CA18: call    __invalid_parameter_noinfo
0x78CA1D: test    ebx, ebx
0x78CA1F: jz      short loc_78CA29
0x78CA21: cmp     ebx, offset unk_B42984
0x78CA27: jz      short loc_78CA2E
0x78CA29: call    __invalid_parameter_noinfo
0x78CA2E: cmp     edi, ebp
0x78CA30: jz      short loc_78CA5A
0x78CA32: mov     eax, ds:0B4298Ch
0x78CA37: lea     ecx, [edi+4]
0x78CA3A: sub     eax, ecx
0x78CA3C: sar     eax, 2
0x78CA3F: test    eax, eax
0x78CA41: jle     short loc_78CA53
0x78CA43: add     eax, eax
0x78CA45: add     eax, eax
0x78CA47: push    eax; Src
0x78CA48: push    ecx; Src
0x78CA49: push    eax; DstSize
0x78CA4A: push    edi; Dst
0x78CA4B: call    _memmove_s
0x78CA50: add     esp, 10h
0x78CA53: sub     dword ptr ds:0B4298Ch, 4
0x78CA5A: xor     ebx, ebx
0x78CA5C: mov     eax, [esi+30h]
0x78CA5F: add     dword ptr [eax], 0FFFFFFFFh
0x78CA62: cmp     [esi+34h], ebx
0x78CA65: jz      short loc_78CAD0
0x78CA67: mov     eax, [esi+38h]
0x78CA6A: mov     ebp, [eax+8]
0x78CA6D: cmp     [eax+4], ebp
0x78CA70: jbe     short loc_78CA77
0x78CA72: call    __invalid_parameter_noinfo
0x78CA77: mov     eax, [esi+38h]
0x78CA7A: mov     edi, [eax+4]
0x78CA7D: cmp     edi, [eax+8]
0x78CA80: jbe     short loc_78CA87
0x78CA82: call    __invalid_parameter_noinfo
0x78CA87: cmp     edi, ebp
0x78CA89: mov     ecx, edi
0x78CA8B: jz      short loc_78CA9B
0x78CA8D: lea     ecx, [ecx+0]
0x78CA90: cmp     [ecx], esi
0x78CA92: jz      short loc_78CA9B
0x78CA94: add     ecx, 4
0x78CA97: cmp     ecx, ebp
0x78CA99: jnz     short loc_78CA90
0x78CA9B: mov     edi, [esi+38h]
0x78CA9E: mov     eax, [edi+8]
0x78CAA1: lea     edx, [ecx+4]
0x78CAA4: sub     eax, edx
0x78CAA6: sar     eax, 2
0x78CAA9: cmp     eax, ebx
0x78CAAB: jle     short loc_78CABD
0x78CAAD: add     eax, eax
0x78CAAF: add     eax, eax
0x78CAB1: push    eax; Src
0x78CAB2: push    edx; Src
0x78CAB3: push    eax; DstSize
0x78CAB4: push    ecx; Dst
0x78CAB5: call    _memmove_s
0x78CABA: add     esp, 10h
0x78CABD: add     dword ptr [edi+8], 0FFFFFFFCh
0x78CAC1: mov     eax, [esi+34h]
0x78CAC4: push    eax
0x78CAC5: call    FormHeapFree
0x78CACA: add     esp, 4
0x78CACD: mov     [esi+34h], ebx
0x78CAD0: mov     ecx, [esi+30h]
0x78CAD3: cmp     [ecx], ebx
0x78CAD5: jnz     loc_78CC4F
0x78CADB: mov     ecx, [esi]
0x78CADD: cmp     byte ptr [ecx+21h], 0
0x78CAE1: jz      short loc_78CAEA
0x78CAE3: call    sub_7A2620
0x78CAE8: jmp     short loc_78CAFB
0x78CAEA: push    3Ah ; ':'; MaxCount
0x78CAEC: push    offset aDeletetransien; "DeleteTransientData() called with no in"...
0x78CAF1: mov     ecx, offset dword_B2B614
0x78CAF6: call    sub_414500
0x78CAFB: mov     edi, [esi+4]
0x78CAFE: cmp     edi, ebx
0x78CB00: jz      short loc_78CB12
0x78CB02: mov     ecx, edi
0x78CB04: call    sub_797270
0x78CB09: push    edi
0x78CB0A: call    FormHeapFree
0x78CB0F: add     esp, 4
0x78CB12: mov     edx, [esi+0Ch]
0x78CB15: push    edx
0x78CB16: call    FormHeapFree
0x78CB1B: mov     eax, [esi+10h]
0x78CB1E: push    eax
0x78CB1F: call    FormHeapFree
0x78CB24: mov     edi, [esi+8]
0x78CB27: add     esp, 8
0x78CB2A: cmp     edi, ebx
0x78CB2C: jz      short loc_78CB3E
0x78CB2E: mov     ecx, edi
0x78CB30: call    sub_798940
0x78CB35: push    edi
0x78CB36: call    FormHeapFree
0x78CB3B: add     esp, 4
0x78CB3E: mov     ecx, [esi+14h]
0x78CB41: push    ecx
0x78CB42: call    FormHeapFree
0x78CB47: mov     ecx, [esi]
0x78CB49: add     esp, 4
0x78CB4C: cmp     ecx, ebx
0x78CB4E: jz      short loc_78CB58
0x78CB50: mov     edx, [ecx]
0x78CB52: mov     eax, [edx]
0x78CB54: push    1
0x78CB56: call    eax
0x78CB58: mov     ecx, [esi+30h]
0x78CB5B: push    ecx
0x78CB5C: call    FormHeapFree
0x78CB61: mov     edi, [esi+38h]
0x78CB64: add     esp, 4
0x78CB67: cmp     edi, ebx
0x78CB69: jz      short loc_78CB8D
0x78CB6B: mov     eax, [edi+4]
0x78CB6E: cmp     eax, ebx
0x78CB70: jz      short loc_78CB7B
0x78CB72: push    eax
0x78CB73: call    FormHeapFree
0x78CB78: add     esp, 4
0x78CB7B: push    edi
0x78CB7C: mov     [edi+4], ebx
0x78CB7F: mov     [edi+8], ebx
0x78CB82: mov     [edi+0Ch], ebx
0x78CB85: call    FormHeapFree
0x78CB8A: add     esp, 4
0x78CB8D: mov     edx, [esi+40h]
0x78CB90: push    edx
0x78CB91: call    FormHeapFree
0x78CB96: mov     edi, [esi+58h]
0x78CB99: add     esp, 4
0x78CB9C: cmp     edi, ebx
0x78CB9E: jz      short loc_78CBC2
0x78CBA0: mov     eax, [edi+4]
0x78CBA3: cmp     eax, ebx
0x78CBA5: jz      short loc_78CBB0
0x78CBA7: push    eax
0x78CBA8: call    FormHeapFree
0x78CBAD: add     esp, 4
0x78CBB0: push    edi
0x78CBB1: mov     [edi+4], ebx
0x78CBB4: mov     [edi+8], ebx
0x78CBB7: mov     [edi+0Ch], ebx
0x78CBBA: call    FormHeapFree
0x78CBBF: add     esp, 4
0x78CBC2: mov     edi, [esi+4Ch]
0x78CBC5: cmp     edi, ebx
0x78CBC7: jz      short loc_78CBD9
0x78CBC9: mov     ecx, edi
0x78CBCB: call    sub_788B90
0x78CBD0: push    edi
0x78CBD1: call    FormHeapFree
0x78CBD6: add     esp, 4
0x78CBD9: mov     edi, [esi+5Ch]
0x78CBDC: cmp     edi, ebx
0x78CBDE: jz      short loc_78CBF0
0x78CBE0: mov     ecx, edi
0x78CBE2: call    sub_7A14E0
0x78CBE7: push    edi
0x78CBE8: call    FormHeapFree
0x78CBED: add     esp, 4
0x78CBF0: mov     edi, [esi+60h]
0x78CBF3: cmp     edi, ebx
0x78CBF5: jz      short loc_78CC07
0x78CBF7: mov     ecx, edi
0x78CBF9: call    sub_797270
0x78CBFE: push    edi
0x78CBFF: call    FormHeapFree
0x78CC04: add     esp, 4
0x78CC07: mov     eax, [esi+2Ch]
0x78CC0A: push    eax
0x78CC0B: call    FormHeapFree
0x78CC10: mov     edi, [esi+50h]
0x78CC13: add     esp, 4
0x78CC16: cmp     edi, ebx
0x78CC18: jz      short loc_78CC43
0x78CC1A: cmp     dword ptr [edi+3Ch], 10h
0x78CC1E: jb      short loc_78CC2C
0x78CC20: mov     ecx, [edi+28h]
0x78CC23: push    ecx
0x78CC24: call    FormHeapFree
0x78CC29: add     esp, 4
0x78CC2C: mov     dword ptr [edi+3Ch], 0Fh
0x78CC33: mov     [edi+38h], ebx
0x78CC36: push    edi
0x78CC37: mov     byte ptr [edi+28h], 0
0x78CC3B: call    FormHeapFree
0x78CC40: add     esp, 4
0x78CC43: mov     edx, [esi+68h]
0x78CC46: push    edx
0x78CC47: call    FormHeapFree
0x78CC4C: add     esp, 4
0x78CC4F: pop     edi
0x78CC50: mov     [esi+4], ebx
0x78CC53: mov     [esi+0Ch], ebx
0x78CC56: mov     [esi+10h], ebx
0x78CC59: mov     [esi+8], ebx
0x78CC5C: mov     [esi+14h], ebx
0x78CC5F: mov     [esi], ebx
0x78CC61: mov     [esi+30h], ebx
0x78CC64: mov     [esi+40h], ebx
0x78CC67: mov     [esi+38h], ebx
0x78CC6A: mov     [esi+58h], ebx
0x78CC6D: mov     [esi+4Ch], ebx
0x78CC70: mov     [esi+5Ch], ebx
0x78CC73: mov     [esi+60h], ebx
0x78CC76: mov     [esi+2Ch], ebx
0x78CC79: mov     [esi+50h], ebx
0x78CC7C: mov     [esi+68h], ebx
0x78CC7F: sub     dword ptr ds:0B42980h, 1
0x78CC86: pop     esi
0x78CC87: pop     ebp
0x78CC88: pop     ebx
0x78CC89: jnz     short loc_78CC93
0x78CC8B: add     esp, 8
0x78CC8E: jmp     sub_785D30
0x78CC93: add     esp, 8
0x78CC96: retn
