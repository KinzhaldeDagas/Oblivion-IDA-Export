0x9A8C40: push    ebp
0x9A8C41: push    esi
0x9A8C42: push    38h ; '8'; Size
0x9A8C44: mov     ebp, ecx
0x9A8C46: call    FormHeapAlloc
0x9A8C4B: add     esp, 4
0x9A8C4E: test    eax, eax
0x9A8C50: jz      short loc_9A8C5D
0x9A8C52: mov     ecx, eax; this
0x9A8C54: call    sub_9A84B0
0x9A8C59: mov     esi, eax
0x9A8C5B: jmp     short loc_9A8C5F
0x9A8C5D: xor     esi, esi
0x9A8C5F: mov     eax, [esp+8+arg_0]
0x9A8C63: push    ebx
0x9A8C64: push    edi; Src
0x9A8C65: push    eax; Src
0x9A8C66: mov     ecx, esi; this
0x9A8C68: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A8C6D: mov     edi, [esp+10h+arg_4]
0x9A8C71: mov     ebx, dword ptr [esp+10h+Size+4]
0x9A8C75: and     edi, 0FFFFFFFh
0x9A8C7B: or      edi, 10000000h
0x9A8C81: cmp     ebx, 8
0x9A8C84: jnz     short loc_9A8C8B
0x9A8C86: or      edi, 5
0x9A8C89: jmp     short loc_9A8CBB
0x9A8C8B: cmp     ebx, 0Ch
0x9A8C8E: jnz     short loc_9A8C95
0x9A8C90: or      edi, 6
0x9A8C93: jmp     short loc_9A8CBB
0x9A8C95: cmp     ebx, 10h
0x9A8C98: jnz     short loc_9A8C9F
0x9A8C9A: or      edi, 7
0x9A8C9D: jmp     short loc_9A8CBB
0x9A8C9F: cmp     ebx, 20h ; ' '
0x9A8CA2: jz      short loc_9A8CB8
0x9A8CA4: cmp     ebx, 24h ; '$'
0x9A8CA7: jnz     short loc_9A8CAE
0x9A8CA9: or      edi, 8
0x9A8CAC: jmp     short loc_9A8CBB
0x9A8CAE: cmp     ebx, 30h ; '0'
0x9A8CB1: jz      short loc_9A8CB8
0x9A8CB3: cmp     ebx, 40h ; '@'
0x9A8CB6: jnz     short loc_9A8CBB
0x9A8CB8: or      edi, 9
0x9A8CBB: test    bl, 3
0x9A8CBE: mov     [esi+14h], edi
0x9A8CC1: jnz     short loc_9A8D41
0x9A8CC3: cmp     [esp+10h+arg_1C], 4
0x9A8CC8: jnz     short loc_9A8D41
0x9A8CCA: cmp     byte_B4295B, 0
0x9A8CD1: jnz     short loc_9A8CD8
0x9A8CD3: call    sub_783C70
0x9A8CD8: and     edi, 0FFh
0x9A8CDE: cmp     dword_B428D8[edi*4], 1
0x9A8CE6: jz      short loc_9A8D41
0x9A8CE8: cmp     byte_B4295B, 0
0x9A8CEF: mov     edi, [esi+14h]
0x9A8CF2: jnz     short loc_9A8CF9
0x9A8CF4: call    sub_783C70
0x9A8CF9: and     edi, 0FFh
0x9A8CFF: cmp     dword_B428D8[edi*4], 3
0x9A8D07: jz      short loc_9A8D41
0x9A8D09: test    ebp, ebp
0x9A8D0B: jz      short loc_9A8D2A
0x9A8D0D: mov     edx, [ebp+0]
0x9A8D10: mov     eax, [edx+4]
0x9A8D13: mov     ecx, ebp
0x9A8D15: call    eax
0x9A8D17: cmp     eax, offset unk_BAA920
0x9A8D1C: setz    al
0x9A8D1F: test    al, al
0x9A8D21: jz      short loc_9A8D2A
0x9A8D23: mov     eax, 1
0x9A8D28: jmp     short loc_9A8D45
0x9A8D2A: push    ebp
0x9A8D2B: push    offset unk_BAA8D8
0x9A8D30: call    sub_435CC0
0x9A8D35: add     esp, 8
0x9A8D38: test    al, al
0x9A8D3A: mov     eax, 2
0x9A8D3F: jnz     short loc_9A8D45
0x9A8D41: mov     eax, [esp+10h+arg_8]
0x9A8D45: mov     ecx, [esp+10h+arg_C]
0x9A8D49: mov     edx, [esp+10h+arg_10]
0x9A8D4D: mov     [esi+18h], eax
0x9A8D50: mov     eax, dword ptr [esp+10h+Size]
0x9A8D54: mov     [esi+1Ch], ecx
0x9A8D57: push    eax; Src
0x9A8D58: mov     ecx, esi
0x9A8D5A: mov     [esi+20h], edx
0x9A8D5D: call    sub_9A85C0
0x9A8D62: cmp     [esp+10h+arg_24], 0
0x9A8D67: mov     ecx, [esp+10h+arg_1C]
0x9A8D6B: mov     [esi+28h], ebx
0x9A8D6E: mov     [esi+2Ch], ecx
0x9A8D71: jz      short loc_9A8D9A
0x9A8D73: mov     edx, [esi+30h]
0x9A8D76: push    edx
0x9A8D77: mov     byte ptr [esi+34h], 1
0x9A8D7B: call    FormHeapFree
0x9A8D80: push    ebx; Size
0x9A8D81: call    FormHeapAlloc
0x9A8D86: mov     ecx, [esp+18h+Src]
0x9A8D8A: push    ebx; Size
0x9A8D8B: push    ecx; Src
0x9A8D8C: push    eax; Dst
0x9A8D8D: mov     [esi+30h], eax
0x9A8D90: call    _memcpy
0x9A8D95: add     esp, 14h
0x9A8D98: jmp     short loc_9A8DA5
0x9A8D9A: mov     edx, [esp+10h+Src]
0x9A8D9E: mov     byte ptr [esi+34h], 0
0x9A8DA2: mov     [esi+30h], edx
0x9A8DA5: mov     eax, [ebp+0]
0x9A8DA8: mov     edx, [eax+4Ch]
0x9A8DAB: push    esi
0x9A8DAC: mov     ecx, ebp
0x9A8DAE: call    edx
0x9A8DB0: test    eax, eax
0x9A8DB2: pop     edi
0x9A8DB3: mov     [ebp+24h], eax
0x9A8DB6: pop     ebx
0x9A8DB7: jz      short loc_9A8DC6
0x9A8DB9: mov     eax, [esi]
0x9A8DBB: mov     edx, [eax]
0x9A8DBD: push    1
0x9A8DBF: mov     ecx, esi
0x9A8DC1: call    edx
0x9A8DC3: mov     eax, [ebp+24h]
0x9A8DC6: pop     esi
0x9A8DC7: pop     ebp
0x9A8DC8: retn    28h ; '('
