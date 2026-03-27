0x7BFD90: push    ebx
0x7BFD91: push    ebp
0x7BFD92: push    esi
0x7BFD93: mov     esi, ecx
0x7BFD95: mov     ebp, [esi+9Ch]
0x7BFD9B: push    edi
0x7BFD9C: mov     edi, [esi+0D4h]
0x7BFDA2: mov     ebx, [edi+58h]
0x7BFDA5: add     edi, 58h ; 'X'
0x7BFDA8: cmp     ebx, ebp
0x7BFDAA: jz      short loc_7BFDDC
0x7BFDAC: test    ebx, ebx
0x7BFDAE: jz      short loc_7BFDCC
0x7BFDB0: lea     eax, [ebx+4]
0x7BFDB3: push    eax; lpAddend
0x7BFDB4: call    dword ptr ds:0A2807Ch
0x7BFDBA: test    eax, eax
0x7BFDBC: jnz     short loc_7BFDCC
0x7BFDBE: test    ebx, ebx
0x7BFDC0: jz      short loc_7BFDCC
0x7BFDC2: mov     edx, [ebx]
0x7BFDC4: mov     eax, [edx]
0x7BFDC6: push    1
0x7BFDC8: mov     ecx, ebx
0x7BFDCA: call    eax
0x7BFDCC: test    ebp, ebp
0x7BFDCE: mov     [edi], ebp
0x7BFDD0: jz      short loc_7BFDDC
0x7BFDD2: add     ebp, 4
0x7BFDD5: push    ebp; lpAddend
0x7BFDD6: call    dword ptr ds:0A28078h
0x7BFDDC: mov     ebx, [esi+0D4h]
0x7BFDE2: mov     ebp, [esi+0BCh]
0x7BFDE8: mov     edi, [ebx+44h]
0x7BFDEB: add     ebx, 44h ; 'D'
0x7BFDEE: cmp     edi, ebp
0x7BFDF0: jz      short loc_7BFE22
0x7BFDF2: test    edi, edi
0x7BFDF4: jz      short loc_7BFE12
0x7BFDF6: lea     ecx, [edi+4]
0x7BFDF9: push    ecx; lpAddend
0x7BFDFA: call    dword ptr ds:0A2807Ch
0x7BFE00: test    eax, eax
0x7BFE02: jnz     short loc_7BFE12
0x7BFE04: test    edi, edi
0x7BFE06: jz      short loc_7BFE12
0x7BFE08: mov     edx, [edi]
0x7BFE0A: mov     eax, [edx]
0x7BFE0C: push    1
0x7BFE0E: mov     ecx, edi
0x7BFE10: call    eax
0x7BFE12: test    ebp, ebp
0x7BFE14: mov     [ebx], ebp
0x7BFE16: jz      short loc_7BFE22
0x7BFE18: add     ebp, 4
0x7BFE1B: push    ebp; lpAddend
0x7BFE1C: call    dword ptr ds:0A28078h
0x7BFE22: mov     ebx, [esi+0D8h]
0x7BFE28: mov     ebp, [esi+98h]
0x7BFE2E: mov     edi, [ebx+58h]
0x7BFE31: add     ebx, 58h ; 'X'
0x7BFE34: cmp     edi, ebp
0x7BFE36: jz      short loc_7BFE68
0x7BFE38: test    edi, edi
0x7BFE3A: jz      short loc_7BFE58
0x7BFE3C: lea     ecx, [edi+4]
0x7BFE3F: push    ecx; lpAddend
0x7BFE40: call    dword ptr ds:0A2807Ch
0x7BFE46: test    eax, eax
0x7BFE48: jnz     short loc_7BFE58
0x7BFE4A: test    edi, edi
0x7BFE4C: jz      short loc_7BFE58
0x7BFE4E: mov     edx, [edi]
0x7BFE50: mov     eax, [edx]
0x7BFE52: push    1
0x7BFE54: mov     ecx, edi
0x7BFE56: call    eax
0x7BFE58: test    ebp, ebp
0x7BFE5A: mov     [ebx], ebp
0x7BFE5C: jz      short loc_7BFE68
0x7BFE5E: add     ebp, 4
0x7BFE61: push    ebp; lpAddend
0x7BFE62: call    dword ptr ds:0A28078h
0x7BFE68: mov     ebx, [esi+0D8h]
0x7BFE6E: mov     ebp, [esi+0B8h]
0x7BFE74: mov     edi, [ebx+44h]
0x7BFE77: add     ebx, 44h ; 'D'
0x7BFE7A: cmp     edi, ebp
0x7BFE7C: jz      short loc_7BFEAE
0x7BFE7E: test    edi, edi
0x7BFE80: jz      short loc_7BFE9E
0x7BFE82: lea     ecx, [edi+4]
0x7BFE85: push    ecx; lpAddend
0x7BFE86: call    dword ptr ds:0A2807Ch
0x7BFE8C: test    eax, eax
0x7BFE8E: jnz     short loc_7BFE9E
0x7BFE90: test    edi, edi
0x7BFE92: jz      short loc_7BFE9E
0x7BFE94: mov     edx, [edi]
0x7BFE96: mov     eax, [edx]
0x7BFE98: push    1
0x7BFE9A: mov     ecx, edi
0x7BFE9C: call    eax
0x7BFE9E: test    ebp, ebp
0x7BFEA0: mov     [ebx], ebp
0x7BFEA2: jz      short loc_7BFEAE
0x7BFEA4: add     ebp, 4
0x7BFEA7: push    ebp; lpAddend
0x7BFEA8: call    dword ptr ds:0A28078h
0x7BFEAE: mov     ebx, [esi+0DCh]
0x7BFEB4: mov     ebp, [esi+98h]
0x7BFEBA: mov     edi, [ebx+58h]
0x7BFEBD: add     ebx, 58h ; 'X'
0x7BFEC0: cmp     edi, ebp
0x7BFEC2: jz      short loc_7BFEF4
0x7BFEC4: test    edi, edi
0x7BFEC6: jz      short loc_7BFEE4
0x7BFEC8: lea     ecx, [edi+4]
0x7BFECB: push    ecx; lpAddend
0x7BFECC: call    dword ptr ds:0A2807Ch
0x7BFED2: test    eax, eax
0x7BFED4: jnz     short loc_7BFEE4
0x7BFED6: test    edi, edi
0x7BFED8: jz      short loc_7BFEE4
0x7BFEDA: mov     edx, [edi]
0x7BFEDC: mov     eax, [edx]
0x7BFEDE: push    1
0x7BFEE0: mov     ecx, edi
0x7BFEE2: call    eax
0x7BFEE4: test    ebp, ebp
0x7BFEE6: mov     [ebx], ebp
0x7BFEE8: jz      short loc_7BFEF4
0x7BFEEA: add     ebp, 4
0x7BFEED: push    ebp; lpAddend
0x7BFEEE: call    dword ptr ds:0A28078h
0x7BFEF4: mov     ebx, [esi+0DCh]
0x7BFEFA: mov     ebp, [esi+0B8h]
0x7BFF00: mov     edi, [ebx+44h]
0x7BFF03: add     ebx, 44h ; 'D'
0x7BFF06: cmp     edi, ebp
0x7BFF08: jz      short loc_7BFF3A
0x7BFF0A: test    edi, edi
0x7BFF0C: jz      short loc_7BFF2A
0x7BFF0E: lea     ecx, [edi+4]
0x7BFF11: push    ecx; lpAddend
0x7BFF12: call    dword ptr ds:0A2807Ch
0x7BFF18: test    eax, eax
0x7BFF1A: jnz     short loc_7BFF2A
0x7BFF1C: test    edi, edi
0x7BFF1E: jz      short loc_7BFF2A
0x7BFF20: mov     edx, [edi]
0x7BFF22: mov     eax, [edx]
0x7BFF24: push    1
0x7BFF26: mov     ecx, edi
0x7BFF28: call    eax
0x7BFF2A: test    ebp, ebp
0x7BFF2C: mov     [ebx], ebp
0x7BFF2E: jz      short loc_7BFF3A
0x7BFF30: add     ebp, 4
0x7BFF33: push    ebp; lpAddend
0x7BFF34: call    dword ptr ds:0A28078h
0x7BFF3A: mov     ebx, [esi+0E0h]
0x7BFF40: mov     ebp, [esi+90h]
0x7BFF46: mov     edi, [ebx+58h]
0x7BFF49: add     ebx, 58h ; 'X'
0x7BFF4C: cmp     edi, ebp
0x7BFF4E: jz      short loc_7BFF80
0x7BFF50: test    edi, edi
0x7BFF52: jz      short loc_7BFF70
0x7BFF54: lea     ecx, [edi+4]
0x7BFF57: push    ecx; lpAddend
0x7BFF58: call    dword ptr ds:0A2807Ch
0x7BFF5E: test    eax, eax
0x7BFF60: jnz     short loc_7BFF70
0x7BFF62: test    edi, edi
0x7BFF64: jz      short loc_7BFF70
0x7BFF66: mov     edx, [edi]
0x7BFF68: mov     eax, [edx]
0x7BFF6A: push    1
0x7BFF6C: mov     ecx, edi
0x7BFF6E: call    eax
0x7BFF70: test    ebp, ebp
0x7BFF72: mov     [ebx], ebp
0x7BFF74: jz      short loc_7BFF80
0x7BFF76: add     ebp, 4
0x7BFF79: push    ebp; lpAddend
0x7BFF7A: call    dword ptr ds:0A28078h
0x7BFF80: mov     ebx, [esi+0E0h]
0x7BFF86: mov     ebp, [esi+0B0h]
0x7BFF8C: mov     edi, [ebx+44h]
0x7BFF8F: add     ebx, 44h ; 'D'
0x7BFF92: cmp     edi, ebp
0x7BFF94: jz      short loc_7BFFC6
0x7BFF96: test    edi, edi
0x7BFF98: jz      short loc_7BFFB6
0x7BFF9A: lea     ecx, [edi+4]
0x7BFF9D: push    ecx; lpAddend
0x7BFF9E: call    dword ptr ds:0A2807Ch
0x7BFFA4: test    eax, eax
0x7BFFA6: jnz     short loc_7BFFB6
0x7BFFA8: test    edi, edi
0x7BFFAA: jz      short loc_7BFFB6
0x7BFFAC: mov     edx, [edi]
0x7BFFAE: mov     eax, [edx]
0x7BFFB0: push    1
0x7BFFB2: mov     ecx, edi
0x7BFFB4: call    eax
0x7BFFB6: test    ebp, ebp
0x7BFFB8: mov     [ebx], ebp
0x7BFFBA: jz      short loc_7BFFC6
0x7BFFBC: add     ebp, 4
0x7BFFBF: push    ebp; lpAddend
0x7BFFC0: call    dword ptr ds:0A28078h
0x7BFFC6: mov     ecx, [esi+0F0h]; this
0x7BFFCC: test    ecx, ecx
0x7BFFCE: jz      short loc_7BFFEE
0x7BFFD0: mov     edx, [esi+9Ch]
0x7BFFD6: push    edx; a2
0x7BFFD7: call    sub_7AECB0
0x7BFFDC: mov     eax, [esi+0BCh]
0x7BFFE2: mov     ecx, [esi+0F0h]; this
0x7BFFE8: push    eax; a2
0x7BFFE9: call    sub_7AEC60
0x7BFFEE: mov     ebx, [esi+0F4h]
0x7BFFF4: mov     ebp, [esi+9Ch]
0x7BFFFA: mov     edi, [ebx+58h]
0x7BFFFD: add     ebx, 58h ; 'X'
0x7C0000: cmp     edi, ebp
0x7C0002: jz      short loc_7C0034
0x7C0004: test    edi, edi
0x7C0006: jz      short loc_7C0024
0x7C0008: lea     ecx, [edi+4]
0x7C000B: push    ecx; lpAddend
0x7C000C: call    dword ptr ds:0A2807Ch
0x7C0012: test    eax, eax
0x7C0014: jnz     short loc_7C0024
0x7C0016: test    edi, edi
0x7C0018: jz      short loc_7C0024
0x7C001A: mov     edx, [edi]
0x7C001C: mov     eax, [edx]
0x7C001E: push    1
0x7C0020: mov     ecx, edi
0x7C0022: call    eax
0x7C0024: test    ebp, ebp
0x7C0026: mov     [ebx], ebp
0x7C0028: jz      short loc_7C0034
0x7C002A: add     ebp, 4
0x7C002D: push    ebp; lpAddend
0x7C002E: call    dword ptr ds:0A28078h
0x7C0034: mov     ebx, [esi+0F4h]
0x7C003A: mov     ebp, [esi+0BCh]
0x7C0040: mov     edi, [ebx+44h]
0x7C0043: add     ebx, 44h ; 'D'
0x7C0046: cmp     edi, ebp
0x7C0048: jz      short loc_7C007A
0x7C004A: test    edi, edi
0x7C004C: jz      short loc_7C006A
0x7C004E: lea     ecx, [edi+4]
0x7C0051: push    ecx; lpAddend
0x7C0052: call    dword ptr ds:0A2807Ch
0x7C0058: test    eax, eax
0x7C005A: jnz     short loc_7C006A
0x7C005C: test    edi, edi
0x7C005E: jz      short loc_7C006A
0x7C0060: mov     edx, [edi]
0x7C0062: mov     eax, [edx]
0x7C0064: push    1
0x7C0066: mov     ecx, edi
0x7C0068: call    eax
0x7C006A: test    ebp, ebp
0x7C006C: mov     [ebx], ebp
0x7C006E: jz      short loc_7C007A
0x7C0070: add     ebp, 4
0x7C0073: push    ebp; lpAddend
0x7C0074: call    dword ptr ds:0A28078h
0x7C007A: mov     ebx, [esi+0F8h]
0x7C0080: mov     ebp, [esi+0A0h]
0x7C0086: mov     edi, [ebx+58h]
0x7C0089: add     ebx, 58h ; 'X'
0x7C008C: cmp     edi, ebp
0x7C008E: jz      short loc_7C00C0
0x7C0090: test    edi, edi
0x7C0092: jz      short loc_7C00B0
0x7C0094: lea     ecx, [edi+4]
0x7C0097: push    ecx; lpAddend
0x7C0098: call    dword ptr ds:0A2807Ch
0x7C009E: test    eax, eax
0x7C00A0: jnz     short loc_7C00B0
0x7C00A2: test    edi, edi
0x7C00A4: jz      short loc_7C00B0
0x7C00A6: mov     edx, [edi]
0x7C00A8: mov     eax, [edx]
0x7C00AA: push    1
0x7C00AC: mov     ecx, edi
0x7C00AE: call    eax
0x7C00B0: test    ebp, ebp
0x7C00B2: mov     [ebx], ebp
0x7C00B4: jz      short loc_7C00C0
0x7C00B6: add     ebp, 4
0x7C00B9: push    ebp; lpAddend
0x7C00BA: call    dword ptr ds:0A28078h
0x7C00C0: mov     ebx, [esi+0F8h]
0x7C00C6: mov     ebp, [esi+0C0h]
0x7C00CC: mov     edi, [ebx+44h]
0x7C00CF: add     ebx, 44h ; 'D'
0x7C00D2: cmp     edi, ebp
0x7C00D4: jz      short loc_7C0106
0x7C00D6: test    edi, edi
0x7C00D8: jz      short loc_7C00F6
0x7C00DA: lea     ecx, [edi+4]
0x7C00DD: push    ecx; lpAddend
0x7C00DE: call    dword ptr ds:0A2807Ch
0x7C00E4: test    eax, eax
0x7C00E6: jnz     short loc_7C00F6
0x7C00E8: test    edi, edi
0x7C00EA: jz      short loc_7C00F6
0x7C00EC: mov     edx, [edi]
0x7C00EE: mov     eax, [edx]
0x7C00F0: push    1
0x7C00F2: mov     ecx, edi
0x7C00F4: call    eax
0x7C00F6: test    ebp, ebp
0x7C00F8: mov     [ebx], ebp
0x7C00FA: jz      short loc_7C0106
0x7C00FC: add     ebp, 4
0x7C00FF: push    ebp; lpAddend
0x7C0100: call    dword ptr ds:0A28078h
0x7C0106: mov     ebx, [esi+0FCh]
0x7C010C: mov     ebp, [esi+0A4h]
0x7C0112: mov     edi, [ebx+58h]
0x7C0115: add     ebx, 58h ; 'X'
0x7C0118: cmp     edi, ebp
0x7C011A: jz      short loc_7C014C
0x7C011C: test    edi, edi
0x7C011E: jz      short loc_7C013C
0x7C0120: lea     ecx, [edi+4]
0x7C0123: push    ecx; lpAddend
0x7C0124: call    dword ptr ds:0A2807Ch
0x7C012A: test    eax, eax
0x7C012C: jnz     short loc_7C013C
0x7C012E: test    edi, edi
0x7C0130: jz      short loc_7C013C
0x7C0132: mov     edx, [edi]
0x7C0134: mov     eax, [edx]
0x7C0136: push    1
0x7C0138: mov     ecx, edi
0x7C013A: call    eax
0x7C013C: test    ebp, ebp
0x7C013E: mov     [ebx], ebp
0x7C0140: jz      short loc_7C014C
0x7C0142: add     ebp, 4
0x7C0145: push    ebp; lpAddend
0x7C0146: call    dword ptr ds:0A28078h
0x7C014C: mov     ebx, [esi+0FCh]
0x7C0152: mov     ebp, [esi+0C4h]
0x7C0158: mov     edi, [ebx+44h]
0x7C015B: add     ebx, 44h ; 'D'
0x7C015E: cmp     edi, ebp
0x7C0160: jz      short loc_7C0192
0x7C0162: test    edi, edi
0x7C0164: jz      short loc_7C0182
0x7C0166: lea     ecx, [edi+4]
0x7C0169: push    ecx; lpAddend
0x7C016A: call    dword ptr ds:0A2807Ch
0x7C0170: test    eax, eax
0x7C0172: jnz     short loc_7C0182
0x7C0174: test    edi, edi
0x7C0176: jz      short loc_7C0182
0x7C0178: mov     edx, [edi]
0x7C017A: mov     eax, [edx]
0x7C017C: push    1
0x7C017E: mov     ecx, edi
0x7C0180: call    eax
0x7C0182: test    ebp, ebp
0x7C0184: mov     [ebx], ebp
0x7C0186: jz      short loc_7C0192
0x7C0188: add     ebp, 4
0x7C018B: push    ebp; lpAddend
0x7C018C: call    dword ptr ds:0A28078h
0x7C0192: mov     ebx, [esi+100h]
0x7C0198: mov     ebp, [esi+0A8h]
0x7C019E: mov     edi, [ebx+58h]
0x7C01A1: add     ebx, 58h ; 'X'
0x7C01A4: cmp     edi, ebp
0x7C01A6: jz      short loc_7C01D8
0x7C01A8: test    edi, edi
0x7C01AA: jz      short loc_7C01C8
0x7C01AC: lea     ecx, [edi+4]
0x7C01AF: push    ecx; lpAddend
0x7C01B0: call    dword ptr ds:0A2807Ch
0x7C01B6: test    eax, eax
0x7C01B8: jnz     short loc_7C01C8
0x7C01BA: test    edi, edi
0x7C01BC: jz      short loc_7C01C8
0x7C01BE: mov     edx, [edi]
0x7C01C0: mov     eax, [edx]
0x7C01C2: push    1
0x7C01C4: mov     ecx, edi
0x7C01C6: call    eax
0x7C01C8: test    ebp, ebp
0x7C01CA: mov     [ebx], ebp
0x7C01CC: jz      short loc_7C01D8
0x7C01CE: add     ebp, 4
0x7C01D1: push    ebp; lpAddend
0x7C01D2: call    dword ptr ds:0A28078h
0x7C01D8: mov     ebx, [esi+100h]
0x7C01DE: mov     ebp, [esi+0C8h]
0x7C01E4: mov     edi, [ebx+44h]
0x7C01E7: add     ebx, 44h ; 'D'
0x7C01EA: cmp     edi, ebp
0x7C01EC: jz      short loc_7C021E
0x7C01EE: test    edi, edi
0x7C01F0: jz      short loc_7C020E
0x7C01F2: lea     ecx, [edi+4]
0x7C01F5: push    ecx; lpAddend
0x7C01F6: call    dword ptr ds:0A2807Ch
0x7C01FC: test    eax, eax
0x7C01FE: jnz     short loc_7C020E
0x7C0200: test    edi, edi
0x7C0202: jz      short loc_7C020E
0x7C0204: mov     edx, [edi]
0x7C0206: mov     eax, [edx]
0x7C0208: push    1
0x7C020A: mov     ecx, edi
0x7C020C: call    eax
0x7C020E: test    ebp, ebp
0x7C0210: mov     [ebx], ebp
0x7C0212: jz      short loc_7C021E
0x7C0214: add     ebp, 4
0x7C0217: push    ebp; lpAddend
0x7C0218: call    dword ptr ds:0A28078h
0x7C021E: mov     ebx, [esi+104h]
0x7C0224: mov     ebp, [esi+0ACh]
0x7C022A: mov     edi, [ebx+58h]
0x7C022D: add     ebx, 58h ; 'X'
0x7C0230: cmp     edi, ebp
0x7C0232: jz      short loc_7C0264
0x7C0234: test    edi, edi
0x7C0236: jz      short loc_7C0254
0x7C0238: lea     ecx, [edi+4]
0x7C023B: push    ecx; lpAddend
0x7C023C: call    dword ptr ds:0A2807Ch
0x7C0242: test    eax, eax
0x7C0244: jnz     short loc_7C0254
0x7C0246: test    edi, edi
0x7C0248: jz      short loc_7C0254
0x7C024A: mov     edx, [edi]
0x7C024C: mov     eax, [edx]
0x7C024E: push    1
0x7C0250: mov     ecx, edi
0x7C0252: call    eax
0x7C0254: test    ebp, ebp
0x7C0256: mov     [ebx], ebp
0x7C0258: jz      short loc_7C0264
0x7C025A: add     ebp, 4
0x7C025D: push    ebp; lpAddend
0x7C025E: call    dword ptr ds:0A28078h
0x7C0264: mov     ebx, [esi+0CCh]
0x7C026A: mov     esi, [esi+104h]
0x7C0270: mov     edi, [esi+44h]
0x7C0273: add     esi, 44h ; 'D'
0x7C0276: cmp     edi, ebx
0x7C0278: jz      short loc_7C02AA
0x7C027A: test    edi, edi
0x7C027C: jz      short loc_7C029A
0x7C027E: lea     ecx, [edi+4]
0x7C0281: push    ecx; lpAddend
0x7C0282: call    dword ptr ds:0A2807Ch
0x7C0288: test    eax, eax
0x7C028A: jnz     short loc_7C029A
0x7C028C: test    edi, edi
0x7C028E: jz      short loc_7C029A
0x7C0290: mov     edx, [edi]
0x7C0292: mov     eax, [edx]
0x7C0294: push    1
0x7C0296: mov     ecx, edi
0x7C0298: call    eax
0x7C029A: test    ebx, ebx
0x7C029C: mov     [esi], ebx
0x7C029E: jz      short loc_7C02AA
0x7C02A0: add     ebx, 4
0x7C02A3: push    ebx; lpAddend
0x7C02A4: call    dword ptr ds:0A28078h
0x7C02AA: pop     edi
0x7C02AB: pop     esi
0x7C02AC: pop     ebp
0x7C02AD: pop     ebx
0x7C02AE: retn
