0x91EE60: sub     esp, 0Ch
0x91EE63: mov     eax, [esp+0Ch+arg_4]
0x91EE67: push    ebx
0x91EE68: push    ebp
0x91EE69: mov     ebp, ecx
0x91EE6B: push    esi
0x91EE6C: mov     esi, [eax+4]
0x91EE6F: mov     eax, [ebp+4]
0x91EE72: lea     ecx, [eax+esi]
0x91EE75: push    edi
0x91EE76: mov     edi, [esp+1Ch+arg_0]
0x91EE7A: sub     eax, edi
0x91EE7C: mov     [esp+1Ch+arg_0], eax
0x91EE80: mov     eax, [ebp+8]
0x91EE83: and     eax, 3FFFFFFFh
0x91EE88: cmp     eax, ecx
0x91EE8A: mov     [esp+1Ch+var_4], esi
0x91EE8E: mov     [esp+1Ch+var_C], ecx
0x91EE92: jge     short loc_91EEA8
0x91EE94: add     eax, eax
0x91EE96: cmp     ecx, eax
0x91EE98: jl      short loc_91EE9C
0x91EE9A: mov     eax, ecx
0x91EE9C: push    1Ch
0x91EE9E: push    eax
0x91EE9F: push    ebp
0x91EEA0: call    sub_8A6E40
0x91EEA5: add     esp, 0Ch
0x91EEA8: mov     ecx, [ebp+0]
0x91EEAB: mov     ebx, edi
0x91EEAD: lea     eax, [esi+edi]
0x91EEB0: imul    ebx, 1Ch
0x91EEB3: imul    eax, 1Ch
0x91EEB6: lea     edx, [ecx+ebx]
0x91EEB9: add     eax, ecx
0x91EEBB: mov     ecx, [esp+1Ch+arg_0]
0x91EEBF: dec     ecx
0x91EEC0: mov     [esp+1Ch+var_8], edx
0x91EEC4: js      short loc_91EEF5
0x91EEC6: mov     esi, [esp+1Ch+var_8]
0x91EECA: mov     edx, ecx
0x91EECC: imul    edx, 1Ch
0x91EECF: add     edx, eax
0x91EED1: sub     esi, eax
0x91EED3: mov     [esp+1Ch+arg_0], esi
0x91EED7: lea     eax, [ecx+1]
0x91EEDA: jmp     short loc_91EEE0
0x91EEDC: mov     esi, [esp+1Ch+arg_0]
0x91EEE0: add     esi, edx
0x91EEE2: mov     edi, edx
0x91EEE4: mov     ecx, 7
0x91EEE9: sub     edx, 1Ch
0x91EEEC: dec     eax
0x91EEED: rep movsd
0x91EEEF: jnz     short loc_91EEDC
0x91EEF1: mov     esi, [esp+1Ch+var_4]
0x91EEF5: mov     ecx, [ebp+0]
0x91EEF8: mov     eax, [esp+1Ch+arg_4]
0x91EEFC: mov     edi, [eax]
0x91EEFE: lea     edx, [esi-1]
0x91EF01: add     ecx, ebx
0x91EF03: test    edx, edx
0x91EF05: jl      short loc_91EF36
0x91EF07: mov     eax, edx
0x91EF09: imul    eax, 1Ch
0x91EF0C: mov     ebx, edi
0x91EF0E: add     eax, ecx
0x91EF10: sub     ebx, ecx
0x91EF12: inc     edx
0x91EF13: lea     esi, [ebx+eax]
0x91EF16: mov     edi, eax
0x91EF18: mov     ecx, 7
0x91EF1D: sub     eax, 1Ch
0x91EF20: dec     edx
0x91EF21: rep movsd
0x91EF23: jnz     short loc_91EF13
0x91EF25: mov     ecx, [esp+1Ch+var_C]
0x91EF29: pop     edi
0x91EF2A: pop     esi
0x91EF2B: mov     [ebp+4], ecx
0x91EF2E: pop     ebp
0x91EF2F: pop     ebx
0x91EF30: add     esp, 0Ch
0x91EF33: retn    8
0x91EF36: mov     edx, [esp+1Ch+var_C]
0x91EF3A: pop     edi
0x91EF3B: pop     esi
0x91EF3C: mov     [ebp+4], edx
0x91EF3F: pop     ebp
0x91EF40: pop     ebx
0x91EF41: add     esp, 0Ch
0x91EF44: retn    8
