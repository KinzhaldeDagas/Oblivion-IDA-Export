0x77AA80: push    ecx
0x77AA81: push    ebx
0x77AA82: push    ebp
0x77AA83: mov     ebp, ecx
0x77AA85: push    esi
0x77AA86: mov     esi, [ebp+8]
0x77AA89: xor     ebx, ebx
0x77AA8B: cmp     esi, ebx
0x77AA8D: push    edi
0x77AA8E: mov     dword ptr [ebp+0], offset ??_7NiD3DShader@@6B@; const NiD3DShader::`vftable'
0x77AA95: jz      short loc_77AB07
0x77AA97: mov     edi, offset EmptyString
0x77AA9C: mov     ecx, 1
0x77AAA1: xor     eax, eax
0x77AAA3: repe cmpsb
0x77AAA5: jz      short loc_77AB07
0x77AAA7: call    sub_77C0F0
0x77AAAC: mov     esi, eax
0x77AAAE: mov     edi, [esi]
0x77AAB0: mov     ecx, ebp
0x77AAB2: add     edi, 8
0x77AAB5: call    TESEnchantableForm_GetCastingType
0x77AABA: mov     ecx, [ebp+8]
0x77AABD: mov     edx, [edi]
0x77AABF: push    eax
0x77AAC0: push    ecx
0x77AAC1: mov     ecx, esi
0x77AAC3: call    edx
0x77AAC5: cmp     ebp, eax
0x77AAC7: jnz     short loc_77AAE0
0x77AAC9: mov     edi, [esi]
0x77AACB: mov     ecx, ebp
0x77AACD: add     edi, 1Ch
0x77AAD0: call    TESEnchantableForm_GetCastingType
0x77AAD5: mov     edx, [edi]
0x77AAD7: push    eax
0x77AAD8: mov     eax, [ebp+8]
0x77AADB: push    eax
0x77AADC: mov     ecx, esi
0x77AADE: call    edx
0x77AAE0: cmp     [ebp+1Dh], bl
0x77AAE3: jz      short loc_77AB07
0x77AAE5: mov     ecx, [ebp+8]
0x77AAE8: mov     eax, [esi]
0x77AAEA: mov     edx, [eax+8]
0x77AAED: push    0FFFFFFFFh
0x77AAEF: push    ecx
0x77AAF0: mov     ecx, esi
0x77AAF2: call    edx
0x77AAF4: cmp     ebp, eax
0x77AAF6: jnz     short loc_77AB07
0x77AAF8: mov     ecx, [ebp+8]
0x77AAFB: mov     eax, [esi]
0x77AAFD: mov     edx, [eax+1Ch]
0x77AB00: push    0FFFFFFFFh
0x77AB02: push    ecx
0x77AB03: mov     ecx, esi
0x77AB05: call    edx
0x77AB07: mov     ecx, [ebp+14h]
0x77AB0A: cmp     ecx, ebx
0x77AB0C: jz      short loc_77AB14
0x77AB0E: push    ebp
0x77AB0F: call    sub_76B320
0x77AB14: mov     eax, [ebp+28h]
0x77AB17: push    eax
0x77AB18: mov     [ebp+1Ch], bl
0x77AB1B: call    sub_772E30
0x77AB20: add     esp, 4
0x77AB23: xor     esi, esi
0x77AB25: cmp     [ebp+4Ah], bx
0x77AB29: mov     [ebp+34h], ebx
0x77AB2C: mov     [ebp+38h], ebx
0x77AB2F: jbe     short loc_77AB50
0x77AB31: mov     [esp+34h+var_24], ebx
0x77AB35: lea     edi, [ebp+40h]
0x77AB38: lea     ecx, [esp+34h+var_24]
0x77AB3C: push    ecx
0x77AB3D: push    esi
0x77AB3E: mov     ecx, edi
0x77AB40: call    sub_76CE40
0x77AB45: movzx   edx, word ptr [ebp+4Ah]
0x77AB49: add     esi, 1
0x77AB4C: cmp     esi, edx
0x77AB4E: jb      short loc_77AB38
0x77AB50: lea     esi, [ebp+40h]
0x77AB53: mov     ecx, esi
0x77AB55: call    sub_76C8C0
0x77AB5A: mov     ecx, esi
0x77AB5C: call    ??1?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@UAE@XZ; NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(void)
0x77AB61: mov     ecx, [ebp+3Ch]
0x77AB64: cmp     ecx, ebx
0x77AB66: jz      short loc_77AB73
0x77AB68: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x77AB6C: jnz     short loc_77AB73
0x77AB6E: call    sub_7604D0
0x77AB73: mov     esi, [ebp+30h]
0x77AB76: cmp     esi, ebx
0x77AB78: mov     edi, ds:0A2807Ch
0x77AB7E: jz      short loc_77AB98
0x77AB80: lea     eax, [esi+4]
0x77AB83: push    eax; lpAddend
0x77AB84: call    edi ; InterlockedDecrement
0x77AB86: test    eax, eax
0x77AB88: jnz     short loc_77AB98
0x77AB8A: cmp     esi, ebx
0x77AB8C: jz      short loc_77AB98
0x77AB8E: mov     edx, [esi]
0x77AB90: mov     eax, [edx]
0x77AB92: push    1
0x77AB94: mov     ecx, esi
0x77AB96: call    eax
0x77AB98: mov     esi, [ebp+2Ch]
0x77AB9B: cmp     esi, ebx
0x77AB9D: jz      short loc_77ABB7
0x77AB9F: lea     ecx, [esi+4]
0x77ABA2: push    ecx; lpAddend
0x77ABA3: call    edi ; InterlockedDecrement
0x77ABA5: test    eax, eax
0x77ABA7: jnz     short loc_77ABB7
0x77ABA9: cmp     esi, ebx
0x77ABAB: jz      short loc_77ABB7
0x77ABAD: mov     edx, [esi]
0x77ABAF: mov     eax, [edx]
0x77ABB1: push    1
0x77ABB3: mov     ecx, esi
0x77ABB5: call    eax
0x77ABB7: mov     esi, [ebp+24h]
0x77ABBA: cmp     esi, ebx
0x77ABBC: jz      short loc_77ABD6
0x77ABBE: lea     ecx, [esi+4]
0x77ABC1: push    ecx; lpAddend
0x77ABC2: call    edi ; InterlockedDecrement
0x77ABC4: test    eax, eax
0x77ABC6: jnz     short loc_77ABD6
0x77ABC8: cmp     esi, ebx
0x77ABCA: jz      short loc_77ABD6
0x77ABCC: mov     edx, [esi]
0x77ABCE: mov     eax, [edx]
0x77ABD0: push    1
0x77ABD2: mov     ecx, esi
0x77ABD4: call    eax
0x77ABD6: pop     edi
0x77ABD7: pop     esi
0x77ABD8: mov     ecx, ebp
0x77ABDA: pop     ebp
0x77ABDB: pop     ebx
0x77ABDC: add     esp, 4
0x77ABDF: jmp     loc_779160
