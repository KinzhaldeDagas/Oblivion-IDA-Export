0x6D89F0: push    0FFFFFFFFh
0x6D89F2: push    offset SEH_6D89F0
0x6D89F7: mov     eax, large fs:0
0x6D89FD: push    eax
0x6D89FE: sub     esp, 8
0x6D8A01: push    ebp
0x6D8A02: push    esi
0x6D8A03: push    edi
0x6D8A04: mov     eax, ds:0B30AACh
0x6D8A09: xor     eax, esp
0x6D8A0B: push    eax
0x6D8A0C: lea     eax, [esp+24h+var_C]
0x6D8A10: mov     large fs:0, eax
0x6D8A16: xor     esi, esi
0x6D8A18: mov     [esp+24h+var_10], 0
0x6D8A20: mov     [esp+24h+var_14], esi
0x6D8A24: mov     eax, [esp+24h+arg_4]
0x6D8A28: cmp     dword ptr [eax+0D8h], 4010003h
0x6D8A32: mov     edi, [esp+24h+Src]
0x6D8A36: mov     ecx, [esp+24h+arg_8]
0x6D8A3A: mov     ebp, 1
0x6D8A3F: mov     [esp+24h+var_4], ebp
0x6D8A43: jnb     short loc_6D8A66
0x6D8A45: push    edi
0x6D8A46: push    ecx
0x6D8A47: push    eax
0x6D8A48: call    sub_6D8730
0x6D8A4D: add     esp, 0Ch
0x6D8A50: test    eax, eax
0x6D8A52: jz      short loc_6D8AB6
0x6D8A54: mov     esi, eax
0x6D8A56: add     eax, 4
0x6D8A59: push    eax; lpAddend
0x6D8A5A: mov     [esp+28h+var_14], esi
0x6D8A5E: call    dword ptr ds:0A28078h
0x6D8A64: jmp     short loc_6D8AB2
0x6D8A66: mov     edx, [eax+210h]
0x6D8A6C: cmp     ecx, edx
0x6D8A6E: jb      short loc_6D8A8D
0x6D8A70: mov     eax, [esp+24h+arg_0]
0x6D8A74: mov     dword ptr [eax], 0
0x6D8A7A: mov     ecx, [esp+24h+var_C]
0x6D8A7E: mov     large fs:0, ecx
0x6D8A85: pop     ecx
0x6D8A86: pop     edi
0x6D8A87: pop     esi
0x6D8A88: pop     ebp
0x6D8A89: add     esp, 14h
0x6D8A8C: retn
0x6D8A8D: mov     edx, [eax+208h]
0x6D8A93: mov     eax, [edx+ecx*4]
0x6D8A96: push    eax
0x6D8A97: push    offset unk_B3DB20
0x6D8A9C: call    NiRTTI_Cast
0x6D8AA1: add     esp, 8
0x6D8AA4: push    eax; a2
0x6D8AA5: lea     ecx, [esp+28h+var_14]; this
0x6D8AA9: call    NiSmartPointer_Set??
0x6D8AAE: mov     esi, [esp+24h+var_14]
0x6D8AB2: test    esi, esi
0x6D8AB4: jnz     short loc_6D8AF9
0x6D8AB6: test    esi, esi
0x6D8AB8: mov     edi, [esp+24h+arg_0]
0x6D8ABC: mov     dword ptr [edi], 0
0x6D8AC2: mov     [esp+24h+var_10], ebp
0x6D8AC6: mov     byte ptr [esp+24h+var_4], 0
0x6D8ACB: jz      short loc_6D8AE4
0x6D8ACD: lea     eax, [esi+4]
0x6D8AD0: push    eax; lpAddend
0x6D8AD1: call    dword ptr ds:0A2807Ch
0x6D8AD7: test    eax, eax
0x6D8AD9: jnz     short loc_6D8AE4
0x6D8ADB: mov     edx, [esi]
0x6D8ADD: mov     eax, [edx]
0x6D8ADF: push    ebp
0x6D8AE0: mov     ecx, esi
0x6D8AE2: call    eax
0x6D8AE4: mov     eax, edi
0x6D8AE6: mov     ecx, [esp+24h+var_C]
0x6D8AEA: mov     large fs:0, ecx
0x6D8AF1: pop     ecx
0x6D8AF2: pop     edi
0x6D8AF3: pop     esi
0x6D8AF4: pop     ebp
0x6D8AF5: add     esp, 14h
0x6D8AF8: retn
0x6D8AF9: test    edi, edi
0x6D8AFB: jz      short loc_6D8B05
0x6D8AFD: push    edi; Src
0x6D8AFE: mov     ecx, esi
0x6D8B00: call    sub_6D7E10
0x6D8B05: mov     ebp, [esp+24h+arg_0]
0x6D8B09: lea     edi, [esi+4]
0x6D8B0C: push    edi; lpAddend
0x6D8B0D: mov     [ebp+0], esi
0x6D8B10: call    dword ptr ds:0A28078h
0x6D8B16: push    edi; lpAddend
0x6D8B17: mov     [esp+28h+var_10], 1
0x6D8B1F: mov     byte ptr [esp+28h+var_4], 0
0x6D8B24: call    dword ptr ds:0A2807Ch
0x6D8B2A: test    eax, eax
0x6D8B2C: jnz     short loc_6D8B38
0x6D8B2E: mov     edx, [esi]
0x6D8B30: mov     eax, [edx]
0x6D8B32: push    1
0x6D8B34: mov     ecx, esi
0x6D8B36: call    eax
0x6D8B38: mov     eax, ebp
0x6D8B3A: mov     ecx, [esp+24h+var_C]
0x6D8B3E: mov     large fs:0, ecx
0x6D8B45: pop     ecx
0x6D8B46: pop     edi
0x6D8B47: pop     esi
0x6D8B48: pop     ebp
0x6D8B49: add     esp, 14h
0x6D8B4C: retn
