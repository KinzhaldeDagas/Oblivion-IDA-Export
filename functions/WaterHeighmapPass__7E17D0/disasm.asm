0x7E17D0: push    0FFFFFFFFh
0x7E17D2: push    offset WaterHeighmapPass_SEH
0x7E17D7: mov     eax, large fs:0
0x7E17DD: push    eax
0x7E17DE: sub     esp, 30h
0x7E17E1: push    ebx
0x7E17E2: push    ebp
0x7E17E3: push    esi
0x7E17E4: push    edi
0x7E17E5: mov     eax, ds:0B30AACh
0x7E17EA: xor     eax, esp
0x7E17EC: push    eax
0x7E17ED: lea     eax, [esp+50h+var_C]
0x7E17F1: mov     large fs:0, eax
0x7E17F7: mov     ebp, ecx
0x7E17F9: cmp     byte ptr [ebp+108h], 0
0x7E1800: jnz     short loc_7E1807
0x7E1802: call    sub_7E1710
0x7E1807: mov     ecx, ds:0B3F928h
0x7E180D: mov     eax, [ecx]
0x7E180F: mov     edx, [eax+7Ch]
0x7E1812: call    edx
0x7E1814: mov     ebx, [esp+50h+arg_4]
0x7E1818: mov     esi, eax
0x7E181A: mov     eax, [ebx]
0x7E181C: mov     ecx, [eax+20h]
0x7E181F: test    ecx, ecx
0x7E1821: jz      short loc_7E182E
0x7E1823: mov     eax, [ecx]
0x7E1825: mov     edx, [eax+4Ch]
0x7E1828: call    edx
0x7E182A: mov     edi, eax
0x7E182C: jmp     short loc_7E1830
0x7E182E: xor     edi, edi
0x7E1830: mov     eax, [esi]
0x7E1832: mov     edx, [eax+4Ch]
0x7E1835: push    0
0x7E1837: mov     ecx, esi
0x7E1839: call    edx
0x7E183B: test    eax, eax
0x7E183D: mov     [esp+50h+var_20], eax
0x7E1841: fild    [esp+50h+var_20]
0x7E1845: jge     short loc_7E184D
0x7E1847: fadd    dword ptr ds:0A2FC78h
0x7E184D: test    edi, edi
0x7E184F: mov     [esp+50h+var_20], edi
0x7E1853: fild    [esp+50h+var_20]
0x7E1857: jge     short loc_7E185F
0x7E1859: fadd    dword ptr ds:0A2FC78h
0x7E185F: fdivp   st(1), st
0x7E1861: mov     ecx, ds:0B3F928h
0x7E1867: mov     eax, [ecx]
0x7E1869: mov     edx, [eax+7Ch]
0x7E186C: fstp    [esp+50h+var_2C]
0x7E1870: call    edx
0x7E1872: mov     esi, eax
0x7E1874: mov     eax, [ebx]
0x7E1876: mov     ecx, [eax+20h]
0x7E1879: test    ecx, ecx
0x7E187B: jz      short loc_7E1888
0x7E187D: mov     eax, [ecx]
0x7E187F: mov     edx, [eax+50h]
0x7E1882: call    edx
0x7E1884: mov     edi, eax
0x7E1886: jmp     short loc_7E188A
0x7E1888: xor     edi, edi
0x7E188A: mov     eax, [esi]
0x7E188C: mov     edx, [eax+50h]
0x7E188F: push    0
0x7E1891: mov     ecx, esi
0x7E1893: call    edx
0x7E1895: test    eax, eax
0x7E1897: mov     [esp+50h+var_20], eax
0x7E189B: fild    [esp+50h+var_20]
0x7E189F: jge     short loc_7E18A7
0x7E18A1: fadd    dword ptr ds:0A2FC78h
0x7E18A7: test    edi, edi
0x7E18A9: mov     [esp+50h+var_20], edi
0x7E18AD: fild    [esp+50h+var_20]
0x7E18B1: jge     short loc_7E18B9
0x7E18B3: fadd    dword ptr ds:0A2FC78h
0x7E18B9: cmp     byte ptr ds:0B42E96h, 0
0x7E18C0: fdivp   st(1), st
0x7E18C2: fstp    [esp+50h+var_34+4]
0x7E18C6: fldz
0x7E18C8: fst     [esp+50h+var_1C.l]
0x7E18CC: fld1
0x7E18CE: fst     [esp+50h+var_1C.r]
0x7E18D2: fst     [esp+50h+var_1C.t]
0x7E18D6: fxch    st(1)
0x7E18D8: fstp    [esp+50h+var_1C.b]
0x7E18DC: jz      short loc_7E18E6
0x7E18DE: fst     [esp+50h+var_2C]
0x7E18E2: fst     [esp+50h+var_34+4]
0x7E18E6: mov     eax, [ebx]
0x7E18E8: mov     ecx, [eax+20h]
0x7E18EB: test    ecx, ecx
0x7E18ED: jz      short loc_7E18FC
0x7E18EF: mov     eax, [ecx]
0x7E18F1: fstp    st
0x7E18F3: mov     edx, [eax+4Ch]
0x7E18F6: call    edx
0x7E18F8: fld1
0x7E18FA: jmp     short loc_7E18FE
0x7E18FC: xor     eax, eax
0x7E18FE: test    eax, eax
0x7E1900: mov     [esp+50h+var_20], eax
0x7E1904: fild    [esp+50h+var_20]
0x7E1908: jge     short loc_7E1910
0x7E190A: fadd    dword ptr ds:0A2FC78h
0x7E1910: fdivr   qword ptr ds:0A2FAA0h
0x7E1916: mov     eax, [ebx]
0x7E1918: mov     ecx, [eax+20h]
0x7E191B: test    ecx, ecx
0x7E191D: fstp    [esp+50h+var_24]
0x7E1921: jz      short loc_7E1930
0x7E1923: mov     eax, [ecx]
0x7E1925: fstp    st
0x7E1927: mov     edx, [eax+50h]
0x7E192A: call    edx
0x7E192C: fld1
0x7E192E: jmp     short loc_7E1932
0x7E1930: xor     eax, eax
0x7E1932: test    eax, eax
0x7E1934: mov     [esp+50h+var_20], eax
0x7E1938: fild    [esp+50h+var_20]
0x7E193C: jge     short loc_7E1944
0x7E193E: fadd    dword ptr ds:0A2FC78h
0x7E1944: cmp     byte ptr [esp+50h+arg_C], 0
0x7E1949: fdivr   qword ptr ds:0A2FAA0h
0x7E194F: fstp    [esp+50h+var_28]
0x7E1953: fld     [esp+50h+var_2C]
0x7E1957: fst     dword ptr [ebp+90h]
0x7E195D: fld     [esp+50h+var_34+4]
0x7E1961: fst     dword ptr [ebp+94h]
0x7E1967: fld     [esp+50h+var_24]
0x7E196B: fldz
0x7E196D: fadd    st(1), st
0x7E196F: fxch    st(1)
0x7E1971: fstp    dword ptr [ebp+98h]
0x7E1977: fadd    [esp+50h+var_28]
0x7E197B: fstp    dword ptr [ebp+9Ch]
0x7E1981: jz      short loc_7E198D
0x7E1983: fstp    st(1)
0x7E1985: fstp    st
0x7E1987: fst     [esp+50h+var_1C.r]
0x7E198B: jmp     short loc_7E1993
0x7E198D: fstp    st(2)
0x7E198F: fstp    [esp+50h+var_1C.r]
0x7E1993: mov     al, ds:0B43075h
0x7E1998: fstp    [esp+50h+var_1C.t]
0x7E199C: mov     ecx, ds:0B45FCCh
0x7E19A2: neg     al
0x7E19A4: lea     esi, [ebp+0E8h]
0x7E19AA: mov     [esp+50h+var_2C], ecx
0x7E19AE: mov     [esp+50h+var_28], esi
0x7E19B2: sbb     eax, eax
0x7E19B4: and     eax, 7
0x7E19B7: mov     [esp+50h+a1], eax
0x7E19BB: mov     eax, [esi]
0x7E19BD: test    eax, eax
0x7E19BF: jnz     short loc_7E19DD
0x7E19C1: mov     edx, ds:0B43104h
0x7E19C7: mov     ecx, ds:0B42F50h; this
0x7E19CD: push    6; a3
0x7E19CF: push    edx; a2
0x7E19D0: call    BSTextureManager_GetDefaultRenderTarget
0x7E19D5: push    eax; a2
0x7E19D6: mov     ecx, esi; this
0x7E19D8: call    NiSmartPointer_Set??
0x7E19DD: cmp     dword ptr [ebp+0F0h], 0
0x7E19E4: lea     esi, [ebp+0F0h]
0x7E19EA: mov     [esp+50h+var_20], esi
0x7E19EE: jnz     short loc_7E1A0B
0x7E19F0: mov     eax, ds:0B43104h
0x7E19F5: mov     ecx, ds:0B42F50h; this
0x7E19FB: push    6; a3
0x7E19FD: push    eax; a2
0x7E19FE: call    BSTextureManager_GetDefaultRenderTarget
0x7E1A03: push    eax; a2
0x7E1A04: mov     ecx, esi; this
0x7E1A06: call    NiSmartPointer_Set??
0x7E1A0B: cmp     dword ptr [ebp+0F4h], 0
0x7E1A12: lea     edi, [ebp+0F4h]
0x7E1A18: mov     [esp+50h+var_24], edi
0x7E1A1C: jnz     short loc_7E1A3A
0x7E1A1E: mov     ecx, ds:0B43104h
0x7E1A24: push    6; a3
0x7E1A26: push    ecx; a2
0x7E1A27: mov     ecx, ds:0B42F50h; this
0x7E1A2D: call    BSTextureManager_GetDefaultRenderTarget
0x7E1A32: push    eax; a2
0x7E1A33: mov     ecx, edi; this
0x7E1A35: call    NiSmartPointer_Set??
0x7E1A3A: mov     eax, [esi]
0x7E1A3C: test    eax, eax
0x7E1A3E: mov     ebx, ds:0A28078h
0x7E1A44: mov     [esp+50h+arg_C], eax
0x7E1A48: jz      short loc_7E1A50
0x7E1A4A: add     eax, 4
0x7E1A4D: push    eax; lpAddend
0x7E1A4E: call    ebx ; InterlockedIncrement
0x7E1A50: mov     esi, [ebp+0ECh]
0x7E1A56: cmp     esi, [edi]
0x7E1A58: mov     [esp+50h+var_4], 0
0x7E1A60: jz      short loc_7E1A94
0x7E1A62: test    esi, esi
0x7E1A64: jz      short loc_7E1A82
0x7E1A66: lea     edx, [esi+4]
0x7E1A69: push    edx; lpAddend
0x7E1A6A: call    dword ptr ds:0A2807Ch
0x7E1A70: test    eax, eax
0x7E1A72: jnz     short loc_7E1A82
0x7E1A74: test    esi, esi
0x7E1A76: jz      short loc_7E1A82
0x7E1A78: mov     eax, [esi]
0x7E1A7A: mov     edx, [eax]
0x7E1A7C: push    1
0x7E1A7E: mov     ecx, esi
0x7E1A80: call    edx
0x7E1A82: mov     eax, [edi]
0x7E1A84: test    eax, eax
0x7E1A86: mov     [ebp+0ECh], eax
0x7E1A8C: jz      short loc_7E1A94
0x7E1A8E: add     eax, 4
0x7E1A91: push    eax; lpAddend
0x7E1A92: call    ebx ; InterlockedIncrement
0x7E1A94: mov     ebx, [ebp+0ECh]
0x7E1A9A: xor     esi, esi
0x7E1A9C: cmp     ebx, esi
0x7E1A9E: mov     [esp+50h+var_34+4], ebx
0x7E1AA2: jz      short loc_7E1AAE
0x7E1AA4: lea     eax, [ebx+4]
0x7E1AA7: push    eax; lpAddend
0x7E1AA8: call    dword ptr ds:0A28078h
0x7E1AAE: mov     [esp+50h+var_3C], esi
0x7E1AB2: mov     edi, [esp+50h+var_28]
0x7E1AB6: mov     ecx, [edi]; this
0x7E1AB8: mov     byte ptr [esp+50h+var_4], 2
0x7E1ABD: mov     [ebp+0D0h], esi
0x7E1AC3: call    BSRenderedTexture__UseTextureToRender
0x7E1AC8: mov     ecx, [esp+50h+a1]
0x7E1ACC: push    eax; a2
0x7E1ACD: push    ecx; a1
0x7E1ACE: call    NiRenderer_BeginScene
0x7E1AD3: mov     ecx, ds:0B3F928h
0x7E1AD9: mov     eax, 1
0x7E1ADE: add     esp, 8
0x7E1AE1: cmp     [ecx+200h], eax
0x7E1AE7: jz      short loc_7E1AF1
0x7E1AE9: cmp     [ecx+204h], eax
0x7E1AEF: jnz     short loc_7E1B0E
0x7E1AF1: cmp     [ecx+20Ch], al
0x7E1AF7: jnz     short loc_7E1B0E
0x7E1AF9: mov     edx, [ecx]
0x7E1AFB: mov     edx, [edx+144h]
0x7E1B01: lea     eax, [esp+50h+var_1C]
0x7E1B05: push    eax
0x7E1B06: call    edx
0x7E1B08: mov     ecx, ds:0B3F928h
0x7E1B0E: push    ecx
0x7E1B0F: mov     ecx, [esp+54h+arg_0]; this
0x7E1B13: call    sub_709C60
0x7E1B18: call    NiRenderer_EndScene
0x7E1B1D: mov     esi, [ebp+0ECh]
0x7E1B23: cmp     esi, [edi]
0x7E1B25: jz      short loc_7E1B5D
0x7E1B27: test    esi, esi
0x7E1B29: jz      short loc_7E1B47
0x7E1B2B: lea     eax, [esi+4]
0x7E1B2E: push    eax; lpAddend
0x7E1B2F: call    dword ptr ds:0A2807Ch
0x7E1B35: test    eax, eax
0x7E1B37: jnz     short loc_7E1B47
0x7E1B39: test    esi, esi
0x7E1B3B: jz      short loc_7E1B47
0x7E1B3D: mov     edx, [esi]
0x7E1B3F: mov     eax, [edx]
0x7E1B41: push    1
0x7E1B43: mov     ecx, esi
0x7E1B45: call    eax
0x7E1B47: mov     eax, [edi]
0x7E1B49: test    eax, eax
0x7E1B4B: mov     [ebp+0ECh], eax
0x7E1B51: jz      short loc_7E1B5D
0x7E1B53: add     eax, 4
0x7E1B56: push    eax; lpAddend
0x7E1B57: call    dword ptr ds:0A28078h
0x7E1B5D: mov     edi, [esp+50h+arg_C]
0x7E1B61: mov     ecx, edi; this
0x7E1B63: mov     dword ptr [ebp+0D0h], 3
0x7E1B6D: call    BSRenderedTexture__UseTextureToRender
0x7E1B72: mov     ecx, [esp+50h+a1]
0x7E1B76: push    eax; a2
0x7E1B77: push    ecx; a1
0x7E1B78: call    NiRenderer_BeginScene
0x7E1B7D: mov     ecx, ds:0B3F928h
0x7E1B83: mov     eax, 1
0x7E1B88: add     esp, 8
0x7E1B8B: cmp     [ecx+200h], eax
0x7E1B91: jz      short loc_7E1B9B
0x7E1B93: cmp     [ecx+204h], eax
0x7E1B99: jnz     short loc_7E1BB8
0x7E1B9B: cmp     [ecx+20Ch], al
0x7E1BA1: jnz     short loc_7E1BB8
0x7E1BA3: mov     edx, [ecx]
0x7E1BA5: mov     edx, [edx+144h]
0x7E1BAB: lea     eax, [esp+50h+var_1C]
0x7E1BAF: push    eax
0x7E1BB0: call    edx
0x7E1BB2: mov     ecx, ds:0B3F928h
0x7E1BB8: push    ecx
0x7E1BB9: mov     ecx, [esp+54h+arg_0]; this
0x7E1BBD: call    sub_709C60
0x7E1BC2: call    NiRenderer_EndScene
0x7E1BC7: test    ebx, ebx
0x7E1BC9: jz      short loc_7E1BD9
0x7E1BCB: lea     eax, [ebx+4]
0x7E1BCE: push    eax; lpAddend
0x7E1BCF: mov     [esp+54h+var_3C], ebx
0x7E1BD3: call    dword ptr ds:0A28078h
0x7E1BD9: mov     esi, [ebp+0ECh]
0x7E1BDF: cmp     esi, edi
0x7E1BE1: jz      short loc_7E1C17
0x7E1BE3: test    esi, esi
0x7E1BE5: jz      short loc_7E1C03
0x7E1BE7: lea     ecx, [esi+4]
0x7E1BEA: push    ecx; lpAddend
0x7E1BEB: call    dword ptr ds:0A2807Ch
0x7E1BF1: test    eax, eax
0x7E1BF3: jnz     short loc_7E1C03
0x7E1BF5: test    esi, esi
0x7E1BF7: jz      short loc_7E1C03
0x7E1BF9: mov     edx, [esi]
0x7E1BFB: mov     eax, [edx]
0x7E1BFD: push    1
0x7E1BFF: mov     ecx, esi
0x7E1C01: call    eax
0x7E1C03: test    edi, edi
0x7E1C05: mov     [ebp+0ECh], edi
0x7E1C0B: jz      short loc_7E1C17
0x7E1C0D: lea     ecx, [edi+4]
0x7E1C10: push    ecx; lpAddend
0x7E1C11: call    dword ptr ds:0A28078h
0x7E1C17: cmp     ebx, [ebp+0ECh]
0x7E1C1D: jz      short loc_7E1C53
0x7E1C1F: test    ebx, ebx
0x7E1C21: jz      short loc_7E1C3B
0x7E1C23: lea     edx, [ebx+4]
0x7E1C26: push    edx; lpAddend
0x7E1C27: call    dword ptr ds:0A2807Ch
0x7E1C2D: test    eax, eax
0x7E1C2F: jnz     short loc_7E1C3B
0x7E1C31: mov     eax, [ebx]
0x7E1C33: mov     edx, [eax]
0x7E1C35: push    1
0x7E1C37: mov     ecx, ebx
0x7E1C39: call    edx
0x7E1C3B: mov     ebx, [ebp+0ECh]
0x7E1C41: test    ebx, ebx
0x7E1C43: mov     [esp+50h+var_34+4], ebx
0x7E1C47: jz      short loc_7E1C53
0x7E1C49: lea     eax, [ebx+4]
0x7E1C4C: push    eax; lpAddend
0x7E1C4D: call    dword ptr ds:0A28078h
0x7E1C53: mov     esi, [esp+50h+var_3C]
0x7E1C57: cmp     edi, esi
0x7E1C59: jz      short loc_7E1C8B
0x7E1C5B: test    edi, edi
0x7E1C5D: jz      short loc_7E1C77
0x7E1C5F: lea     ecx, [edi+4]
0x7E1C62: push    ecx; lpAddend
0x7E1C63: call    dword ptr ds:0A2807Ch
0x7E1C69: test    eax, eax
0x7E1C6B: jnz     short loc_7E1C77
0x7E1C6D: mov     edx, [edi]
0x7E1C6F: mov     eax, [edx]
0x7E1C71: push    1
0x7E1C73: mov     ecx, edi
0x7E1C75: call    eax
0x7E1C77: test    esi, esi
0x7E1C79: mov     edi, esi
0x7E1C7B: mov     [esp+50h+arg_C], edi
0x7E1C7F: jz      short loc_7E1C8B
0x7E1C81: add     esi, 4
0x7E1C84: push    esi; lpAddend
0x7E1C85: call    dword ptr ds:0A28078h
0x7E1C8B: mov     esi, 1
0x7E1C90: mov     ecx, edi; this
0x7E1C92: mov     [ebp+0D0h], esi
0x7E1C98: call    BSRenderedTexture__UseTextureToRender
0x7E1C9D: mov     ecx, [esp+50h+a1]
0x7E1CA1: push    eax; a2
0x7E1CA2: push    ecx; a1
0x7E1CA3: call    NiRenderer_BeginScene
0x7E1CA8: mov     ecx, ds:0B3F928h
0x7E1CAE: add     esp, 8
0x7E1CB1: cmp     [ecx+200h], esi
0x7E1CB7: jz      short loc_7E1CC1
0x7E1CB9: cmp     [ecx+204h], esi
0x7E1CBF: jnz     short loc_7E1CDF
0x7E1CC1: cmp     byte ptr [ecx+20Ch], 1
0x7E1CC8: jnz     short loc_7E1CDF
0x7E1CCA: mov     edx, [ecx]
0x7E1CCC: mov     edx, [edx+144h]
0x7E1CD2: lea     eax, [esp+50h+var_1C]
0x7E1CD6: push    eax
0x7E1CD7: call    edx
0x7E1CD9: mov     ecx, ds:0B3F928h
0x7E1CDF: push    ecx
0x7E1CE0: mov     ecx, [esp+54h+arg_0]; this
0x7E1CE4: call    sub_709C60
0x7E1CE9: call    NiRenderer_EndScene
0x7E1CEE: cmp     [esp+50h+var_2C], 0
0x7E1CF3: mov     [esp+50h+var_34], 0
0x7E1CFB: jle     loc_7E1E74
0x7E1D01: mov     edi, [esp+50h+arg_C]
0x7E1D05: fild    [esp+50h+var_34]
0x7E1D09: mov     ecx, edi; this
0x7E1D0B: fmul    qword ptr ds:0A40350h
0x7E1D11: fadd    qword ptr ds:0A46038h
0x7E1D17: fstp    dword ptr [ebp+104h]
0x7E1D1D: call    BSRenderedTexture__UseTextureToRender
0x7E1D22: push    eax; a2
0x7E1D23: mov     eax, [esp+54h+a1]
0x7E1D27: push    eax; a1
0x7E1D28: call    NiRenderer_BeginScene
0x7E1D2D: mov     ecx, ds:0B3F928h
0x7E1D33: mov     eax, 1
0x7E1D38: add     esp, 8
0x7E1D3B: cmp     [ecx+200h], eax
0x7E1D41: jz      short loc_7E1D4B
0x7E1D43: cmp     [ecx+204h], eax
0x7E1D49: jnz     short loc_7E1D68
0x7E1D4B: cmp     [ecx+20Ch], al
0x7E1D51: jnz     short loc_7E1D68
0x7E1D53: mov     edx, [ecx]
0x7E1D55: mov     edx, [edx+144h]
0x7E1D5B: lea     eax, [esp+50h+var_1C]
0x7E1D5F: push    eax
0x7E1D60: call    edx
0x7E1D62: mov     ecx, ds:0B3F928h
0x7E1D68: push    ecx
0x7E1D69: mov     ecx, [esp+54h+arg_0]; this
0x7E1D6D: call    sub_709C60
0x7E1D72: mov     esi, [esp+50h+var_3C]
0x7E1D76: cmp     esi, ebx
0x7E1D78: jz      short loc_7E1DA8
0x7E1D7A: test    esi, esi
0x7E1D7C: jz      short loc_7E1D96
0x7E1D7E: lea     eax, [esi+4]
0x7E1D81: push    eax; lpAddend
0x7E1D82: call    dword ptr ds:0A2807Ch
0x7E1D88: test    eax, eax
0x7E1D8A: jnz     short loc_7E1D96
0x7E1D8C: mov     edx, [esi]
0x7E1D8E: mov     eax, [edx]
0x7E1D90: push    1
0x7E1D92: mov     ecx, esi
0x7E1D94: call    eax
0x7E1D96: test    ebx, ebx
0x7E1D98: mov     [esp+50h+var_3C], ebx
0x7E1D9C: jz      short loc_7E1DA8
0x7E1D9E: lea     ecx, [ebx+4]
0x7E1DA1: push    ecx; lpAddend
0x7E1DA2: call    dword ptr ds:0A28078h
0x7E1DA8: mov     esi, [ebp+0ECh]
0x7E1DAE: cmp     esi, edi
0x7E1DB0: jz      short loc_7E1DE6
0x7E1DB2: test    esi, esi
0x7E1DB4: jz      short loc_7E1DD2
0x7E1DB6: lea     edx, [esi+4]
0x7E1DB9: push    edx; lpAddend
0x7E1DBA: call    dword ptr ds:0A2807Ch
0x7E1DC0: test    eax, eax
0x7E1DC2: jnz     short loc_7E1DD2
0x7E1DC4: test    esi, esi
0x7E1DC6: jz      short loc_7E1DD2
0x7E1DC8: mov     eax, [esi]
0x7E1DCA: mov     edx, [eax]
0x7E1DCC: push    1
0x7E1DCE: mov     ecx, esi
0x7E1DD0: call    edx
0x7E1DD2: test    edi, edi
0x7E1DD4: mov     [ebp+0ECh], edi
0x7E1DDA: jz      short loc_7E1DE6
0x7E1DDC: lea     eax, [edi+4]
0x7E1DDF: push    eax; lpAddend
0x7E1DE0: call    dword ptr ds:0A28078h
0x7E1DE6: cmp     ebx, [ebp+0ECh]
0x7E1DEC: jz      short loc_7E1E22
0x7E1DEE: test    ebx, ebx
0x7E1DF0: jz      short loc_7E1E0A
0x7E1DF2: lea     ecx, [ebx+4]
0x7E1DF5: push    ecx; lpAddend
0x7E1DF6: call    dword ptr ds:0A2807Ch
0x7E1DFC: test    eax, eax
0x7E1DFE: jnz     short loc_7E1E0A
0x7E1E00: mov     edx, [ebx]
0x7E1E02: mov     eax, [edx]
0x7E1E04: push    1
0x7E1E06: mov     ecx, ebx
0x7E1E08: call    eax
0x7E1E0A: mov     ebx, [ebp+0ECh]
0x7E1E10: test    ebx, ebx
0x7E1E12: mov     [esp+50h+var_34+4], ebx
0x7E1E16: jz      short loc_7E1E22
0x7E1E18: lea     ecx, [ebx+4]
0x7E1E1B: push    ecx; lpAddend
0x7E1E1C: call    dword ptr ds:0A28078h
0x7E1E22: mov     esi, [esp+50h+var_3C]
0x7E1E26: cmp     edi, esi
0x7E1E28: jz      short loc_7E1E5A
0x7E1E2A: test    edi, edi
0x7E1E2C: jz      short loc_7E1E46
0x7E1E2E: lea     edx, [edi+4]
0x7E1E31: push    edx; lpAddend
0x7E1E32: call    dword ptr ds:0A2807Ch
0x7E1E38: test    eax, eax
0x7E1E3A: jnz     short loc_7E1E46
0x7E1E3C: mov     eax, [edi]
0x7E1E3E: mov     edx, [eax]
0x7E1E40: push    1
0x7E1E42: mov     ecx, edi
0x7E1E44: call    edx
0x7E1E46: test    esi, esi
0x7E1E48: mov     edi, esi
0x7E1E4A: mov     [esp+50h+arg_C], edi
0x7E1E4E: jz      short loc_7E1E5A
0x7E1E50: add     esi, 4
0x7E1E53: push    esi; lpAddend
0x7E1E54: call    dword ptr ds:0A28078h
0x7E1E5A: call    NiRenderer_EndScene
0x7E1E5F: mov     eax, [esp+50h+var_34]
0x7E1E63: add     eax, 1
0x7E1E66: cmp     eax, [esp+50h+var_2C]
0x7E1E6A: mov     [esp+50h+var_34], eax
0x7E1E6E: jl      loc_7E1D05
0x7E1E74: mov     ecx, [esp+50h+arg_C]; this
0x7E1E78: mov     dword ptr [ebp+0D0h], 4
0x7E1E82: call    BSRenderedTexture__UseTextureToRender
0x7E1E87: push    eax; a2
0x7E1E88: mov     eax, [esp+54h+a1]
0x7E1E8C: push    eax; a1
0x7E1E8D: call    NiRenderer_BeginScene
0x7E1E92: mov     ecx, ds:0B3F928h
0x7E1E98: mov     esi, 1
0x7E1E9D: add     esp, 8
0x7E1EA0: cmp     [ecx+200h], esi
0x7E1EA6: jz      short loc_7E1EB0
0x7E1EA8: cmp     [ecx+204h], esi
0x7E1EAE: jnz     short loc_7E1ECE
0x7E1EB0: cmp     byte ptr [ecx+20Ch], 1
0x7E1EB7: jnz     short loc_7E1ECE
0x7E1EB9: mov     edx, [ecx]
0x7E1EBB: mov     edx, [edx+144h]
0x7E1EC1: lea     eax, [esp+50h+var_1C]
0x7E1EC5: push    eax
0x7E1EC6: call    edx
0x7E1EC8: mov     ecx, ds:0B3F928h
0x7E1ECE: push    ecx
0x7E1ECF: mov     ecx, [esp+54h+arg_0]; this
0x7E1ED3: call    sub_709C60
0x7E1ED8: call    NiRenderer_EndScene
0x7E1EDD: mov     edi, [esp+50h+var_3C]
0x7E1EE1: cmp     edi, ebx
0x7E1EE3: jz      short loc_7E1F14
0x7E1EE5: test    edi, edi
0x7E1EE7: jz      short loc_7E1F00
0x7E1EE9: lea     eax, [edi+4]
0x7E1EEC: push    eax; lpAddend
0x7E1EED: call    dword ptr ds:0A2807Ch
0x7E1EF3: test    eax, eax
0x7E1EF5: jnz     short loc_7E1F00
0x7E1EF7: mov     edx, [edi]
0x7E1EF9: mov     eax, [edx]
0x7E1EFB: push    esi
0x7E1EFC: mov     ecx, edi
0x7E1EFE: call    eax
0x7E1F00: test    ebx, ebx
0x7E1F02: mov     edi, ebx
0x7E1F04: mov     [esp+50h+var_3C], edi
0x7E1F08: jz      short loc_7E1F14
0x7E1F0A: lea     ecx, [ebx+4]
0x7E1F0D: push    ecx; lpAddend
0x7E1F0E: call    dword ptr ds:0A28078h
0x7E1F14: mov     esi, [ebp+0ECh]
0x7E1F1A: cmp     esi, [esp+50h+arg_C]
0x7E1F1E: jz      short loc_7E1F58
0x7E1F20: test    esi, esi
0x7E1F22: jz      short loc_7E1F40
0x7E1F24: lea     edx, [esi+4]
0x7E1F27: push    edx; lpAddend
0x7E1F28: call    dword ptr ds:0A2807Ch
0x7E1F2E: test    eax, eax
0x7E1F30: jnz     short loc_7E1F40
0x7E1F32: test    esi, esi
0x7E1F34: jz      short loc_7E1F40
0x7E1F36: mov     eax, [esi]
0x7E1F38: mov     edx, [eax]
0x7E1F3A: push    1
0x7E1F3C: mov     ecx, esi
0x7E1F3E: call    edx
0x7E1F40: mov     eax, [esp+50h+arg_C]
0x7E1F44: test    eax, eax
0x7E1F46: mov     [ebp+0ECh], eax
0x7E1F4C: jz      short loc_7E1F58
0x7E1F4E: add     eax, 4
0x7E1F51: push    eax; lpAddend
0x7E1F52: call    dword ptr ds:0A28078h
0x7E1F58: cmp     ebx, [ebp+0ECh]
0x7E1F5E: jz      short loc_7E1F94
0x7E1F60: test    ebx, ebx
0x7E1F62: jz      short loc_7E1F7C
0x7E1F64: lea     ecx, [ebx+4]
0x7E1F67: push    ecx; lpAddend
0x7E1F68: call    dword ptr ds:0A2807Ch
0x7E1F6E: test    eax, eax
0x7E1F70: jnz     short loc_7E1F7C
0x7E1F72: mov     edx, [ebx]
0x7E1F74: mov     eax, [edx]
0x7E1F76: push    1
0x7E1F78: mov     ecx, ebx
0x7E1F7A: call    eax
0x7E1F7C: mov     ebx, [ebp+0ECh]
0x7E1F82: test    ebx, ebx
0x7E1F84: mov     [esp+50h+var_34+4], ebx
0x7E1F88: jz      short loc_7E1F94
0x7E1F8A: lea     ecx, [ebx+4]
0x7E1F8D: push    ecx; lpAddend
0x7E1F8E: call    dword ptr ds:0A28078h
0x7E1F94: mov     esi, [esp+50h+arg_C]
0x7E1F98: cmp     esi, edi
0x7E1F9A: jz      short loc_7E1FCA
0x7E1F9C: test    esi, esi
0x7E1F9E: jz      short loc_7E1FB8
0x7E1FA0: lea     edx, [esi+4]
0x7E1FA3: push    edx; lpAddend
0x7E1FA4: call    dword ptr ds:0A2807Ch
0x7E1FAA: test    eax, eax
0x7E1FAC: jnz     short loc_7E1FB8
0x7E1FAE: mov     eax, [esi]
0x7E1FB0: mov     edx, [eax]
0x7E1FB2: push    1
0x7E1FB4: mov     ecx, esi
0x7E1FB6: call    edx
0x7E1FB8: test    edi, edi
0x7E1FBA: mov     [esp+50h+arg_C], edi
0x7E1FBE: jz      short loc_7E1FCA
0x7E1FC0: add     edi, 4
0x7E1FC3: push    edi; lpAddend
0x7E1FC4: call    dword ptr ds:0A28078h
0x7E1FCA: mov     eax, [esp+50h+var_2C]
0x7E1FCE: xor     esi, esi
0x7E1FD0: test    eax, eax
0x7E1FD2: mov     dword ptr [ebp+0D0h], 2
0x7E1FDC: mov     [esp+50h+var_34], esi
0x7E1FE0: jle     loc_7E21C4
0x7E1FE6: fild    [esp+50h+var_34]
0x7E1FEA: lea     edi, [eax-1]
0x7E1FED: cmp     esi, edi
0x7E1FEF: fmul    qword ptr ds:0A40350h
0x7E1FF5: fadd    qword ptr ds:0A46038h
0x7E1FFB: fstp    dword ptr [ebp+104h]
0x7E2001: jnz     short loc_7E2016
0x7E2003: mov     eax, [esp+50h+arg_4]
0x7E2007: mov     ecx, [eax]; this
0x7E2009: call    BSRenderedTexture__UseTextureToRender
0x7E200E: mov     ecx, [esp+50h+a1]
0x7E2012: push    eax
0x7E2013: push    ecx
0x7E2014: jmp     short loc_7E2025
0x7E2016: mov     ecx, [esp+50h+arg_C]; this
0x7E201A: call    BSRenderedTexture__UseTextureToRender
0x7E201F: mov     edx, [esp+50h+a1]
0x7E2023: push    eax; a2
0x7E2024: push    edx; a1
0x7E2025: call    NiRenderer_BeginScene
0x7E202A: mov     ecx, ds:0B3F928h
0x7E2030: mov     eax, 1
0x7E2035: add     esp, 8
0x7E2038: cmp     [ecx+200h], eax
0x7E203E: jz      short loc_7E2048
0x7E2040: cmp     [ecx+204h], eax
0x7E2046: jnz     short loc_7E2065
0x7E2048: cmp     [ecx+20Ch], al
0x7E204E: jnz     short loc_7E2065
0x7E2050: mov     eax, [ecx]
0x7E2052: mov     eax, [eax+144h]
0x7E2058: lea     edx, [esp+50h+var_1C]
0x7E205C: push    edx
0x7E205D: call    eax
0x7E205F: mov     ecx, ds:0B3F928h
0x7E2065: push    ecx
0x7E2066: mov     ecx, [esp+54h+arg_0]; this
0x7E206A: call    sub_709C60
0x7E206F: cmp     esi, edi
0x7E2071: jnz     short loc_7E20BE
0x7E2073: mov     ecx, [esp+50h+arg_4]
0x7E2077: mov     edi, [ecx]
0x7E2079: mov     esi, [ebp+0ECh]
0x7E207F: cmp     esi, edi
0x7E2081: jz      loc_7E21A8
0x7E2087: test    esi, esi
0x7E2089: jz      short loc_7E20A7
0x7E208B: lea     edx, [esi+4]
0x7E208E: push    edx; lpAddend
0x7E208F: call    dword ptr ds:0A2807Ch
0x7E2095: test    eax, eax
0x7E2097: jnz     short loc_7E20A7
0x7E2099: test    esi, esi
0x7E209B: jz      short loc_7E20A7
0x7E209D: mov     eax, [esi]
0x7E209F: mov     edx, [eax]
0x7E20A1: push    1
0x7E20A3: mov     ecx, esi
0x7E20A5: call    edx
0x7E20A7: test    edi, edi
0x7E20A9: mov     [ebp+0ECh], edi
0x7E20AF: jz      loc_7E21A8
0x7E20B5: add     edi, 4
0x7E20B8: push    edi
0x7E20B9: jmp     loc_7E21A2
0x7E20BE: mov     esi, [esp+50h+var_3C]
0x7E20C2: cmp     esi, ebx
0x7E20C4: jz      short loc_7E20F4
0x7E20C6: test    esi, esi
0x7E20C8: jz      short loc_7E20E2
0x7E20CA: lea     eax, [esi+4]
0x7E20CD: push    eax; lpAddend
0x7E20CE: call    dword ptr ds:0A2807Ch
0x7E20D4: test    eax, eax
0x7E20D6: jnz     short loc_7E20E2
0x7E20D8: mov     edx, [esi]
0x7E20DA: mov     eax, [edx]
0x7E20DC: push    1
0x7E20DE: mov     ecx, esi
0x7E20E0: call    eax
0x7E20E2: test    ebx, ebx
0x7E20E4: mov     [esp+50h+var_3C], ebx
0x7E20E8: jz      short loc_7E20F4
0x7E20EA: lea     ecx, [ebx+4]
0x7E20ED: push    ecx; lpAddend
0x7E20EE: call    dword ptr ds:0A28078h
0x7E20F4: mov     esi, [ebp+0ECh]
0x7E20FA: mov     edi, [esp+50h+arg_C]
0x7E20FE: cmp     esi, edi
0x7E2100: jz      short loc_7E2136
0x7E2102: test    esi, esi
0x7E2104: jz      short loc_7E2122
0x7E2106: lea     edx, [esi+4]
0x7E2109: push    edx; lpAddend
0x7E210A: call    dword ptr ds:0A2807Ch
0x7E2110: test    eax, eax
0x7E2112: jnz     short loc_7E2122
0x7E2114: test    esi, esi
0x7E2116: jz      short loc_7E2122
0x7E2118: mov     eax, [esi]
0x7E211A: mov     edx, [eax]
0x7E211C: push    1
0x7E211E: mov     ecx, esi
0x7E2120: call    edx
0x7E2122: test    edi, edi
0x7E2124: mov     [ebp+0ECh], edi
0x7E212A: jz      short loc_7E2136
0x7E212C: lea     eax, [edi+4]
0x7E212F: push    eax; lpAddend
0x7E2130: call    dword ptr ds:0A28078h
0x7E2136: cmp     ebx, [ebp+0ECh]
0x7E213C: jz      short loc_7E2172
0x7E213E: test    ebx, ebx
0x7E2140: jz      short loc_7E215A
0x7E2142: lea     ecx, [ebx+4]
0x7E2145: push    ecx; lpAddend
0x7E2146: call    dword ptr ds:0A2807Ch
0x7E214C: test    eax, eax
0x7E214E: jnz     short loc_7E215A
0x7E2150: mov     edx, [ebx]
0x7E2152: mov     eax, [edx]
0x7E2154: push    1
0x7E2156: mov     ecx, ebx
0x7E2158: call    eax
0x7E215A: mov     ebx, [ebp+0ECh]
0x7E2160: test    ebx, ebx
0x7E2162: mov     [esp+50h+var_34+4], ebx
0x7E2166: jz      short loc_7E2172
0x7E2168: lea     ecx, [ebx+4]
0x7E216B: push    ecx; lpAddend
0x7E216C: call    dword ptr ds:0A28078h
0x7E2172: mov     esi, [esp+50h+var_3C]
0x7E2176: cmp     edi, esi
0x7E2178: jz      short loc_7E21A8
0x7E217A: test    edi, edi
0x7E217C: jz      short loc_7E2196
0x7E217E: lea     edx, [edi+4]
0x7E2181: push    edx; lpAddend
0x7E2182: call    dword ptr ds:0A2807Ch
0x7E2188: test    eax, eax
0x7E218A: jnz     short loc_7E2196
0x7E218C: mov     eax, [edi]
0x7E218E: mov     edx, [eax]
0x7E2190: push    1
0x7E2192: mov     ecx, edi
0x7E2194: call    edx
0x7E2196: test    esi, esi
0x7E2198: mov     [esp+50h+arg_C], esi
0x7E219C: jz      short loc_7E21A8
0x7E219E: add     esi, 4
0x7E21A1: push    esi; lpAddend
0x7E21A2: call    dword ptr ds:0A28078h
0x7E21A8: call    NiRenderer_EndScene
0x7E21AD: mov     esi, [esp+50h+var_34]
0x7E21B1: mov     eax, [esp+50h+var_2C]
0x7E21B5: add     esi, 1
0x7E21B8: cmp     esi, eax
0x7E21BA: mov     [esp+50h+var_34], esi
0x7E21BE: jl      loc_7E1FE6
0x7E21C4: cmp     byte ptr ds:0B45FD1h, 0
0x7E21CB: mov     eax, [esp+50h+arg_8]
0x7E21CF: jz      short loc_7E21DD
0x7E21D1: mov     dword ptr [ebp+0D0h], 5
0x7E21DB: jmp     short loc_7E21E7
0x7E21DD: mov     dword ptr [ebp+0D0h], 6
0x7E21E7: mov     ecx, [eax]; this
0x7E21E9: call    BSRenderedTexture__UseTextureToRender
0x7E21EE: mov     ecx, [esp+50h+a1]
0x7E21F2: push    eax; a2
0x7E21F3: push    ecx; a1
0x7E21F4: call    NiRenderer_BeginScene
0x7E21F9: mov     ecx, ds:0B3F928h
0x7E21FF: mov     eax, 1
0x7E2204: add     esp, 8
0x7E2207: cmp     [ecx+200h], eax
0x7E220D: jz      short loc_7E2217
0x7E220F: cmp     [ecx+204h], eax
0x7E2215: jnz     short loc_7E2234
0x7E2217: cmp     [ecx+20Ch], al
0x7E221D: jnz     short loc_7E2234
0x7E221F: mov     edx, [ecx]
0x7E2221: mov     edx, [edx+144h]
0x7E2227: lea     eax, [esp+50h+var_1C]
0x7E222B: push    eax
0x7E222C: call    edx
0x7E222E: mov     ecx, ds:0B3F928h
0x7E2234: push    ecx
0x7E2235: mov     ecx, [esp+54h+arg_0]; this
0x7E2239: call    sub_709C60
0x7E223E: call    NiRenderer_EndScene
0x7E2243: mov     edi, [esp+50h+var_28]
0x7E2247: mov     eax, [edi]
0x7E2249: mov     ecx, ds:0B42F50h; this
0x7E224F: push    eax; a2
0x7E2250: call    sub_7C1EE0
0x7E2255: mov     ebp, [esp+50h+var_20]
0x7E2259: mov     eax, [ebp+0]
0x7E225C: mov     ecx, ds:0B42F50h; this
0x7E2262: push    eax; a2
0x7E2263: call    sub_7C1EE0
0x7E2268: mov     eax, [esp+50h+var_24]
0x7E226C: mov     eax, [eax]
0x7E226E: mov     ecx, ds:0B42F50h; this
0x7E2274: push    eax; a2
0x7E2275: call    sub_7C1EE0
0x7E227A: mov     esi, [edi]
0x7E227C: test    esi, esi
0x7E227E: jz      short loc_7E22A2
0x7E2280: lea     ecx, [esi+4]
0x7E2283: push    ecx; lpAddend
0x7E2284: call    dword ptr ds:0A2807Ch
0x7E228A: test    eax, eax
0x7E228C: jnz     short loc_7E229C
0x7E228E: test    esi, esi
0x7E2290: jz      short loc_7E229C
0x7E2292: mov     edx, [esi]
0x7E2294: mov     eax, [edx]
0x7E2296: push    1
0x7E2298: mov     ecx, esi
0x7E229A: call    eax
0x7E229C: mov     dword ptr [edi], 0
0x7E22A2: mov     esi, [ebp+0]
0x7E22A5: test    esi, esi
0x7E22A7: mov     edi, ds:0A2807Ch
0x7E22AD: jz      short loc_7E22CE
0x7E22AF: lea     ecx, [esi+4]
0x7E22B2: push    ecx; lpAddend
0x7E22B3: call    edi ; InterlockedDecrement
0x7E22B5: test    eax, eax
0x7E22B7: jnz     short loc_7E22C7
0x7E22B9: test    esi, esi
0x7E22BB: jz      short loc_7E22C7
0x7E22BD: mov     edx, [esi]
0x7E22BF: mov     eax, [edx]
0x7E22C1: push    1
0x7E22C3: mov     ecx, esi
0x7E22C5: call    eax
0x7E22C7: mov     dword ptr [ebp+0], 0
0x7E22CE: mov     ebp, [esp+50h+var_24]
0x7E22D2: mov     esi, [ebp+0]
0x7E22D5: test    esi, esi
0x7E22D7: jz      short loc_7E22F8
0x7E22D9: lea     ecx, [esi+4]
0x7E22DC: push    ecx; lpAddend
0x7E22DD: call    edi ; InterlockedDecrement
0x7E22DF: test    eax, eax
0x7E22E1: jnz     short loc_7E22F1
0x7E22E3: test    esi, esi
0x7E22E5: jz      short loc_7E22F1
0x7E22E7: mov     edx, [esi]
0x7E22E9: mov     eax, [edx]
0x7E22EB: push    1
0x7E22ED: mov     ecx, esi
0x7E22EF: call    eax
0x7E22F1: mov     dword ptr [ebp+0], 0
0x7E22F8: mov     esi, [esp+50h+var_3C]
0x7E22FC: test    esi, esi
0x7E22FE: mov     byte ptr [esp+50h+var_4], 1
0x7E2303: jz      short loc_7E2319
0x7E2305: lea     ecx, [esi+4]
0x7E2308: push    ecx; lpAddend
0x7E2309: call    edi ; InterlockedDecrement
0x7E230B: test    eax, eax
0x7E230D: jnz     short loc_7E2319
0x7E230F: mov     edx, [esi]
0x7E2311: mov     eax, [edx]
0x7E2313: push    1
0x7E2315: mov     ecx, esi
0x7E2317: call    eax
0x7E2319: test    ebx, ebx
0x7E231B: mov     byte ptr [esp+50h+var_4], 0
0x7E2320: jz      short loc_7E2336
0x7E2322: lea     ecx, [ebx+4]
0x7E2325: push    ecx; lpAddend
0x7E2326: call    edi ; InterlockedDecrement
0x7E2328: test    eax, eax
0x7E232A: jnz     short loc_7E2336
0x7E232C: mov     edx, [ebx]
0x7E232E: mov     eax, [edx]
0x7E2330: push    1
0x7E2332: mov     ecx, ebx
0x7E2334: call    eax
0x7E2336: mov     esi, [esp+50h+arg_C]
0x7E233A: test    esi, esi
0x7E233C: mov     [esp+50h+var_4], 0FFFFFFFFh
0x7E2344: jz      short loc_7E235A
0x7E2346: lea     ecx, [esi+4]
0x7E2349: push    ecx; lpAddend
0x7E234A: call    edi ; InterlockedDecrement
0x7E234C: test    eax, eax
0x7E234E: jnz     short loc_7E235A
0x7E2350: mov     edx, [esi]
0x7E2352: mov     eax, [edx]
0x7E2354: push    1
0x7E2356: mov     ecx, esi
0x7E2358: call    eax
0x7E235A: mov     ecx, [esp+50h+var_C]
0x7E235E: mov     large fs:0, ecx
0x7E2365: pop     ecx
0x7E2366: pop     edi
0x7E2367: pop     esi
0x7E2368: pop     ebp
0x7E2369: pop     ebx
0x7E236A: add     esp, 3Ch
0x7E236D: retn    10h
