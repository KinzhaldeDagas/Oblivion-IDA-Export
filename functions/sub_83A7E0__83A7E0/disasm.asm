0x83A7E0: push    0FFFFFFFFh
0x83A7E2: push    offset SEH_7EF6B0
0x83A7E7: mov     eax, large fs:0
0x83A7ED: push    eax
0x83A7EE: sub     esp, 8
0x83A7F1: push    ebx
0x83A7F2: push    ebp
0x83A7F3: push    esi
0x83A7F4: push    edi
0x83A7F5: mov     eax, ds:0B30AACh
0x83A7FA: xor     eax, esp
0x83A7FC: push    eax
0x83A7FD: lea     eax, [esp+28h+var_C]
0x83A801: mov     large fs:0, eax
0x83A807: xor     esi, esi
0x83A809: xor     ebx, ebx
0x83A80B: mov     [esp+28h+var_14], esi
0x83A80F: mov     [esp+28h+var_4], ebx
0x83A813: mov     [esp+28h+var_10], ebx
0x83A817: mov     eax, ds:0B45B34h
0x83A81C: cmp     eax, ebx
0x83A81E: mov     byte ptr [esp+28h+var_4], 1
0x83A823: jz      short loc_83A833
0x83A825: mov     esi, eax
0x83A827: cmp     esi, ebx
0x83A829: mov     [esp+28h+var_14], esi
0x83A82D: jz      short loc_83A833
0x83A82F: add     dword ptr [esi+60h], 1
0x83A833: mov     eax, ds:0B45474h
0x83A838: mov     edi, [esi+58h]
0x83A83B: cmp     edi, eax
0x83A83D: mov     ebp, eax
0x83A83F: jz      short loc_83A872
0x83A841: cmp     edi, ebx
0x83A843: jz      short loc_83A861
0x83A845: lea     eax, [edi+4]
0x83A848: push    eax; lpAddend
0x83A849: call    dword ptr ds:0A2807Ch
0x83A84F: test    eax, eax
0x83A851: jnz     short loc_83A861
0x83A853: cmp     edi, ebx
0x83A855: jz      short loc_83A861
0x83A857: mov     edx, [edi]
0x83A859: mov     eax, [edx]
0x83A85B: push    1
0x83A85D: mov     ecx, edi
0x83A85F: call    eax
0x83A861: cmp     ebp, ebx
0x83A863: mov     [esi+58h], ebp
0x83A866: jz      short loc_83A872
0x83A868: add     ebp, 4
0x83A86B: push    ebp; lpAddend
0x83A86C: call    dword ptr ds:0A28078h
0x83A872: mov     eax, ds:0B45268h
0x83A877: mov     edi, [esi+44h]
0x83A87A: cmp     edi, eax
0x83A87C: mov     ebp, eax
0x83A87E: jz      short loc_83A8B1
0x83A880: cmp     edi, ebx
0x83A882: jz      short loc_83A8A0
0x83A884: lea     ecx, [edi+4]
0x83A887: push    ecx; lpAddend
0x83A888: call    dword ptr ds:0A2807Ch
0x83A88E: test    eax, eax
0x83A890: jnz     short loc_83A8A0
0x83A892: cmp     edi, ebx
0x83A894: jz      short loc_83A8A0
0x83A896: mov     edx, [edi]
0x83A898: mov     eax, [edx]
0x83A89A: push    1
0x83A89C: mov     ecx, edi
0x83A89E: call    eax
0x83A8A0: cmp     ebp, ebx
0x83A8A2: mov     [esi+44h], ebp
0x83A8A5: jz      short loc_83A8B1
0x83A8A7: add     ebp, 4
0x83A8AA: push    ebp; lpAddend
0x83A8AB: call    dword ptr ds:0A28078h
0x83A8B1: cmp     [esi+30h], ebx
0x83A8B4: jnz     short loc_83A8BE
0x83A8B6: call    sub_772DF0
0x83A8BB: mov     [esi+30h], eax
0x83A8BE: mov     ecx, [esi+30h]
0x83A8C1: push    ebx
0x83A8C2: push    ebx
0x83A8C3: push    1Bh
0x83A8C5: call    sub_772CD0
0x83A8CA: cmp     [esi+30h], ebx
0x83A8CD: jnz     short loc_83A8D7
0x83A8CF: call    sub_772DF0
0x83A8D4: mov     [esi+30h], eax
0x83A8D7: mov     ecx, [esi+30h]
0x83A8DA: push    ebx
0x83A8DB: push    ebx
0x83A8DC: push    0Fh
0x83A8DE: call    sub_772CD0
0x83A8E3: cmp     [esi+30h], ebx
0x83A8E6: jnz     short loc_83A8F0
0x83A8E8: call    sub_772DF0
0x83A8ED: mov     [esi+30h], eax
0x83A8F0: mov     ecx, [esi+30h]
0x83A8F3: push    ebx
0x83A8F4: push    1
0x83A8F6: push    7
0x83A8F8: call    sub_772CD0
0x83A8FD: cmp     [esi+30h], ebx
0x83A900: jnz     short loc_83A90A
0x83A902: call    sub_772DF0
0x83A907: mov     [esi+30h], eax
0x83A90A: mov     ecx, [esi+30h]
0x83A90D: push    ebx
0x83A90E: push    4
0x83A910: push    17h
0x83A912: call    sub_772CD0
0x83A917: cmp     [esi+30h], ebx
0x83A91A: jnz     short loc_83A924
0x83A91C: call    sub_772DF0
0x83A921: mov     [esi+30h], eax
0x83A924: mov     ecx, [esi+30h]
0x83A927: push    ebx
0x83A928: push    1
0x83A92A: push    0Eh
0x83A92C: call    sub_772CD0
0x83A931: cmp     esi, ds:0B45B38h
0x83A937: mov     dword ptr ds:0B440B4h, 400002h
0x83A941: mov     ds:0B44744h, ebx
0x83A947: jz      short loc_83A968
0x83A949: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83A94D: jnz     short loc_83A956
0x83A94F: mov     ecx, esi
0x83A951: call    sub_7604D0
0x83A956: mov     esi, ds:0B45B38h
0x83A95C: cmp     esi, ebx
0x83A95E: mov     [esp+28h+var_14], esi
0x83A962: jz      short loc_83A968
0x83A964: add     dword ptr [esi+60h], 1
0x83A968: mov     eax, ds:0B45478h
0x83A96D: mov     edi, [esi+58h]
0x83A970: cmp     edi, eax
0x83A972: mov     ebp, eax
0x83A974: jz      short loc_83A9A7
0x83A976: cmp     edi, ebx
0x83A978: jz      short loc_83A996
0x83A97A: lea     ecx, [edi+4]
0x83A97D: push    ecx; lpAddend
0x83A97E: call    dword ptr ds:0A2807Ch
0x83A984: test    eax, eax
0x83A986: jnz     short loc_83A996
0x83A988: cmp     edi, ebx
0x83A98A: jz      short loc_83A996
0x83A98C: mov     edx, [edi]
0x83A98E: mov     eax, [edx]
0x83A990: push    1
0x83A992: mov     ecx, edi
0x83A994: call    eax
0x83A996: cmp     ebp, ebx
0x83A998: mov     [esi+58h], ebp
0x83A99B: jz      short loc_83A9A7
0x83A99D: add     ebp, 4
0x83A9A0: push    ebp; lpAddend
0x83A9A1: call    dword ptr ds:0A28078h
0x83A9A7: mov     eax, ds:0B45268h
0x83A9AC: mov     edi, [esi+44h]
0x83A9AF: cmp     edi, eax
0x83A9B1: mov     ebp, eax
0x83A9B3: jz      short loc_83A9E6
0x83A9B5: cmp     edi, ebx
0x83A9B7: jz      short loc_83A9D5
0x83A9B9: lea     ecx, [edi+4]
0x83A9BC: push    ecx; lpAddend
0x83A9BD: call    dword ptr ds:0A2807Ch
0x83A9C3: test    eax, eax
0x83A9C5: jnz     short loc_83A9D5
0x83A9C7: cmp     edi, ebx
0x83A9C9: jz      short loc_83A9D5
0x83A9CB: mov     edx, [edi]
0x83A9CD: mov     eax, [edx]
0x83A9CF: push    1
0x83A9D1: mov     ecx, edi
0x83A9D3: call    eax
0x83A9D5: cmp     ebp, ebx
0x83A9D7: mov     [esi+44h], ebp
0x83A9DA: jz      short loc_83A9E6
0x83A9DC: add     ebp, 4
0x83A9DF: push    ebp; lpAddend
0x83A9E0: call    dword ptr ds:0A28078h
0x83A9E6: cmp     [esi+30h], ebx
0x83A9E9: jnz     short loc_83A9F3
0x83A9EB: call    sub_772DF0
0x83A9F0: mov     [esi+30h], eax
0x83A9F3: mov     ecx, [esi+30h]
0x83A9F6: push    ebx
0x83A9F7: push    ebx
0x83A9F8: push    1Bh
0x83A9FA: call    sub_772CD0
0x83A9FF: cmp     [esi+30h], ebx
0x83AA02: jnz     short loc_83AA0C
0x83AA04: call    sub_772DF0
0x83AA09: mov     [esi+30h], eax
0x83AA0C: mov     ecx, [esi+30h]
0x83AA0F: push    ebx
0x83AA10: push    ebx
0x83AA11: push    0Fh
0x83AA13: call    sub_772CD0
0x83AA18: cmp     [esi+30h], ebx
0x83AA1B: jnz     short loc_83AA25
0x83AA1D: call    sub_772DF0
0x83AA22: mov     [esi+30h], eax
0x83AA25: mov     ecx, [esi+30h]
0x83AA28: push    ebx
0x83AA29: push    1
0x83AA2B: push    7
0x83AA2D: call    sub_772CD0
0x83AA32: cmp     [esi+30h], ebx
0x83AA35: jnz     short loc_83AA3F
0x83AA37: call    sub_772DF0
0x83AA3C: mov     [esi+30h], eax
0x83AA3F: mov     ecx, [esi+30h]
0x83AA42: push    ebx
0x83AA43: push    4
0x83AA45: push    17h
0x83AA47: call    sub_772CD0
0x83AA4C: cmp     [esi+30h], ebx
0x83AA4F: jnz     short loc_83AA59
0x83AA51: call    sub_772DF0
0x83AA56: mov     [esi+30h], eax
0x83AA59: mov     ecx, [esi+30h]
0x83AA5C: push    ebx
0x83AA5D: push    1
0x83AA5F: push    0Eh
0x83AA61: call    sub_772CD0
0x83AA66: cmp     esi, ds:0B45B3Ch
0x83AA6C: mov     dword ptr ds:0B440B8h, (offset loc_840007+1)
0x83AA76: mov     ds:0B44748h, ebx
0x83AA7C: jz      short loc_83AA9D
0x83AA7E: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83AA82: jnz     short loc_83AA8B
0x83AA84: mov     ecx, esi
0x83AA86: call    sub_7604D0
0x83AA8B: mov     esi, ds:0B45B3Ch
0x83AA91: cmp     esi, ebx
0x83AA93: mov     [esp+28h+var_14], esi
0x83AA97: jz      short loc_83AA9D
0x83AA99: add     dword ptr [esi+60h], 1
0x83AA9D: mov     eax, ds:0B4547Ch
0x83AAA2: mov     edi, [esi+58h]
0x83AAA5: cmp     edi, eax
0x83AAA7: mov     ebp, eax
0x83AAA9: jz      short loc_83AADC
0x83AAAB: cmp     edi, ebx
0x83AAAD: jz      short loc_83AACB
0x83AAAF: lea     ecx, [edi+4]
0x83AAB2: push    ecx; lpAddend
0x83AAB3: call    dword ptr ds:0A2807Ch
0x83AAB9: test    eax, eax
0x83AABB: jnz     short loc_83AACB
0x83AABD: cmp     edi, ebx
0x83AABF: jz      short loc_83AACB
0x83AAC1: mov     edx, [edi]
0x83AAC3: mov     eax, [edx]
0x83AAC5: push    1
0x83AAC7: mov     ecx, edi
0x83AAC9: call    eax
0x83AACB: cmp     ebp, ebx
0x83AACD: mov     [esi+58h], ebp
0x83AAD0: jz      short loc_83AADC
0x83AAD2: add     ebp, 4
0x83AAD5: push    ebp; lpAddend
0x83AAD6: call    dword ptr ds:0A28078h
0x83AADC: mov     eax, ds:0B4526Ch
0x83AAE1: mov     edi, [esi+44h]
0x83AAE4: cmp     edi, eax
0x83AAE6: mov     ebp, eax
0x83AAE8: jz      short loc_83AB1B
0x83AAEA: cmp     edi, ebx
0x83AAEC: jz      short loc_83AB0A
0x83AAEE: lea     ecx, [edi+4]
0x83AAF1: push    ecx; lpAddend
0x83AAF2: call    dword ptr ds:0A2807Ch
0x83AAF8: test    eax, eax
0x83AAFA: jnz     short loc_83AB0A
0x83AAFC: cmp     edi, ebx
0x83AAFE: jz      short loc_83AB0A
0x83AB00: mov     edx, [edi]
0x83AB02: mov     eax, [edx]
0x83AB04: push    1
0x83AB06: mov     ecx, edi
0x83AB08: call    eax
0x83AB0A: cmp     ebp, ebx
0x83AB0C: mov     [esi+44h], ebp
0x83AB0F: jz      short loc_83AB1B
0x83AB11: add     ebp, 4
0x83AB14: push    ebp; lpAddend
0x83AB15: call    dword ptr ds:0A28078h
0x83AB1B: cmp     [esi+30h], ebx
0x83AB1E: jnz     short loc_83AB28
0x83AB20: call    sub_772DF0
0x83AB25: mov     [esi+30h], eax
0x83AB28: mov     ecx, [esi+30h]
0x83AB2B: push    ebx
0x83AB2C: push    ebx
0x83AB2D: push    1Bh
0x83AB2F: call    sub_772CD0
0x83AB34: cmp     [esi+30h], ebx
0x83AB37: jnz     short loc_83AB41
0x83AB39: call    sub_772DF0
0x83AB3E: mov     [esi+30h], eax
0x83AB41: mov     ecx, [esi+30h]
0x83AB44: push    ebx
0x83AB45: push    ebx
0x83AB46: push    0Fh
0x83AB48: call    sub_772CD0
0x83AB4D: cmp     [esi+30h], ebx
0x83AB50: jnz     short loc_83AB5A
0x83AB52: call    sub_772DF0
0x83AB57: mov     [esi+30h], eax
0x83AB5A: mov     ecx, [esi+30h]
0x83AB5D: push    ebx
0x83AB5E: push    1
0x83AB60: push    7
0x83AB62: call    sub_772CD0
0x83AB67: cmp     [esi+30h], ebx
0x83AB6A: jnz     short loc_83AB74
0x83AB6C: call    sub_772DF0
0x83AB71: mov     [esi+30h], eax
0x83AB74: mov     ecx, [esi+30h]
0x83AB77: push    ebx
0x83AB78: push    8
0x83AB7A: push    17h
0x83AB7C: call    sub_772CD0
0x83AB81: cmp     [esi+30h], ebx
0x83AB84: jnz     short loc_83AB8E
0x83AB86: call    sub_772DF0
0x83AB8B: mov     [esi+30h], eax
0x83AB8E: mov     ecx, [esi+30h]
0x83AB91: push    ebx
0x83AB92: push    1
0x83AB94: push    0Eh
0x83AB96: call    sub_772CD0
0x83AB9B: or      eax, 0FFFFFFFFh
0x83AB9E: mov     dword ptr ds:0B440BCh, 2
0x83ABA8: mov     ds:0B4474Ch, ebx
0x83ABAE: add     [esi+60h], eax
0x83ABB1: mov     [esp+28h+var_4], eax
0x83ABB5: jnz     short loc_83ABBE
0x83ABB7: mov     ecx, esi
0x83ABB9: call    sub_7604D0
0x83ABBE: mov     ecx, dword ptr [esp+28h+var_C]
0x83ABC2: mov     large fs:0, ecx
0x83ABC9: pop     ecx
0x83ABCA: pop     edi
0x83ABCB: pop     esi
0x83ABCC: pop     ebp
0x83ABCD: pop     ebx
0x83ABCE: add     esp, 14h
0x83ABD1: retn
