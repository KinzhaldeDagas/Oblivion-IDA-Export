0x84BFC0: push    0FFFFFFFFh
0x84BFC2: push    offset SEH_879360
0x84BFC7: mov     eax, large fs:0
0x84BFCD: push    eax
0x84BFCE: push    ecx
0x84BFCF: push    ebx
0x84BFD0: push    ebp
0x84BFD1: push    esi
0x84BFD2: push    edi
0x84BFD3: mov     eax, ds:0B30AACh
0x84BFD8: xor     eax, esp
0x84BFDA: push    eax
0x84BFDB: lea     eax, [esp+24h+var_C]
0x84BFDF: mov     large fs:0, eax
0x84BFE5: mov     esi, ecx
0x84BFE7: mov     [esp+24h+var_10], esi
0x84BFEB: mov     edi, [esp+24h+arg_8]
0x84BFEF: mov     eax, [edi+10h]
0x84BFF2: mov     ebx, ds:0B45690h
0x84BFF8: push    eax
0x84BFF9: call    sub_848DA0
0x84BFFE: mov     edi, [edi+0Ch]
0x84C001: push    edi
0x84C002: mov     ecx, esi
0x84C004: call    sub_848E50
0x84C009: mov     eax, [ebx+24h]
0x84C00C: mov     esi, [esp+24h+arg_C]
0x84C010: mov     edi, [eax]
0x84C012: mov     edx, [esi]
0x84C014: mov     eax, [edx+88h]
0x84C01A: push    0
0x84C01C: mov     ecx, esi
0x84C01E: mov     [esp+28h+arg_8], edi
0x84C022: call    eax
0x84C024: mov     edi, [edi+4]
0x84C027: mov     ebp, eax
0x84C029: cmp     edi, ebp
0x84C02B: jz      short loc_84C064
0x84C02D: test    edi, edi
0x84C02F: jz      short loc_84C04D
0x84C031: lea     ecx, [edi+4]
0x84C034: push    ecx; lpAddend
0x84C035: call    dword ptr ds:0A2807Ch
0x84C03B: test    eax, eax
0x84C03D: jnz     short loc_84C04D
0x84C03F: test    edi, edi
0x84C041: jz      short loc_84C04D
0x84C043: mov     edx, [edi]
0x84C045: mov     eax, [edx]
0x84C047: push    1
0x84C049: mov     ecx, edi
0x84C04B: call    eax
0x84C04D: test    ebp, ebp
0x84C04F: mov     edi, [esp+24h+arg_8]
0x84C053: mov     [edi+4], ebp
0x84C056: jz      short loc_84C068
0x84C058: add     ebp, 4
0x84C05B: push    ebp; lpAddend
0x84C05C: call    dword ptr ds:0A28078h
0x84C062: jmp     short loc_84C068
0x84C064: mov     edi, [esp+24h+arg_8]
0x84C068: test    edi, edi
0x84C06A: jz      short loc_84C086
0x84C06C: cmp     byte ptr ds:0B42CDDh, 0
0x84C073: jz      short loc_84C086
0x84C075: mov     edx, [esi]
0x84C077: mov     eax, [edx+78h]
0x84C07A: mov     ecx, esi
0x84C07C: call    eax
0x84C07E: push    eax
0x84C07F: mov     ecx, edi
0x84C081: call    sub_7715E0
0x84C086: mov     ecx, [ebx+24h]
0x84C089: mov     edi, [ecx+4]
0x84C08C: mov     edx, [esi]
0x84C08E: mov     eax, [edx+8Ch]
0x84C094: push    0
0x84C096: mov     ecx, esi
0x84C098: mov     [esp+28h+arg_8], edi
0x84C09C: call    eax
0x84C09E: test    eax, eax
0x84C0A0: jz      short loc_84C0B4
0x84C0A2: mov     edx, [esi]
0x84C0A4: mov     eax, [edx+8Ch]
0x84C0AA: push    0
0x84C0AC: mov     ecx, esi
0x84C0AE: call    eax
0x84C0B0: mov     ebp, eax
0x84C0B2: jmp     short loc_84C0C9
0x84C0B4: test    dword ptr [esi+1Ch], 80h
0x84C0BB: mov     ebp, ds:0B430F0h
0x84C0C1: ja      short loc_84C0C9
0x84C0C3: mov     ebp, ds:0B430DCh
0x84C0C9: mov     edi, [edi+4]
0x84C0CC: cmp     edi, ebp
0x84C0CE: jz      short loc_84C107
0x84C0D0: test    edi, edi
0x84C0D2: jz      short loc_84C0F0
0x84C0D4: lea     ecx, [edi+4]
0x84C0D7: push    ecx; lpAddend
0x84C0D8: call    dword ptr ds:0A2807Ch
0x84C0DE: test    eax, eax
0x84C0E0: jnz     short loc_84C0F0
0x84C0E2: test    edi, edi
0x84C0E4: jz      short loc_84C0F0
0x84C0E6: mov     edx, [edi]
0x84C0E8: mov     eax, [edx]
0x84C0EA: push    1
0x84C0EC: mov     ecx, edi
0x84C0EE: call    eax
0x84C0F0: test    ebp, ebp
0x84C0F2: mov     edi, [esp+24h+arg_8]
0x84C0F6: mov     [edi+4], ebp
0x84C0F9: jz      short loc_84C10B
0x84C0FB: add     ebp, 4
0x84C0FE: push    ebp; lpAddend
0x84C0FF: call    dword ptr ds:0A28078h
0x84C105: jmp     short loc_84C10B
0x84C107: mov     edi, [esp+24h+arg_8]
0x84C10B: test    edi, edi
0x84C10D: jz      short loc_84C129
0x84C10F: cmp     byte ptr ds:0B42CDDh, 0
0x84C116: jz      short loc_84C129
0x84C118: mov     edx, [esi]
0x84C11A: mov     eax, [edx+78h]
0x84C11D: mov     ecx, esi
0x84C11F: call    eax
0x84C121: push    eax
0x84C122: mov     ecx, edi
0x84C124: call    sub_7715E0
0x84C129: mov     ecx, [ebx+24h]
0x84C12C: mov     edi, [ecx+8]
0x84C12F: mov     edx, [esi]
0x84C131: mov     eax, [edx+90h]
0x84C137: push    0
0x84C139: mov     ecx, esi
0x84C13B: mov     [esp+28h+arg_8], edi
0x84C13F: call    eax
0x84C141: mov     edi, [edi+4]
0x84C144: mov     ebp, eax
0x84C146: cmp     edi, ebp
0x84C148: jz      short loc_84C181
0x84C14A: test    edi, edi
0x84C14C: jz      short loc_84C16A
0x84C14E: lea     ecx, [edi+4]
0x84C151: push    ecx; lpAddend
0x84C152: call    dword ptr ds:0A2807Ch
0x84C158: test    eax, eax
0x84C15A: jnz     short loc_84C16A
0x84C15C: test    edi, edi
0x84C15E: jz      short loc_84C16A
0x84C160: mov     edx, [edi]
0x84C162: mov     eax, [edx]
0x84C164: push    1
0x84C166: mov     ecx, edi
0x84C168: call    eax
0x84C16A: test    ebp, ebp
0x84C16C: mov     edi, [esp+24h+arg_8]
0x84C170: mov     [edi+4], ebp
0x84C173: jz      short loc_84C185
0x84C175: add     ebp, 4
0x84C178: push    ebp; lpAddend
0x84C179: call    dword ptr ds:0A28078h
0x84C17F: jmp     short loc_84C185
0x84C181: mov     edi, [esp+24h+arg_8]
0x84C185: test    edi, edi
0x84C187: jz      short loc_84C1A3
0x84C189: cmp     byte ptr ds:0B42CDDh, 0
0x84C190: jz      short loc_84C1A3
0x84C192: mov     edx, [esi]
0x84C194: mov     eax, [edx+78h]
0x84C197: mov     ecx, esi
0x84C199: call    eax
0x84C19B: push    eax
0x84C19C: mov     ecx, edi
0x84C19E: call    sub_7715E0
0x84C1A3: mov     edi, 1
0x84C1A8: add     [ebx+60h], edi
0x84C1AB: mov     [esp+24h+arg_8], ebx
0x84C1AF: mov     esi, [esp+24h+var_10]
0x84C1B3: mov     edx, [esi+38h]
0x84C1B6: lea     ecx, [esp+24h+arg_8]
0x84C1BA: push    ecx
0x84C1BB: push    edx
0x84C1BC: lea     ecx, [esi+40h]
0x84C1BF: mov     [esp+2Ch+var_4], 0
0x84C1C7: call    sub_76CE40
0x84C1CC: or      eax, 0FFFFFFFFh
0x84C1CF: add     [ebx+60h], eax
0x84C1D2: mov     [esp+24h+var_4], eax
0x84C1D6: jnz     short loc_84C1DF
0x84C1D8: mov     ecx, ebx
0x84C1DA: call    sub_7604D0
0x84C1DF: add     [esi+38h], edi
0x84C1E2: mov     ecx, dword ptr [esp+24h+var_C]
0x84C1E6: mov     large fs:0, ecx
0x84C1ED: pop     ecx
0x84C1EE: pop     edi
0x84C1EF: pop     esi
0x84C1F0: pop     ebp
0x84C1F1: pop     ebx
0x84C1F2: add     esp, 10h
0x84C1F5: retn    10h
