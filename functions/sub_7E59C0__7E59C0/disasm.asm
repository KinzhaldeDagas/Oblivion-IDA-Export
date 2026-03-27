0x7E59C0: push    0FFFFFFFFh
0x7E59C2: push    offset SEH_7C77C0
0x7E59C7: mov     eax, large fs:0
0x7E59CD: push    eax
0x7E59CE: push    ebx
0x7E59CF: push    esi
0x7E59D0: push    edi
0x7E59D1: mov     eax, ds:0B30AACh
0x7E59D6: xor     eax, esp
0x7E59D8: push    eax
0x7E59D9: lea     eax, [esp+1Ch+var_C]
0x7E59DD: mov     large fs:0, eax
0x7E59E3: mov     ebx, ecx
0x7E59E5: mov     esi, [esp+1Ch+arg_0]
0x7E59E9: test    esi, esi
0x7E59EB: jz      loc_7E5B38
0x7E59F1: mov     eax, [esi]
0x7E59F3: mov     edx, [eax+4]
0x7E59F6: mov     ecx, esi
0x7E59F8: call    edx
0x7E59FA: test    eax, eax
0x7E59FC: jz      short loc_7E5A0E
0x7E59FE: mov     edi, edi
0x7E5A00: cmp     eax, offset dword_B3FD54
0x7E5A05: jz      short loc_7E5A5C
0x7E5A07: mov     eax, [eax+4]
0x7E5A0A: test    eax, eax
0x7E5A0C: jnz     short loc_7E5A00
0x7E5A0E: mov     edx, [esi]
0x7E5A10: mov     eax, [edx+8]
0x7E5A13: mov     ecx, esi
0x7E5A15: call    eax
0x7E5A17: mov     edi, eax
0x7E5A19: test    edi, edi
0x7E5A1B: jz      loc_7E5B38
0x7E5A21: mov     eax, [edi+8]
0x7E5A24: push    3; MaxCount
0x7E5A26: push    offset off_A738A4; Str2
0x7E5A2B: push    eax; Str1
0x7E5A2C: call    _strncmp
0x7E5A31: add     esp, 0Ch
0x7E5A34: test    eax, eax
0x7E5A36: jz      loc_7E5B38
0x7E5A3C: movzx   eax, word ptr [edi+0B6h]
0x7E5A43: xor     esi, esi
0x7E5A45: test    eax, eax
0x7E5A47: jbe     loc_7E5B38
0x7E5A4D: cmp     eax, esi
0x7E5A4F: ja      loc_7E5B19
0x7E5A55: xor     eax, eax
0x7E5A57: jmp     loc_7E5B22
0x7E5A5C: push    4
0x7E5A5E: mov     ecx, esi
0x7E5A60: call    NiNode_GetNiPropertyByID
0x7E5A65: test    eax, eax
0x7E5A67: jz      loc_7E5B38
0x7E5A6D: mov     edx, [eax]
0x7E5A6F: mov     ecx, eax
0x7E5A71: mov     eax, [edx+4]
0x7E5A74: call    eax
0x7E5A76: test    eax, eax
0x7E5A78: jz      loc_7E5B38
0x7E5A7E: mov     edi, edi
0x7E5A80: cmp     eax, offset dword_B4618C
0x7E5A85: jz      short loc_7E5AA3
0x7E5A87: mov     eax, [eax+4]
0x7E5A8A: test    eax, eax
0x7E5A8C: jnz     short loc_7E5A80
0x7E5A8E: mov     ecx, [esp+1Ch+var_C]
0x7E5A92: mov     large fs:0, ecx
0x7E5A99: pop     ecx
0x7E5A9A: pop     edi
0x7E5A9B: pop     esi
0x7E5A9C: pop     ebx
0x7E5A9D: add     esp, 0Ch
0x7E5AA0: retn    4
0x7E5AA3: push    2
0x7E5AA5: mov     ecx, esi
0x7E5AA7: call    NiNode_GetNiPropertyByID
0x7E5AAC: test    eax, eax
0x7E5AAE: jz      short loc_7E5AC1
0x7E5AB0: push    offset dword_B3FA90
0x7E5AB5: lea     ecx, [eax+28h]
0x7E5AB8: call    sub_8AA350
0x7E5ABD: test    al, al
0x7E5ABF: jnz     short loc_7E5B38
0x7E5AC1: lea     edi, [esi+4]
0x7E5AC4: push    edi; lpAddend
0x7E5AC5: mov     [esp+20h+arg_0], esi
0x7E5AC9: call    dword ptr ds:0A28078h
0x7E5ACF: lea     ecx, [esp+1Ch+arg_0]
0x7E5AD3: push    ecx
0x7E5AD4: lea     ecx, [ebx+110h]
0x7E5ADA: mov     [esp+20h+var_4], 0
0x7E5AE2: call    NiTArray_AddItem
0x7E5AE7: push    edi; lpAddend
0x7E5AE8: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E5AF0: call    dword ptr ds:0A2807Ch
0x7E5AF6: test    eax, eax
0x7E5AF8: jnz     short loc_7E5B38
0x7E5AFA: mov     edx, [esi]
0x7E5AFC: mov     eax, [edx]
0x7E5AFE: push    1
0x7E5B00: mov     ecx, esi
0x7E5B02: call    eax
0x7E5B04: mov     ecx, [esp+1Ch+var_C]
0x7E5B08: mov     large fs:0, ecx
0x7E5B0F: pop     ecx
0x7E5B10: pop     edi
0x7E5B11: pop     esi
0x7E5B12: pop     ebx
0x7E5B13: add     esp, 0Ch
0x7E5B16: retn    4
0x7E5B19: mov     ecx, [edi+0B0h]
0x7E5B1F: mov     eax, [ecx+esi*4]
0x7E5B22: push    eax
0x7E5B23: mov     ecx, ebx
0x7E5B25: call    sub_7E59C0
0x7E5B2A: movzx   eax, word ptr [edi+0B6h]
0x7E5B31: add     esi, 1
0x7E5B34: cmp     eax, esi
0x7E5B36: ja      short loc_7E5B19
0x7E5B38: mov     ecx, [esp+1Ch+var_C]
0x7E5B3C: mov     large fs:0, ecx
0x7E5B43: pop     ecx
0x7E5B44: pop     edi
0x7E5B45: pop     esi
0x7E5B46: pop     ebx
0x7E5B47: add     esp, 0Ch
0x7E5B4A: retn    4
