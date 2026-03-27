0x79EE40: push    ebp
0x79EE41: mov     ebp, esp
0x79EE43: push    0FFFFFFFFh
0x79EE45: push    offset SEH_79EE40
0x79EE4A: mov     eax, large fs:0
0x79EE50: push    eax
0x79EE51: sub     esp, 8
0x79EE54: push    ebx
0x79EE55: push    esi
0x79EE56: push    edi
0x79EE57: mov     eax, ds:0B30AACh
0x79EE5C: xor     eax, ebp
0x79EE5E: push    eax
0x79EE5F: lea     eax, [ebp+var_C]
0x79EE62: mov     large fs:0, eax
0x79EE68: mov     [ebp+var_10], esp
0x79EE6B: mov     edi, ecx
0x79EE6D: mov     [ebp+var_14], edi
0x79EE70: mov     ebx, [ebp+arg_0]
0x79EE73: mov     eax, [ebx+4]
0x79EE76: xor     ecx, ecx
0x79EE78: cmp     eax, ecx
0x79EE7A: jnz     short loc_79EE80
0x79EE7C: xor     esi, esi
0x79EE7E: jmp     short loc_79EE98
0x79EE80: mov     ecx, [ebx+8]
0x79EE83: sub     ecx, eax
0x79EE85: mov     eax, 2AAAAAABh
0x79EE8A: imul    ecx
0x79EE8C: sar     edx, 3
0x79EE8F: mov     esi, edx
0x79EE91: shr     esi, 1Fh
0x79EE94: add     esi, edx
0x79EE96: xor     ecx, ecx
0x79EE98: cmp     esi, ecx
0x79EE9A: mov     [edi+4], ecx
0x79EE9D: mov     [edi+8], ecx
0x79EEA0: mov     [edi+0Ch], ecx
0x79EEA3: jz      short loc_79EF12
0x79EEA5: cmp     esi, 5555555h
0x79EEAB: jbe     short loc_79EEB2
0x79EEAD: call    sub_790B90
0x79EEB2: push    ecx
0x79EEB3: push    esi; char *
0x79EEB4: call    sub_799FA0
0x79EEB9: lea     ecx, [esi+esi*2]
0x79EEBC: shl     ecx, 4
0x79EEBF: add     ecx, eax
0x79EEC1: mov     [edi+4], eax
0x79EEC4: mov     [edi+8], eax
0x79EEC7: mov     [edi+0Ch], ecx
0x79EECA: mov     esi, [ebx+8]
0x79EECD: add     esp, 8
0x79EED0: cmp     [ebx+4], esi
0x79EED3: mov     [ebp+var_4], 0
0x79EEDA: jbe     short loc_79EEE1
0x79EEDC: call    __invalid_parameter_noinfo
0x79EEE1: mov     ecx, [ebx+4]
0x79EEE4: cmp     ecx, [ebx+8]
0x79EEE7: mov     [ebp+arg_0], ecx
0x79EEEA: jbe     short loc_79EEF4
0x79EEEC: call    __invalid_parameter_noinfo
0x79EEF1: mov     ecx, [ebp+arg_0]
0x79EEF4: mov     eax, [edi+4]
0x79EEF7: mov     byte ptr [ebp+arg_0], 0
0x79EEFB: mov     edx, [ebp+arg_0]
0x79EEFE: push    edx
0x79EEFF: mov     edx, [ebp+arg_0]
0x79EF02: push    edx
0x79EF03: push    edi
0x79EF04: push    eax
0x79EF05: push    esi
0x79EF06: push    ecx
0x79EF07: call    sub_79C2E0
0x79EF0C: add     esp, 18h
0x79EF0F: mov     [edi+8], eax
0x79EF12: mov     eax, edi
0x79EF14: mov     ecx, [ebp+var_C]
0x79EF17: mov     large fs:0, ecx
0x79EF1E: pop     ecx
0x79EF1F: pop     edi
0x79EF20: pop     esi
0x79EF21: pop     ebx
0x79EF22: mov     esp, ebp
0x79EF24: pop     ebp
0x79EF25: retn    4
0x79EF28: mov     ecx, [ebp+var_14]
0x79EF2B: call    sub_79F000
0x79EF30: push    0
0x79EF32: push    0
0x79EF34: call    ThrowException??
