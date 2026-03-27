0x918BC0: sub     esp, 2Ch
0x918BC3: push    esi
0x918BC4: lea     eax, [esp+30h+var_2C]
0x918BC8: push    eax
0x918BC9: lea     ecx, [esp+34h+var_20]
0x918BCD: mov     [esp+34h+var_2C], 0
0x918BD5: mov     [esp+34h+var_28], 0
0x918BDD: mov     [esp+34h+var_24], 80000000h
0x918BE5: call    sub_948750
0x918BEA: push    90h
0x918BEF: lea     ecx, [esp+34h+var_20]
0x918BF3: call    sub_9181B0
0x918BF8: mov     ecx, ds:0B3005Ch
0x918BFE: push    ecx
0x918BFF: lea     ecx, [esp+34h+var_20]
0x918C03: call    sub_918440
0x918C08: mov     edx, ds:0B30058h
0x918C0E: push    edx
0x918C0F: lea     ecx, [esp+34h+var_20]
0x918C13: call    sub_918440
0x918C18: push    offset unk_A9D238
0x918C1D: call    sub_8B1860
0x918C22: mov     esi, eax
0x918C24: add     esp, 4
0x918C27: cmp     esi, 0FFFFh
0x918C2D: jle     short loc_918C34
0x918C2F: mov     esi, 0FFFFh
0x918C34: push    esi
0x918C35: lea     ecx, [esp+34h+var_20]
0x918C39: call    sub_918420
0x918C3E: push    esi
0x918C3F: push    offset unk_A9D238
0x918C44: lea     ecx, [esp+38h+var_20]
0x918C48: call    sub_918390
0x918C4D: mov     eax, [esp+30h+arg_0]
0x918C51: push    eax
0x918C52: lea     ecx, [esp+34h+var_10]
0x918C56: call    sub_948770
0x918C5B: mov     ecx, [esp+30h+var_28]
0x918C5F: push    ecx
0x918C60: lea     ecx, [esp+34h+var_10]
0x918C64: call    sub_918440
0x918C69: mov     edx, [esp+30h+var_28]
0x918C6D: mov     eax, [esp+30h+var_2C]
0x918C71: push    edx
0x918C72: push    eax
0x918C73: lea     ecx, [esp+38h+var_10]
0x918C77: call    sub_918390
0x918C7C: lea     ecx, [esp+30h+var_10]
0x918C80: call    sub_918180
0x918C85: lea     ecx, [esp+30h+var_20]
0x918C89: call    sub_918180
0x918C8E: mov     eax, [esp+30h+var_24]
0x918C92: test    eax, eax
0x918C94: pop     esi
0x918C95: js      short loc_918CC8
0x918C97: mov     ecx, ds:0BA9DE4h
0x918C9D: mov     edx, large fs:2Ch
0x918CA4: mov     ecx, [edx+ecx*4]
0x918CA7: mov     ecx, [ecx+19Ch]
0x918CAD: test    ecx, ecx
0x918CAF: jnz     short loc_918CB7
0x918CB1: mov     ecx, ds:0BA7D9Ch
0x918CB7: mov     edx, [esp+2Ch+var_2C]
0x918CBA: push    14h
0x918CBC: and     eax, 3FFFFFFFh
0x918CC1: push    eax
0x918CC2: push    edx
0x918CC3: call    sub_8A75D0
0x918CC8: xor     eax, eax
0x918CCA: add     esp, 2Ch
0x918CCD: retn
