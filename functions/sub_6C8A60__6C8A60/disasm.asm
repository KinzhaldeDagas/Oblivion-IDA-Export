0x6C8A60: push    ecx
0x6C8A61: push    ebx
0x6C8A62: push    esi
0x6C8A63: push    edi
0x6C8A64: mov     edi, [esp+10h+arg_0]
0x6C8A68: cmp     dword ptr [edi+0D8h], 0A010071h
0x6C8A72: mov     esi, ecx
0x6C8A74: mov     ecx, edi
0x6C8A76: jnb     loc_6C8BAC
0x6C8A7C: push    ebp
0x6C8A7D: lea     eax, [esp+14h+arg_0]
0x6C8A81: xor     ebx, ebx
0x6C8A83: push    eax
0x6C8A84: mov     [esp+18h+arg_0], ebx
0x6C8A88: call    sub_713620
0x6C8A8D: mov     eax, [esp+14h+arg_0]
0x6C8A91: cmp     eax, ebx
0x6C8A93: mov     ebp, 0FFFFh
0x6C8A98: jnz     short loc_6C8AA0
0x6C8A9A: mov     [esi+4], bp
0x6C8A9E: jmp     short loc_6C8AB0
0x6C8AA0: mov     ecx, [esi]
0x6C8AA2: push    eax
0x6C8AA3: call    sub_6C6270
0x6C8AA8: mov     [esi+4], ax
0x6C8AAC: mov     eax, [esp+14h+arg_0]
0x6C8AB0: push    eax
0x6C8AB1: call    FormHeapFree
0x6C8AB6: add     esp, 4
0x6C8AB9: lea     ecx, [esp+14h+arg_0]
0x6C8ABD: push    ecx
0x6C8ABE: mov     ecx, edi
0x6C8AC0: mov     [esp+18h+arg_0], ebx
0x6C8AC4: call    sub_713620
0x6C8AC9: mov     eax, [esp+14h+arg_0]
0x6C8ACD: cmp     eax, ebx
0x6C8ACF: jnz     short loc_6C8AD7
0x6C8AD1: mov     [esi+6], bp
0x6C8AD5: jmp     short loc_6C8AE7
0x6C8AD7: mov     ecx, [esi]
0x6C8AD9: push    eax
0x6C8ADA: call    sub_6C6270
0x6C8ADF: mov     [esi+6], ax
0x6C8AE3: mov     eax, [esp+14h+arg_0]
0x6C8AE7: push    eax
0x6C8AE8: call    FormHeapFree
0x6C8AED: add     esp, 4
0x6C8AF0: lea     edx, [esp+14h+arg_0]
0x6C8AF4: push    edx
0x6C8AF5: mov     ecx, edi
0x6C8AF7: mov     [esp+18h+arg_0], ebx
0x6C8AFB: call    sub_713620
0x6C8B00: mov     eax, [esp+14h+arg_0]
0x6C8B04: cmp     eax, ebx
0x6C8B06: jnz     short loc_6C8B0E
0x6C8B08: mov     [esi+8], bp
0x6C8B0C: jmp     short loc_6C8B1E
0x6C8B0E: mov     ecx, [esi]
0x6C8B10: push    eax
0x6C8B11: call    sub_6C6270
0x6C8B16: mov     [esi+8], ax
0x6C8B1A: mov     eax, [esp+14h+arg_0]
0x6C8B1E: push    eax
0x6C8B1F: call    FormHeapFree
0x6C8B24: add     esp, 4
0x6C8B27: lea     eax, [esp+14h+arg_0]
0x6C8B2B: push    eax
0x6C8B2C: mov     ecx, edi
0x6C8B2E: mov     [esp+18h+arg_0], ebx
0x6C8B32: call    sub_713620
0x6C8B37: mov     eax, [esp+14h+arg_0]
0x6C8B3B: cmp     eax, ebx
0x6C8B3D: jnz     short loc_6C8B45
0x6C8B3F: mov     [esi+0Ah], bp
0x6C8B43: jmp     short loc_6C8B55
0x6C8B45: mov     ecx, [esi]
0x6C8B47: push    eax
0x6C8B48: call    sub_6C6270
0x6C8B4D: mov     [esi+0Ah], ax
0x6C8B51: mov     eax, [esp+14h+arg_0]
0x6C8B55: push    eax
0x6C8B56: call    FormHeapFree
0x6C8B5B: add     esp, 4
0x6C8B5E: lea     ecx, [esp+14h+arg_0]
0x6C8B62: push    ecx
0x6C8B63: mov     ecx, edi
0x6C8B65: mov     [esp+18h+arg_0], ebx
0x6C8B69: call    sub_713620
0x6C8B6E: mov     eax, [esp+14h+arg_0]
0x6C8B72: cmp     eax, ebx
0x6C8B74: jnz     short loc_6C8B8B
0x6C8B76: push    eax
0x6C8B77: mov     [esi+0Ch], bp
0x6C8B7B: call    FormHeapFree
0x6C8B80: add     esp, 4
0x6C8B83: pop     ebp
0x6C8B84: pop     edi
0x6C8B85: pop     esi
0x6C8B86: pop     ebx
0x6C8B87: pop     ecx
0x6C8B88: retn    4
0x6C8B8B: mov     ecx, [esi]
0x6C8B8D: push    eax
0x6C8B8E: call    sub_6C6270
0x6C8B93: mov     [esi+0Ch], ax
0x6C8B97: mov     eax, [esp+14h+arg_0]
0x6C8B9B: push    eax
0x6C8B9C: call    FormHeapFree
0x6C8BA1: add     esp, 4
0x6C8BA4: pop     ebp
0x6C8BA5: pop     edi
0x6C8BA6: pop     esi
0x6C8BA7: pop     ebx
0x6C8BA8: pop     ecx
0x6C8BA9: retn    4
0x6C8BAC: call    sub_712A90
0x6C8BB1: push    eax; a2
0x6C8BB2: mov     ecx, esi; this
0x6C8BB4: call    NiSmartPointer_Set??
0x6C8BB9: mov     eax, [edi+21Ch]
0x6C8BBF: push    1
0x6C8BC1: lea     edx, [esp+14h+var_4]
0x6C8BC5: push    edx
0x6C8BC6: mov     edx, [eax+4]
0x6C8BC9: mov     ebx, 4
0x6C8BCE: push    ebx
0x6C8BCF: lea     ecx, [esp+1Ch+arg_0]
0x6C8BD3: push    ecx
0x6C8BD4: push    eax
0x6C8BD5: mov     [esp+24h+var_4], ebx
0x6C8BD9: call    edx
0x6C8BDB: movzx   eax, word ptr [esp+24h+arg_0]
0x6C8BE0: push    1
0x6C8BE2: lea     ecx, [esp+28h+var_4]
0x6C8BE6: push    ecx
0x6C8BE7: mov     [esi+4], ax
0x6C8BEB: mov     eax, [edi+21Ch]
0x6C8BF1: push    ebx
0x6C8BF2: lea     edx, [esp+30h+arg_0]
0x6C8BF6: push    edx
0x6C8BF7: push    eax
0x6C8BF8: mov     eax, [eax+4]
0x6C8BFB: mov     [esp+38h+var_4], ebx
0x6C8BFF: call    eax
0x6C8C01: movzx   ecx, word ptr [esp+38h+arg_0]
0x6C8C06: push    1
0x6C8C08: lea     edx, [esp+3Ch+var_4]
0x6C8C0C: push    edx
0x6C8C0D: mov     [esi+6], cx
0x6C8C11: mov     eax, [edi+21Ch]
0x6C8C17: mov     edx, [eax+4]
0x6C8C1A: push    ebx
0x6C8C1B: lea     ecx, [esp+44h+arg_0]
0x6C8C1F: push    ecx
0x6C8C20: push    eax
0x6C8C21: mov     [esp+4Ch+var_4], ebx
0x6C8C25: call    edx
0x6C8C27: movzx   eax, word ptr [esp+4Ch+arg_0]
0x6C8C2C: push    1
0x6C8C2E: lea     ecx, [esp+50h+var_4]
0x6C8C32: push    ecx
0x6C8C33: mov     [esi+8], ax
0x6C8C37: mov     eax, [edi+21Ch]
0x6C8C3D: push    ebx
0x6C8C3E: lea     edx, [esp+58h+arg_0]
0x6C8C42: push    edx
0x6C8C43: push    eax
0x6C8C44: mov     eax, [eax+4]
0x6C8C47: mov     [esp+60h+var_4], ebx
0x6C8C4B: call    eax
0x6C8C4D: movzx   ecx, word ptr [esp+60h+arg_0]
0x6C8C52: add     esp, 50h
0x6C8C55: push    1
0x6C8C57: lea     edx, [esp+14h+var_4]
0x6C8C5B: push    edx
0x6C8C5C: mov     [esi+0Ah], cx
0x6C8C60: mov     edi, [edi+21Ch]
0x6C8C66: mov     ecx, [edi+4]
0x6C8C69: push    ebx
0x6C8C6A: lea     eax, [esp+1Ch+arg_0]
0x6C8C6E: push    eax
0x6C8C6F: push    edi
0x6C8C70: mov     [esp+24h+var_4], ebx
0x6C8C74: call    ecx
0x6C8C76: mov     dx, word ptr [esp+24h+arg_0]
0x6C8C7B: add     esp, 14h
0x6C8C7E: pop     edi
0x6C8C7F: mov     [esi+0Ch], dx
0x6C8C83: pop     esi
0x6C8C84: pop     ebx
0x6C8C85: pop     ecx
0x6C8C86: retn    4
