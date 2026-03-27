0x6A9AA0: sub     esp, 0Ch
0x6A9AA3: push    esi
0x6A9AA4: push    edi
0x6A9AA5: mov     edi, ecx
0x6A9AA7: mov     edx, [edi+300h]
0x6A9AAD: mov     ecx, [edx+4]
0x6A9AB0: xor     eax, eax
0x6A9AB2: test    ecx, ecx
0x6A9AB4: mov     [esp+14h+var_C], 0
0x6A9ABC: jbe     short loc_6A9AD2
0x6A9ABE: mov     esi, [edx+8]
0x6A9AC1: mov     edx, esi
0x6A9AC3: cmp     dword ptr [edx], 0
0x6A9AC6: jnz     short loc_6A9B18
0x6A9AC8: add     eax, 1
0x6A9ACB: add     edx, 4
0x6A9ACE: cmp     eax, ecx
0x6A9AD0: jb      short loc_6A9AC3
0x6A9AD2: xor     eax, eax
0x6A9AD4: test    eax, eax
0x6A9AD6: mov     [esp+14h+var_8], eax
0x6A9ADA: jz      short loc_6A9B2B
0x6A9ADC: lea     esp, [esp+0]
0x6A9AE0: lea     eax, [esp+14h+var_C]
0x6A9AE4: push    eax
0x6A9AE5: lea     ecx, [esp+18h+var_4]
0x6A9AE9: push    ecx
0x6A9AEA: mov     ecx, [edi+300h]
0x6A9AF0: lea     edx, [esp+1Ch+var_8]
0x6A9AF4: push    edx
0x6A9AF5: call    sub_452600
0x6A9AFA: mov     ecx, [esp+14h+var_C]
0x6A9AFE: mov     eax, [ecx]
0x6A9B00: test    al, 10h
0x6A9B02: jz      short loc_6A9B24
0x6A9B04: and     eax, 0FFFFFDFFh
0x6A9B09: test    al, 1
0x6A9B0B: mov     [ecx], eax
0x6A9B0D: jz      short loc_6A9B1D
0x6A9B0F: push    0
0x6A9B11: call    sub_6B7130
0x6A9B16: jmp     short loc_6A9B24
0x6A9B18: mov     eax, [esi+eax*4]
0x6A9B1B: jmp     short loc_6A9AD4
0x6A9B1D: push    1
0x6A9B1F: call    sub_6B6E60
0x6A9B24: cmp     [esp+14h+var_8], 0
0x6A9B29: jnz     short loc_6A9AE0
0x6A9B2B: pop     edi
0x6A9B2C: pop     esi
0x6A9B2D: add     esp, 0Ch
0x6A9B30: retn
