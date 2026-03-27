0x67AE90: sub     esp, 8
0x67AE93: push    ebx
0x67AE94: push    ebp
0x67AE95: push    esi
0x67AE96: mov     ebp, ecx
0x67AE98: push    edi
0x67AE99: xor     ebx, ebx
0x67AE9B: lea     edi, [ebp+40h]
0x67AE9E: test    edi, edi
0x67AEA0: mov     [esp+18h+var_4], ebx
0x67AEA4: jz      short loc_67AEFD
0x67AEA6: mov     esi, [esp+18h+var_4]
0x67AEAA: lea     ebx, [ebx+0]
0x67AEB0: cmp     dword ptr [edi+4], 0
0x67AEB4: jnz     short loc_67AEC4
0x67AEB6: xor     esi, esi
0x67AEB8: or      ebx, 1
0x67AEBB: cmp     [edi], esi
0x67AEBD: mov     [esp+18h+var_5], 1
0x67AEC2: jz      short loc_67AEC9
0x67AEC4: mov     [esp+18h+var_5], 0
0x67AEC9: test    bl, 1
0x67AECC: jz      short loc_67AEED
0x67AECE: and     ebx, 0FFFFFFFEh
0x67AED1: test    esi, esi
0x67AED3: jz      short loc_67AEED
0x67AED5: lea     eax, [esi+4]
0x67AED8: push    eax; lpAddend
0x67AED9: call    dword ptr ds:0A2807Ch
0x67AEDF: test    eax, eax
0x67AEE1: jnz     short loc_67AEED
0x67AEE3: mov     edx, [esi]
0x67AEE5: mov     eax, [edx]
0x67AEE7: push    1
0x67AEE9: mov     ecx, esi
0x67AEEB: call    eax
0x67AEED: cmp     [esp+18h+var_5], 0
0x67AEF2: jnz     short loc_67AEFD
0x67AEF4: mov     ecx, edi
0x67AEF6: call    sub_67A850
0x67AEFB: jmp     short loc_67AEB0
0x67AEFD: lea     edi, [ebp+48h]
0x67AF00: test    edi, edi
0x67AF02: jz      short loc_67AF55
0x67AF04: mov     esi, [esp+18h+var_4]
0x67AF08: cmp     dword ptr [edi+4], 0
0x67AF0C: jnz     short loc_67AF1C
0x67AF0E: xor     esi, esi
0x67AF10: or      ebx, 2
0x67AF13: cmp     [edi], esi
0x67AF15: mov     [esp+18h+var_5], 1
0x67AF1A: jz      short loc_67AF21
0x67AF1C: mov     [esp+18h+var_5], 0
0x67AF21: test    bl, 2
0x67AF24: jz      short loc_67AF45
0x67AF26: and     ebx, 0FFFFFFFDh
0x67AF29: test    esi, esi
0x67AF2B: jz      short loc_67AF45
0x67AF2D: lea     ecx, [esi+4]
0x67AF30: push    ecx; lpAddend
0x67AF31: call    dword ptr ds:0A2807Ch
0x67AF37: test    eax, eax
0x67AF39: jnz     short loc_67AF45
0x67AF3B: mov     edx, [esi]
0x67AF3D: mov     eax, [edx]
0x67AF3F: push    1
0x67AF41: mov     ecx, esi
0x67AF43: call    eax
0x67AF45: cmp     [esp+18h+var_5], 0
0x67AF4A: jnz     short loc_67AF55
0x67AF4C: mov     ecx, edi
0x67AF4E: call    sub_67A850
0x67AF53: jmp     short loc_67AF08
0x67AF55: pop     edi
0x67AF56: pop     esi
0x67AF57: pop     ebp
0x67AF58: pop     ebx
0x67AF59: add     esp, 8
0x67AF5C: retn
