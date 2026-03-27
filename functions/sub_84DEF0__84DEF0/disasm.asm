0x84DEF0: push    0FFFFFFFFh
0x84DEF2: push    offset SEH_879360
0x84DEF7: mov     eax, large fs:0
0x84DEFD: push    eax
0x84DEFE: push    ecx
0x84DEFF: push    ebx
0x84DF00: push    ebp
0x84DF01: push    esi
0x84DF02: push    edi
0x84DF03: mov     eax, ds:0B30AACh
0x84DF08: xor     eax, esp
0x84DF0A: push    eax
0x84DF0B: lea     eax, [esp+24h+var_C]
0x84DF0F: mov     large fs:0, eax
0x84DF15: mov     [esp+24h+var_10], ecx
0x84DF19: mov     eax, [esp+24h+arg_8]
0x84DF1D: mov     eax, [eax+10h]
0x84DF20: mov     ebx, ds:0B45650h
0x84DF26: push    eax
0x84DF27: call    sub_848DA0
0x84DF2C: mov     ecx, [ebx+24h]
0x84DF2F: mov     esi, [esp+24h+arg_C]
0x84DF33: mov     edi, [ecx]
0x84DF35: mov     edx, [esi]
0x84DF37: mov     eax, [edx+88h]
0x84DF3D: push    0
0x84DF3F: mov     ecx, esi
0x84DF41: mov     [esp+28h+arg_8], edi
0x84DF45: call    eax
0x84DF47: mov     edi, [edi+4]
0x84DF4A: mov     ebp, eax
0x84DF4C: cmp     edi, ebp
0x84DF4E: jz      short loc_84DF87
0x84DF50: test    edi, edi
0x84DF52: jz      short loc_84DF70
0x84DF54: lea     ecx, [edi+4]
0x84DF57: push    ecx; lpAddend
0x84DF58: call    dword ptr ds:0A2807Ch
0x84DF5E: test    eax, eax
0x84DF60: jnz     short loc_84DF70
0x84DF62: test    edi, edi
0x84DF64: jz      short loc_84DF70
0x84DF66: mov     edx, [edi]
0x84DF68: mov     eax, [edx]
0x84DF6A: push    1
0x84DF6C: mov     ecx, edi
0x84DF6E: call    eax
0x84DF70: test    ebp, ebp
0x84DF72: mov     edi, [esp+24h+arg_8]
0x84DF76: mov     [edi+4], ebp
0x84DF79: jz      short loc_84DF8B
0x84DF7B: add     ebp, 4
0x84DF7E: push    ebp; lpAddend
0x84DF7F: call    dword ptr ds:0A28078h
0x84DF85: jmp     short loc_84DF8B
0x84DF87: mov     edi, [esp+24h+arg_8]
0x84DF8B: test    edi, edi
0x84DF8D: jz      short loc_84DFA9
0x84DF8F: cmp     byte ptr ds:0B42CDDh, 0
0x84DF96: jz      short loc_84DFA9
0x84DF98: mov     edx, [esi]
0x84DF9A: mov     eax, [edx+78h]
0x84DF9D: mov     ecx, esi
0x84DF9F: call    eax
0x84DFA1: push    eax
0x84DFA2: mov     ecx, edi
0x84DFA4: call    sub_7715E0
0x84DFA9: mov     ecx, [ebx+24h]
0x84DFAC: mov     edi, [ecx+4]
0x84DFAF: mov     edx, [esi]
0x84DFB1: mov     eax, [edx+8Ch]
0x84DFB7: push    0
0x84DFB9: mov     ecx, esi
0x84DFBB: mov     [esp+28h+arg_8], edi
0x84DFBF: call    eax
0x84DFC1: test    eax, eax
0x84DFC3: jz      short loc_84DFD7
0x84DFC5: mov     edx, [esi]
0x84DFC7: mov     eax, [edx+8Ch]
0x84DFCD: push    0
0x84DFCF: mov     ecx, esi
0x84DFD1: call    eax
0x84DFD3: mov     ebp, eax
0x84DFD5: jmp     short loc_84DFEC
0x84DFD7: test    dword ptr [esi+1Ch], 80h
0x84DFDE: mov     ebp, ds:0B430F0h
0x84DFE4: ja      short loc_84DFEC
0x84DFE6: mov     ebp, ds:0B430DCh
0x84DFEC: mov     edi, [edi+4]
0x84DFEF: cmp     edi, ebp
0x84DFF1: jz      short loc_84E02A
0x84DFF3: test    edi, edi
0x84DFF5: jz      short loc_84E013
0x84DFF7: lea     ecx, [edi+4]
0x84DFFA: push    ecx; lpAddend
0x84DFFB: call    dword ptr ds:0A2807Ch
0x84E001: test    eax, eax
0x84E003: jnz     short loc_84E013
0x84E005: test    edi, edi
0x84E007: jz      short loc_84E013
0x84E009: mov     edx, [edi]
0x84E00B: mov     eax, [edx]
0x84E00D: push    1
0x84E00F: mov     ecx, edi
0x84E011: call    eax
0x84E013: test    ebp, ebp
0x84E015: mov     edi, [esp+24h+arg_8]
0x84E019: mov     [edi+4], ebp
0x84E01C: jz      short loc_84E02E
0x84E01E: add     ebp, 4
0x84E021: push    ebp; lpAddend
0x84E022: call    dword ptr ds:0A28078h
0x84E028: jmp     short loc_84E02E
0x84E02A: mov     edi, [esp+24h+arg_8]
0x84E02E: test    edi, edi
0x84E030: jz      short loc_84E04C
0x84E032: cmp     byte ptr ds:0B42CDDh, 0
0x84E039: jz      short loc_84E04C
0x84E03B: mov     edx, [esi]
0x84E03D: mov     eax, [edx+78h]
0x84E040: mov     ecx, esi
0x84E042: call    eax
0x84E044: push    eax
0x84E045: mov     ecx, edi
0x84E047: call    sub_7715E0
0x84E04C: mov     ecx, [ebx+24h]
0x84E04F: mov     edi, [ecx+8]
0x84E052: mov     edx, [esi]
0x84E054: mov     eax, [edx+90h]
0x84E05A: push    0
0x84E05C: mov     ecx, esi
0x84E05E: mov     [esp+28h+arg_8], edi
0x84E062: call    eax
0x84E064: mov     edi, [edi+4]
0x84E067: mov     ebp, eax
0x84E069: cmp     edi, ebp
0x84E06B: jz      short loc_84E0A4
0x84E06D: test    edi, edi
0x84E06F: jz      short loc_84E08D
0x84E071: lea     ecx, [edi+4]
0x84E074: push    ecx; lpAddend
0x84E075: call    dword ptr ds:0A2807Ch
0x84E07B: test    eax, eax
0x84E07D: jnz     short loc_84E08D
0x84E07F: test    edi, edi
0x84E081: jz      short loc_84E08D
0x84E083: mov     edx, [edi]
0x84E085: mov     eax, [edx]
0x84E087: push    1
0x84E089: mov     ecx, edi
0x84E08B: call    eax
0x84E08D: test    ebp, ebp
0x84E08F: mov     edi, [esp+24h+arg_8]
0x84E093: mov     [edi+4], ebp
0x84E096: jz      short loc_84E0A8
0x84E098: add     ebp, 4
0x84E09B: push    ebp; lpAddend
0x84E09C: call    dword ptr ds:0A28078h
0x84E0A2: jmp     short loc_84E0A8
0x84E0A4: mov     edi, [esp+24h+arg_8]
0x84E0A8: test    edi, edi
0x84E0AA: jz      short loc_84E0C6
0x84E0AC: cmp     byte ptr ds:0B42CDDh, 0
0x84E0B3: jz      short loc_84E0C6
0x84E0B5: mov     edx, [esi]
0x84E0B7: mov     eax, [edx+78h]
0x84E0BA: mov     ecx, esi
0x84E0BC: call    eax
0x84E0BE: push    eax
0x84E0BF: mov     ecx, edi
0x84E0C1: call    sub_7715E0
0x84E0C6: mov     edi, 1
0x84E0CB: add     [ebx+60h], edi
0x84E0CE: mov     [esp+24h+arg_8], ebx
0x84E0D2: mov     esi, [esp+24h+var_10]
0x84E0D6: mov     edx, [esi+38h]
0x84E0D9: lea     ecx, [esp+24h+arg_8]
0x84E0DD: push    ecx
0x84E0DE: push    edx
0x84E0DF: lea     ecx, [esi+40h]
0x84E0E2: mov     [esp+2Ch+var_4], 0
0x84E0EA: call    sub_76CE40
0x84E0EF: or      eax, 0FFFFFFFFh
0x84E0F2: add     [ebx+60h], eax
0x84E0F5: mov     [esp+24h+var_4], eax
0x84E0F9: jnz     short loc_84E102
0x84E0FB: mov     ecx, ebx
0x84E0FD: call    sub_7604D0
0x84E102: add     [esi+38h], edi
0x84E105: mov     ecx, dword ptr [esp+24h+var_C]
0x84E109: mov     large fs:0, ecx
0x84E110: pop     ecx
0x84E111: pop     edi
0x84E112: pop     esi
0x84E113: pop     ebp
0x84E114: pop     ebx
0x84E115: add     esp, 10h
0x84E118: retn    10h
