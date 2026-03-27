0x7B18C0: push    0FFFFFFFFh
0x7B18C2: push    offset MenuPass_SEH
0x7B18C7: mov     eax, large fs:0
0x7B18CD: push    eax
0x7B18CE: sub     esp, 20h
0x7B18D1: push    ebx
0x7B18D2: push    ebp
0x7B18D3: push    esi
0x7B18D4: push    edi
0x7B18D5: mov     eax, ds:0B30AACh
0x7B18DA: xor     eax, esp
0x7B18DC: push    eax
0x7B18DD: lea     eax, [esp+40h+var_C]
0x7B18E1: mov     large fs:0, eax
0x7B18E7: mov     ebx, ecx
0x7B18E9: mov     [esp+40h+var_28], ebx
0x7B18ED: cmp     byte ptr ds:0B42E96h, 0
0x7B18F4: fld1
0x7B18F6: mov     ebp, [esp+40h+arg_4]
0x7B18FA: jz      short loc_7B1905
0x7B18FC: fst     [esp+40h+arg_4]
0x7B1900: jmp     loc_7B1A66
0x7B1905: mov     edi, [esp+40h+arg_8]
0x7B1909: fstp    st
0x7B190B: mov     eax, [edi]
0x7B190D: test    eax, eax
0x7B190F: jz      loc_7B19B4
0x7B1915: mov     ecx, [eax+20h]
0x7B1918: test    ecx, ecx
0x7B191A: jz      short loc_7B1927
0x7B191C: mov     eax, [ecx]
0x7B191E: mov     edx, [eax+4Ch]
0x7B1921: call    edx
0x7B1923: mov     esi, eax
0x7B1925: jmp     short loc_7B1929
0x7B1927: xor     esi, esi
0x7B1929: mov     eax, [ebp+0]
0x7B192C: mov     ecx, [eax+20h]
0x7B192F: test    ecx, ecx
0x7B1931: jz      short loc_7B193C
0x7B1933: mov     eax, [ecx]
0x7B1935: mov     edx, [eax+4Ch]
0x7B1938: call    edx
0x7B193A: jmp     short loc_7B193E
0x7B193C: xor     eax, eax
0x7B193E: test    esi, esi
0x7B1940: mov     [esp+40h+arg_4], esi
0x7B1944: fild    [esp+40h+arg_4]
0x7B1948: jge     short loc_7B1950
0x7B194A: fadd    dword ptr ds:0A2FC78h
0x7B1950: test    eax, eax
0x7B1952: mov     [esp+40h+arg_4], eax
0x7B1956: fild    [esp+40h+arg_4]
0x7B195A: jge     short loc_7B1962
0x7B195C: fadd    dword ptr ds:0A2FC78h
0x7B1962: fdivp   st(1), st
0x7B1964: mov     eax, [edi]
0x7B1966: mov     ecx, [eax+20h]
0x7B1969: test    ecx, ecx
0x7B196B: fstp    [esp+40h+arg_4]
0x7B196F: jz      short loc_7B197C
0x7B1971: mov     eax, [ecx]
0x7B1973: mov     edx, [eax+50h]
0x7B1976: call    edx
0x7B1978: mov     esi, eax
0x7B197A: jmp     short loc_7B197E
0x7B197C: xor     esi, esi
0x7B197E: mov     eax, [ebp+0]
0x7B1981: mov     ecx, [eax+20h]
0x7B1984: test    ecx, ecx
0x7B1986: jz      short loc_7B1991
0x7B1988: mov     eax, [ecx]
0x7B198A: mov     edx, [eax+50h]
0x7B198D: call    edx
0x7B198F: jmp     short loc_7B1993
0x7B1991: xor     eax, eax
0x7B1993: test    esi, esi
0x7B1995: mov     [esp+40h+var_20], esi
0x7B1999: fild    [esp+40h+var_20]
0x7B199D: jge     short loc_7B19A5
0x7B199F: fadd    dword ptr ds:0A2FC78h
0x7B19A5: mov     [esp+40h+var_20], eax
0x7B19A9: fild    [esp+40h+var_20]
0x7B19AD: test    eax, eax
0x7B19AF: jmp     loc_7B1A5C
0x7B19B4: mov     ecx, ds:0B3F928h
0x7B19BA: mov     eax, [ecx]
0x7B19BC: mov     edx, [eax+7Ch]
0x7B19BF: call    edx
0x7B19C1: mov     esi, eax
0x7B19C3: mov     eax, [ebp+0]
0x7B19C6: mov     ecx, [eax+20h]
0x7B19C9: test    ecx, ecx
0x7B19CB: jz      short loc_7B19D8
0x7B19CD: mov     eax, [ecx]
0x7B19CF: mov     edx, [eax+4Ch]
0x7B19D2: call    edx
0x7B19D4: mov     edi, eax
0x7B19D6: jmp     short loc_7B19DA
0x7B19D8: xor     edi, edi
0x7B19DA: mov     eax, [esi]
0x7B19DC: mov     edx, [eax+4Ch]
0x7B19DF: push    0
0x7B19E1: mov     ecx, esi
0x7B19E3: call    edx
0x7B19E5: test    eax, eax
0x7B19E7: mov     [esp+40h+arg_4], eax
0x7B19EB: fild    [esp+40h+arg_4]
0x7B19EF: jge     short loc_7B19F7
0x7B19F1: fadd    dword ptr ds:0A2FC78h
0x7B19F7: test    edi, edi
0x7B19F9: mov     [esp+40h+arg_4], edi
0x7B19FD: fild    [esp+40h+arg_4]
0x7B1A01: jge     short loc_7B1A09
0x7B1A03: fadd    dword ptr ds:0A2FC78h
0x7B1A09: fdivp   st(1), st
0x7B1A0B: mov     ecx, ds:0B3F928h
0x7B1A11: mov     eax, [ecx]
0x7B1A13: mov     edx, [eax+7Ch]
0x7B1A16: fstp    [esp+40h+arg_4]
0x7B1A1A: call    edx
0x7B1A1C: mov     esi, eax
0x7B1A1E: mov     eax, [ebp+0]
0x7B1A21: mov     ecx, [eax+20h]
0x7B1A24: test    ecx, ecx
0x7B1A26: jz      short loc_7B1A33
0x7B1A28: mov     eax, [ecx]
0x7B1A2A: mov     edx, [eax+50h]
0x7B1A2D: call    edx
0x7B1A2F: mov     edi, eax
0x7B1A31: jmp     short loc_7B1A35
0x7B1A33: xor     edi, edi
0x7B1A35: mov     eax, [esi]
0x7B1A37: mov     edx, [eax+50h]
0x7B1A3A: push    0
0x7B1A3C: mov     ecx, esi
0x7B1A3E: call    edx
0x7B1A40: test    eax, eax
0x7B1A42: mov     [esp+40h+var_20], eax
0x7B1A46: fild    [esp+40h+var_20]
0x7B1A4A: jge     short loc_7B1A52
0x7B1A4C: fadd    dword ptr ds:0A2FC78h
0x7B1A52: mov     [esp+40h+var_20], edi
0x7B1A56: fild    [esp+40h+var_20]
0x7B1A5A: test    edi, edi
0x7B1A5C: jge     short loc_7B1A64
0x7B1A5E: fadd    dword ptr ds:0A2FC78h
0x7B1A64: fdivp   st(1), st
0x7B1A66: mov     eax, [ebp+0]
0x7B1A69: fstp    [esp+40h+var_2C]
0x7B1A6D: fldz
0x7B1A6F: fst     [esp+40h+var_1C]
0x7B1A73: fld1
0x7B1A75: fst     [esp+40h+var_18]
0x7B1A79: fstp    [esp+40h+var_14]
0x7B1A7D: fstp    [esp+40h+var_10]
0x7B1A81: mov     ecx, [eax+20h]
0x7B1A84: test    ecx, ecx
0x7B1A86: jz      short loc_7B1A91
0x7B1A88: mov     eax, [ecx]
0x7B1A8A: mov     edx, [eax+4Ch]
0x7B1A8D: call    edx
0x7B1A8F: jmp     short loc_7B1A93
0x7B1A91: xor     eax, eax
0x7B1A93: test    eax, eax
0x7B1A95: mov     [esp+40h+var_20], eax
0x7B1A99: fild    [esp+40h+var_20]
0x7B1A9D: jge     short loc_7B1AA5
0x7B1A9F: fadd    dword ptr ds:0A2FC78h
0x7B1AA5: fdivr   qword ptr ds:0A2FAA0h
0x7B1AAB: mov     eax, [ebp+0]
0x7B1AAE: mov     ecx, [eax+20h]
0x7B1AB1: test    ecx, ecx
0x7B1AB3: fstp    [esp+40h+var_24]
0x7B1AB7: jz      short loc_7B1AC2
0x7B1AB9: mov     eax, [ecx]
0x7B1ABB: mov     edx, [eax+50h]
0x7B1ABE: call    edx
0x7B1AC0: jmp     short loc_7B1AC4
0x7B1AC2: xor     eax, eax
0x7B1AC4: test    eax, eax
0x7B1AC6: mov     [esp+40h+var_20], eax
0x7B1ACA: fild    [esp+40h+var_20]
0x7B1ACE: jge     short loc_7B1AD6
0x7B1AD0: fadd    dword ptr ds:0A2FC78h
0x7B1AD6: cmp     byte ptr [esp+40h+arg_C], 0
0x7B1ADB: fdivr   qword ptr ds:0A2FAA0h
0x7B1AE1: mov     dword ptr [ebx+90h], 0
0x7B1AEB: fstp    [esp+40h+var_20]
0x7B1AEF: fld     [esp+40h+arg_4]
0x7B1AF3: fst     dword ptr [ebx+0A0h]
0x7B1AF9: fld     [esp+40h+var_2C]
0x7B1AFD: fst     dword ptr [ebx+0A4h]
0x7B1B03: fld     [esp+40h+var_24]
0x7B1B07: fldz
0x7B1B09: fadd    st(1), st
0x7B1B0B: fxch    st(1)
0x7B1B0D: fstp    dword ptr [ebx+0A8h]
0x7B1B13: fadd    [esp+40h+var_20]
0x7B1B17: fstp    dword ptr [ebx+0ACh]
0x7B1B1D: jz      short loc_7B1B2B
0x7B1B1F: fstp    st(1)
0x7B1B21: fstp    st
0x7B1B23: fld1
0x7B1B25: fst     [esp+40h+var_18]
0x7B1B29: jmp     short loc_7B1B31
0x7B1B2B: fxch    st(1)
0x7B1B2D: fstp    [esp+40h+var_18]
0x7B1B31: mov     eax, [ebp+0]
0x7B1B34: fstp    [esp+40h+var_14]
0x7B1B38: push    eax; a2
0x7B1B39: mov     ecx, ebx; this
0x7B1B3B: call    sub_802890
0x7B1B40: cmp     byte ptr ds:0B43070h, 0
0x7B1B47: mov     ebp, ds:0A2807Ch
0x7B1B4D: mov     ebx, 1
0x7B1B52: jnz     short loc_7B1BAC
0x7B1B54: push    0; char
0x7B1B56: push    ebx; char
0x7B1B57: lea     ecx, [esp+48h+arg_C]
0x7B1B5B: push    offset aDataTexture_11; "Data\\Textures\\Menus\\Misc\\sepia.dds"
0x7B1B60: push    ecx; int
0x7B1B61: call    sub_7B8200
0x7B1B66: add     esp, 10h
0x7B1B69: mov     edi, [esp+40h+var_28]
0x7B1B6D: push    eax
0x7B1B6E: lea     ecx, [edi+0B4h]
0x7B1B74: mov     [esp+44h+var_4], 0
0x7B1B7C: call    sub_55E2A0
0x7B1B81: mov     eax, [esp+40h+arg_C]
0x7B1B85: test    eax, eax
0x7B1B87: mov     [esp+40h+var_4], 0FFFFFFFFh
0x7B1B8F: jz      short loc_7B1BB0
0x7B1B91: mov     esi, eax
0x7B1B93: add     eax, 4
0x7B1B96: push    eax; lpAddend
0x7B1B97: call    ebp ; InterlockedDecrement
0x7B1B99: test    eax, eax
0x7B1B9B: jnz     short loc_7B1BB0
0x7B1B9D: test    esi, esi
0x7B1B9F: jz      short loc_7B1BB0
0x7B1BA1: mov     edx, [esi]
0x7B1BA3: mov     eax, [edx]
0x7B1BA5: push    ebx
0x7B1BA6: mov     ecx, esi
0x7B1BA8: call    eax
0x7B1BAA: jmp     short loc_7B1BB0
0x7B1BAC: mov     edi, [esp+40h+var_28]
0x7B1BB0: mov     ecx, ds:0B3F928h
0x7B1BB6: cmp     dword ptr [ecx+200h], 0
0x7B1BBD: jnz     short loc_7B1BF1
0x7B1BBF: cmp     dword ptr [ecx+204h], 0
0x7B1BC6: jnz     short loc_7B1BF1
0x7B1BC8: mov     ecx, [esp+40h+arg_8]
0x7B1BCC: mov     ecx, [ecx]
0x7B1BCE: test    ecx, ecx
0x7B1BD0: jz      short loc_7B1BE0
0x7B1BD2: call    BSRenderedTexture__UseTextureToRender
0x7B1BD7: push    eax; a2
0x7B1BD8: push    ebx; a1
0x7B1BD9: call    NiRenderer_BeginScene
0x7B1BDE: jmp     short loc_7B1BE8
0x7B1BE0: push    0; a2
0x7B1BE2: push    ebx; a1
0x7B1BE3: call    NiRenderer_BeginScene1
0x7B1BE8: mov     ecx, ds:0B3F928h
0x7B1BEE: add     esp, 8
0x7B1BF1: cmp     [ecx+200h], ebx
0x7B1BF7: jz      short loc_7B1C01
0x7B1BF9: cmp     [ecx+204h], ebx
0x7B1BFF: jnz     short loc_7B1C1E
0x7B1C01: cmp     [ecx+20Ch], bl
0x7B1C07: jnz     short loc_7B1C1E
0x7B1C09: mov     edx, [ecx]
0x7B1C0B: mov     edx, [edx+144h]
0x7B1C11: lea     eax, [esp+40h+var_1C]
0x7B1C15: push    eax
0x7B1C16: call    edx
0x7B1C18: mov     ecx, ds:0B3F928h
0x7B1C1E: push    ecx
0x7B1C1F: mov     ecx, [esp+44h+arg_0]; this
0x7B1C23: call    sub_709C60
0x7B1C28: mov     esi, [edi+0B4h]
0x7B1C2E: test    esi, esi
0x7B1C30: jz      short loc_7B1C53
0x7B1C32: lea     eax, [esi+4]
0x7B1C35: push    eax; lpAddend
0x7B1C36: call    ebp ; InterlockedDecrement
0x7B1C38: test    eax, eax
0x7B1C3A: jnz     short loc_7B1C49
0x7B1C3C: test    esi, esi
0x7B1C3E: jz      short loc_7B1C49
0x7B1C40: mov     edx, [esi]
0x7B1C42: mov     eax, [edx]
0x7B1C44: push    ebx
0x7B1C45: mov     ecx, esi
0x7B1C47: call    eax
0x7B1C49: mov     dword ptr [edi+0B4h], 0
0x7B1C53: mov     ecx, [esp+40h+var_C]
0x7B1C57: mov     large fs:0, ecx
0x7B1C5E: pop     ecx
0x7B1C5F: pop     edi
0x7B1C60: pop     esi
0x7B1C61: pop     ebp
0x7B1C62: pop     ebx
0x7B1C63: add     esp, 2Ch
0x7B1C66: retn    10h
