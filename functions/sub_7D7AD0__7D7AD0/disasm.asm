0x7D7AD0: push    0FFFFFFFFh
0x7D7AD2: push    offset SEH_7D7AD0
0x7D7AD7: mov     eax, large fs:0
0x7D7ADD: push    eax
0x7D7ADE: push    ecx
0x7D7ADF: push    ebx
0x7D7AE0: push    ebp
0x7D7AE1: push    esi
0x7D7AE2: push    edi
0x7D7AE3: mov     eax, ds:0B30AACh
0x7D7AE8: xor     eax, esp
0x7D7AEA: push    eax
0x7D7AEB: lea     eax, [esp+24h+var_C]
0x7D7AEF: mov     large fs:0, eax
0x7D7AF5: mov     edi, ecx
0x7D7AF7: mov     eax, [esp+24h+arg_4]
0x7D7AFB: mov     esi, [esp+24h+arg_0]
0x7D7AFF: push    eax
0x7D7B00: push    esi
0x7D7B01: call    sub_7ECB10
0x7D7B06: mov     cx, [esi+0B8h]
0x7D7B0D: cmp     cx, [edi+0B8h]
0x7D7B14: jz      loc_7D7D10
0x7D7B1A: mov     eax, [esi+0BCh]
0x7D7B20: test    eax, eax
0x7D7B22: jz      short loc_7D7B41
0x7D7B24: mov     edx, [eax-4]
0x7D7B27: lea     ebx, [eax-4]
0x7D7B2A: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D7B2F: push    edx; int
0x7D7B30: push    4; unsigned int
0x7D7B32: push    eax; void *
0x7D7B33: call    $LN21
0x7D7B38: push    ebx
0x7D7B39: call    FormHeapFree
0x7D7B3E: add     esp, 4
0x7D7B41: mov     eax, [esi+0C0h]
0x7D7B47: test    eax, eax
0x7D7B49: jz      short loc_7D7B68
0x7D7B4B: mov     ecx, [eax-4]
0x7D7B4E: lea     ebx, [eax-4]
0x7D7B51: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D7B56: push    ecx; int
0x7D7B57: push    4; unsigned int
0x7D7B59: push    eax; void *
0x7D7B5A: call    $LN21
0x7D7B5F: push    ebx
0x7D7B60: call    FormHeapFree
0x7D7B65: add     esp, 4
0x7D7B68: mov     eax, [esi+0C4h]
0x7D7B6E: test    eax, eax
0x7D7B70: jz      short loc_7D7B8F
0x7D7B72: mov     edx, [eax-4]
0x7D7B75: lea     ebx, [eax-4]
0x7D7B78: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7D7B7D: push    edx; int
0x7D7B7E: push    4; unsigned int
0x7D7B80: push    eax; void *
0x7D7B81: call    $LN21
0x7D7B86: push    ebx
0x7D7B87: call    FormHeapFree
0x7D7B8C: add     esp, 4
0x7D7B8F: mov     eax, [esi+0D0h]
0x7D7B95: push    eax
0x7D7B96: call    FormHeapFree
0x7D7B9B: mov     eax, [esi+0C8h]
0x7D7BA1: push    eax
0x7D7BA2: call    FormHeapFree
0x7D7BA7: movzx   ebp, word ptr [edi+0B8h]
0x7D7BAE: xor     ecx, ecx
0x7D7BB0: mov     eax, ebp
0x7D7BB2: mov     edx, 4
0x7D7BB7: mul     edx
0x7D7BB9: seto    cl
0x7D7BBC: neg     ecx
0x7D7BBE: or      ecx, eax
0x7D7BC0: xor     eax, eax
0x7D7BC2: add     ecx, 4
0x7D7BC5: setb    al
0x7D7BC8: neg     eax
0x7D7BCA: or      eax, ecx
0x7D7BCC: push    eax; Size
0x7D7BCD: call    FormHeapAlloc
0x7D7BD2: add     esp, 0Ch
0x7D7BD5: mov     [esp+24h+arg_4], eax
0x7D7BD9: xor     ebx, ebx
0x7D7BDB: cmp     eax, ebx
0x7D7BDD: mov     [esp+24h+var_4], ebx
0x7D7BE1: jz      short loc_7D7BFB
0x7D7BE3: push    offset sub_7016A0; a5
0x7D7BE8: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D7BED: push    ebp; size
0x7D7BEE: lea     ebx, [eax+4]
0x7D7BF1: push    4; a2
0x7D7BF3: push    ebx; a1
0x7D7BF4: mov     [eax], ebp
0x7D7BF6: call    ArrayConstructor
0x7D7BFB: mov     [esi+0BCh], ebx
0x7D7C01: movzx   ebp, word ptr [edi+0B8h]
0x7D7C08: xor     ecx, ecx
0x7D7C0A: mov     eax, ebp
0x7D7C0C: mov     edx, 4
0x7D7C11: mul     edx
0x7D7C13: seto    cl
0x7D7C16: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7D7C1E: neg     ecx
0x7D7C20: or      ecx, eax
0x7D7C22: xor     eax, eax
0x7D7C24: add     ecx, 4
0x7D7C27: setb    al
0x7D7C2A: neg     eax
0x7D7C2C: or      eax, ecx
0x7D7C2E: push    eax; Size
0x7D7C2F: call    FormHeapAlloc
0x7D7C34: add     esp, 4
0x7D7C37: mov     [esp+24h+arg_4], eax
0x7D7C3B: test    eax, eax
0x7D7C3D: mov     [esp+24h+var_4], 1
0x7D7C45: jz      short loc_7D7C61
0x7D7C47: push    offset sub_7016A0; a5
0x7D7C4C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D7C51: push    ebp; size
0x7D7C52: lea     ebx, [eax+4]
0x7D7C55: push    4; a2
0x7D7C57: push    ebx; a1
0x7D7C58: mov     [eax], ebp
0x7D7C5A: call    ArrayConstructor
0x7D7C5F: jmp     short loc_7D7C63
0x7D7C61: xor     ebx, ebx
0x7D7C63: mov     [esi+0C0h], ebx
0x7D7C69: movzx   ebp, word ptr [edi+0B8h]
0x7D7C70: xor     ecx, ecx
0x7D7C72: mov     eax, ebp
0x7D7C74: mov     edx, 4
0x7D7C79: mul     edx
0x7D7C7B: seto    cl
0x7D7C7E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7D7C86: neg     ecx
0x7D7C88: or      ecx, eax
0x7D7C8A: xor     eax, eax
0x7D7C8C: add     ecx, 4
0x7D7C8F: setb    al
0x7D7C92: neg     eax
0x7D7C94: or      eax, ecx
0x7D7C96: push    eax; Size
0x7D7C97: call    FormHeapAlloc
0x7D7C9C: add     esp, 4
0x7D7C9F: mov     [esp+24h+arg_4], eax
0x7D7CA3: test    eax, eax
0x7D7CA5: mov     [esp+24h+var_4], 2
0x7D7CAD: jz      short loc_7D7CC9
0x7D7CAF: push    offset sub_7016A0; a5
0x7D7CB4: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7D7CB9: push    ebp; size
0x7D7CBA: lea     ebx, [eax+4]
0x7D7CBD: push    4; a2
0x7D7CBF: push    ebx; a1
0x7D7CC0: mov     [eax], ebp
0x7D7CC2: call    ArrayConstructor
0x7D7CC7: jmp     short loc_7D7CCB
0x7D7CC9: xor     ebx, ebx
0x7D7CCB: mov     [esi+0C4h], ebx
0x7D7CD1: movzx   ecx, word ptr [edi+0B8h]
0x7D7CD8: push    ecx; Size
0x7D7CD9: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7D7CE1: call    FormHeapAlloc
0x7D7CE6: mov     [esi+0D0h], eax
0x7D7CEC: movzx   edx, word ptr [edi+0B8h]
0x7D7CF3: push    edx; Size
0x7D7CF4: call    FormHeapAlloc
0x7D7CF9: mov     [esi+0C8h], eax
0x7D7CFF: mov     ax, [edi+0B8h]
0x7D7D06: add     esp, 8
0x7D7D09: mov     [esi+0B8h], ax
0x7D7D10: xor     eax, eax
0x7D7D12: cmp     [edi+0B8h], ax
0x7D7D19: mov     [esp+24h+arg_0], eax
0x7D7D1D: jbe     loc_7D7E6C
0x7D7D23: mov     ebp, [edi+0BCh]
0x7D7D29: lea     ebx, ds:0[eax*4]
0x7D7D30: mov     eax, [esi+0BCh]
0x7D7D36: mov     ecx, [eax+ebx]
0x7D7D39: add     eax, ebx
0x7D7D3B: add     ebp, ebx
0x7D7D3D: cmp     ecx, [ebp+0]
0x7D7D40: mov     [esp+24h+arg_4], eax
0x7D7D44: mov     [esp+24h+var_10], ecx
0x7D7D48: jz      short loc_7D7D83
0x7D7D4A: test    ecx, ecx
0x7D7D4C: jz      short loc_7D7D70
0x7D7D4E: add     ecx, 4
0x7D7D51: push    ecx; lpAddend
0x7D7D52: call    dword ptr ds:0A2807Ch
0x7D7D58: test    eax, eax
0x7D7D5A: jnz     short loc_7D7D6C
0x7D7D5C: mov     ecx, [esp+24h+var_10]
0x7D7D60: test    ecx, ecx
0x7D7D62: jz      short loc_7D7D6C
0x7D7D64: mov     edx, [ecx]
0x7D7D66: mov     eax, [edx]
0x7D7D68: push    1
0x7D7D6A: call    eax
0x7D7D6C: mov     eax, [esp+24h+arg_4]
0x7D7D70: mov     ebp, [ebp+0]
0x7D7D73: test    ebp, ebp
0x7D7D75: mov     [eax], ebp
0x7D7D77: jz      short loc_7D7D83
0x7D7D79: add     ebp, 4
0x7D7D7C: push    ebp; lpAddend
0x7D7D7D: call    dword ptr ds:0A28078h
0x7D7D83: mov     eax, [esi+0C0h]
0x7D7D89: mov     ebp, [edi+0C0h]
0x7D7D8F: mov     ecx, [eax+ebx]
0x7D7D92: add     eax, ebx
0x7D7D94: add     ebp, ebx
0x7D7D96: cmp     ecx, [ebp+0]
0x7D7D99: mov     [esp+24h+arg_4], eax
0x7D7D9D: mov     [esp+24h+var_10], ecx
0x7D7DA1: jz      short loc_7D7DDC
0x7D7DA3: test    ecx, ecx
0x7D7DA5: jz      short loc_7D7DC9
0x7D7DA7: add     ecx, 4
0x7D7DAA: push    ecx; lpAddend
0x7D7DAB: call    dword ptr ds:0A2807Ch
0x7D7DB1: test    eax, eax
0x7D7DB3: jnz     short loc_7D7DC5
0x7D7DB5: mov     ecx, [esp+24h+var_10]
0x7D7DB9: test    ecx, ecx
0x7D7DBB: jz      short loc_7D7DC5
0x7D7DBD: mov     edx, [ecx]
0x7D7DBF: mov     eax, [edx]
0x7D7DC1: push    1
0x7D7DC3: call    eax
0x7D7DC5: mov     eax, [esp+24h+arg_4]
0x7D7DC9: mov     ebp, [ebp+0]
0x7D7DCC: test    ebp, ebp
0x7D7DCE: mov     [eax], ebp
0x7D7DD0: jz      short loc_7D7DDC
0x7D7DD2: add     ebp, 4
0x7D7DD5: push    ebp; lpAddend
0x7D7DD6: call    dword ptr ds:0A28078h
0x7D7DDC: mov     eax, [esi+0C4h]
0x7D7DE2: mov     ebp, [edi+0C4h]
0x7D7DE8: add     eax, ebx
0x7D7DEA: add     ebp, ebx
0x7D7DEC: mov     ebx, [eax]
0x7D7DEE: cmp     ebx, [ebp+0]
0x7D7DF1: mov     [esp+24h+arg_4], eax
0x7D7DF5: jz      short loc_7D7E2E
0x7D7DF7: test    ebx, ebx
0x7D7DF9: jz      short loc_7D7E1B
0x7D7DFB: lea     ecx, [ebx+4]
0x7D7DFE: push    ecx; lpAddend
0x7D7DFF: call    dword ptr ds:0A2807Ch
0x7D7E05: test    eax, eax
0x7D7E07: jnz     short loc_7D7E17
0x7D7E09: test    ebx, ebx
0x7D7E0B: jz      short loc_7D7E17
0x7D7E0D: mov     edx, [ebx]
0x7D7E0F: mov     eax, [edx]
0x7D7E11: push    1
0x7D7E13: mov     ecx, ebx
0x7D7E15: call    eax
0x7D7E17: mov     eax, [esp+24h+arg_4]
0x7D7E1B: mov     ebp, [ebp+0]
0x7D7E1E: test    ebp, ebp
0x7D7E20: mov     [eax], ebp
0x7D7E22: jz      short loc_7D7E2E
0x7D7E24: add     ebp, 4
0x7D7E27: push    ebp; lpAddend
0x7D7E28: call    dword ptr ds:0A28078h
0x7D7E2E: mov     eax, [esp+24h+arg_0]
0x7D7E32: mov     ecx, [edi+0D0h]
0x7D7E38: mov     cl, [eax+ecx]
0x7D7E3B: mov     edx, [esi+0D0h]
0x7D7E41: mov     [eax+edx], cl
0x7D7E44: mov     edx, [edi+0C8h]
0x7D7E4A: mov     ecx, [esi+0C8h]
0x7D7E50: mov     dl, [eax+edx]
0x7D7E53: mov     [eax+ecx], dl
0x7D7E56: movzx   ecx, word ptr [edi+0B8h]
0x7D7E5D: add     eax, 1
0x7D7E60: cmp     eax, ecx
0x7D7E62: mov     [esp+24h+arg_0], eax
0x7D7E66: jl      loc_7D7D23
0x7D7E6C: mov     ebx, [esi+0D4h]
0x7D7E72: cmp     ebx, [edi+0D4h]
0x7D7E78: jz      short loc_7D7EB4
0x7D7E7A: test    ebx, ebx
0x7D7E7C: jz      short loc_7D7E9A
0x7D7E7E: lea     edx, [ebx+4]
0x7D7E81: push    edx; lpAddend
0x7D7E82: call    dword ptr ds:0A2807Ch
0x7D7E88: test    eax, eax
0x7D7E8A: jnz     short loc_7D7E9A
0x7D7E8C: test    ebx, ebx
0x7D7E8E: jz      short loc_7D7E9A
0x7D7E90: mov     eax, [ebx]
0x7D7E92: mov     edx, [eax]
0x7D7E94: push    1
0x7D7E96: mov     ecx, ebx
0x7D7E98: call    edx
0x7D7E9A: mov     eax, [edi+0D4h]
0x7D7EA0: test    eax, eax
0x7D7EA2: mov     [esi+0D4h], eax
0x7D7EA8: jz      short loc_7D7EB4
0x7D7EAA: add     eax, 4
0x7D7EAD: push    eax; lpAddend
0x7D7EAE: call    dword ptr ds:0A28078h
0x7D7EB4: mov     ax, [edi+0CCh]
0x7D7EBB: mov     [esi+0CCh], ax
0x7D7EC2: mov     ecx, [edi+0DCh]
0x7D7EC8: mov     [esi+0DCh], ecx
0x7D7ECE: mov     ebx, [esi+0E0h]
0x7D7ED4: cmp     ebx, [edi+0E0h]
0x7D7EDA: jz      short loc_7D7F16
0x7D7EDC: test    ebx, ebx
0x7D7EDE: jz      short loc_7D7EFC
0x7D7EE0: lea     edx, [ebx+4]
0x7D7EE3: push    edx; lpAddend
0x7D7EE4: call    dword ptr ds:0A2807Ch
0x7D7EEA: test    eax, eax
0x7D7EEC: jnz     short loc_7D7EFC
0x7D7EEE: test    ebx, ebx
0x7D7EF0: jz      short loc_7D7EFC
0x7D7EF2: mov     eax, [ebx]
0x7D7EF4: mov     edx, [eax]
0x7D7EF6: push    1
0x7D7EF8: mov     ecx, ebx
0x7D7EFA: call    edx
0x7D7EFC: mov     eax, [edi+0E0h]
0x7D7F02: test    eax, eax
0x7D7F04: mov     [esi+0E0h], eax
0x7D7F0A: jz      short loc_7D7F16
0x7D7F0C: add     eax, 4
0x7D7F0F: push    eax; lpAddend
0x7D7F10: call    dword ptr ds:0A28078h
0x7D7F16: mov     al, [edi+0E4h]
0x7D7F1C: mov     [esi+0E4h], al
0x7D7F22: fld     dword ptr [edi+0E8h]
0x7D7F28: fstp    dword ptr [esi+0E8h]
0x7D7F2E: mov     ecx, [edi+0ECh]
0x7D7F34: mov     [esi+0ECh], ecx
0x7D7F3A: mov     edx, [edi+0D8h]
0x7D7F40: lea     eax, [edi+0A8h]
0x7D7F46: mov     [esi+0D8h], edx
0x7D7F4C: mov     edx, [eax]
0x7D7F4E: lea     ecx, [esi+0A8h]
0x7D7F54: mov     [ecx], edx
0x7D7F56: mov     edx, [eax+4]
0x7D7F59: mov     [ecx+4], edx
0x7D7F5C: mov     edx, [eax+8]
0x7D7F5F: mov     [ecx+8], edx
0x7D7F62: mov     eax, [eax+0Ch]
0x7D7F65: mov     [ecx+0Ch], eax
0x7D7F68: mov     ecx, dword ptr [esp+24h+var_C]
0x7D7F6C: mov     large fs:0, ecx
0x7D7F73: pop     ecx
0x7D7F74: pop     edi
0x7D7F75: pop     esi
0x7D7F76: pop     ebp
0x7D7F77: pop     ebx
0x7D7F78: add     esp, 10h
0x7D7F7B: retn    8
