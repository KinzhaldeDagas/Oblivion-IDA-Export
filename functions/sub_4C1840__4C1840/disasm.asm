0x4C1840: push    0FFFFFFFFh
0x4C1842: push    offset SEH_4C1840
0x4C1847: mov     eax, large fs:0
0x4C184D: push    eax
0x4C184E: sub     esp, 2Ch
0x4C1851: push    ebx
0x4C1852: push    ebp
0x4C1853: push    esi
0x4C1854: push    edi
0x4C1855: mov     eax, ds:0B30AACh
0x4C185A: xor     eax, esp
0x4C185C: push    eax
0x4C185D: lea     eax, [esp+4Ch+var_C]
0x4C1861: mov     large fs:0, eax
0x4C1867: xor     ebx, ebx
0x4C1869: push    34h ; '4'; Size
0x4C186B: xor     ebp, ebp
0x4C186D: mov     [esp+50h+var_34], ebx
0x4C1871: call    FormHeapAlloc
0x4C1876: add     esp, 4
0x4C1879: mov     [esp+4Ch+var_30], eax
0x4C187D: cmp     eax, ebp
0x4C187F: mov     [esp+4Ch+var_4], ebp
0x4C1883: jz      short loc_4C188E
0x4C1885: mov     ecx, eax
0x4C1887: call    sub_4C93D0
0x4C188C: jmp     short loc_4C1890
0x4C188E: xor     eax, eax
0x4C1890: push    ebp; a3
0x4C1891: or      edi, 0FFFFFFFFh
0x4C1894: push    offset aDefault_dds; "Default.DDS"
0x4C1899: lea     ecx, [eax+1Ch]; this
0x4C189C: mov     [esp+54h+var_4], edi
0x4C18A0: mov     ds:0B35BE4h, eax
0x4C18A5: call    BSStringT_Set
0x4C18AA: mov     ecx, ds:0B35BE4h
0x4C18B0: call    sub_4C95B0
0x4C18B5: push    10h; Size
0x4C18B7: call    FormHeapAlloc
0x4C18BC: mov     esi, eax
0x4C18BE: add     esp, 4
0x4C18C1: mov     [esp+4Ch+var_30], esi
0x4C18C5: cmp     esi, ebp
0x4C18C7: mov     [esp+4Ch+var_4], 1
0x4C18CF: jz      short loc_4C1901
0x4C18D1: mov     ecx, ds:0B35BE4h
0x4C18D7: lea     eax, [esp+4Ch+var_38]
0x4C18DB: push    eax
0x4C18DC: call    sub_4C1670
0x4C18E1: mov     eax, [eax]
0x4C18E3: push    ebp
0x4C18E4: push    5
0x4C18E6: push    3
0x4C18E8: push    ebp
0x4C18E9: mov     ebx, 1
0x4C18EE: push    eax
0x4C18EF: mov     ecx, esi
0x4C18F1: mov     byte ptr [esp+60h+var_4], 2
0x4C18F6: mov     [esp+60h+var_34], ebx
0x4C18FA: call    sub_704130
0x4C18FF: mov     ebp, eax
0x4C1901: test    bl, 1
0x4C1904: mov     ebx, ds:0A2807Ch
0x4C190A: mov     [esp+4Ch+var_4], edi
0x4C190E: jz      short loc_4C1930
0x4C1910: mov     esi, [esp+4Ch+var_38]
0x4C1914: test    esi, esi
0x4C1916: jz      short loc_4C1930
0x4C1918: lea     ecx, [esi+4]
0x4C191B: push    ecx; lpAddend
0x4C191C: call    ebx ; InterlockedDecrement
0x4C191E: test    eax, eax
0x4C1920: jnz     short loc_4C1930
0x4C1922: test    esi, esi
0x4C1924: jz      short loc_4C1930
0x4C1926: mov     edx, [esi]
0x4C1928: mov     eax, [edx]
0x4C192A: push    1
0x4C192C: mov     ecx, esi
0x4C192E: call    eax
0x4C1930: push    30h ; '0'; Size
0x4C1932: call    FormHeapAlloc
0x4C1937: add     esp, 4
0x4C193A: mov     [esp+4Ch+var_30], eax
0x4C193E: test    eax, eax
0x4C1940: mov     [esp+4Ch+var_4], 4
0x4C1948: jz      short loc_4C1955
0x4C194A: mov     ecx, eax
0x4C194C: call    NiTexturingProperty__NiTexturingProperty
0x4C1951: mov     esi, eax
0x4C1953: jmp     short loc_4C1957
0x4C1955: xor     esi, esi
0x4C1957: mov     eax, ds:0B35BECh
0x4C195C: cmp     eax, esi
0x4C195E: mov     [esp+4Ch+var_4], edi
0x4C1962: jz      short loc_4C199C
0x4C1964: test    eax, eax
0x4C1966: jz      short loc_4C1982
0x4C1968: mov     edi, eax
0x4C196A: add     eax, 4
0x4C196D: push    eax; lpAddend
0x4C196E: call    ebx ; InterlockedDecrement
0x4C1970: test    eax, eax
0x4C1972: jnz     short loc_4C1982
0x4C1974: test    edi, edi
0x4C1976: jz      short loc_4C1982
0x4C1978: mov     edx, [edi]
0x4C197A: mov     eax, [edx]
0x4C197C: push    1
0x4C197E: mov     ecx, edi
0x4C1980: call    eax
0x4C1982: test    esi, esi
0x4C1984: mov     eax, esi
0x4C1986: mov     ds:0B35BECh, eax
0x4C198B: jz      short loc_4C199C
0x4C198D: add     esi, 4
0x4C1990: push    esi; lpAddend
0x4C1991: call    dword ptr ds:0A28078h
0x4C1997: mov     eax, ds:0B35BECh
0x4C199C: mov     cx, [eax+18h]
0x4C19A0: and     cx, 0FFF5h
0x4C19A5: or      cx, 4
0x4C19A9: mov     [eax+18h], cx
0x4C19AD: mov     eax, ds:0B35BECh
0x4C19B2: mov     edx, [eax+20h]
0x4C19B5: mov     ecx, [edx]
0x4C19B7: cmp     ebp, ecx
0x4C19B9: mov     [esp+4Ch+var_34], ebp
0x4C19BD: mov     esi, eax
0x4C19BF: jz      short loc_4C19DC
0x4C19C1: test    ecx, ecx
0x4C19C3: jz      short loc_4C19CD
0x4C19C5: mov     eax, [ecx]
0x4C19C7: mov     edx, [eax]
0x4C19C9: push    1
0x4C19CB: call    edx
0x4C19CD: lea     eax, [esp+4Ch+var_34]
0x4C19D1: push    eax
0x4C19D2: push    0
0x4C19D4: lea     ecx, [esi+1Ch]
0x4C19D7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4C19DC: push    0C00h; Size
0x4C19E1: call    FormHeapAlloc
0x4C19E6: add     esp, 4
0x4C19E9: xor     ecx, ecx
0x4C19EB: xor     esi, esi
0x4C19ED: mov     ds:0B35BC8h, eax
0x4C19F2: mov     [esp+4Ch+var_38], esi
0x4C19F6: jmp     short loc_4C1A05
0x4C19F8: jmp     short loc_4C1A00
0x4C19FA: align 10h
0x4C1A00: mov     eax, ds:0B35BC8h
0x4C1A05: mov     ebx, esi
0x4C1A07: xor     edi, edi
0x4C1A09: and     ebx, 80000001h
0x4C1A0F: jns     short loc_4C1A16
0x4C1A11: dec     ebx
0x4C1A12: or      ebx, 0FFFFFFFEh
0x4C1A15: inc     ebx
0x4C1A16: mov     edx, esi
0x4C1A18: shl     edx, 4
0x4C1A1B: mov     [esp+4Ch+var_34], ebx
0x4C1A1F: add     edx, esi
0x4C1A21: jmp     short loc_4C1A2C
0x4C1A23: mov     eax, ds:0B35BC8h
0x4C1A28: mov     ebx, [esp+4Ch+var_34]
0x4C1A2C: mov     esi, edi
0x4C1A2E: and     esi, 80000001h
0x4C1A34: jns     short loc_4C1A3B
0x4C1A36: dec     esi
0x4C1A37: or      esi, 0FFFFFFFEh
0x4C1A3A: inc     esi
0x4C1A3B: xor     esi, ebx
0x4C1A3D: movzx   esi, di
0x4C1A40: jz      short loc_4C1A9A
0x4C1A42: lea     ebx, [edx+esi+11h]
0x4C1A46: mov     [eax+ecx*2], bx
0x4C1A4A: mov     ebp, ds:0B35BC8h
0x4C1A50: add     ecx, 1
0x4C1A53: lea     eax, [edx+esi]
0x4C1A56: mov     [ebp+ecx*2+0], ax
0x4C1A5B: mov     ebp, ds:0B35BC8h
0x4C1A61: add     ecx, 1
0x4C1A64: lea     eax, [edx+esi+1]
0x4C1A68: mov     [ebp+ecx*2+0], ax
0x4C1A6D: mov     ebp, ds:0B35BC8h
0x4C1A73: mov     [ebp+ecx*2+2], ax
0x4C1A78: add     ecx, 1
0x4C1A7B: lea     eax, [edx+esi+12h]
0x4C1A7F: mov     esi, ds:0B35BC8h
0x4C1A85: add     ecx, 1
0x4C1A88: mov     [esi+ecx*2], ax
0x4C1A8C: mov     eax, ds:0B35BC8h
0x4C1A91: add     ecx, 1
0x4C1A94: mov     [eax+ecx*2], bx
0x4C1A98: jmp     short loc_4C1AEE
0x4C1A9A: lea     ebp, [edx+esi+12h]
0x4C1A9E: mov     [eax+ecx*2], bp
0x4C1AA2: mov     ebx, ds:0B35BC8h
0x4C1AA8: add     ecx, 1
0x4C1AAB: lea     eax, [edx+esi+11h]
0x4C1AAF: mov     [ebx+ecx*2], ax
0x4C1AB3: mov     ebx, ds:0B35BC8h
0x4C1AB9: add     ecx, 1
0x4C1ABC: lea     eax, [edx+esi]
0x4C1ABF: mov     [ebx+ecx*2], ax
0x4C1AC3: mov     ebx, ds:0B35BC8h
0x4C1AC9: mov     [ebx+ecx*2+2], ax
0x4C1ACE: add     ecx, 1
0x4C1AD1: lea     eax, [edx+esi+1]
0x4C1AD5: mov     esi, ds:0B35BC8h
0x4C1ADB: add     ecx, 1
0x4C1ADE: mov     [esi+ecx*2], ax
0x4C1AE2: mov     eax, ds:0B35BC8h
0x4C1AE7: add     ecx, 1
0x4C1AEA: mov     [eax+ecx*2], bp
0x4C1AEE: add     edi, 1
0x4C1AF1: add     ecx, 1
0x4C1AF4: cmp     edi, 10h
0x4C1AF7: jl      loc_4C1A23
0x4C1AFD: mov     esi, [esp+4Ch+var_38]
0x4C1B01: add     esi, 1
0x4C1B04: cmp     esi, 10h
0x4C1B07: mov     [esp+4Ch+var_38], esi
0x4C1B0B: jl      loc_4C1A00
0x4C1B11: fld     dword ptr ds:0B08B44h
0x4C1B17: fst     [esp+4Ch+var_34]
0x4C1B1B: fldz
0x4C1B1D: fucompp
0x4C1B1F: fnstsw  ax
0x4C1B21: test    ah, 44h
0x4C1B24: jp      short loc_4C1B3D
0x4C1B26: push    offset aIniSettingFlan; "INI setting fLandTextureTilingMult cann"...
0x4C1B2B: call    PrintError
0x4C1B30: fld     dword ptr ds:0A45FF4h
0x4C1B36: fstp    [esp+50h+var_34]
0x4C1B3A: add     esp, 4
0x4C1B3D: fld     [esp+4Ch+var_34]
0x4C1B41: push    1210h; Size
0x4C1B46: fdivr   qword ptr ds:0A3C800h
0x4C1B4C: fstp    [esp+50h+var_34]
0x4C1B50: call    FormHeapAlloc
0x4C1B55: add     esp, 4
0x4C1B58: test    eax, eax
0x4C1B5A: jz      short loc_4C1B7E
0x4C1B5C: fldz
0x4C1B5E: mov     edx, 120h
0x4C1B63: lea     ecx, [eax+8]
0x4C1B66: fst     dword ptr [ecx-8]
0x4C1B69: add     ecx, 10h
0x4C1B6C: sub     edx, 1
0x4C1B6F: fst     dword ptr [ecx-14h]
0x4C1B72: fst     dword ptr [ecx-10h]
0x4C1B75: fst     dword ptr [ecx-0Ch]
0x4C1B78: jns     short loc_4C1B66
0x4C1B7A: fstp    st
0x4C1B7C: jmp     short loc_4C1B80
0x4C1B7E: xor     eax, eax
0x4C1B80: push    0D8Ch; Size
0x4C1B85: mov     ds:0B35BCCh, eax
0x4C1B8A: call    FormHeapAlloc
0x4C1B8F: push    121h; Size
0x4C1B94: mov     ds:0B35BD0h, eax
0x4C1B99: call    FormHeapAlloc
0x4C1B9E: push    908h; Size
0x4C1BA3: mov     ds:0B35BD8h, eax
0x4C1BA8: call    FormHeapAlloc
0x4C1BAD: fld1
0x4C1BAF: fst     [esp+58h+var_1C]
0x4C1BB3: add     esp, 0Ch
0x4C1BB6: fst     [esp+4Ch+var_18]
0x4C1BBA: xor     ecx, ecx
0x4C1BBC: fst     [esp+4Ch+var_14]
0x4C1BC0: mov     ds:0B35BD4h, eax
0x4C1BC5: fldz
0x4C1BC7: mov     [esp+4Ch+var_38], ecx
0x4C1BCB: fst     [esp+4Ch+var_10]
0x4C1BCF: fst     [esp+4Ch+var_28]
0x4C1BD3: fstp    [esp+4Ch+var_24]
0x4C1BD7: fstp    [esp+4Ch+var_20]
0x4C1BDB: fld     [esp+4Ch+var_34]
0x4C1BDF: fld     st
0x4C1BE1: fidivr  [esp+4Ch+var_38]
0x4C1BE5: lea     esi, [ecx+ecx*2]
0x4C1BE8: add     esi, esi
0x4C1BEA: xor     edi, edi
0x4C1BEC: mov     edx, ecx
0x4C1BEE: add     esi, esi
0x4C1BF0: mov     [esp+4Ch+var_34], edi
0x4C1BF4: shl     edx, 4
0x4C1BF7: fstp    [esp+4Ch+var_2C]
0x4C1BFB: mov     ebx, [esp+4Ch+var_2C]
0x4C1BFF: jmp     short loc_4C1C03
0x4C1C01: fstp    st
0x4C1C03: mov     eax, ds:0B35BCCh
0x4C1C08: fld     st
0x4C1C0A: fild    [esp+4Ch+var_34]
0x4C1C0E: mov     ebp, [esp+4Ch+var_1C]
0x4C1C12: mov     [eax+edx], ebp
0x4C1C15: mov     ebp, [esp+4Ch+var_18]
0x4C1C19: fdiv    st, st(1)
0x4C1C1B: mov     [eax+edx+4], ebp
0x4C1C1F: mov     ebp, [esp+4Ch+var_14]
0x4C1C23: add     eax, edx
0x4C1C25: mov     [eax+8], ebp
0x4C1C28: mov     ebp, [esp+4Ch+var_10]
0x4C1C2C: mov     [eax+0Ch], ebp
0x4C1C2F: mov     eax, ds:0B35BD0h
0x4C1C34: mov     ebp, [esp+4Ch+var_28]
0x4C1C38: mov     [eax+esi], ebp
0x4C1C3B: mov     ebp, [esp+4Ch+var_24]
0x4C1C3F: add     eax, esi
0x4C1C41: mov     [eax+4], ebp
0x4C1C44: mov     ebp, [esp+4Ch+var_20]
0x4C1C48: mov     [eax+8], ebp
0x4C1C4B: mov     eax, ds:0B35BD8h
0x4C1C50: mov     byte ptr [eax+ecx], 1
0x4C1C54: mov     ebp, ds:0B35BD4h
0x4C1C5A: add     edi, 1
0x4C1C5D: add     ecx, 1
0x4C1C60: add     edx, 10h
0x4C1C63: add     esi, 0Ch
0x4C1C66: cmp     edi, 11h
0x4C1C69: mov     [esp+4Ch+var_34], edi
0x4C1C6D: fstp    [esp+4Ch+var_30]
0x4C1C71: mov     eax, [esp+4Ch+var_30]
0x4C1C75: mov     [ebp+ecx*8-8], eax
0x4C1C79: mov     eax, ds:0B35BD4h
0x4C1C7E: mov     [eax+ecx*8-4], ebx
0x4C1C82: jl      loc_4C1C01
0x4C1C88: mov     eax, [esp+4Ch+var_38]
0x4C1C8C: add     eax, 1
0x4C1C8F: cmp     eax, 11h
0x4C1C92: mov     [esp+4Ch+var_38], eax
0x4C1C96: jl      loc_4C1BE1
0x4C1C9C: fstp    st
0x4C1C9E: xor     ecx, ecx
0x4C1CA0: fstp    st
0x4C1CA2: mov     edx, ecx
0x4C1CA4: and     edx, 80000001h
0x4C1CAA: jns     short loc_4C1CB1
0x4C1CAC: dec     edx
0x4C1CAD: or      edx, 0FFFFFFFEh
0x4C1CB0: inc     edx
0x4C1CB1: shl     edx, 0Bh
0x4C1CB4: sub     edx, 800h
0x4C1CBA: mov     [esp+4Ch+var_34], edx
0x4C1CBE: fild    [esp+4Ch+var_34]
0x4C1CC2: mov     eax, ecx
0x4C1CC4: cdq
0x4C1CC5: sub     eax, edx
0x4C1CC7: fstp    dword ptr ds:0B35BA8h[ecx*4]
0x4C1CCE: sar     eax, 1
0x4C1CD0: shl     eax, 0Bh
0x4C1CD3: sub     eax, 800h
0x4C1CD8: mov     [esp+4Ch+var_34], eax
0x4C1CDC: fild    [esp+4Ch+var_34]
0x4C1CE0: add     ecx, 1
0x4C1CE3: cmp     ecx, 4
0x4C1CE6: fstp    dword ptr ds:0B35B94h[ecx*4]
0x4C1CED: jl      short loc_4C1CA2
0x4C1CEF: fld     dword ptr ds:0A37448h
0x4C1CF5: xor     esi, esi
0x4C1CF7: fstp    [esp+4Ch+var_20]
0x4C1CFB: mov     edi, [esp+4Ch+var_20]
0x4C1CFF: push    0D8Ch; Size
0x4C1D04: call    FormHeapAlloc
0x4C1D09: add     esp, 4
0x4C1D0C: xor     ebx, ebx
0x4C1D0E: mov     ds:dword_B35BB8[esi], eax
0x4C1D14: mov     [esp+4Ch+var_34], ebx
0x4C1D18: fild    [esp+4Ch+var_34]
0x4C1D1C: xor     edx, edx
0x4C1D1E: mov     ecx, ebx
0x4C1D20: mov     [esp+4Ch+var_38], edx
0x4C1D24: fstp    [esp+4Ch+var_30]
0x4C1D28: add     ebx, 0CCh ; 'Ì'
0x4C1D2E: fld     [esp+4Ch+var_30]
0x4C1D32: fild    [esp+4Ch+var_38]
0x4C1D36: mov     eax, ds:dword_B35BB8[esi]
0x4C1D3C: add     eax, ecx
0x4C1D3E: add     edx, 80h ; '€'
0x4C1D44: fadd    dword ptr [esi+0B35BA8h]
0x4C1D4A: add     ecx, 0Ch
0x4C1D4D: cmp     edx, 880h
0x4C1D53: mov     [esp+4Ch+var_38], edx
0x4C1D57: fstp    [esp+4Ch+var_28]
0x4C1D5B: mov     ebp, [esp+4Ch+var_28]
0x4C1D5F: fld     dword ptr [esi+0B35B98h]
0x4C1D65: mov     [eax], ebp
0x4C1D67: fadd    st, st(1)
0x4C1D69: fstp    [esp+4Ch+var_24]
0x4C1D6D: mov     ebp, [esp+4Ch+var_24]
0x4C1D71: mov     [eax+4], ebp
0x4C1D74: mov     [eax+8], edi
0x4C1D77: jl      short loc_4C1D32
0x4C1D79: mov     eax, [esp+4Ch+var_34]
0x4C1D7D: fstp    st
0x4C1D7F: add     eax, 80h ; '€'
0x4C1D84: cmp     eax, 880h
0x4C1D89: mov     [esp+4Ch+var_34], eax
0x4C1D8D: jl      short loc_4C1D18
0x4C1D8F: add     esi, 4
0x4C1D92: cmp     esi, 10h
0x4C1D95: jl      loc_4C1CFF
0x4C1D9B: mov     ecx, ds:0B35BE4h
0x4C1DA1: call    sub_4C95B0
0x4C1DA6: mov     byte ptr ds:0B35BDCh, 1
0x4C1DAD: mov     ecx, dword ptr [esp+4Ch+var_C]
0x4C1DB1: mov     large fs:0, ecx
0x4C1DB8: pop     ecx
0x4C1DB9: pop     edi
0x4C1DBA: pop     esi
0x4C1DBB: pop     ebp
0x4C1DBC: pop     ebx
0x4C1DBD: add     esp, 38h
0x4C1DC0: retn
