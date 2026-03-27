0x67A8C0: sub     esp, 18h
0x67A8C3: cmp     dword ptr [ecx+44h], 0
0x67A8C7: push    ebx
0x67A8C8: push    ebp
0x67A8C9: push    esi
0x67A8CA: lea     esi, [ecx+40h]
0x67A8CD: push    edi
0x67A8CE: mov     [esp+28h+var_8], ecx
0x67A8D2: mov     [esp+28h+var_18], 0
0x67A8DA: jnz     short loc_67A8EE
0x67A8DC: xor     edi, edi
0x67A8DE: cmp     [esi], edi
0x67A8E0: mov     [esp+28h+var_18], 1
0x67A8E8: jnz     short loc_67A8F2
0x67A8EA: mov     bl, 1
0x67A8EC: jmp     short loc_67A8F4
0x67A8EE: mov     edi, [esp+28h+a2]
0x67A8F2: xor     bl, bl
0x67A8F4: test    byte ptr [esp+28h+var_18], 1
0x67A8F9: jz      short loc_67A91C
0x67A8FB: and     [esp+28h+var_18], 0FFFFFFFEh
0x67A900: test    edi, edi
0x67A902: jz      short loc_67A91C
0x67A904: lea     eax, [edi+4]
0x67A907: push    eax; lpAddend
0x67A908: call    dword ptr ds:0A2807Ch
0x67A90E: test    eax, eax
0x67A910: jnz     short loc_67A91C
0x67A912: mov     edx, [edi]
0x67A914: mov     eax, [edx]
0x67A916: push    1
0x67A918: mov     ecx, edi
0x67A91A: call    eax
0x67A91C: test    bl, bl
0x67A91E: jnz     loc_67A9FC
0x67A924: test    esi, esi
0x67A926: mov     [esp+28h+var_14], 0
0x67A92E: jz      loc_67A9FC
0x67A934: cmp     dword ptr [esi+4], 0
0x67A938: jnz     short loc_67A94D
0x67A93A: or      [esp+28h+var_18], 2
0x67A93F: xor     edi, edi
0x67A941: cmp     [esi], edi
0x67A943: mov     [esp+28h+var_10], edi
0x67A947: jnz     short loc_67A951
0x67A949: mov     bl, 1
0x67A94B: jmp     short loc_67A953
0x67A94D: mov     edi, [esp+28h+var_10]
0x67A951: xor     bl, bl
0x67A953: test    byte ptr [esp+28h+var_18], 2
0x67A958: jz      short loc_67A97B
0x67A95A: and     [esp+28h+var_18], 0FFFFFFFDh
0x67A95F: test    edi, edi
0x67A961: jz      short loc_67A97B
0x67A963: lea     ecx, [edi+4]
0x67A966: push    ecx; lpAddend
0x67A967: call    dword ptr ds:0A2807Ch
0x67A96D: test    eax, eax
0x67A96F: jnz     short loc_67A97B
0x67A971: mov     edx, [edi]
0x67A973: mov     eax, [edx]
0x67A975: push    1
0x67A977: mov     ecx, edi
0x67A979: call    eax
0x67A97B: test    bl, bl
0x67A97D: jnz     short loc_67A9FC
0x67A97F: lea     ecx, [esp+28h+var_C]
0x67A983: push    ecx
0x67A984: mov     ecx, esi
0x67A986: call    sub_677C70
0x67A98B: mov     edi, [eax]
0x67A98D: mov     eax, [esp+28h+var_C]
0x67A991: test    eax, eax
0x67A993: jz      short loc_67A9B4
0x67A995: mov     ebp, eax
0x67A997: add     eax, 4
0x67A99A: push    eax; lpAddend
0x67A99B: call    dword ptr ds:0A2807Ch
0x67A9A1: test    eax, eax
0x67A9A3: jnz     short loc_67A9B4
0x67A9A5: test    ebp, ebp
0x67A9A7: jz      short loc_67A9B4
0x67A9A9: mov     edx, [ebp+0]
0x67A9AC: mov     eax, [edx]
0x67A9AE: push    1
0x67A9B0: mov     ecx, ebp
0x67A9B2: call    eax
0x67A9B4: mov     ecx, [esp+28h+a2]
0x67A9B8: cmp     [edi+0Ch], ecx
0x67A9BB: jnz     short loc_67A9ED
0x67A9BD: mov     ebx, [esp+28h+var_14]
0x67A9C1: test    ebx, ebx
0x67A9C3: jz      short loc_67A9E4
0x67A9C5: push    ecx
0x67A9C6: mov     eax, esp
0x67A9C8: mov     [eax], edi
0x67A9CA: mov     [esp+2Ch+var_4], esp
0x67A9CE: add     edi, 4
0x67A9D1: push    edi; lpAddend
0x67A9D2: call    dword ptr ds:0A28078h
0x67A9D8: mov     ecx, ebx
0x67A9DA: call    sub_67A760
0x67A9DF: mov     esi, [ebx+4]
0x67A9E2: jmp     short loc_67A9F4
0x67A9E4: mov     ecx, esi
0x67A9E6: call    sub_67A850
0x67A9EB: jmp     short loc_67A9F4
0x67A9ED: mov     [esp+28h+var_14], esi
0x67A9F1: mov     esi, [esi+4]
0x67A9F4: test    esi, esi
0x67A9F6: jnz     loc_67A934
0x67A9FC: mov     esi, [esp+28h+var_8]
0x67AA00: add     esi, 48h ; 'H'
0x67AA03: cmp     dword ptr [esi+4], 0
0x67AA07: mov     eax, 4
0x67AA0C: jnz     short loc_67AA1C
0x67AA0E: or      [esp+28h+var_18], eax
0x67AA12: xor     edi, edi
0x67AA14: cmp     [esi], edi
0x67AA16: jnz     short loc_67AA20
0x67AA18: mov     bl, 1
0x67AA1A: jmp     short loc_67AA22
0x67AA1C: mov     edi, [esp+28h+a2]
0x67AA20: xor     bl, bl
0x67AA22: test    byte ptr [esp+28h+var_18], al
0x67AA26: jz      short loc_67AA49
0x67AA28: and     [esp+28h+var_18], 0FFFFFFFBh
0x67AA2D: test    edi, edi
0x67AA2F: jz      short loc_67AA49
0x67AA31: lea     edx, [edi+4]
0x67AA34: push    edx; lpAddend
0x67AA35: call    dword ptr ds:0A2807Ch
0x67AA3B: test    eax, eax
0x67AA3D: jnz     short loc_67AA49
0x67AA3F: mov     eax, [edi]
0x67AA41: mov     edx, [eax]
0x67AA43: push    1
0x67AA45: mov     ecx, edi
0x67AA47: call    edx
0x67AA49: test    bl, bl
0x67AA4B: jnz     loc_67AB29
0x67AA51: test    esi, esi
0x67AA53: mov     [esp+28h+var_14], 0
0x67AA5B: jz      loc_67AB29
0x67AA61: cmp     dword ptr [esi+4], 0
0x67AA65: jnz     short loc_67AA7A
0x67AA67: or      [esp+28h+var_18], 8
0x67AA6C: xor     edi, edi
0x67AA6E: cmp     [esi], edi
0x67AA70: mov     [esp+28h+var_8], edi
0x67AA74: jnz     short loc_67AA7E
0x67AA76: mov     bl, 1
0x67AA78: jmp     short loc_67AA80
0x67AA7A: mov     edi, [esp+28h+var_8]
0x67AA7E: xor     bl, bl
0x67AA80: test    byte ptr [esp+28h+var_18], 8
0x67AA85: jz      short loc_67AAA8
0x67AA87: and     [esp+28h+var_18], 0FFFFFFF7h
0x67AA8C: test    edi, edi
0x67AA8E: jz      short loc_67AAA8
0x67AA90: lea     eax, [edi+4]
0x67AA93: push    eax; lpAddend
0x67AA94: call    dword ptr ds:0A2807Ch
0x67AA9A: test    eax, eax
0x67AA9C: jnz     short loc_67AAA8
0x67AA9E: mov     edx, [edi]
0x67AAA0: mov     eax, [edx]
0x67AAA2: push    1
0x67AAA4: mov     ecx, edi
0x67AAA6: call    eax
0x67AAA8: test    bl, bl
0x67AAAA: jnz     short loc_67AB29
0x67AAAC: lea     ecx, [esp+28h+var_C]
0x67AAB0: push    ecx
0x67AAB1: mov     ecx, esi
0x67AAB3: call    sub_677C70
0x67AAB8: mov     edi, [eax]
0x67AABA: mov     eax, [esp+28h+var_C]
0x67AABE: test    eax, eax
0x67AAC0: jz      short loc_67AAE1
0x67AAC2: mov     ebp, eax
0x67AAC4: add     eax, 4
0x67AAC7: push    eax; lpAddend
0x67AAC8: call    dword ptr ds:0A2807Ch
0x67AACE: test    eax, eax
0x67AAD0: jnz     short loc_67AAE1
0x67AAD2: test    ebp, ebp
0x67AAD4: jz      short loc_67AAE1
0x67AAD6: mov     edx, [ebp+0]
0x67AAD9: mov     eax, [edx]
0x67AADB: push    1
0x67AADD: mov     ecx, ebp
0x67AADF: call    eax
0x67AAE1: mov     ecx, [esp+28h+a2]
0x67AAE5: cmp     [edi+0Ch], ecx
0x67AAE8: jnz     short loc_67AB1A
0x67AAEA: mov     ebx, [esp+28h+var_14]
0x67AAEE: test    ebx, ebx
0x67AAF0: jz      short loc_67AB11
0x67AAF2: push    ecx
0x67AAF3: mov     eax, esp
0x67AAF5: mov     [eax], edi
0x67AAF7: mov     [esp+2Ch+var_4], esp
0x67AAFB: add     edi, 4
0x67AAFE: push    edi; lpAddend
0x67AAFF: call    dword ptr ds:0A28078h
0x67AB05: mov     ecx, ebx
0x67AB07: call    sub_67A760
0x67AB0C: mov     esi, [ebx+4]
0x67AB0F: jmp     short loc_67AB21
0x67AB11: mov     ecx, esi
0x67AB13: call    sub_67A850
0x67AB18: jmp     short loc_67AB21
0x67AB1A: mov     [esp+28h+var_14], esi
0x67AB1E: mov     esi, [esi+4]
0x67AB21: test    esi, esi
0x67AB23: jnz     loc_67AA61
0x67AB29: pop     edi
0x67AB2A: pop     esi
0x67AB2B: pop     ebp
0x67AB2C: pop     ebx
0x67AB2D: add     esp, 18h
0x67AB30: retn    4
