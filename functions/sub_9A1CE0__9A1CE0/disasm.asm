0x9A1CE0: push    0FFFFFFFFh
0x9A1CE2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x9A1CE7: mov     eax, large fs:0
0x9A1CED: push    eax
0x9A1CEE: push    ecx
0x9A1CEF: push    ebx
0x9A1CF0: push    ebp
0x9A1CF1: push    esi
0x9A1CF2: push    edi
0x9A1CF3: mov     eax, ___security_cookie
0x9A1CF8: xor     eax, esp
0x9A1CFA: push    eax
0x9A1CFB: lea     eax, [esp+24h+var_C]
0x9A1CFF: mov     large fs:0, eax
0x9A1D05: xor     ebp, ebp
0x9A1D07: cmp     [esp+24h+arg_4], ebp
0x9A1D0B: jz      loc_9A1DFE
0x9A1D11: mov     esi, [esp+24h+arg_0]
0x9A1D15: cmp     esi, ebp
0x9A1D17: jz      loc_9A1DFE
0x9A1D1D: lea     eax, [esi-1]
0x9A1D20: test    esi, eax
0x9A1D22: setz    al
0x9A1D25: test    al, al
0x9A1D27: jz      loc_9A1DFE
0x9A1D2D: push    5Ch ; '\'; Size
0x9A1D2F: call    FormHeapAlloc
0x9A1D34: add     esp, 4
0x9A1D37: mov     [esp+24h+var_10], eax
0x9A1D3B: cmp     eax, ebp
0x9A1D3D: mov     [esp+24h+var_4], ebp
0x9A1D41: jz      short loc_9A1D4C
0x9A1D43: mov     ecx, eax
0x9A1D45: call    sub_9A1BB0
0x9A1D4A: mov     ebp, eax
0x9A1D4C: mov     eax, [esp+24h+arg_8]
0x9A1D50: mov     ecx, [eax]
0x9A1D52: mov     [ebp+18h], ecx
0x9A1D55: mov     edx, [eax+4]
0x9A1D58: mov     [ebp+1Ch], edx
0x9A1D5B: mov     eax, [eax+8]
0x9A1D5E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x9A1D66: mov     [ebp+20h], eax
0x9A1D69: lea     ebx, [ebp+44h]
0x9A1D6C: mov     [esp+24h+var_10], 6
0x9A1D74: jmp     short loc_9A1D7A
0x9A1D76: mov     esi, [esp+24h+arg_0]
0x9A1D7A: push    esi
0x9A1D7B: push    esi
0x9A1D7C: call    Ni2DBuffer__Ni2DBuffer
0x9A1D81: mov     esi, [ebx]
0x9A1D83: mov     edi, eax
0x9A1D85: add     esp, 8
0x9A1D88: cmp     esi, edi
0x9A1D8A: jz      short loc_9A1DBC
0x9A1D8C: test    esi, esi
0x9A1D8E: jz      short loc_9A1DAC
0x9A1D90: lea     ecx, [esi+4]
0x9A1D93: push    ecx; lpAddend
0x9A1D94: call    ds:InterlockedDecrement
0x9A1D9A: test    eax, eax
0x9A1D9C: jnz     short loc_9A1DAC
0x9A1D9E: test    esi, esi
0x9A1DA0: jz      short loc_9A1DAC
0x9A1DA2: mov     edx, [esi]
0x9A1DA4: mov     eax, [edx]
0x9A1DA6: push    1
0x9A1DA8: mov     ecx, esi
0x9A1DAA: call    eax
0x9A1DAC: test    edi, edi
0x9A1DAE: mov     [ebx], edi
0x9A1DB0: jz      short loc_9A1DBC
0x9A1DB2: add     edi, 4
0x9A1DB5: push    edi; lpAddend
0x9A1DB6: call    ds:InterlockedIncrement
0x9A1DBC: add     ebx, 4
0x9A1DBF: sub     [esp+24h+var_10], 1
0x9A1DC4: jnz     short loc_9A1D76
0x9A1DC6: mov     cl, byte_B3FF00
0x9A1DCC: mov     [ebp+34h], cl
0x9A1DCF: mov     edx, dword_B2752C
0x9A1DD5: mov     ecx, [esp+24h+arg_4]
0x9A1DD9: mov     [ebp+38h], edx
0x9A1DDC: mov     al, byte_B27530
0x9A1DE1: mov     [ebp+3Ch], al
0x9A1DE4: mov     edx, [ecx]
0x9A1DE6: mov     eax, [edx+110h]
0x9A1DEC: push    ebp
0x9A1DED: call    eax
0x9A1DEF: test    al, al
0x9A1DF1: jnz     short loc_9A1E14
0x9A1DF3: mov     edx, [ebp+0]
0x9A1DF6: mov     eax, [edx]
0x9A1DF8: push    1
0x9A1DFA: mov     ecx, ebp
0x9A1DFC: call    eax
0x9A1DFE: xor     eax, eax
0x9A1E00: mov     ecx, dword ptr [esp+24h+var_C]
0x9A1E04: mov     large fs:0, ecx
0x9A1E0B: pop     ecx
0x9A1E0C: pop     edi
0x9A1E0D: pop     esi
0x9A1E0E: pop     ebp
0x9A1E0F: pop     ebx
0x9A1E10: add     esp, 10h
0x9A1E13: retn
0x9A1E14: mov     eax, ebp
0x9A1E16: mov     ecx, dword ptr [esp+24h+var_C]
0x9A1E1A: mov     large fs:0, ecx
0x9A1E21: pop     ecx
0x9A1E22: pop     edi
0x9A1E23: pop     esi
0x9A1E24: pop     ebp
0x9A1E25: pop     ebx
0x9A1E26: add     esp, 10h
0x9A1E29: retn
