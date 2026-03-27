0x523B10: push    0FFFFFFFFh
0x523B12: push    offset SEH_6C4510
0x523B17: mov     eax, large fs:0
0x523B1D: push    eax
0x523B1E: push    ecx
0x523B1F: push    ebx
0x523B20: push    ebp
0x523B21: push    esi
0x523B22: push    edi
0x523B23: mov     eax, ds:0B30AACh
0x523B28: xor     eax, esp
0x523B2A: push    eax
0x523B2B: lea     eax, [esp+24h+var_C]
0x523B2F: mov     large fs:0, eax
0x523B35: mov     esi, ecx
0x523B37: movzx   eax, word ptr [esi+8]
0x523B3B: mov     ebp, [esp+24h+arg_0]
0x523B3F: cmp     ebp, eax
0x523B41: jz      loc_523D35
0x523B47: movzx   eax, word ptr [esi+0Ah]
0x523B4B: movzx   ecx, ax
0x523B4E: cmp     ebp, ecx
0x523B50: jnb     short loc_523BC7
0x523B52: cmp     bp, ax
0x523B55: movzx   ecx, bp
0x523B58: mov     [esp+24h+arg_0], ecx
0x523B5C: jnb     short loc_523BC3
0x523B5E: mov     edi, edi
0x523B60: mov     eax, [esi+4]
0x523B63: movzx   edx, cx
0x523B66: lea     ebx, [eax+edx*4]
0x523B69: xor     edx, edx
0x523B6B: cmp     [ebx], edx
0x523B6D: setnz   al
0x523B70: test    al, al
0x523B72: jz      short loc_523BB6
0x523B74: mov     [esp+24h+var_10], edx
0x523B78: mov     edi, [ebx]
0x523B7A: cmp     edi, edx
0x523B7C: mov     [esp+24h+var_4], edx
0x523B80: jz      short loc_523BA8
0x523B82: lea     ecx, [edi+4]
0x523B85: push    ecx; lpAddend
0x523B86: call    dword ptr ds:0A2807Ch
0x523B8C: test    eax, eax
0x523B8E: jnz     short loc_523B9E
0x523B90: test    edi, edi
0x523B92: jz      short loc_523B9E
0x523B94: mov     edx, [edi]
0x523B96: mov     eax, [edx]
0x523B98: push    1
0x523B9A: mov     ecx, edi
0x523B9C: call    eax
0x523B9E: mov     ecx, [esp+24h+arg_0]
0x523BA2: mov     dword ptr [ebx], 0
0x523BA8: add     word ptr [esi+0Ch], 0FFFFh
0x523BAE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x523BB6: add     ecx, 1
0x523BB9: cmp     cx, [esi+0Ah]
0x523BBD: mov     [esp+24h+arg_0], ecx
0x523BC1: jb      short loc_523B60
0x523BC3: mov     [esi+0Ah], bp
0x523BC7: test    ebp, ebp
0x523BC9: mov     eax, [esi+4]
0x523BCC: mov     [esp+24h+var_10], eax
0x523BD0: mov     [esi+8], bp
0x523BD4: jbe     loc_523D4B
0x523BDA: movzx   edi, bp
0x523BDD: xor     ecx, ecx
0x523BDF: mov     eax, edi
0x523BE1: mov     edx, 4
0x523BE6: mul     edx
0x523BE8: seto    cl
0x523BEB: neg     ecx
0x523BED: or      ecx, eax
0x523BEF: xor     eax, eax
0x523BF1: add     ecx, 4
0x523BF4: setb    al
0x523BF7: neg     eax
0x523BF9: or      eax, ecx
0x523BFB: push    eax; Size
0x523BFC: call    FormHeapAlloc
0x523C01: add     esp, 4
0x523C04: mov     [esp+24h+arg_0], eax
0x523C08: test    eax, eax
0x523C0A: mov     [esp+24h+var_4], 1
0x523C12: jz      short loc_523C2E
0x523C14: push    offset sub_7016A0; a5
0x523C19: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x523C1E: push    edi; size
0x523C1F: lea     ebx, [eax+4]
0x523C22: push    4; a2
0x523C24: push    ebx; a1
0x523C25: mov     [eax], edi
0x523C27: call    ArrayConstructor
0x523C2C: jmp     short loc_523C30
0x523C2E: xor     ebx, ebx
0x523C30: xor     eax, eax
0x523C32: cmp     [esi+0Ah], ax
0x523C36: mov     [esp+24h+var_4], 0FFFFFFFFh
0x523C3E: mov     [esi+4], ebx
0x523C41: mov     [esp+24h+arg_0], eax
0x523C45: jbe     short loc_523CB2
0x523C47: jmp     short loc_523C50
0x523C49: align 10h
0x523C50: mov     ebp, [esi+4]
0x523C53: mov     ecx, [esp+24h+var_10]
0x523C57: movzx   edi, ax
0x523C5A: add     edi, edi
0x523C5C: add     edi, edi
0x523C5E: mov     ebx, [ebp+edi+0]
0x523C62: add     ebp, edi
0x523C64: cmp     ebx, [edi+ecx]
0x523C67: jz      short loc_523CA1
0x523C69: test    ebx, ebx
0x523C6B: jz      short loc_523C89
0x523C6D: lea     edx, [ebx+4]
0x523C70: push    edx; lpAddend
0x523C71: call    dword ptr ds:0A2807Ch
0x523C77: test    eax, eax
0x523C79: jnz     short loc_523C89
0x523C7B: test    ebx, ebx
0x523C7D: jz      short loc_523C89
0x523C7F: mov     eax, [ebx]
0x523C81: mov     edx, [eax]
0x523C83: push    1
0x523C85: mov     ecx, ebx
0x523C87: call    edx
0x523C89: mov     eax, [esp+24h+var_10]
0x523C8D: mov     edi, [edi+eax]
0x523C90: test    edi, edi
0x523C92: mov     [ebp+0], edi
0x523C95: jz      short loc_523CA1
0x523C97: add     edi, 4
0x523C9A: push    edi; lpAddend
0x523C9B: call    dword ptr ds:0A28078h
0x523CA1: mov     eax, [esp+24h+arg_0]
0x523CA5: add     eax, 1
0x523CA8: cmp     ax, [esi+0Ah]
0x523CAC: mov     [esp+24h+arg_0], eax
0x523CB0: jb      short loc_523C50
0x523CB2: movzx   ebx, word ptr [esi+0Ah]
0x523CB6: cmp     bx, [esi+8]
0x523CBA: jnb     short loc_523D10
0x523CBC: mov     [esp+24h+arg_0], 0
0x523CC4: mov     edx, [esi+4]
0x523CC7: movzx   ecx, bx
0x523CCA: mov     edi, [edx+ecx*4]
0x523CCD: test    edi, edi
0x523CCF: lea     ebp, [edx+ecx*4]
0x523CD2: mov     [esp+24h+var_4], 2
0x523CDA: jz      short loc_523CFF
0x523CDC: lea     eax, [edi+4]
0x523CDF: push    eax; lpAddend
0x523CE0: call    dword ptr ds:0A2807Ch
0x523CE6: test    eax, eax
0x523CE8: jnz     short loc_523CF8
0x523CEA: test    edi, edi
0x523CEC: jz      short loc_523CF8
0x523CEE: mov     edx, [edi]
0x523CF0: mov     eax, [edx]
0x523CF2: push    1
0x523CF4: mov     ecx, edi
0x523CF6: call    eax
0x523CF8: mov     dword ptr [ebp+0], 0
0x523CFF: add     ebx, 1
0x523D02: cmp     bx, [esi+8]
0x523D06: mov     [esp+24h+var_4], 0FFFFFFFFh
0x523D0E: jb      short loc_523CC4
0x523D10: mov     eax, [esp+24h+var_10]
0x523D14: test    eax, eax
0x523D16: jz      short loc_523D35
0x523D18: mov     ecx, [eax-4]
0x523D1B: lea     esi, [eax-4]
0x523D1E: push    offset sub_7016A0; void (__thiscall *)(void *)
0x523D23: push    ecx; int
0x523D24: push    4; unsigned int
0x523D26: push    eax; void *
0x523D27: call    $LN21
0x523D2C: push    esi
0x523D2D: call    FormHeapFree
0x523D32: add     esp, 4
0x523D35: mov     ecx, [esp+24h+var_C]
0x523D39: mov     large fs:0, ecx
0x523D40: pop     ecx
0x523D41: pop     edi
0x523D42: pop     esi
0x523D43: pop     ebp
0x523D44: pop     ebx
0x523D45: add     esp, 10h
0x523D48: retn    4
0x523D4B: mov     dword ptr [esi+4], 0
0x523D52: jmp     short loc_523D14
