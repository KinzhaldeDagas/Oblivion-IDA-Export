0x533A00: push    ebp
0x533A01: mov     ebp, esp
0x533A03: and     esp, 0FFFFFFF0h
0x533A06: push    0FFFFFFFFh
0x533A08: push    offset SEH_535730
0x533A0D: mov     eax, large fs:0
0x533A13: push    eax
0x533A14: sub     esp, 68h
0x533A17: push    ebx
0x533A18: push    esi
0x533A19: push    edi
0x533A1A: mov     eax, ds:0B30AACh
0x533A1F: xor     eax, esp
0x533A21: push    eax
0x533A22: lea     eax, [esp+84h+var_C]
0x533A26: mov     large fs:0, eax
0x533A2C: mov     ebx, ecx
0x533A2E: push    14h; Size
0x533A30: call    FormHeapAlloc
0x533A35: add     esp, 4
0x533A38: mov     [esp+84h+var_74], eax
0x533A3C: xor     edi, edi
0x533A3E: cmp     eax, edi
0x533A40: mov     [esp+84h+var_4], edi
0x533A47: jz      short loc_533A5D
0x533A49: fld     [ebp+arg_0]
0x533A4C: push    1; float
0x533A4E: push    ecx
0x533A4F: mov     ecx, eax
0x533A51: fstp    [esp+8Ch+var_8C]; float
0x533A54: call    sub_532090
0x533A59: mov     esi, eax
0x533A5B: jmp     short loc_533A5F
0x533A5D: xor     esi, esi
0x533A5F: lea     ecx, [esp+84h+var_70]
0x533A63: call    sub_532250
0x533A68: mov     eax, [ebp+arg_4]
0x533A6B: shl     eax, 10h
0x533A6E: or      eax, 1Ch
0x533A71: cmp     esi, edi
0x533A73: mov     [esp+84h+var_4], 1
0x533A7E: mov     [esp+84h+var_70], eax
0x533A82: jz      short loc_533A8D
0x533A84: mov     ecx, [esi+8]
0x533A87: mov     [esp+84h+var_6C], ecx
0x533A8B: jmp     short loc_533A91
0x533A8D: mov     [esp+84h+var_6C], edi
0x533A91: fldz
0x533A93: push    14h; Size
0x533A95: fst     [esp+88h+var_4C]
0x533A99: fst     [esp+88h+var_48]
0x533A9D: fst     [esp+88h+var_44]
0x533AA1: fst     [esp+88h+var_40]
0x533AA5: fst     [esp+88h+var_38]
0x533AA9: fst     [esp+88h+var_34]
0x533AAD: fst     [esp+88h+var_30]
0x533AB1: fst     [esp+88h+var_2C]
0x533AB5: fst     [esp+88h+var_24]
0x533AB9: fld1
0x533ABB: fst     [esp+88h+var_50]
0x533ABF: fst     [esp+88h+var_3C]
0x533AC3: fstp    [esp+88h+var_28]
0x533AC7: fst     [esp+88h+var_20]
0x533ACB: fst     [esp+88h+var_1C]
0x533ACF: fst     [esp+88h+var_18]
0x533AD3: fstp    [esp+88h+var_14]
0x533AD7: call    FormHeapAlloc
0x533ADC: add     esp, 4
0x533ADF: mov     [esp+84h+var_74], eax
0x533AE3: cmp     eax, edi
0x533AE5: mov     byte ptr [esp+84h+var_4], 2
0x533AED: jz      short loc_533AFD
0x533AEF: lea     edx, [esp+84h+var_70]
0x533AF3: push    edx
0x533AF4: mov     ecx, eax
0x533AF6: call    sub_531FC0
0x533AFB: mov     edi, eax
0x533AFD: mov     esi, [ebx+1A0h]
0x533B03: cmp     esi, edi
0x533B05: mov     byte ptr [esp+84h+var_4], 1
0x533B0D: jz      short loc_533B43
0x533B0F: test    esi, esi
0x533B11: jz      short loc_533B2F
0x533B13: lea     eax, [esi+4]
0x533B16: push    eax; lpAddend
0x533B17: call    dword ptr ds:0A2807Ch
0x533B1D: test    eax, eax
0x533B1F: jnz     short loc_533B2F
0x533B21: test    esi, esi
0x533B23: jz      short loc_533B2F
0x533B25: mov     edx, [esi]
0x533B27: mov     eax, [edx]
0x533B29: push    1
0x533B2B: mov     ecx, esi
0x533B2D: call    eax
0x533B2F: test    edi, edi
0x533B31: mov     [ebx+1A0h], edi
0x533B37: jz      short loc_533B43
0x533B39: add     edi, 4
0x533B3C: push    edi; lpAddend
0x533B3D: call    dword ptr ds:0A28078h
0x533B43: push    0
0x533B45: push    3
0x533B47: push    1Ch
0x533B49: call    sub_8A7F20
0x533B4E: push    0
0x533B50: push    15h
0x533B52: push    1Ch
0x533B54: call    sub_8A7F20
0x533B59: push    0
0x533B5B: push    6
0x533B5D: push    1Ch
0x533B5F: call    sub_8A7F20
0x533B64: push    0
0x533B66: push    7
0x533B68: push    1Ch
0x533B6A: call    sub_8A7F20
0x533B6F: push    0
0x533B71: push    8
0x533B73: push    1Ch
0x533B75: call    sub_8A7F20
0x533B7A: push    0
0x533B7C: push    0Bh
0x533B7E: push    1Ch
0x533B80: call    sub_8A7F20
0x533B85: add     esp, 48h
0x533B88: push    0
0x533B8A: push    12h
0x533B8C: push    1Ch
0x533B8E: call    sub_8A7F20
0x533B93: push    0
0x533B95: push    14h
0x533B97: push    1Ch
0x533B99: call    sub_8A7F20
0x533B9E: push    0
0x533BA0: push    18h
0x533BA2: push    1Ch
0x533BA4: call    sub_8A7F20
0x533BA9: push    0
0x533BAB: push    19h
0x533BAD: push    1Ch
0x533BAF: call    sub_8A7F20
0x533BB4: push    0
0x533BB6: push    1Ah
0x533BB8: push    1Ch
0x533BBA: call    sub_8A7F20
0x533BBF: push    0
0x533BC1: push    1Ch
0x533BC3: push    1Ch
0x533BC5: call    sub_8A7F20
0x533BCA: add     esp, 48h
0x533BCD: push    0
0x533BCF: push    1Eh
0x533BD1: push    1Ch
0x533BD3: call    sub_8A7F20
0x533BD8: mov     eax, [esp+90h+var_5C]
0x533BDC: add     esp, 0Ch
0x533BDF: test    eax, eax
0x533BE1: mov     [esp+84h+var_4], 0FFFFFFFFh
0x533BEC: js      short loc_533C26
0x533BEE: mov     ecx, ds:0BA9DE4h
0x533BF4: mov     edx, large fs:2Ch
0x533BFB: mov     ecx, [edx+ecx*4]
0x533BFE: mov     ecx, [ecx+19Ch]
0x533C04: test    ecx, ecx
0x533C06: jnz     short loc_533C0E
0x533C08: mov     ecx, ds:0BA7D9Ch
0x533C0E: mov     edx, [esp+84h+var_64]
0x533C12: and     eax, 3FFFFFFFh
0x533C17: add     eax, eax
0x533C19: add     eax, eax
0x533C1B: push    14h
0x533C1D: add     eax, eax
0x533C1F: push    eax
0x533C20: push    edx
0x533C21: call    sub_8A75D0
0x533C26: mov     ecx, dword ptr [esp+84h+var_C]
0x533C2A: mov     large fs:0, ecx
0x533C31: pop     ecx
0x533C32: pop     edi
0x533C33: pop     esi
0x533C34: pop     ebx
0x533C35: mov     esp, ebp
0x533C37: pop     ebp
0x533C38: retn    8
