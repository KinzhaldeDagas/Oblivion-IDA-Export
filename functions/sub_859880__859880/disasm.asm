0x859880: push    0FFFFFFFFh
0x859882: push    offset SEH_859880
0x859887: mov     eax, large fs:0
0x85988D: push    eax
0x85988E: push    ecx
0x85988F: push    ebx
0x859890: push    ebp
0x859891: push    esi
0x859892: push    edi
0x859893: mov     eax, ds:0B30AACh
0x859898: xor     eax, esp
0x85989A: push    eax
0x85989B: lea     eax, [esp+24h+var_C]
0x85989F: mov     large fs:0, eax
0x8598A5: mov     ebp, ecx
0x8598A7: mov     esi, [esp+24h+arg_4]
0x8598AB: mov     al, [esi+0FCh]
0x8598B1: lea     ecx, [esp+24h+var_10]
0x8598B5: push    ecx
0x8598B6: mov     ecx, esi
0x8598B8: mov     byte ptr [esp+28h+arg_4], al
0x8598BC: call    sub_405AD0
0x8598C1: mov     ecx, [eax]
0x8598C3: fld     dword ptr [ecx+0ECh]
0x8598C9: fld     dword ptr ds:0B3FA90h
0x8598CF: fucompp
0x8598D1: fnstsw  ax
0x8598D3: test    ah, 44h
0x8598D6: jp      short loc_859906
0x8598D8: fld     dword ptr [ecx+0F0h]
0x8598DE: fld     dword ptr ds:0B3FA94h
0x8598E4: fucompp
0x8598E6: fnstsw  ax
0x8598E8: test    ah, 44h
0x8598EB: jp      short loc_859906
0x8598ED: fld     dword ptr [ecx+0F4h]
0x8598F3: fld     dword ptr ds:0B3FA98h
0x8598F9: fucompp
0x8598FB: fnstsw  ax
0x8598FD: test    ah, 44h
0x859900: jp      short loc_859906
0x859902: mov     bl, 1
0x859904: jmp     short loc_859908
0x859906: xor     bl, bl
0x859908: mov     edi, [esp+24h+var_10]
0x85990C: test    edi, edi
0x85990E: jz      short loc_85992C
0x859910: lea     edx, [edi+4]
0x859913: push    edx; lpAddend
0x859914: call    dword ptr ds:0A2807Ch
0x85991A: test    eax, eax
0x85991C: jnz     short loc_85992C
0x85991E: test    edi, edi
0x859920: jz      short loc_85992C
0x859922: mov     eax, [edi]
0x859924: mov     edx, [eax]
0x859926: push    1
0x859928: mov     ecx, edi
0x85992A: call    edx
0x85992C: test    bl, bl
0x85992E: jnz     loc_859FEC
0x859934: cmp     [esp+24h+arg_14], bl
0x859938: mov     edi, dword ptr [esp+24h+arg_10]
0x85993C: jnz     loc_859D06
0x859942: cmp     byte ptr [esp+24h+arg_4], bl
0x859946: jnz     loc_859BC9
0x85994C: cmp     [esp+24h+arg_20], bl
0x859950: jnz     loc_859B32
0x859956: cmp     [esp+24h+arg_1C], bl
0x85995A: jnz     loc_859A48
0x859960: cmp     [esp+24h+arg_24], bl
0x859964: jnz     loc_859A00
0x85996A: cmp     [esp+24h+arg_28], bl
0x85996E: jnz     short loc_8599B8
0x859970: cmp     byte ptr [esp+24h+arg_C], 1
0x859975: jnz     loc_859FE1
0x85997B: push    10h; Size
0x85997D: call    FormHeapAlloc
0x859982: add     esp, 4
0x859985: mov     [esp+24h+arg_C], eax
0x859989: test    eax, eax
0x85998B: mov     [esp+24h+var_4], 0
0x859993: jz      loc_859FC4
0x859999: movzx   ecx, byte ptr [edi]
0x85999C: mov     edx, dword ptr [esp+24h+arg_0]
0x8599A0: push    esi
0x8599A1: push    1
0x8599A3: push    ecx
0x8599A4: push    115h
0x8599A9: push    edx
0x8599AA: push    eax
0x8599AB: call    sub_7E2370
0x8599B0: add     esp, 18h
0x8599B3: jmp     loc_859FC6
0x8599B8: cmp     byte ptr [esp+24h+arg_C], 1
0x8599BD: jnz     loc_859FE1
0x8599C3: push    10h; Size
0x8599C5: call    FormHeapAlloc
0x8599CA: add     esp, 4
0x8599CD: mov     [esp+24h+arg_C], eax
0x8599D1: test    eax, eax
0x8599D3: mov     [esp+24h+var_4], 1
0x8599DB: jz      loc_859FC4
0x8599E1: movzx   ecx, byte ptr [edi]
0x8599E4: mov     edx, dword ptr [esp+24h+arg_0]
0x8599E8: push    esi
0x8599E9: push    1
0x8599EB: push    ecx
0x8599EC: push    116h
0x8599F1: push    edx
0x8599F2: push    eax
0x8599F3: call    sub_7E2370
0x8599F8: add     esp, 18h
0x8599FB: jmp     loc_859FC6
0x859A00: cmp     byte ptr [esp+24h+arg_C], 1
0x859A05: jnz     loc_859FE1
0x859A0B: push    10h; Size
0x859A0D: call    FormHeapAlloc
0x859A12: add     esp, 4
0x859A15: mov     [esp+24h+arg_C], eax
0x859A19: test    eax, eax
0x859A1B: mov     [esp+24h+var_4], 2
0x859A23: jz      loc_859FC4
0x859A29: movzx   ecx, byte ptr [edi]
0x859A2C: mov     edx, dword ptr [esp+24h+arg_0]
0x859A30: push    esi
0x859A31: push    1
0x859A33: push    ecx
0x859A34: push    11Bh
0x859A39: push    edx
0x859A3A: push    eax
0x859A3B: call    sub_7E2370
0x859A40: add     esp, 18h
0x859A43: jmp     loc_859FC6
0x859A48: cmp     [esp+24h+arg_24], 0
0x859A4D: jnz     loc_859AEA
0x859A53: cmp     [esp+24h+arg_28], 0
0x859A58: jnz     short loc_859AA2
0x859A5A: cmp     byte ptr [esp+24h+arg_C], 1
0x859A5F: jnz     loc_859FE1
0x859A65: push    10h; Size
0x859A67: call    FormHeapAlloc
0x859A6C: add     esp, 4
0x859A6F: mov     [esp+24h+arg_C], eax
0x859A73: test    eax, eax
0x859A75: mov     [esp+24h+var_4], 3
0x859A7D: jz      loc_859FC4
0x859A83: movzx   ecx, byte ptr [edi]
0x859A86: mov     edx, dword ptr [esp+24h+arg_0]
0x859A8A: push    esi
0x859A8B: push    1
0x859A8D: push    ecx
0x859A8E: push    11Ch
0x859A93: push    edx
0x859A94: push    eax
0x859A95: call    sub_7E2370
0x859A9A: add     esp, 18h
0x859A9D: jmp     loc_859FC6
0x859AA2: cmp     byte ptr [esp+24h+arg_C], 1
0x859AA7: jnz     loc_859FE1
0x859AAD: push    10h; Size
0x859AAF: call    FormHeapAlloc
0x859AB4: add     esp, 4
0x859AB7: mov     [esp+24h+arg_C], eax
0x859ABB: test    eax, eax
0x859ABD: mov     [esp+24h+var_4], 4
0x859AC5: jz      loc_859FC4
0x859ACB: movzx   ecx, byte ptr [edi]
0x859ACE: mov     edx, dword ptr [esp+24h+arg_0]
0x859AD2: push    esi
0x859AD3: push    1
0x859AD5: push    ecx
0x859AD6: push    11Dh
0x859ADB: push    edx
0x859ADC: push    eax
0x859ADD: call    sub_7E2370
0x859AE2: add     esp, 18h
0x859AE5: jmp     loc_859FC6
0x859AEA: cmp     byte ptr [esp+24h+arg_C], 1
0x859AEF: jnz     loc_859FE1
0x859AF5: push    10h; Size
0x859AF7: call    FormHeapAlloc
0x859AFC: add     esp, 4
0x859AFF: mov     [esp+24h+arg_C], eax
0x859B03: test    eax, eax
0x859B05: mov     [esp+24h+var_4], 5
0x859B0D: jz      loc_859FC4
0x859B13: movzx   ecx, byte ptr [edi]
0x859B16: mov     edx, dword ptr [esp+24h+arg_0]
0x859B1A: push    esi
0x859B1B: push    1
0x859B1D: push    ecx
0x859B1E: push    122h
0x859B23: push    edx
0x859B24: push    eax
0x859B25: call    sub_7E2370
0x859B2A: add     esp, 18h
0x859B2D: jmp     loc_859FC6
0x859B32: cmp     [esp+24h+arg_1C], 0
0x859B37: jnz     short loc_859B81
0x859B39: cmp     byte ptr [esp+24h+arg_C], 1
0x859B3E: jnz     loc_859FE1
0x859B44: push    10h; Size
0x859B46: call    FormHeapAlloc
0x859B4B: add     esp, 4
0x859B4E: mov     [esp+24h+arg_C], eax
0x859B52: test    eax, eax
0x859B54: mov     [esp+24h+var_4], 6
0x859B5C: jz      loc_859FC4
0x859B62: movzx   ecx, byte ptr [edi]
0x859B65: mov     edx, dword ptr [esp+24h+arg_0]
0x859B69: push    esi
0x859B6A: push    1
0x859B6C: push    ecx
0x859B6D: push    117h
0x859B72: push    edx
0x859B73: push    eax
0x859B74: call    sub_7E2370
0x859B79: add     esp, 18h
0x859B7C: jmp     loc_859FC6
0x859B81: cmp     byte ptr [esp+24h+arg_C], 1
0x859B86: jnz     loc_859FE1
0x859B8C: push    10h; Size
0x859B8E: call    FormHeapAlloc
0x859B93: add     esp, 4
0x859B96: mov     [esp+24h+arg_C], eax
0x859B9A: test    eax, eax
0x859B9C: mov     [esp+24h+var_4], 7
0x859BA4: jz      loc_859FC4
0x859BAA: movzx   ecx, byte ptr [edi]
0x859BAD: mov     edx, dword ptr [esp+24h+arg_0]
0x859BB1: push    esi
0x859BB2: push    1
0x859BB4: push    ecx
0x859BB5: push    11Eh
0x859BBA: push    edx
0x859BBB: push    eax
0x859BBC: call    sub_7E2370
0x859BC1: add     esp, 18h
0x859BC4: jmp     loc_859FC6
0x859BC9: cmp     [esp+24h+arg_20], 0
0x859BCE: jnz     loc_859CBE
0x859BD4: cmp     [esp+24h+arg_24], 0
0x859BD9: jnz     loc_859C76
0x859BDF: cmp     [esp+24h+arg_28], 0
0x859BE4: jnz     short loc_859C2E
0x859BE6: cmp     byte ptr [esp+24h+arg_C], 1
0x859BEB: jnz     loc_859FE1
0x859BF1: push    10h; Size
0x859BF3: call    FormHeapAlloc
0x859BF8: add     esp, 4
0x859BFB: mov     [esp+24h+arg_C], eax
0x859BFF: test    eax, eax
0x859C01: mov     [esp+24h+var_4], 8
0x859C09: jz      loc_859FC4
0x859C0F: movzx   ecx, byte ptr [edi]
0x859C12: mov     edx, dword ptr [esp+24h+arg_0]
0x859C16: push    esi
0x859C17: push    1
0x859C19: push    ecx
0x859C1A: push    123h
0x859C1F: push    edx
0x859C20: push    eax
0x859C21: call    sub_7E2370
0x859C26: add     esp, 18h
0x859C29: jmp     loc_859FC6
0x859C2E: cmp     byte ptr [esp+24h+arg_C], 1
0x859C33: jnz     loc_859FE1
0x859C39: push    10h; Size
0x859C3B: call    FormHeapAlloc
0x859C40: add     esp, 4
0x859C43: mov     [esp+24h+arg_C], eax
0x859C47: test    eax, eax
0x859C49: mov     [esp+24h+var_4], 9
0x859C51: jz      loc_859FC4
0x859C57: movzx   ecx, byte ptr [edi]
0x859C5A: mov     edx, dword ptr [esp+24h+arg_0]
0x859C5E: push    esi
0x859C5F: push    1
0x859C61: push    ecx
0x859C62: push    124h
0x859C67: push    edx
0x859C68: push    eax
0x859C69: call    sub_7E2370
0x859C6E: add     esp, 18h
0x859C71: jmp     loc_859FC6
0x859C76: cmp     byte ptr [esp+24h+arg_C], 1
0x859C7B: jnz     loc_859FE1
0x859C81: push    10h; Size
0x859C83: call    FormHeapAlloc
0x859C88: add     esp, 4
0x859C8B: mov     [esp+24h+arg_C], eax
0x859C8F: test    eax, eax
0x859C91: mov     [esp+24h+var_4], 0Ah
0x859C99: jz      loc_859FC4
0x859C9F: movzx   ecx, byte ptr [edi]
0x859CA2: mov     edx, dword ptr [esp+24h+arg_0]
0x859CA6: push    esi
0x859CA7: push    1
0x859CA9: push    ecx
0x859CAA: push    129h
0x859CAF: push    edx
0x859CB0: push    eax
0x859CB1: call    sub_7E2370
0x859CB6: add     esp, 18h
0x859CB9: jmp     loc_859FC6
0x859CBE: cmp     byte ptr [esp+24h+arg_C], 1
0x859CC3: jnz     loc_859FE1
0x859CC9: push    10h; Size
0x859CCB: call    FormHeapAlloc
0x859CD0: add     esp, 4
0x859CD3: mov     [esp+24h+arg_C], eax
0x859CD7: test    eax, eax
0x859CD9: mov     [esp+24h+var_4], 0Bh
0x859CE1: jz      loc_859FC4
0x859CE7: movzx   ecx, byte ptr [edi]
0x859CEA: mov     edx, dword ptr [esp+24h+arg_0]
0x859CEE: push    esi
0x859CEF: push    1
0x859CF1: push    ecx
0x859CF2: push    125h
0x859CF7: push    edx
0x859CF8: push    eax
0x859CF9: call    sub_7E2370
0x859CFE: add     esp, 18h
0x859D01: jmp     loc_859FC6
0x859D06: cmp     byte ptr [esp+24h+arg_4], 0
0x859D0B: jnz     loc_859EEC
0x859D11: cmp     [esp+24h+arg_20], 0
0x859D16: jnz     loc_859E55
0x859D1C: cmp     [esp+24h+arg_1C], 0
0x859D21: jnz     loc_859DBE
0x859D27: cmp     [esp+24h+arg_28], 0
0x859D2C: jnz     short loc_859D76
0x859D2E: cmp     byte ptr [esp+24h+arg_C], 1
0x859D33: jnz     loc_859FE1
0x859D39: push    10h; Size
0x859D3B: call    FormHeapAlloc
0x859D40: add     esp, 4
0x859D43: mov     [esp+24h+arg_C], eax
0x859D47: test    eax, eax
0x859D49: mov     [esp+24h+var_4], 0Ch
0x859D51: jz      loc_859FC4
0x859D57: movzx   ecx, byte ptr [edi]
0x859D5A: mov     edx, dword ptr [esp+24h+arg_0]
0x859D5E: push    esi
0x859D5F: push    1
0x859D61: push    ecx
0x859D62: push    118h
0x859D67: push    edx
0x859D68: push    eax
0x859D69: call    sub_7E2370
0x859D6E: add     esp, 18h
0x859D71: jmp     loc_859FC6
0x859D76: cmp     byte ptr [esp+24h+arg_C], 1
0x859D7B: jnz     loc_859FE1
0x859D81: push    10h; Size
0x859D83: call    FormHeapAlloc
0x859D88: add     esp, 4
0x859D8B: mov     [esp+24h+arg_C], eax
0x859D8F: test    eax, eax
0x859D91: mov     [esp+24h+var_4], 0Dh
0x859D99: jz      loc_859FC4
0x859D9F: movzx   ecx, byte ptr [edi]
0x859DA2: mov     edx, dword ptr [esp+24h+arg_0]
0x859DA6: push    esi
0x859DA7: push    1
0x859DA9: push    ecx
0x859DAA: push    119h
0x859DAF: push    edx
0x859DB0: push    eax
0x859DB1: call    sub_7E2370
0x859DB6: add     esp, 18h
0x859DB9: jmp     loc_859FC6
0x859DBE: cmp     [esp+24h+arg_28], 0
0x859DC3: jnz     short loc_859E0D
0x859DC5: cmp     byte ptr [esp+24h+arg_C], 1
0x859DCA: jnz     loc_859FE1
0x859DD0: push    10h; Size
0x859DD2: call    FormHeapAlloc
0x859DD7: add     esp, 4
0x859DDA: mov     [esp+24h+arg_C], eax
0x859DDE: test    eax, eax
0x859DE0: mov     [esp+24h+var_4], 0Eh
0x859DE8: jz      loc_859FC4
0x859DEE: movzx   ecx, byte ptr [edi]
0x859DF1: mov     edx, dword ptr [esp+24h+arg_0]
0x859DF5: push    esi
0x859DF6: push    1
0x859DF8: push    ecx
0x859DF9: push    11Fh
0x859DFE: push    edx
0x859DFF: push    eax
0x859E00: call    sub_7E2370
0x859E05: add     esp, 18h
0x859E08: jmp     loc_859FC6
0x859E0D: cmp     byte ptr [esp+24h+arg_C], 1
0x859E12: jnz     loc_859FE1
0x859E18: push    10h; Size
0x859E1A: call    FormHeapAlloc
0x859E1F: add     esp, 4
0x859E22: mov     [esp+24h+arg_C], eax
0x859E26: test    eax, eax
0x859E28: mov     [esp+24h+var_4], 0Fh
0x859E30: jz      loc_859FC4
0x859E36: movzx   ecx, byte ptr [edi]
0x859E39: mov     edx, dword ptr [esp+24h+arg_0]
0x859E3D: push    esi
0x859E3E: push    1
0x859E40: push    ecx
0x859E41: push    120h
0x859E46: push    edx
0x859E47: push    eax
0x859E48: call    sub_7E2370
0x859E4D: add     esp, 18h
0x859E50: jmp     loc_859FC6
0x859E55: cmp     [esp+24h+arg_1C], 0
0x859E5A: jnz     short loc_859EA4
0x859E5C: cmp     byte ptr [esp+24h+arg_C], 1
0x859E61: jnz     loc_859FE1
0x859E67: push    10h; Size
0x859E69: call    FormHeapAlloc
0x859E6E: add     esp, 4
0x859E71: mov     [esp+24h+arg_C], eax
0x859E75: test    eax, eax
0x859E77: mov     [esp+24h+var_4], 10h
0x859E7F: jz      loc_859FC4
0x859E85: movzx   ecx, byte ptr [edi]
0x859E88: mov     edx, dword ptr [esp+24h+arg_0]
0x859E8C: push    esi
0x859E8D: push    1
0x859E8F: push    ecx
0x859E90: push    11Ah
0x859E95: push    edx
0x859E96: push    eax
0x859E97: call    sub_7E2370
0x859E9C: add     esp, 18h
0x859E9F: jmp     loc_859FC6
0x859EA4: cmp     byte ptr [esp+24h+arg_C], 1
0x859EA9: jnz     loc_859FE1
0x859EAF: push    10h; Size
0x859EB1: call    FormHeapAlloc
0x859EB6: add     esp, 4
0x859EB9: mov     [esp+24h+arg_C], eax
0x859EBD: test    eax, eax
0x859EBF: mov     [esp+24h+var_4], 11h
0x859EC7: jz      loc_859FC4
0x859ECD: movzx   ecx, byte ptr [edi]
0x859ED0: mov     edx, dword ptr [esp+24h+arg_0]
0x859ED4: push    esi
0x859ED5: push    1
0x859ED7: push    ecx
0x859ED8: push    121h
0x859EDD: push    edx
0x859EDE: push    eax
0x859EDF: call    sub_7E2370
0x859EE4: add     esp, 18h
0x859EE7: jmp     loc_859FC6
0x859EEC: cmp     [esp+24h+arg_20], 0
0x859EF1: jnz     loc_859F87
0x859EF7: cmp     [esp+24h+arg_28], 0
0x859EFC: jnz     short loc_859F46
0x859EFE: cmp     byte ptr [esp+24h+arg_C], 1
0x859F03: jnz     loc_859FE1
0x859F09: push    10h; Size
0x859F0B: call    FormHeapAlloc
0x859F10: add     esp, 4
0x859F13: mov     [esp+24h+arg_C], eax
0x859F17: test    eax, eax
0x859F19: mov     [esp+24h+var_4], 12h
0x859F21: jz      loc_859FC4
0x859F27: movzx   ecx, byte ptr [edi]
0x859F2A: mov     edx, dword ptr [esp+24h+arg_0]
0x859F2E: push    esi
0x859F2F: push    1
0x859F31: push    ecx
0x859F32: push    126h
0x859F37: push    edx
0x859F38: push    eax
0x859F39: call    sub_7E2370
0x859F3E: add     esp, 18h
0x859F41: jmp     loc_859FC6
0x859F46: cmp     byte ptr [esp+24h+arg_C], 1
0x859F4B: jnz     loc_859FE1
0x859F51: push    10h; Size
0x859F53: call    FormHeapAlloc
0x859F58: add     esp, 4
0x859F5B: mov     [esp+24h+arg_C], eax
0x859F5F: test    eax, eax
0x859F61: mov     [esp+24h+var_4], 13h
0x859F69: jz      short loc_859FC4
0x859F6B: movzx   ecx, byte ptr [edi]
0x859F6E: mov     edx, dword ptr [esp+24h+arg_0]
0x859F72: push    esi
0x859F73: push    1
0x859F75: push    ecx
0x859F76: push    127h
0x859F7B: push    edx
0x859F7C: push    eax
0x859F7D: call    sub_7E2370
0x859F82: add     esp, 18h
0x859F85: jmp     short loc_859FC6
0x859F87: cmp     byte ptr [esp+24h+arg_C], 1
0x859F8C: jnz     short loc_859FE1
0x859F8E: push    10h; Size
0x859F90: call    FormHeapAlloc
0x859F95: add     esp, 4
0x859F98: mov     [esp+24h+arg_C], eax
0x859F9C: test    eax, eax
0x859F9E: mov     [esp+24h+var_4], 14h
0x859FA6: jz      short loc_859FC4
0x859FA8: movzx   ecx, byte ptr [edi]
0x859FAB: mov     edx, dword ptr [esp+24h+arg_0]
0x859FAF: push    esi
0x859FB0: push    1
0x859FB2: push    ecx
0x859FB3: push    128h
0x859FB8: push    edx
0x859FB9: push    eax
0x859FBA: call    sub_7E2370
0x859FBF: add     esp, 18h
0x859FC2: jmp     short loc_859FC6
0x859FC4: xor     eax, eax
0x859FC6: mov     [esp+24h+arg_C], eax
0x859FCA: lea     eax, [esp+24h+arg_C]
0x859FCE: push    eax
0x859FCF: lea     ecx, [ebp+28h]
0x859FD2: mov     [esp+28h+var_4], 0FFFFFFFFh
0x859FDA: call    sub_5B1E20
0x859FDF: jmp     short loc_859FE9
0x859FE1: mov     eax, [esp+24h+arg_8]
0x859FE5: add     word ptr [eax], 1
0x859FE9: mov     byte ptr [edi], 0
0x859FEC: mov     ecx, dword ptr [esp+24h+var_C]
0x859FF0: mov     large fs:0, ecx
0x859FF7: pop     ecx
0x859FF8: pop     edi
0x859FF9: pop     esi
0x859FFA: pop     ebp
0x859FFB: pop     ebx
0x859FFC: add     esp, 10h
0x859FFF: retn    2Ch ; ','
