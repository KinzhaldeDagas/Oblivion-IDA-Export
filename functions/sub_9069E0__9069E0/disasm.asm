0x9069E0: push    ebp
0x9069E1: mov     ebp, esp
0x9069E3: and     esp, 0FFFFFFF0h
0x9069E6: sub     esp, 4D4h
0x9069EC: mov     eax, ds:0B30AACh
0x9069F1: push    ebx
0x9069F2: mov     ebx, [ebp+arg_0]
0x9069F5: push    esi
0x9069F6: push    edi
0x9069F7: mov     edi, [ebp+arg_4]
0x9069FA: mov     [esp+4E0h+var_4], eax
0x906A01: mov     eax, [ebx+8]
0x906A04: mov     esi, ecx
0x906A06: mov     ecx, [edi+8]
0x906A09: push    eax
0x906A0A: push    ecx
0x906A0B: lea     ecx, [esp+4E8h+var_270]
0x906A12: mov     dword ptr [esp+4E8h+var_4AC+8], esi
0x906A16: call    sub_8B1FF0
0x906A1B: mov     eax, [ebp+arg_8]
0x906A1E: fld     dword ptr [eax+8]
0x906A21: mov     ecx, [ebx]
0x906A23: fmul    dword ptr ds:0A3D65Ch
0x906A29: mov     edx, [ecx]
0x906A2B: lea     ebx, [esp+4E0h+var_4AC+0Ch]
0x906A2F: push    ebx
0x906A30: fadd    dword ptr [eax+8]
0x906A33: push    ecx
0x906A34: lea     eax, [esp+4E8h+var_270]
0x906A3B: fstp    [esp+4E8h+var_4E8]
0x906A3E: push    eax
0x906A3F: call    dword ptr [edx+0Ch]
0x906A42: mov     al, ds:0B2FDE0h
0x906A47: test    al, al
0x906A49: jz      short loc_906A84
0x906A4B: movaps  xmm1, xmmword ptr [esi+30h]
0x906A4F: movaps  xmm0, xmmword ptr [esp+4E0h+var_49C+0Ch]
0x906A54: movaps  xmm2, xmm0
0x906A57: cmpleps xmm2, xmm1
0x906A5B: movaps  xmm1, [esp+4E0h+var_4AC+0Ch]
0x906A60: movmskps ecx, xmm2
0x906A63: movaps  xmm2, xmmword ptr [esi+20h]
0x906A67: cmpleps xmm2, xmm1
0x906A6B: movmskps edx, xmm2
0x906A6E: and     ecx, edx
0x906A70: and     ecx, 7
0x906A73: cmp     cl, 7
0x906A76: jz      loc_9072A3
0x906A7C: movaps  xmmword ptr [esi+20h], xmm1
0x906A80: movaps  xmmword ptr [esi+30h], xmm0
0x906A84: mov     edi, [edi]
0x906A86: lea     eax, [esp+4E0h+var_474]
0x906A8A: mov     [esp+4E0h+var_480], eax
0x906A8E: lea     eax, [esp+4E0h+var_480]
0x906A92: push    eax
0x906A93: lea     ecx, [esp+4E4h+var_4AC+0Ch]
0x906A97: mov     [esp+4E4h+var_47C], 0
0x906A9F: mov     [esp+4E4h+var_478], 80000080h
0x906AA7: mov     edx, [edi]
0x906AA9: push    ecx
0x906AAA: mov     ecx, edi
0x906AAC: call    dword ptr [edx+24h]
0x906AAF: mov     ecx, [esp+4E0h+var_47C]
0x906AB3: mov     ebx, [esi+10h]
0x906AB6: mov     eax, ecx
0x906AB8: sub     eax, ebx
0x906ABA: mov     ebx, ds:0BA7D98h
0x906AC0: mov     edx, [ebx+28h]
0x906AC3: add     edx, [ebx+14h]
0x906AC6: mov     ebx, [ebx+8]
0x906AC9: shl     eax, 7
0x906ACC: cmp     ebx, edx
0x906ACE: jg      short loc_906AD4
0x906AD0: xor     ebx, ebx
0x906AD2: jmp     short loc_906AD6
0x906AD4: sub     ebx, edx
0x906AD6: cmp     eax, ebx
0x906AD8: jle     short loc_906B1C
0x906ADA: mov     edx, ds:0BA7D98h
0x906AE0: mov     dword ptr [edx+4], 1
0x906AE7: mov     eax, [esp+4E0h+var_478]
0x906AEB: test    eax, eax
0x906AED: js      loc_9072A3
0x906AF3: mov     ecx, ds:0BA9DE4h
0x906AF9: mov     edx, large fs:2Ch
0x906B00: mov     ecx, [edx+ecx*4]
0x906B03: mov     ecx, [ecx+19Ch]
0x906B09: test    ecx, ecx
0x906B0B: jnz     short loc_906B13
0x906B0D: mov     ecx, ds:0BA7D9Ch
0x906B13: mov     edx, [esp+4E0h+var_480]
0x906B17: jmp     loc_907292
0x906B1C: mov     eax, [ebp+arg_4]
0x906B1F: mov     edx, [edi+0Ch]
0x906B22: mov     [esp+4E0h+var_220], eax
0x906B29: mov     eax, [eax+8]
0x906B2C: mov     [esp+4E0h+var_224], eax
0x906B33: mov     al, ds:0BA81CDh
0x906B38: test    al, al
0x906B3A: mov     [esp+4E0h+var_230], edx
0x906B41: jz      loc_906E29
0x906B47: mov     eax, [esi+8]
0x906B4A: mov     edi, [esi+0Ch]
0x906B4D: mov     dword ptr [esp+4E0h+var_4AC+4], eax
0x906B51: mov     eax, [esi+10h]
0x906B54: add     esi, 0Ch
0x906B57: lea     edx, [eax+eax*2]
0x906B5A: lea     eax, [edi+edx*4]
0x906B5D: mov     edx, [esp+4E0h+var_480]
0x906B61: mov     [esp+4E0h+var_4D4], eax
0x906B65: lea     eax, [edx+ecx*4]
0x906B68: mov     [esp+4E0h+var_4C4], eax
0x906B6C: cmp     edi, [esp+4E0h+var_4D4]
0x906B70: mov     ebx, edx
0x906B72: jz      loc_906C43
0x906B78: cmp     ebx, [esp+4E0h+var_4C4]
0x906B7C: jz      short loc_906B8C
0x906B7E: mov     eax, [edi]
0x906B80: cmp     eax, [ebx]
0x906B82: jnz     short loc_906B8C
0x906B84: add     ebx, 4
0x906B87: jmp     loc_906C34
0x906B8C: cmp     edx, [esp+4E0h+var_4C4]
0x906B90: mov     ebx, edx
0x906B92: mov     [esp+4E0h+var_4C8], ebx
0x906B96: jz      short loc_906BB9
0x906B98: jmp     short loc_906BA0
0x906B9A: align 10h
0x906BA0: mov     eax, [edi]
0x906BA2: cmp     eax, [ebx]
0x906BA4: jz      loc_906CE2
0x906BAA: mov     eax, [esp+4E0h+var_4C4]
0x906BAE: add     ebx, 4
0x906BB1: cmp     ebx, eax
0x906BB3: jnz     short loc_906BA0
0x906BB5: mov     [esp+4E0h+var_4C8], ebx
0x906BB9: mov     ecx, [edi+8]
0x906BBC: mov     edx, [ecx]
0x906BBE: call    dword ptr [edx+18h]
0x906BC1: mov     eax, [esi+4]
0x906BC4: mov     edx, [esi]
0x906BC6: dec     eax
0x906BC7: mov     [esi+4], eax
0x906BCA: mov     ecx, edi
0x906BCC: sub     ecx, edx
0x906BCE: mov     eax, 2AAAAAABh
0x906BD3: imul    ecx
0x906BD5: mov     ecx, [esi+4]
0x906BD8: sar     edx, 1
0x906BDA: mov     eax, edx
0x906BDC: shr     eax, 1Fh
0x906BDF: add     eax, edx
0x906BE1: cmp     eax, ecx
0x906BE3: jge     short loc_906C1E
0x906BE5: lea     ecx, [eax+eax*2]
0x906BE8: shl     ecx, 2
0x906BEB: mov     [esp+4E0h+var_4D0], ecx
0x906BEF: nop
0x906BF0: mov     edx, [esi]
0x906BF2: add     ecx, edx
0x906BF4: lea     edx, [ecx+0Ch]
0x906BF7: mov     ebx, [edx]
0x906BF9: mov     [ecx], ebx
0x906BFB: mov     ebx, [edx+4]
0x906BFE: mov     [ecx+4], ebx
0x906C01: mov     edx, [edx+8]
0x906C04: mov     [ecx+8], edx
0x906C07: mov     ecx, [esp+4E0h+var_4D0]
0x906C0B: mov     edx, [esi+4]
0x906C0E: inc     eax
0x906C0F: add     ecx, 0Ch
0x906C12: cmp     eax, edx
0x906C14: mov     [esp+4E0h+var_4D0], ecx
0x906C18: jl      short loc_906BF0
0x906C1A: mov     ebx, [esp+4E0h+var_4C8]
0x906C1E: mov     eax, [esp+4E0h+var_4D4]
0x906C22: mov     ecx, [esp+4E0h+var_47C]
0x906C26: mov     edx, [esp+4E0h+var_480]
0x906C2A: sub     edi, 0Ch
0x906C2D: sub     eax, 0Ch
0x906C30: mov     [esp+4E0h+var_4D4], eax
0x906C34: mov     eax, [esp+4E0h+var_4D4]
0x906C38: add     edi, 0Ch
0x906C3B: cmp     edi, eax
0x906C3D: jnz     loc_906B78
0x906C43: mov     eax, [esi+4]
0x906C46: cmp     ecx, eax
0x906C48: jz      loc_90726A
0x906C4E: mov     edi, [esi]
0x906C50: lea     ebx, [eax+eax*2]
0x906C53: lea     ebx, [edi+ebx*4]
0x906C56: lea     ecx, [edx+ecx*4]
0x906C59: cmp     edx, ecx
0x906C5B: mov     [esp+4E0h+var_4D0], ebx
0x906C5F: mov     ebx, edx
0x906C61: mov     [esp+4E0h+var_4D4], ebx
0x906C65: mov     [esp+4E0h+var_4C4], ecx
0x906C69: jz      loc_90726A
0x906C6F: nop
0x906C70: cmp     edi, [esp+4E0h+var_4D0]
0x906C74: jz      short loc_906C80
0x906C76: mov     ecx, [edi]
0x906C78: cmp     ecx, [ebx]
0x906C7A: jz      loc_906E0E
0x906C80: mov     edi, ebx
0x906C82: sub     edi, edx
0x906C84: lea     ebx, [eax+1]
0x906C87: sar     edi, 2
0x906C8A: sub     eax, edi
0x906C8C: mov     [esp+4E0h+var_4C0], eax
0x906C90: mov     eax, [esi+8]
0x906C93: and     eax, 3FFFFFFFh
0x906C98: cmp     eax, ebx
0x906C9A: mov     [esp+4E0h+var_4BC], ebx
0x906C9E: jge     short loc_906CB4
0x906CA0: add     eax, eax
0x906CA2: cmp     ebx, eax
0x906CA4: jl      short loc_906CA8
0x906CA6: mov     eax, ebx
0x906CA8: push    0Ch
0x906CAA: push    eax
0x906CAB: push    esi
0x906CAC: call    sub_8A6E40
0x906CB1: add     esp, 0Ch
0x906CB4: mov     edx, [esi]
0x906CB6: mov     ecx, [esp+4E0h+var_4C0]
0x906CBA: lea     eax, [edi+edi*2]
0x906CBD: shl     eax, 2
0x906CC0: dec     ecx
0x906CC1: lea     edi, [edx+eax]
0x906CC4: lea     edx, [edi+0Ch]
0x906CC7: mov     [esp+4E0h+var_4D0], edx
0x906CCB: js      short loc_906D18
0x906CCD: lea     ebx, [ecx+ecx*2]
0x906CD0: lea     edx, [edx+ebx*4]
0x906CD3: sub     edi, [esp+4E0h+var_4D0]
0x906CD7: inc     ecx
0x906CD8: mov     [esp+4E0h+var_4C0], edi
0x906CDC: mov     [esp+4E0h+var_4D0], ecx
0x906CE0: jmp     short loc_906CF2
0x906CE2: mov     [esp+4E0h+var_4C8], ebx
0x906CE6: add     ebx, 4
0x906CE9: jmp     loc_906C34
0x906CEE: mov     edi, [esp+4E0h+var_4C0]
0x906CF2: add     edi, edx
0x906CF4: mov     ebx, [edi]
0x906CF6: mov     ecx, edx
0x906CF8: mov     [ecx], ebx
0x906CFA: mov     ebx, [edi+4]
0x906CFD: mov     [ecx+4], ebx
0x906D00: mov     edi, [edi+8]
0x906D03: mov     [ecx+8], edi
0x906D06: mov     ecx, [esp+4E0h+var_4D0]
0x906D0A: sub     edx, 0Ch
0x906D0D: dec     ecx
0x906D0E: mov     [esp+4E0h+var_4D0], ecx
0x906D12: jnz     short loc_906CEE
0x906D14: mov     ebx, [esp+4E0h+var_4BC]
0x906D18: mov     edx, [esp+4E0h+var_4D4]
0x906D1C: mov     edi, [esi]
0x906D1E: mov     ecx, [esp+4E0h+var_230]
0x906D25: mov     [esi+4], ebx
0x906D28: mov     ebx, [edx]
0x906D2A: lea     edx, [esp+4E0h+var_210]
0x906D31: push    edx
0x906D32: add     edi, eax
0x906D34: mov     eax, [ecx]
0x906D36: push    ebx
0x906D37: call    dword ptr [eax+28h]
0x906D3A: mov     [esp+4E0h+var_228], ebx
0x906D41: mov     ebx, [esp+4E0h+var_4D4]
0x906D45: mov     [esp+4E0h+var_22C], eax
0x906D4C: mov     ebx, [ebx]
0x906D4E: mov     eax, [ebp+arg_8]
0x906D51: mov     ecx, [eax+4]
0x906D54: mov     edx, [ecx]
0x906D56: push    ebx
0x906D57: mov     ebx, [esp+4E4h+var_230]
0x906D5E: push    ebx
0x906D5F: lea     ebx, [esp+4E8h+var_22C]
0x906D66: push    ebx
0x906D67: mov     ebx, [ebp+arg_0]
0x906D6A: push    ebx
0x906D6B: push    eax
0x906D6C: lea     eax, [esp+4F4h+var_4CC+3]
0x906D70: push    eax
0x906D71: call    dword ptr [edx]
0x906D73: cmp     byte ptr [eax], 0
0x906D76: jz      short loc_906DE7
0x906D78: mov     ecx, [ebp+arg_8]
0x906D7B: mov     edx, [ecx]
0x906D7D: mov     eax, ebx
0x906D7F: mov     ecx, [eax]
0x906D81: mov     [esp+4E0h+var_4C8], edx
0x906D85: mov     edx, [ecx]
0x906D87: call    dword ptr [edx+8]
0x906D8A: mov     ecx, [esp+4E0h+var_22C]
0x906D91: mov     ebx, eax
0x906D93: mov     eax, [ecx]
0x906D95: call    dword ptr [eax+8]
0x906D98: mov     ecx, [ebp+arg_8]
0x906D9B: mov     dl, [ecx+0Ch]
0x906D9E: test    dl, dl
0x906DA0: mov     ecx, [esp+4E0h+var_4C8]
0x906DA4: jz      short loc_906DAE
0x906DA6: add     ecx, 590h
0x906DAC: jmp     short loc_906DB4
0x906DAE: add     ecx, 190h
0x906DB4: shl     ebx, 5
0x906DB7: add     ebx, ecx
0x906DB9: movzx   eax, byte ptr [ebx+eax]
0x906DBD: mov     ecx, dword ptr [esp+4E0h+var_4AC+4]
0x906DC1: lea     edx, [eax+eax*4]
0x906DC4: mov     eax, [esp+4E0h+var_4C8]
0x906DC8: mov     eax, [eax+edx*4+990h]
0x906DCF: mov     edx, [ebp+arg_8]
0x906DD2: push    ecx
0x906DD3: push    edx
0x906DD4: mov     edx, [ebp+arg_0]
0x906DD7: lea     ecx, [esp+4E8h+var_22C]
0x906DDE: push    ecx
0x906DDF: push    edx
0x906DE0: call    eax
0x906DE2: add     esp, 10h
0x906DE5: jmp     short loc_906DEC
0x906DE7: call    sub_8E0970
0x906DEC: mov     ebx, [esp+4E0h+var_4D4]
0x906DF0: mov     [edi+8], eax
0x906DF3: mov     eax, [esp+4E0h+var_4D4]
0x906DF7: mov     ecx, [eax]
0x906DF9: mov     [edi], ecx
0x906DFB: mov     eax, [esi+4]
0x906DFE: mov     ecx, [esi]
0x906E00: lea     edx, [eax+eax*2]
0x906E03: lea     edx, [ecx+edx*4]
0x906E06: mov     [esp+4E0h+var_4D0], edx
0x906E0A: mov     edx, [esp+4E0h+var_480]
0x906E0E: mov     ecx, [esp+4E0h+var_4C4]
0x906E12: add     ebx, 4
0x906E15: add     edi, 0Ch
0x906E18: cmp     ebx, ecx
0x906E1A: mov     [esp+4E0h+var_4D4], ebx
0x906E1E: jnz     loc_906C70
0x906E24: jmp     loc_90726A
0x906E29: cmp     ecx, 1
0x906E2C: mov     byte ptr [esp+4E0h+var_4AC+4], 0
0x906E31: jle     short loc_906E4D
0x906E33: mov     eax, dword ptr [esp+4E0h+var_4AC+4]
0x906E37: push    eax
0x906E38: dec     ecx
0x906E39: push    ecx
0x906E3A: mov     ecx, [esp+4E8h+var_480]
0x906E3E: push    0
0x906E40: push    ecx
0x906E41: call    sub_8F6580
0x906E46: mov     ecx, [esp+4F0h+var_47C]
0x906E4A: add     esp, 10h
0x906E4D: mov     edx, [esi+8]
0x906E50: mov     edi, [esi+0Ch]
0x906E53: mov     esi, [esi+10h]
0x906E56: mov     ebx, ds:0BA9DE4h
0x906E5C: lea     eax, [esi+esi*2]
0x906E5F: mov     [esp+4E0h+var_4C0], edx
0x906E63: lea     edx, [edi+eax*4]
0x906E66: mov     eax, [esp+4E0h+var_480]
0x906E6A: mov     [esp+4E0h+var_4D4], eax
0x906E6E: lea     eax, [eax+ecx*4]
0x906E71: mov     [esp+4E0h+var_4BC], eax
0x906E75: mov     eax, large fs:2Ch
0x906E7B: mov     eax, [eax+ebx*4]
0x906E7E: mov     [esp+4E0h+var_4C4], edx
0x906E82: xor     edx, edx
0x906E84: mov     [esp+4E0h+var_4D0], eax
0x906E88: mov     eax, [eax+19Ch]
0x906E8E: cmp     eax, edx
0x906E90: mov     esi, ecx
0x906E92: mov     [esp+4E0h+var_4B8], edx
0x906E96: mov     [esp+4E0h+var_4B4], edx
0x906E9A: mov     [esp+4E0h+var_4B0], 80000000h
0x906EA2: jnz     short loc_906EA9
0x906EA4: mov     eax, ds:0BA7D9Ch
0x906EA9: mov     edx, [eax+20h]
0x906EAC: lea     ecx, [ecx+ecx*2]
0x906EAF: lea     ecx, ds:10h[ecx*4]
0x906EB6: and     ecx, 0FFFFFFF0h
0x906EB9: lea     ebx, [edx+ecx]
0x906EBC: cmp     ebx, [eax+2Ch]
0x906EBF: ja      short loc_906EC8
0x906EC1: mov     [eax+20h], ebx
0x906EC4: mov     eax, edx
0x906EC6: jmp     short loc_906ED0
0x906EC8: mov     edx, [eax]
0x906ECA: push    ecx
0x906ECB: mov     ecx, eax
0x906ECD: call    dword ptr [edx+0Ch]
0x906ED0: or      esi, 80000000h
0x906ED6: mov     ecx, esi
0x906ED8: mov     [esp+4E0h+var_4B8], eax
0x906EDC: mov     [esp+4E0h+var_4B0], ecx
0x906EE0: mov     dword ptr [esp+4E0h+var_4AC], eax
0x906EE4: mov     eax, [esp+4E0h+var_47C]
0x906EE8: and     ecx, 3FFFFFFFh
0x906EEE: cmp     ecx, eax
0x906EF0: mov     esi, eax
0x906EF2: jge     short loc_906F0C
0x906EF4: add     ecx, ecx
0x906EF6: cmp     eax, ecx
0x906EF8: jge     short loc_906EFC
0x906EFA: mov     eax, ecx
0x906EFC: push    0Ch
0x906EFE: push    eax
0x906EFF: lea     eax, [esp+4E8h+var_4B8]
0x906F03: push    eax
0x906F04: call    sub_8A6E40
0x906F09: add     esp, 0Ch
0x906F0C: mov     eax, [esp+4E0h+var_4C4]
0x906F10: cmp     edi, eax
0x906F12: mov     ebx, [esp+4E0h+var_4B8]
0x906F16: mov     [esp+4E0h+var_4B4], esi
0x906F1A: jz      loc_90707C
0x906F20: mov     ecx, [esp+4E0h+var_4D4]
0x906F24: cmp     ecx, [esp+4E0h+var_4BC]
0x906F28: jz      loc_90705F
0x906F2E: mov     esi, [ecx]
0x906F30: mov     eax, [edi]
0x906F32: cmp     esi, eax
0x906F34: jnz     short loc_906F5C
0x906F36: mov     edx, edi
0x906F38: mov     esi, [edx]
0x906F3A: mov     eax, ebx
0x906F3C: mov     [eax], esi
0x906F3E: mov     esi, [edx+4]
0x906F41: mov     [eax+4], esi
0x906F44: mov     edx, [edx+8]
0x906F47: add     ebx, 0Ch
0x906F4A: add     edi, 0Ch
0x906F4D: add     ecx, 4
0x906F50: mov     [eax+8], edx
0x906F53: mov     [esp+4E0h+var_4D4], ecx
0x906F57: jmp     loc_907051
0x906F5C: jnb     loc_907040
0x906F62: mov     ecx, [esp+4E0h+var_230]
0x906F69: mov     eax, [ecx]
0x906F6B: lea     edx, [esp+4E0h+var_210]
0x906F72: push    edx
0x906F73: push    esi
0x906F74: call    dword ptr [eax+28h]
0x906F77: mov     [esp+4E0h+var_228], esi
0x906F7E: mov     esi, [esp+4E0h+var_4D4]
0x906F82: mov     [esp+4E0h+var_22C], eax
0x906F89: mov     esi, [esi]
0x906F8B: mov     eax, [ebp+arg_8]
0x906F8E: mov     ecx, [eax+4]
0x906F91: mov     edx, [ecx]
0x906F93: push    esi
0x906F94: mov     esi, [esp+4E4h+var_230]
0x906F9B: push    esi
0x906F9C: lea     esi, [esp+4E8h+var_22C]
0x906FA3: push    esi
0x906FA4: mov     esi, [ebp+arg_0]
0x906FA7: push    esi
0x906FA8: push    eax
0x906FA9: lea     eax, [esp+4F4h+var_4CC+3]
0x906FAD: push    eax
0x906FAE: call    dword ptr [edx]
0x906FB0: cmp     byte ptr [eax], 0
0x906FB3: jz      short loc_907024
0x906FB5: mov     ecx, [ebp+arg_8]
0x906FB8: mov     edx, [ecx]
0x906FBA: mov     eax, esi
0x906FBC: mov     ecx, [eax]
0x906FBE: mov     [esp+4E0h+var_4C8], edx
0x906FC2: mov     edx, [ecx]
0x906FC4: call    dword ptr [edx+8]
0x906FC7: mov     ecx, [esp+4E0h+var_22C]
0x906FCE: mov     esi, eax
0x906FD0: mov     eax, [ecx]
0x906FD2: call    dword ptr [eax+8]
0x906FD5: mov     ecx, [ebp+arg_8]
0x906FD8: mov     dl, [ecx+0Ch]
0x906FDB: test    dl, dl
0x906FDD: mov     ecx, [esp+4E0h+var_4C8]
0x906FE1: jz      short loc_906FEB
0x906FE3: add     ecx, 590h
0x906FE9: jmp     short loc_906FF1
0x906FEB: add     ecx, 190h
0x906FF1: shl     esi, 5
0x906FF4: add     esi, ecx
0x906FF6: movzx   eax, byte ptr [esi+eax]
0x906FFA: mov     ecx, [esp+4E0h+var_4C0]
0x906FFE: lea     edx, [eax+eax*4]
0x907001: mov     eax, [esp+4E0h+var_4C8]
0x907005: mov     eax, [eax+edx*4+990h]
0x90700C: mov     edx, [ebp+arg_8]
0x90700F: push    ecx
0x907010: push    edx
0x907011: mov     edx, [ebp+arg_0]
0x907014: lea     ecx, [esp+4E8h+var_22C]
0x90701B: push    ecx
0x90701C: push    edx
0x90701D: call    eax
0x90701F: add     esp, 10h
0x907022: jmp     short loc_907029
0x907024: call    sub_8E0970
0x907029: mov     [ebx+8], eax
0x90702C: mov     eax, [esp+4E0h+var_4D4]
0x907030: mov     ecx, [eax]
0x907032: mov     [ebx], ecx
0x907034: add     ebx, 0Ch
0x907037: add     eax, 4
0x90703A: mov     [esp+4E0h+var_4D4], eax
0x90703E: jmp     short loc_907051
0x907040: mov     eax, [edi+8]
0x907043: test    eax, eax
0x907045: jz      short loc_90704E
0x907047: mov     ecx, eax
0x907049: mov     edx, [ecx]
0x90704B: call    dword ptr [edx+18h]
0x90704E: add     edi, 0Ch
0x907051: mov     eax, [esp+4E0h+var_4C4]
0x907055: cmp     edi, eax
0x907057: jnz     loc_906F20
0x90705D: jmp     short loc_90707C
0x90705F: cmp     edi, eax
0x907061: jz      short loc_90707C
0x907063: mov     eax, [edi+8]
0x907066: test    eax, eax
0x907068: jz      short loc_907071
0x90706A: mov     ecx, eax
0x90706C: mov     eax, [ecx]
0x90706E: call    dword ptr [eax+18h]
0x907071: mov     eax, [esp+4E0h+var_4C4]
0x907075: add     edi, 0Ch
0x907078: cmp     edi, eax
0x90707A: jnz     short loc_907063
0x90707C: mov     ecx, [esp+4E0h+var_4BC]
0x907080: cmp     [esp+4E0h+var_4D4], ecx
0x907084: jz      loc_907169
0x90708A: lea     ebx, [ebx+0]
0x907090: mov     edi, [esp+4E0h+var_4D4]
0x907094: mov     esi, [edi]
0x907096: mov     ecx, [esp+4E0h+var_230]
0x90709D: mov     edx, [ecx]
0x90709F: lea     eax, [esp+4E0h+var_210]
0x9070A6: push    eax
0x9070A7: push    esi
0x9070A8: call    dword ptr [edx+28h]
0x9070AB: mov     [esp+4E0h+var_228], esi
0x9070B2: mov     [esp+4E0h+var_22C], eax
0x9070B9: mov     esi, [edi]
0x9070BB: mov     eax, [ebp+arg_8]
0x9070BE: mov     ecx, [eax+4]
0x9070C1: mov     edx, [ecx]
0x9070C3: push    esi
0x9070C4: mov     esi, [esp+4E4h+var_230]
0x9070CB: push    esi
0x9070CC: lea     esi, [esp+4E8h+var_22C]
0x9070D3: push    esi
0x9070D4: mov     esi, [ebp+arg_0]
0x9070D7: push    esi
0x9070D8: push    eax
0x9070D9: lea     eax, [esp+4F4h+var_4CC+3]
0x9070DD: push    eax
0x9070DE: call    dword ptr [edx]
0x9070E0: cmp     byte ptr [eax], 0
0x9070E3: jz      short loc_907143
0x9070E5: mov     ecx, [ebp+arg_8]
0x9070E8: mov     edi, [ecx]
0x9070EA: mov     edx, esi
0x9070EC: mov     ecx, [edx]
0x9070EE: mov     eax, [ecx]
0x9070F0: call    dword ptr [eax+8]
0x9070F3: mov     ecx, [esp+4E0h+var_22C]
0x9070FA: mov     edx, [ecx]
0x9070FC: mov     esi, eax
0x9070FE: call    dword ptr [edx+8]
0x907101: mov     edx, [ebp+arg_8]
0x907104: mov     cl, [edx+0Ch]
0x907107: test    cl, cl
0x907109: lea     ecx, [edi+590h]
0x90710F: jnz     short loc_907117
0x907111: lea     ecx, [edi+190h]
0x907117: shl     esi, 5
0x90711A: add     esi, ecx
0x90711C: movzx   eax, byte ptr [esi+eax]
0x907120: mov     ecx, [esp+4E0h+var_4C0]
0x907124: push    ecx
0x907125: push    edx
0x907126: lea     eax, [eax+eax*4]
0x907129: mov     edi, [edi+eax*4+990h]
0x907130: mov     eax, [ebp+arg_0]
0x907133: lea     edx, [esp+4E8h+var_22C]
0x90713A: push    edx
0x90713B: push    eax
0x90713C: call    edi
0x90713E: add     esp, 10h
0x907141: jmp     short loc_907148
0x907143: call    sub_8E0970
0x907148: mov     [ebx+8], eax
0x90714B: mov     eax, [esp+4E0h+var_4D4]
0x90714F: mov     ecx, [eax]
0x907151: mov     [ebx], ecx
0x907153: mov     ecx, [esp+4E0h+var_4BC]
0x907157: add     eax, 4
0x90715A: add     ebx, 0Ch
0x90715D: cmp     eax, ecx
0x90715F: mov     [esp+4E0h+var_4D4], eax
0x907163: jnz     loc_907090
0x907169: mov     esi, dword ptr [esp+4E0h+var_4AC+8]
0x90716D: mov     ecx, [esi+14h]
0x907170: mov     edx, [esp+4E0h+var_4B4]
0x907174: mov     eax, ecx
0x907176: and     eax, 3FFFFFFFh
0x90717B: cmp     eax, edx
0x90717D: jge     short loc_9071E3
0x90717F: test    ecx, ecx
0x907181: js      short loc_9071A9
0x907183: mov     edx, [esp+4E0h+var_4D0]
0x907187: mov     ecx, [edx+19Ch]
0x90718D: test    ecx, ecx
0x90718F: jnz     short loc_907197
0x907191: mov     ecx, ds:0BA7D9Ch
0x907197: mov     edx, [esi+0Ch]
0x90719A: lea     eax, [eax+eax*2]
0x90719D: push    14h
0x90719F: shl     eax, 2
0x9071A2: push    eax
0x9071A3: push    edx
0x9071A4: call    sub_8A75D0
0x9071A9: mov     eax, [esp+4E0h+var_4D0]
0x9071AD: mov     ecx, [eax+19Ch]
0x9071B3: test    ecx, ecx
0x9071B5: jnz     short loc_9071BD
0x9071B7: mov     ecx, ds:0BA7D9Ch
0x9071BD: mov     eax, [esp+4E0h+var_4B4]
0x9071C1: lea     edx, [eax+eax*2]
0x9071C4: push    14h
0x9071C6: shl     edx, 2
0x9071C9: push    edx
0x9071CA: call    sub_8A7560
0x9071CF: mov     edx, [esp+4E0h+var_4B4]
0x9071D3: mov     [esi+0Ch], eax
0x9071D6: mov     eax, [esi+14h]
0x9071D9: and     eax, 40000000h
0x9071DE: or      eax, edx
0x9071E0: mov     [esi+14h], eax
0x9071E3: test    edx, edx
0x9071E5: mov     [esi+10h], edx
0x9071E8: mov     esi, [esi+0Ch]
0x9071EB: jle     short loc_907210
0x9071ED: mov     eax, [esp+4E0h+var_4B8]
0x9071F1: mov     ecx, esi
0x9071F3: mov     esi, eax
0x9071F5: mov     ebx, [esi]
0x9071F7: mov     edi, ecx
0x9071F9: mov     [edi], ebx
0x9071FB: mov     ebx, [esi+4]
0x9071FE: mov     [edi+4], ebx
0x907201: mov     esi, [esi+8]
0x907204: add     eax, 0Ch
0x907207: add     ecx, 0Ch
0x90720A: dec     edx
0x90720B: mov     [edi+8], esi
0x90720E: jnz     short loc_9071F3
0x907210: mov     esi, [esp+4E0h+var_4D0]
0x907214: mov     ecx, [esi+19Ch]
0x90721A: test    ecx, ecx
0x90721C: mov     eax, dword ptr [esp+4E0h+var_4AC]
0x907220: jnz     short loc_907228
0x907222: mov     ecx, ds:0BA7D9Ch
0x907228: cmp     eax, [ecx+28h]
0x90722B: mov     [ecx+20h], eax
0x90722E: jnz     short loc_907236
0x907230: mov     edx, [ecx]
0x907232: push    eax
0x907233: call    dword ptr [edx+10h]
0x907236: mov     eax, [esp+4E0h+var_4B0]
0x90723A: test    eax, eax
0x90723C: js      short loc_907266
0x90723E: mov     ecx, [esi+19Ch]
0x907244: test    ecx, ecx
0x907246: jnz     short loc_90724E
0x907248: mov     ecx, ds:0BA7D9Ch
0x90724E: mov     edx, [esp+4E0h+var_4B8]
0x907252: and     eax, 3FFFFFFFh
0x907257: lea     eax, [eax+eax*2]
0x90725A: push    14h
0x90725C: shl     eax, 2
0x90725F: push    eax
0x907260: push    edx
0x907261: call    sub_8A75D0
0x907266: mov     edx, [esp+4E0h+var_480]
0x90726A: mov     eax, [esp+4E0h+var_478]
0x90726E: test    eax, eax
0x907270: js      short loc_9072A3
0x907272: mov     ecx, large fs:2Ch
0x907279: mov     esi, ds:0BA9DE4h
0x90727F: mov     ecx, [ecx+esi*4]
0x907282: mov     ecx, [ecx+19Ch]
0x907288: test    ecx, ecx
0x90728A: jnz     short loc_907292
0x90728C: mov     ecx, ds:0BA7D9Ch
0x907292: and     eax, 3FFFFFFFh
0x907297: push    14h
0x907299: shl     eax, 2
0x90729C: push    eax
0x90729D: push    edx
0x90729E: call    sub_8A75D0
0x9072A3: mov     ecx, [esp+4E0h+var_4]
0x9072AA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9072AF: pop     edi
0x9072B0: pop     esi
0x9072B1: pop     ebx
0x9072B2: mov     esp, ebp
0x9072B4: pop     ebp
0x9072B5: retn    0Ch
