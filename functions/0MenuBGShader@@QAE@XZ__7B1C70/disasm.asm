0x7B1C70: push    0FFFFFFFFh
0x7B1C72: push    offset ??0MenuBGShader@@QAE@XZ_SEH
0x7B1C77: mov     eax, large fs:0
0x7B1C7D: push    eax
0x7B1C7E: push    ecx
0x7B1C7F: push    ebx
0x7B1C80: push    ebp
0x7B1C81: push    esi
0x7B1C82: push    edi
0x7B1C83: mov     eax, ds:0B30AACh
0x7B1C88: xor     eax, esp
0x7B1C8A: push    eax
0x7B1C8B: lea     eax, [esp+24h+var_C]
0x7B1C8F: mov     large fs:0, eax
0x7B1C95: mov     esi, ecx
0x7B1C97: mov     [esp+24h+var_10], esi
0x7B1C9B: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7B1CA0: push    offset sub_4027D0; a5
0x7B1CA5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7B1CAA: push    1; size
0x7B1CAC: lea     eax, [esi+94h]
0x7B1CB2: push    4; a2
0x7B1CB4: xor     ebp, ebp
0x7B1CB6: push    eax; a1
0x7B1CB7: mov     [esp+38h+var_4], ebp
0x7B1CBB: mov     dword ptr [esi], offset ??_7MenuBGShader@@6B@; const MenuBGShader::`vftable'
0x7B1CC1: call    ArrayConstructor
0x7B1CC6: push    offset sub_7016A0; a5
0x7B1CCB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7B1CD0: push    1; size
0x7B1CD2: push    4; a2
0x7B1CD4: lea     edi, [esi+98h]
0x7B1CDA: push    edi; a1
0x7B1CDB: mov     byte ptr [esp+38h+var_4], 1
0x7B1CE0: call    ArrayConstructor
0x7B1CE5: push    offset sub_7016A0; a5
0x7B1CEA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7B1CEF: push    1; size
0x7B1CF1: push    4; a2
0x7B1CF3: lea     ebx, [esi+9Ch]
0x7B1CF9: push    ebx; a1
0x7B1CFA: mov     byte ptr [esp+38h+var_4], 2
0x7B1CFF: call    ArrayConstructor
0x7B1D04: mov     [esi+0B4h], ebp
0x7B1D0A: mov     [esi+90h], ebp
0x7B1D10: mov     byte ptr [esi+0B0h], 0
0x7B1D17: mov     ebp, [edi]
0x7B1D19: test    ebp, ebp
0x7B1D1B: mov     byte ptr [esp+24h+var_4], 4
0x7B1D20: jz      short loc_7B1D45
0x7B1D22: lea     eax, [ebp+4]
0x7B1D25: push    eax; lpAddend
0x7B1D26: call    dword ptr ds:0A2807Ch
0x7B1D2C: test    eax, eax
0x7B1D2E: jnz     short loc_7B1D3F
0x7B1D30: test    ebp, ebp
0x7B1D32: jz      short loc_7B1D3F
0x7B1D34: mov     edx, [ebp+0]
0x7B1D37: mov     eax, [edx]
0x7B1D39: push    1
0x7B1D3B: mov     ecx, ebp
0x7B1D3D: call    eax
0x7B1D3F: mov     dword ptr [edi], 0
0x7B1D45: mov     edi, [ebx]
0x7B1D47: test    edi, edi
0x7B1D49: jz      short loc_7B1D6D
0x7B1D4B: lea     ecx, [edi+4]
0x7B1D4E: push    ecx; lpAddend
0x7B1D4F: call    dword ptr ds:0A2807Ch
0x7B1D55: test    eax, eax
0x7B1D57: jnz     short loc_7B1D67
0x7B1D59: test    edi, edi
0x7B1D5B: jz      short loc_7B1D67
0x7B1D5D: mov     edx, [edi]
0x7B1D5F: mov     eax, [edx]
0x7B1D61: push    1
0x7B1D63: mov     ecx, edi
0x7B1D65: call    eax
0x7B1D67: mov     dword ptr [ebx], 0
0x7B1D6D: mov     ecx, [esi+94h]
0x7B1D73: test    ecx, ecx
0x7B1D75: jz      short loc_7B1D8C
0x7B1D77: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7B1D7B: jnz     short loc_7B1D82
0x7B1D7D: call    sub_7604D0
0x7B1D82: mov     dword ptr [esi+94h], 0
0x7B1D8C: mov     byte ptr [esi+20h], 1
0x7B1D90: mov     edi, [esi+0B4h]
0x7B1D96: test    edi, edi
0x7B1D98: jz      short loc_7B1DC0
0x7B1D9A: lea     ecx, [edi+4]
0x7B1D9D: push    ecx; lpAddend
0x7B1D9E: call    dword ptr ds:0A2807Ch
0x7B1DA4: test    eax, eax
0x7B1DA6: jnz     short loc_7B1DB6
0x7B1DA8: test    edi, edi
0x7B1DAA: jz      short loc_7B1DB6
0x7B1DAC: mov     edx, [edi]
0x7B1DAE: mov     eax, [edx]
0x7B1DB0: push    1
0x7B1DB2: mov     ecx, edi
0x7B1DB4: call    eax
0x7B1DB6: mov     dword ptr [esi+0B4h], 0
0x7B1DC0: mov     eax, esi
0x7B1DC2: mov     ecx, dword ptr [esp+24h+var_C]
0x7B1DC6: mov     large fs:0, ecx
0x7B1DCD: pop     ecx
0x7B1DCE: pop     edi
0x7B1DCF: pop     esi
0x7B1DD0: pop     ebp
0x7B1DD1: pop     ebx
0x7B1DD2: add     esp, 10h
0x7B1DD5: retn
