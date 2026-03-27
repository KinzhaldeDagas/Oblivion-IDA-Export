0x7C1A30: push    0FFFFFFFFh
0x7C1A32: push    offset SEH_8A47C0
0x7C1A37: mov     eax, large fs:0
0x7C1A3D: push    eax
0x7C1A3E: sub     esp, 8
0x7C1A41: push    ebx
0x7C1A42: push    ebp
0x7C1A43: push    esi
0x7C1A44: push    edi
0x7C1A45: mov     eax, ds:0B30AACh
0x7C1A4A: xor     eax, esp
0x7C1A4C: push    eax
0x7C1A4D: lea     eax, [esp+28h+var_C]
0x7C1A51: mov     large fs:0, eax
0x7C1A57: mov     ebx, ecx
0x7C1A59: cmp     [esp+28h+arg_0], 0
0x7C1A5E: jz      loc_7C1B36
0x7C1A64: xor     esi, esi
0x7C1A66: mov     [esp+28h+var_10], esi
0x7C1A6A: mov     edi, [ebx+34h]
0x7C1A6D: test    edi, edi
0x7C1A6F: mov     [esp+28h+var_4], esi
0x7C1A73: mov     [esp+28h+var_14], edi
0x7C1A77: jz      loc_7C1B12
0x7C1A7D: mov     ebp, ds:0A28078h
0x7C1A83: cmp     esi, [edi+8]
0x7C1A86: jz      short loc_7C1AB5
0x7C1A88: test    esi, esi
0x7C1A8A: jz      short loc_7C1AA4
0x7C1A8C: lea     eax, [esi+4]
0x7C1A8F: push    eax; lpAddend
0x7C1A90: call    dword ptr ds:0A2807Ch
0x7C1A96: test    eax, eax
0x7C1A98: jnz     short loc_7C1AA4
0x7C1A9A: mov     edx, [esi]
0x7C1A9C: mov     eax, [edx]
0x7C1A9E: push    1
0x7C1AA0: mov     ecx, esi
0x7C1AA2: call    eax
0x7C1AA4: mov     esi, [edi+8]
0x7C1AA7: test    esi, esi
0x7C1AA9: mov     [esp+28h+var_10], esi
0x7C1AAD: jz      short loc_7C1AB5
0x7C1AAF: lea     ecx, [esi+4]
0x7C1AB2: push    ecx; lpAddend
0x7C1AB3: call    ebp ; InterlockedIncrement
0x7C1AB5: cmp     esi, [esp+28h+arg_0]
0x7C1AB9: jz      short loc_7C1AC7
0x7C1ABB: mov     edi, [edi]
0x7C1ABD: test    edi, edi
0x7C1ABF: jnz     short loc_7C1A83
0x7C1AC1: mov     [esp+28h+var_14], edi
0x7C1AC5: jmp     short loc_7C1B12
0x7C1AC7: test    edi, edi
0x7C1AC9: mov     [esp+28h+var_14], edi
0x7C1ACD: jz      short loc_7C1B12
0x7C1ACF: lea     edx, [esp+28h+var_10]
0x7C1AD3: push    edx
0x7C1AD4: lea     ecx, [ebx+20h]
0x7C1AD7: call    sub_7C16B0
0x7C1ADC: lea     eax, [esp+28h+var_14]
0x7C1AE0: push    eax
0x7C1AE1: lea     ecx, [esp+2Ch+arg_0]
0x7C1AE5: push    ecx
0x7C1AE6: lea     ecx, [ebx+30h]
0x7C1AE9: call    sub_7C17D0
0x7C1AEE: mov     edi, [esp+28h+arg_0]
0x7C1AF2: test    edi, edi
0x7C1AF4: jz      short loc_7C1B12
0x7C1AF6: lea     edx, [edi+4]
0x7C1AF9: push    edx; lpAddend
0x7C1AFA: call    dword ptr ds:0A2807Ch
0x7C1B00: test    eax, eax
0x7C1B02: jnz     short loc_7C1B12
0x7C1B04: test    edi, edi
0x7C1B06: jz      short loc_7C1B12
0x7C1B08: mov     eax, [edi]
0x7C1B0A: mov     edx, [eax]
0x7C1B0C: push    1
0x7C1B0E: mov     ecx, edi
0x7C1B10: call    edx
0x7C1B12: test    esi, esi
0x7C1B14: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7C1B1C: jz      short loc_7C1B36
0x7C1B1E: lea     eax, [esi+4]
0x7C1B21: push    eax; lpAddend
0x7C1B22: call    dword ptr ds:0A2807Ch
0x7C1B28: test    eax, eax
0x7C1B2A: jnz     short loc_7C1B36
0x7C1B2C: mov     edx, [esi]
0x7C1B2E: mov     eax, [edx]
0x7C1B30: push    1
0x7C1B32: mov     ecx, esi
0x7C1B34: call    eax
0x7C1B36: mov     ecx, [esp+28h+var_C]
0x7C1B3A: mov     large fs:0, ecx
0x7C1B41: pop     ecx
0x7C1B42: pop     edi
0x7C1B43: pop     esi
0x7C1B44: pop     ebp
0x7C1B45: pop     ebx
0x7C1B46: add     esp, 14h
0x7C1B49: retn    4
