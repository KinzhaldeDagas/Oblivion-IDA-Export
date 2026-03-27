0x7977D0: push    0FFFFFFFFh
0x7977D2: push    offset SEH_7977D0
0x7977D7: mov     eax, large fs:0
0x7977DD: push    eax
0x7977DE: sub     esp, 60h
0x7977E1: push    ebx
0x7977E2: push    ebp
0x7977E3: push    esi
0x7977E4: push    edi
0x7977E5: mov     eax, ds:0B30AACh
0x7977EA: xor     eax, esp
0x7977EC: push    eax; MaxCount
0x7977ED: lea     eax, [esp+80h+var_C]
0x7977F1: mov     large fs:0, eax
0x7977F7: mov     esi, ecx
0x7977F9: mov     eax, [esi+6Ch]
0x7977FC: xor     edi, edi
0x7977FE: cmp     eax, edi
0x797800: jnz     short loc_797806
0x797802: xor     ecx, ecx
0x797804: jmp     short loc_79780E
0x797806: mov     ecx, [esi+70h]
0x797809: sub     ecx, eax
0x79780B: sar     ecx, 2
0x79780E: mov     eax, 0AAAAAAABh
0x797813: mul     ecx
0x797815: shr     edx, 1
0x797817: test    dx, dx
0x79781A: jbe     loc_798072
0x797820: movzx   eax, word ptr [esi+20h]
0x797824: push    eax; char *
0x797825: lea     ecx, [esp+84h+var_2C]
0x797829: call    sub_7974F0
0x79782E: movzx   ecx, word ptr [esi+20h]
0x797832: push    ecx; char *
0x797833: lea     ecx, [esp+84h+var_3C]
0x797837: mov     [esp+84h+var_4], edi
0x79783E: call    sub_797570
0x797843: movzx   eax, word ptr [esi+20h]
0x797847: lea     edx, [esp+80h+var_54]
0x79784B: push    edx
0x79784C: push    eax
0x79784D: lea     ecx, [esp+88h+var_1C]
0x797851: mov     byte ptr [esp+88h+var_4], 1
0x797859: mov     [esp+88h+var_54], edi
0x79785D: call    sub_7956B0
0x797862: cmp     [esi+20h], di
0x797866: mov     byte ptr [esp+80h+var_4], 2
0x79786B: mov     [esp+80h+var_68], edi
0x79786F: jbe     loc_797FE1
0x797875: xor     ebp, ebp
0x797877: mov     [esp+80h+var_6C], ebp
0x79787B: jmp     short loc_797880
0x79787D: align 10h
0x797880: mov     ebx, [esp+80h+var_68]
0x797884: cmp     bx, 0FFFFh
0x797888: jle     loc_797911
0x79788E: mov     ecx, [esi+4Ch]
0x797891: test    ecx, ecx
0x797893: movsx   edi, bx
0x797896: jz      short loc_7978A4
0x797898: mov     eax, [esi+50h]
0x79789B: sub     eax, ecx
0x79789D: sar     eax, 4
0x7978A0: cmp     edi, eax
0x7978A2: jb      short loc_7978A9
0x7978A4: call    __invalid_parameter_noinfo
0x7978A9: shl     edi, 4
0x7978AC: add     edi, [esi+4Ch]
0x7978AF: mov     eax, [edi+4]
0x7978B2: test    eax, eax
0x7978B4: jz      short loc_797911
0x7978B6: mov     ecx, [edi+8]
0x7978B9: sub     ecx, eax
0x7978BB: sar     ecx, 2
0x7978BE: cmp     bp, cx
0x7978C1: jnb     short loc_797911
0x7978C3: mov     ecx, [esi+3Ch]
0x7978C6: test    ecx, ecx
0x7978C8: movzx   edi, bx
0x7978CB: jz      short loc_7978D9
0x7978CD: mov     eax, [esi+40h]
0x7978D0: sub     eax, ecx
0x7978D2: sar     eax, 4
0x7978D5: cmp     edi, eax
0x7978D7: jb      short loc_7978DE
0x7978D9: call    __invalid_parameter_noinfo
0x7978DE: shl     edi, 4
0x7978E1: add     edi, [esi+3Ch]
0x7978E4: movzx   ebx, bp
0x7978E7: mov     ecx, [edi+4]
0x7978EA: test    ecx, ecx
0x7978EC: jz      short loc_7978F9
0x7978EE: mov     eax, [edi+8]
0x7978F1: sub     eax, ecx
0x7978F3: sar     eax, 1
0x7978F5: cmp     ebx, eax
0x7978F7: jb      short loc_7978FE
0x7978F9: call    __invalid_parameter_noinfo
0x7978FE: mov     edx, [edi+4]
0x797901: movzx   eax, word ptr [edx+ebx*2]
0x797905: add     [esp+80h+var_6C], eax
0x797909: add     ebp, 1
0x79790C: jmp     loc_797880
0x797911: cmp     [esp+80h+var_6C], 0
0x797916: jle     loc_797EBA
0x79791C: cmp     byte ptr [esp+80h+arg_0], 0
0x797924: jz      loc_7979F0
0x79792A: xor     ebp, ebp
0x79792C: lea     esp, [esp+0]
0x797930: cmp     bx, 0FFFFh
0x797934: jle     short loc_79796B
0x797936: mov     ecx, [esi+4Ch]
0x797939: test    ecx, ecx
0x79793B: movsx   edi, bx
0x79793E: jz      short loc_79794C
0x797940: mov     eax, [esi+50h]
0x797943: sub     eax, ecx
0x797945: sar     eax, 4
0x797948: cmp     edi, eax
0x79794A: jb      short loc_797951
0x79794C: call    __invalid_parameter_noinfo
0x797951: shl     edi, 4
0x797954: add     edi, [esi+4Ch]
0x797957: mov     eax, [edi+4]
0x79795A: test    eax, eax
0x79795C: jz      short loc_79796B
0x79795E: mov     ecx, [edi+8]
0x797961: sub     ecx, eax
0x797963: sar     ecx, 2
0x797966: movzx   eax, cx
0x797969: jmp     short loc_79796D
0x79796B: xor     eax, eax
0x79796D: movzx   edx, ax
0x797970: movzx   ebx, bp
0x797973: sub     edx, 1
0x797976: cmp     ebx, edx
0x797978: jge     loc_797A42
0x79797E: mov     ecx, [esi+3Ch]
0x797981: test    ecx, ecx
0x797983: movzx   edi, word ptr [esp+80h+var_68]
0x797988: jz      short loc_797996
0x79798A: mov     eax, [esi+40h]
0x79798D: sub     eax, ecx
0x79798F: sar     eax, 4
0x797992: cmp     edi, eax
0x797994: jb      short loc_79799B
0x797996: call    __invalid_parameter_noinfo
0x79799B: shl     edi, 4
0x79799E: add     edi, [esi+3Ch]
0x7979A1: mov     ecx, [edi+4]
0x7979A4: test    ecx, ecx
0x7979A6: jz      short loc_7979B3
0x7979A8: mov     eax, [edi+8]
0x7979AB: sub     eax, ecx
0x7979AD: sar     eax, 1
0x7979AF: cmp     ebx, eax
0x7979B1: jb      short loc_7979B8
0x7979B3: call    __invalid_parameter_noinfo
0x7979B8: mov     eax, [edi+4]
0x7979BB: movzx   ecx, word ptr [eax+ebx*2]
0x7979BF: and     ecx, 80000001h
0x7979C5: jns     short loc_7979CC
0x7979C7: dec     ecx
0x7979C8: or      ecx, 0FFFFFFFEh
0x7979CB: inc     ecx
0x7979CC: jnz     short loc_7979DF
0x7979CE: add     [esp+80h+var_6C], 2
0x7979D3: mov     ebx, [esp+80h+var_68]
0x7979D7: add     ebp, 1
0x7979DA: jmp     loc_797930
0x7979DF: add     [esp+80h+var_6C], 3
0x7979E4: mov     ebx, [esp+80h+var_68]
0x7979E8: add     ebp, 1
0x7979EB: jmp     loc_797930
0x7979F0: cmp     bx, 0FFFFh
0x7979F4: jle     short loc_797A2B
0x7979F6: mov     ecx, [esi+4Ch]
0x7979F9: test    ecx, ecx
0x7979FB: movsx   edi, bx
0x7979FE: jz      short loc_797A0C
0x797A00: mov     eax, [esi+50h]
0x797A03: sub     eax, ecx
0x797A05: sar     eax, 4
0x797A08: cmp     edi, eax
0x797A0A: jb      short loc_797A11
0x797A0C: call    __invalid_parameter_noinfo
0x797A11: shl     edi, 4
0x797A14: add     edi, [esi+4Ch]
0x797A17: mov     eax, [edi+4]
0x797A1A: test    eax, eax
0x797A1C: jz      short loc_797A2B
0x797A1E: mov     edx, [edi+8]
0x797A21: sub     edx, eax
0x797A23: sar     edx, 2
0x797A26: movzx   eax, dx
0x797A29: jmp     short loc_797A2D
0x797A2B: xor     eax, eax
0x797A2D: movzx   eax, ax
0x797A30: test    eax, eax
0x797A32: jle     short loc_797A37
0x797A34: sub     eax, 1
0x797A37: mov     ecx, [esp+80h+var_6C]
0x797A3B: lea     edx, [ecx+eax*2]
0x797A3E: mov     [esp+80h+var_6C], edx
0x797A42: mov     eax, [esp+80h+var_6C]
0x797A46: xor     ecx, ecx
0x797A48: mov     edx, 2
0x797A4D: mul     edx
0x797A4F: seto    cl
0x797A52: neg     ecx
0x797A54: or      ecx, eax
0x797A56: push    ecx; Size
0x797A57: call    FormHeapAlloc
0x797A5C: add     esp, 4
0x797A5F: mov     [esp+80h+var_54], eax
0x797A63: mov     [esp+80h+Dst], eax
0x797A67: mov     [esp+80h+var_5C], 0
0x797A6F: mov     ebp, [esp+80h+var_68]
0x797A73: cmp     bp, 0FFFFh
0x797A77: jle     loc_797D8A
0x797A7D: mov     ecx, [esi+4Ch]
0x797A80: test    ecx, ecx
0x797A82: movsx   edi, bp
0x797A85: mov     [esp+80h+var_58], edi
0x797A89: jz      short loc_797A97
0x797A8B: mov     eax, [esi+50h]
0x797A8E: sub     eax, ecx
0x797A90: sar     eax, 4
0x797A93: cmp     edi, eax
0x797A95: jb      short loc_797A9C
0x797A97: call    __invalid_parameter_noinfo
0x797A9C: mov     eax, edi
0x797A9E: shl     eax, 4
0x797AA1: add     eax, [esi+4Ch]
0x797AA4: mov     ecx, [eax+4]
0x797AA7: test    ecx, ecx
0x797AA9: jz      loc_797D8A
0x797AAF: mov     eax, [eax+8]
0x797AB2: sub     eax, ecx
0x797AB4: sar     eax, 2
0x797AB7: cmp     word ptr [esp+80h+var_5C], ax
0x797ABC: jnb     loc_797D8A
0x797AC2: mov     ecx, [esi+3Ch]
0x797AC5: test    ecx, ecx
0x797AC7: movzx   edi, bp
0x797ACA: jz      short loc_797AD8
0x797ACC: mov     eax, [esi+40h]
0x797ACF: sub     eax, ecx
0x797AD1: sar     eax, 4
0x797AD4: cmp     edi, eax
0x797AD6: jb      short loc_797ADD
0x797AD8: call    __invalid_parameter_noinfo
0x797ADD: movzx   ebp, word ptr [esp+80h+var_5C]
0x797AE2: mov     ebx, edi
0x797AE4: shl     ebx, 4
0x797AE7: add     ebx, [esi+3Ch]
0x797AEA: mov     ecx, [ebx+4]
0x797AED: test    ecx, ecx
0x797AEF: jz      short loc_797AFC
0x797AF1: mov     eax, [ebx+8]
0x797AF4: sub     eax, ecx
0x797AF6: sar     eax, 1
0x797AF8: cmp     ebp, eax
0x797AFA: jb      short loc_797B01
0x797AFC: call    __invalid_parameter_noinfo
0x797B01: mov     ecx, [ebx+4]
0x797B04: movzx   edx, word ptr [ecx+ebp*2]
0x797B08: mov     ecx, [esi+4Ch]
0x797B0B: test    ecx, ecx
0x797B0D: mov     [esp+80h+var_64], edx
0x797B11: jz      short loc_797B1F
0x797B13: mov     eax, [esi+50h]
0x797B16: sub     eax, ecx
0x797B18: sar     eax, 4
0x797B1B: cmp     edi, eax
0x797B1D: jb      short loc_797B24
0x797B1F: call    __invalid_parameter_noinfo
0x797B24: mov     ebx, edi
0x797B26: shl     ebx, 4
0x797B29: add     ebx, [esi+4Ch]
0x797B2C: mov     ecx, [ebx+4]
0x797B2F: test    ecx, ecx
0x797B31: jz      short loc_797B3F
0x797B33: mov     eax, [ebx+8]
0x797B36: sub     eax, ecx
0x797B38: sar     eax, 2
0x797B3B: cmp     ebp, eax
0x797B3D: jb      short loc_797B44
0x797B3F: call    __invalid_parameter_noinfo
0x797B44: movzx   eax, word ptr [esp+80h+var_64]
0x797B49: mov     [esp+80h+var_50], eax
0x797B4D: add     eax, eax
0x797B4F: push    eax; Size
0x797B50: mov     [esp+84h+var_64], eax
0x797B54: mov     eax, [ebx+4]
0x797B57: mov     ecx, [eax+ebp*4]
0x797B5A: mov     ebx, [esp+84h+Dst]
0x797B5E: push    ecx; Src
0x797B5F: push    ebx; Dst
0x797B60: call    _memcpy
0x797B65: add     ebx, [esp+8Ch+var_64]
0x797B69: mov     eax, [esi+4Ch]
0x797B6C: add     esp, 0Ch
0x797B6F: test    eax, eax
0x797B71: mov     [esp+80h+Dst], ebx
0x797B75: jz      short loc_797B87
0x797B77: mov     ecx, [esi+50h]
0x797B7A: sub     ecx, eax
0x797B7C: mov     eax, [esp+80h+var_58]
0x797B80: sar     ecx, 4
0x797B83: cmp     eax, ecx
0x797B85: jb      short loc_797B90
0x797B87: call    __invalid_parameter_noinfo
0x797B8C: mov     eax, [esp+80h+var_58]
0x797B90: shl     eax, 4
0x797B93: add     eax, [esi+4Ch]
0x797B96: mov     ecx, [eax+4]
0x797B99: test    ecx, ecx
0x797B9B: jnz     short loc_797BA1
0x797B9D: xor     eax, eax
0x797B9F: jmp     short loc_797BAC
0x797BA1: mov     edx, [eax+8]
0x797BA4: sub     edx, ecx
0x797BA6: sar     edx, 2
0x797BA9: movzx   eax, dx
0x797BAC: movzx   eax, ax
0x797BAF: sub     eax, 1
0x797BB2: cmp     ebp, eax
0x797BB4: jge     loc_797D80
0x797BBA: cmp     byte ptr [esp+80h+arg_0], 0
0x797BC2: jz      loc_797CDF
0x797BC8: mov     ecx, [esp+80h+var_50]
0x797BCC: and     ecx, 80000001h
0x797BD2: jns     short loc_797BD9
0x797BD4: dec     ecx
0x797BD5: or      ecx, 0FFFFFFFEh
0x797BD8: inc     ecx
0x797BD9: mov     ecx, [esi+4Ch]
0x797BDC: jz      loc_797CE2
0x797BE2: test    ecx, ecx
0x797BE4: jz      short loc_797BF2
0x797BE6: mov     eax, [esi+50h]
0x797BE9: sub     eax, ecx
0x797BEB: sar     eax, 4
0x797BEE: cmp     edi, eax
0x797BF0: jb      short loc_797BF7
0x797BF2: call    __invalid_parameter_noinfo
0x797BF7: mov     eax, edi
0x797BF9: shl     eax, 4
0x797BFC: add     eax, [esi+4Ch]
0x797BFF: mov     edx, [eax+4]
0x797C02: test    edx, edx
0x797C04: mov     [esp+80h+var_50], eax
0x797C08: jz      short loc_797C16
0x797C0A: mov     ecx, [eax+8]
0x797C0D: sub     ecx, edx
0x797C0F: sar     ecx, 2
0x797C12: cmp     ebp, ecx
0x797C14: jb      short loc_797C1F
0x797C16: call    __invalid_parameter_noinfo
0x797C1B: mov     eax, [esp+80h+var_50]
0x797C1F: mov     eax, [eax+4]
0x797C22: mov     ecx, [eax+ebp*4]
0x797C25: mov     edx, [esp+80h+var_64]
0x797C29: mov     ax, [ecx+edx-2]
0x797C2E: mov     [ebx], ax
0x797C31: mov     ecx, [esi+4Ch]
0x797C34: add     ebx, 2
0x797C37: test    ecx, ecx
0x797C39: jz      short loc_797C47
0x797C3B: mov     eax, [esi+50h]
0x797C3E: sub     eax, ecx
0x797C40: sar     eax, 4
0x797C43: cmp     edi, eax
0x797C45: jb      short loc_797C4C
0x797C47: call    __invalid_parameter_noinfo
0x797C4C: mov     eax, edi
0x797C4E: shl     eax, 4
0x797C51: add     eax, [esi+4Ch]
0x797C54: mov     edx, [eax+4]
0x797C57: test    edx, edx
0x797C59: mov     [esp+80h+var_50], eax
0x797C5D: jz      short loc_797C6B
0x797C5F: mov     ecx, [eax+8]
0x797C62: sub     ecx, edx
0x797C64: sar     ecx, 2
0x797C67: cmp     ebp, ecx
0x797C69: jb      short loc_797C74
0x797C6B: call    __invalid_parameter_noinfo
0x797C70: mov     eax, [esp+80h+var_50]
0x797C74: mov     ecx, [eax+4]
0x797C77: mov     edx, [ecx+ebp*4]
0x797C7A: mov     eax, [esp+80h+var_64]
0x797C7E: mov     cx, [edx+eax-2]
0x797C83: mov     [ebx], cx
0x797C86: mov     ecx, [esi+4Ch]
0x797C89: add     ebx, 2
0x797C8C: test    ecx, ecx
0x797C8E: jz      short loc_797C9C
0x797C90: mov     eax, [esi+50h]
0x797C93: sub     eax, ecx
0x797C95: sar     eax, 4
0x797C98: cmp     edi, eax
0x797C9A: jb      short loc_797CA1
0x797C9C: call    __invalid_parameter_noinfo
0x797CA1: shl     edi, 4
0x797CA4: add     edi, [esi+4Ch]
0x797CA7: add     ebp, 1
0x797CAA: mov     ecx, [edi+4]
0x797CAD: test    ecx, ecx
0x797CAF: jz      short loc_797CBD
0x797CB1: mov     eax, [edi+8]
0x797CB4: sub     eax, ecx
0x797CB6: sar     eax, 2
0x797CB9: cmp     ebp, eax
0x797CBB: jb      short loc_797CC2
0x797CBD: call    __invalid_parameter_noinfo
0x797CC2: mov     edx, [edi+4]
0x797CC5: mov     eax, [edx+ebp*4]
0x797CC8: mov     cx, [eax]
0x797CCB: mov     [ebx], cx
0x797CCE: add     ebx, 2
0x797CD1: add     [esp+80h+var_5C], 1
0x797CD6: mov     [esp+80h+Dst], ebx
0x797CDA: jmp     loc_797A6F
0x797CDF: mov     ecx, [esi+4Ch]
0x797CE2: test    ecx, ecx
0x797CE4: jz      short loc_797CF2
0x797CE6: mov     eax, [esi+50h]
0x797CE9: sub     eax, ecx
0x797CEB: sar     eax, 4
0x797CEE: cmp     edi, eax
0x797CF0: jb      short loc_797CF7
0x797CF2: call    __invalid_parameter_noinfo
0x797CF7: mov     eax, edi
0x797CF9: shl     eax, 4
0x797CFC: add     eax, [esi+4Ch]
0x797CFF: mov     edx, [eax+4]
0x797D02: test    edx, edx
0x797D04: mov     [esp+80h+var_50], eax
0x797D08: jz      short loc_797D16
0x797D0A: mov     ecx, [eax+8]
0x797D0D: sub     ecx, edx
0x797D0F: sar     ecx, 2
0x797D12: cmp     ebp, ecx
0x797D14: jb      short loc_797D1F
0x797D16: call    __invalid_parameter_noinfo
0x797D1B: mov     eax, [esp+80h+var_50]
0x797D1F: mov     edx, [eax+4]
0x797D22: mov     ecx, [esp+80h+var_64]
0x797D26: mov     eax, [edx+ebp*4]
0x797D29: mov     dx, [eax+ecx-2]
0x797D2E: mov     [ebx], dx
0x797D31: mov     ecx, [esi+4Ch]
0x797D34: add     ebx, 2
0x797D37: test    ecx, ecx
0x797D39: jz      short loc_797D47
0x797D3B: mov     eax, [esi+50h]
0x797D3E: sub     eax, ecx
0x797D40: sar     eax, 4
0x797D43: cmp     edi, eax
0x797D45: jb      short loc_797D4C
0x797D47: call    __invalid_parameter_noinfo
0x797D4C: shl     edi, 4
0x797D4F: add     edi, [esi+4Ch]
0x797D52: add     ebp, 1
0x797D55: mov     ecx, [edi+4]
0x797D58: test    ecx, ecx
0x797D5A: jz      short loc_797D68
0x797D5C: mov     eax, [edi+8]
0x797D5F: sub     eax, ecx
0x797D61: sar     eax, 2
0x797D64: cmp     ebp, eax
0x797D66: jb      short loc_797D6D
0x797D68: call    __invalid_parameter_noinfo
0x797D6D: mov     eax, [edi+4]
0x797D70: mov     ecx, [eax+ebp*4]
0x797D73: mov     dx, [ecx]
0x797D76: mov     [ebx], dx
0x797D79: add     ebx, 2
0x797D7C: mov     [esp+80h+Dst], ebx
0x797D80: add     [esp+80h+var_5C], 1
0x797D85: jmp     loc_797A6F
0x797D8A: movzx   eax, word ptr [esp+80h+var_6C]
0x797D8F: mov     ecx, [esp+80h+var_28]
0x797D93: test    ecx, ecx
0x797D95: mov     [esp+80h+var_50], eax
0x797D99: movzx   ebx, bp
0x797D9C: jz      short loc_797DAB
0x797D9E: mov     eax, [esp+80h+var_24]
0x797DA2: sub     eax, ecx
0x797DA4: sar     eax, 4
0x797DA7: cmp     ebx, eax
0x797DA9: jb      short loc_797DB0
0x797DAB: call    __invalid_parameter_noinfo
0x797DB0: mov     edi, ebx
0x797DB2: shl     edi, 4
0x797DB5: add     edi, [esp+80h+var_28]
0x797DB9: mov     eax, [edi+4]
0x797DBC: test    eax, eax
0x797DBE: jnz     short loc_797DC4
0x797DC0: xor     edx, edx
0x797DC2: jmp     short loc_797DCB
0x797DC4: mov     edx, [edi+8]
0x797DC7: sub     edx, eax
0x797DC9: sar     edx, 1
0x797DCB: test    eax, eax
0x797DCD: jz      short loc_797DED
0x797DCF: mov     ecx, [edi+0Ch]
0x797DD2: sub     ecx, eax
0x797DD4: sar     ecx, 1
0x797DD6: cmp     edx, ecx
0x797DD8: jnb     short loc_797DED
0x797DDA: mov     eax, [edi+8]
0x797DDD: mov     cx, word ptr [esp+80h+var_6C]
0x797DE2: mov     [eax], cx
0x797DE5: add     eax, 2
0x797DE8: mov     [edi+8], eax
0x797DEB: jmp     short loc_797E10
0x797DED: mov     ebp, [edi+8]
0x797DF0: cmp     eax, ebp
0x797DF2: jbe     short loc_797DF9
0x797DF4: call    __invalid_parameter_noinfo
0x797DF9: lea     edx, [esp+80h+var_50]
0x797DFD: push    edx; int
0x797DFE: push    ebp; Src
0x797DFF: push    edi; int
0x797E00: lea     eax, [esp+8Ch+var_4C]
0x797E04: push    eax; int
0x797E05: mov     ecx, edi
0x797E07: call    sub_795A40
0x797E0C: mov     ebp, [esp+80h+var_68]
0x797E10: mov     ecx, [esp+80h+var_38]
0x797E14: test    ecx, ecx
0x797E16: jz      short loc_797E25
0x797E18: mov     eax, [esp+80h+var_34]
0x797E1C: sub     eax, ecx
0x797E1E: sar     eax, 4
0x797E21: cmp     ebx, eax
0x797E23: jb      short loc_797E2E
0x797E25: call    __invalid_parameter_noinfo
0x797E2A: mov     ecx, [esp+80h+var_38]
0x797E2E: mov     edi, ebx
0x797E30: shl     edi, 4
0x797E33: mov     eax, [edi+ecx+4]
0x797E37: add     edi, ecx
0x797E39: test    eax, eax
0x797E3B: jnz     short loc_797E41
0x797E3D: xor     edx, edx
0x797E3F: jmp     short loc_797E49
0x797E41: mov     edx, [edi+8]
0x797E44: sub     edx, eax
0x797E46: sar     edx, 2
0x797E49: test    eax, eax
0x797E4B: jz      short loc_797E6A
0x797E4D: mov     ecx, [edi+0Ch]
0x797E50: sub     ecx, eax
0x797E52: sar     ecx, 2
0x797E55: cmp     edx, ecx
0x797E57: jnb     short loc_797E6A
0x797E59: mov     eax, [edi+8]
0x797E5C: mov     ecx, [esp+80h+var_54]
0x797E60: mov     [eax], ecx
0x797E62: add     eax, 4
0x797E65: mov     [edi+8], eax
0x797E68: jmp     short loc_797E8D
0x797E6A: mov     ebp, [edi+8]
0x797E6D: cmp     eax, ebp
0x797E6F: jbe     short loc_797E76
0x797E71: call    __invalid_parameter_noinfo
0x797E76: lea     edx, [esp+80h+var_54]
0x797E7A: push    edx; int
0x797E7B: push    ebp; Src
0x797E7C: push    edi; int
0x797E7D: lea     eax, [esp+8Ch+var_44]
0x797E81: push    eax; int
0x797E82: mov     ecx, edi
0x797E84: call    sub_7A3620
0x797E89: mov     ebp, [esp+80h+var_68]
0x797E8D: mov     ecx, [esp+80h+var_18]
0x797E91: test    ecx, ecx
0x797E93: jz      short loc_797EA2
0x797E95: mov     eax, [esp+80h+var_14]
0x797E99: sub     eax, ecx
0x797E9B: sar     eax, 2
0x797E9E: cmp     ebx, eax
0x797EA0: jb      short loc_797EAB
0x797EA2: call    __invalid_parameter_noinfo
0x797EA7: mov     ecx, [esp+80h+var_18]
0x797EAB: mov     edx, [esp+80h+var_6C]
0x797EAF: add     edx, 0FFFFFFFEh
0x797EB2: mov     [ecx+ebx*4], edx
0x797EB5: jmp     loc_797FD0
0x797EBA: mov     ecx, [esp+80h+var_28]
0x797EBE: test    ecx, ecx
0x797EC0: movzx   edi, bx
0x797EC3: mov     [esp+80h+var_54], edi
0x797EC7: jz      short loc_797ED6
0x797EC9: mov     eax, [esp+80h+var_24]
0x797ECD: sub     eax, ecx
0x797ECF: sar     eax, 4
0x797ED2: cmp     edi, eax
0x797ED4: jb      short loc_797EDB
0x797ED6: call    __invalid_parameter_noinfo
0x797EDB: shl     edi, 4
0x797EDE: add     edi, [esp+80h+var_28]
0x797EE2: mov     ebx, [edi+8]
0x797EE5: cmp     [edi+4], ebx
0x797EE8: jbe     short loc_797EEF
0x797EEA: call    __invalid_parameter_noinfo
0x797EEF: mov     ebp, [edi+4]
0x797EF2: cmp     ebp, [edi+8]
0x797EF5: jbe     short loc_797EFC
0x797EF7: call    __invalid_parameter_noinfo
0x797EFC: cmp     ebp, ebx
0x797EFE: jz      short loc_797F28
0x797F00: mov     eax, [edi+8]
0x797F03: sub     eax, ebx
0x797F05: sar     eax, 1
0x797F07: test    eax, eax
0x797F09: lea     ecx, [eax+eax]
0x797F0C: lea     edx, [ecx+ebp]
0x797F0F: mov     [esp+80h+var_50], edx
0x797F13: jle     short loc_797F21
0x797F15: push    ecx; Src
0x797F16: push    ebx; Src
0x797F17: push    ecx; DstSize
0x797F18: push    ebp; Dst
0x797F19: call    _memmove_s
0x797F1E: add     esp, 10h
0x797F21: mov     eax, [esp+80h+var_50]
0x797F25: mov     [edi+8], eax
0x797F28: mov     ecx, [esp+80h+var_38]
0x797F2C: test    ecx, ecx
0x797F2E: jz      short loc_797F3F
0x797F30: mov     eax, [esp+80h+var_34]
0x797F34: sub     eax, ecx
0x797F36: sar     eax, 4
0x797F39: cmp     [esp+80h+var_54], eax
0x797F3D: jb      short loc_797F48
0x797F3F: call    __invalid_parameter_noinfo
0x797F44: mov     ecx, [esp+80h+var_38]
0x797F48: mov     edi, [esp+80h+var_54]
0x797F4C: shl     edi, 4
0x797F4F: mov     ebx, [edi+ecx+8]
0x797F53: add     edi, ecx
0x797F55: cmp     [edi+4], ebx
0x797F58: jbe     short loc_797F5F
0x797F5A: call    __invalid_parameter_noinfo
0x797F5F: mov     ebp, [edi+4]
0x797F62: cmp     ebp, [edi+8]
0x797F65: jbe     short loc_797F6C
0x797F67: call    __invalid_parameter_noinfo
0x797F6C: cmp     ebp, ebx
0x797F6E: jz      short loc_797F9D
0x797F70: mov     eax, [edi+8]
0x797F73: sub     eax, ebx
0x797F75: sar     eax, 2
0x797F78: test    eax, eax
0x797F7A: lea     ecx, ds:0[eax*4]
0x797F81: lea     edx, [ecx+ebp]
0x797F84: mov     [esp+80h+var_50], edx
0x797F88: jle     short loc_797F96
0x797F8A: push    ecx; Src
0x797F8B: push    ebx; Src
0x797F8C: push    ecx; DstSize
0x797F8D: push    ebp; Dst
0x797F8E: call    _memmove_s
0x797F93: add     esp, 10h
0x797F96: mov     eax, [esp+80h+var_50]
0x797F9A: mov     [edi+8], eax
0x797F9D: mov     ecx, [esp+80h+var_18]
0x797FA1: test    ecx, ecx
0x797FA3: jz      short loc_797FB7
0x797FA5: mov     eax, [esp+80h+var_14]
0x797FA9: movzx   edx, word ptr [esp+80h+var_68]
0x797FAE: sub     eax, ecx
0x797FB0: sar     eax, 2
0x797FB3: cmp     edx, eax
0x797FB5: jb      short loc_797FC0
0x797FB7: call    __invalid_parameter_noinfo
0x797FBC: mov     ecx, [esp+80h+var_18]
0x797FC0: movzx   eax, word ptr [esp+80h+var_68]
0x797FC5: mov     ebp, [esp+80h+var_68]
0x797FC9: mov     dword ptr [ecx+eax*4], 0
0x797FD0: add     ebp, 1
0x797FD3: cmp     bp, [esi+20h]
0x797FD7: mov     [esp+80h+var_68], ebp
0x797FDB: jb      loc_797875
0x797FE1: mov     ecx, esi
0x797FE3: call    sub_7969B0
0x797FE8: lea     ecx, [esp+80h+var_2C]
0x797FEC: push    ecx
0x797FED: lea     ecx, [esi+38h]
0x797FF0: call    sub_796BC0
0x797FF5: lea     edx, [esp+80h+var_3C]
0x797FF9: push    edx
0x797FFA: lea     ecx, [esi+48h]
0x797FFD: call    sub_796D10
0x798002: lea     eax, [esp+80h+var_1C]
0x798006: push    eax
0x798007: lea     ecx, [esi+28h]
0x79800A: call    sub_785580
0x79800F: mov     eax, [esp+80h+var_18]
0x798013: test    eax, eax
0x798015: jz      short loc_798020
0x798017: push    eax
0x798018: call    FormHeapFree
0x79801D: add     esp, 4
0x798020: mov     esi, [esp+80h+var_38]
0x798024: test    esi, esi
0x798026: jz      short loc_798049
0x798028: mov     ecx, [esp+80h+arg_0]
0x79802F: mov     eax, [esp+80h+var_34]
0x798033: push    ecx
0x798034: lea     edx, [esp+84h+var_3C]
0x798038: push    edx
0x798039: push    eax
0x79803A: push    esi
0x79803B: call    sub_794FC0
0x798040: push    esi
0x798041: call    FormHeapFree
0x798046: add     esp, 14h
0x798049: mov     esi, [esp+80h+var_28]
0x79804D: test    esi, esi
0x79804F: jz      short loc_798072
0x798051: mov     ecx, [esp+80h+arg_0]
0x798058: mov     eax, [esp+80h+var_24]
0x79805C: push    ecx
0x79805D: lea     edx, [esp+84h+var_2C]
0x798061: push    edx
0x798062: push    eax
0x798063: push    esi
0x798064: call    sub_794FC0
0x798069: push    esi
0x79806A: call    FormHeapFree
0x79806F: add     esp, 14h
0x798072: mov     ecx, [esp+80h+var_C]
0x798076: mov     large fs:0, ecx
0x79807D: pop     ecx
0x79807E: pop     edi
0x79807F: pop     esi
0x798080: pop     ebp
0x798081: pop     ebx
0x798082: add     esp, 6Ch
0x798085: retn    4
