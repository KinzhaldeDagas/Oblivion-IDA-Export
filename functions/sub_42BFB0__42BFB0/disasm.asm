0x42BFB0: push    ebx
0x42BFB1: mov     ebx, [esp+4+arg_0]
0x42BFB5: push    ebp
0x42BFB6: push    esi
0x42BFB7: mov     esi, [esp+0Ch+arg_4]
0x42BFBB: push    edi
0x42BFBC: mov     edi, [esp+10h+arg_8]
0x42BFC0: cmp     esi, edi
0x42BFC2: mov     ecx, [ebx+esi*4]
0x42BFC5: mov     eax, esi
0x42BFC7: mov     ebp, edi
0x42BFC9: mov     [esp+10h+arg_4], eax
0x42BFCD: mov     [esp+10h+arg_8], ebp
0x42BFD1: mov     [esp+10h+arg_0], ecx
0x42BFD5: jge     short loc_42C052
0x42BFD7: mov     ebp, [ecx]
0x42BFD9: mov     edx, [ecx+4]
0x42BFDC: lea     esp, [esp+0]
0x42BFE0: mov     eax, [ebx+edi*4]
0x42BFE3: cmp     [eax+4], edx
0x42BFE6: mov     ecx, [eax]
0x42BFE8: jb      short loc_42BFF9
0x42BFEA: ja      short loc_42BFF0
0x42BFEC: cmp     ecx, ebp
0x42BFEE: jb      short loc_42BFF9
0x42BFF0: cmp     esi, edi
0x42BFF2: jge     short loc_42BFFB
0x42BFF4: sub     edi, 1
0x42BFF7: jmp     short loc_42BFE0
0x42BFF9: cmp     esi, edi
0x42BFFB: jz      short loc_42C003
0x42BFFD: mov     [ebx+esi*4], eax
0x42C000: add     esi, 1
0x42C003: mov     ecx, [esp+10h+arg_0]
0x42C007: mov     ebp, [ecx]
0x42C009: mov     edx, ecx
0x42C00B: mov     edx, [edx+4]
0x42C00E: mov     edi, edi
0x42C010: mov     eax, [ebx+esi*4]
0x42C013: mov     ecx, [eax]
0x42C015: mov     eax, [eax+4]
0x42C018: cmp     eax, edx
0x42C01A: jb      short loc_42C02C
0x42C01C: ja      short loc_42C022
0x42C01E: cmp     ecx, ebp
0x42C020: jb      short loc_42C02C
0x42C022: cmp     eax, edx
0x42C024: ja      short loc_42C035
0x42C026: jb      short loc_42C02C
0x42C028: cmp     ecx, ebp
0x42C02A: ja      short loc_42C035
0x42C02C: cmp     esi, edi
0x42C02E: jge     short loc_42C037
0x42C030: add     esi, 1
0x42C033: jmp     short loc_42C010
0x42C035: cmp     esi, edi
0x42C037: jz      short loc_42C042
0x42C039: mov     eax, [ebx+esi*4]
0x42C03C: mov     [ebx+edi*4], eax
0x42C03F: sub     edi, 1
0x42C042: cmp     esi, edi
0x42C044: mov     ecx, [esp+10h+arg_0]
0x42C048: jl      short loc_42BFD7
0x42C04A: mov     ebp, [esp+10h+arg_8]
0x42C04E: mov     eax, [esp+10h+arg_4]
0x42C052: cmp     eax, esi
0x42C054: mov     [ebx+esi*4], ecx
0x42C057: mov     edi, ebp
0x42C059: jge     short loc_42C069
0x42C05B: lea     ecx, [esi-1]
0x42C05E: push    ecx
0x42C05F: push    eax
0x42C060: push    ebx
0x42C061: call    sub_42BFB0
0x42C066: add     esp, 0Ch
0x42C069: cmp     ebp, esi
0x42C06B: jle     short loc_42C075
0x42C06D: add     esi, 1
0x42C070: jmp     loc_42BFC0
0x42C075: pop     edi
0x42C076: pop     esi
0x42C077: pop     ebp
0x42C078: pop     ebx
0x42C079: retn
