0x7E9C10: push    0FFFFFFFFh
0x7E9C12: push    offset SEH_803C90
0x7E9C17: mov     eax, large fs:0
0x7E9C1D: push    eax
0x7E9C1E: push    ecx
0x7E9C1F: push    esi
0x7E9C20: push    edi
0x7E9C21: mov     eax, ds:0B30AACh
0x7E9C26: xor     eax, esp
0x7E9C28: push    eax
0x7E9C29: lea     eax, [esp+1Ch+var_C]
0x7E9C2D: mov     large fs:0, eax
0x7E9C33: mov     edi, ecx
0x7E9C35: cmp     dword ptr [edi+2Ch], 0
0x7E9C39: lea     esi, [edi+2Ch]
0x7E9C3C: jnz     loc_7E9CF8
0x7E9C42: push    34h ; '4'; Size
0x7E9C44: call    FormHeapAlloc
0x7E9C49: add     esp, 4
0x7E9C4C: mov     [esp+1Ch+var_10], eax
0x7E9C50: test    eax, eax
0x7E9C52: mov     [esp+1Ch+var_4], 0
0x7E9C5A: jz      short loc_7E9C69
0x7E9C5C: mov     ecx, [edi+14h]
0x7E9C5F: push    ecx
0x7E9C60: mov     ecx, eax
0x7E9C62: call    NiD3DShaderCostantMapPixel__Construct
0x7E9C67: jmp     short loc_7E9C6B
0x7E9C69: xor     eax, eax
0x7E9C6B: push    eax; a2
0x7E9C6C: mov     ecx, esi; this
0x7E9C6E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E9C76: call    NiSmartPointer_Set??
0x7E9C7B: mov     ecx, [esi]
0x7E9C7D: mov     edx, [ecx]
0x7E9C7F: mov     eax, [edx+18h]
0x7E9C82: push    0
0x7E9C84: push    offset flt_B2D888
0x7E9C89: push    4
0x7E9C8B: push    10h
0x7E9C8D: push    offset EmptyString
0x7E9C92: push    1
0x7E9C94: push    0
0x7E9C96: push    0
0x7E9C98: push    10000007h
0x7E9C9D: push    offset aBlendw; "blendW"
0x7E9CA2: call    eax
0x7E9CA4: mov     ecx, [esi]
0x7E9CA6: mov     edx, [ecx]
0x7E9CA8: mov     eax, [edx+18h]
0x7E9CAB: push    0
0x7E9CAD: push    offset flt_B2D8B8
0x7E9CB2: push    4
0x7E9CB4: push    10h
0x7E9CB6: push    offset EmptyString
0x7E9CBB: push    1
0x7E9CBD: push    1
0x7E9CBF: push    0
0x7E9CC1: push    10000007h
0x7E9CC6: push    offset aBlurparams; "blurParams"
0x7E9CCB: call    eax
0x7E9CCD: mov     ecx, [esi]
0x7E9CCF: mov     edx, [ecx]
0x7E9CD1: mov     edx, [edx+18h]
0x7E9CD4: push    0
0x7E9CD6: lea     eax, [edi+0C0h]
0x7E9CDC: push    eax
0x7E9CDD: push    4
0x7E9CDF: push    10h
0x7E9CE1: push    offset EmptyString
0x7E9CE6: push    1
0x7E9CE8: push    2
0x7E9CEA: push    0
0x7E9CEC: push    10000007h
0x7E9CF1: push    offset aAlphaadd; "alphaAdd"
0x7E9CF6: call    edx
0x7E9CF8: cmp     dword ptr [edi+30h], 0
0x7E9CFC: lea     esi, [edi+30h]
0x7E9CFF: jnz     loc_7E9D90
0x7E9D05: push    34h ; '4'; Size
0x7E9D07: call    FormHeapAlloc
0x7E9D0C: add     esp, 4
0x7E9D0F: mov     [esp+1Ch+var_10], eax
0x7E9D13: test    eax, eax
0x7E9D15: mov     [esp+1Ch+var_4], 1
0x7E9D1D: jz      short loc_7E9D2C
0x7E9D1F: mov     ecx, [edi+14h]
0x7E9D22: push    ecx
0x7E9D23: mov     ecx, eax
0x7E9D25: call    NiD3DShaderCostantMapVertex__Construct
0x7E9D2A: jmp     short loc_7E9D2E
0x7E9D2C: xor     eax, eax
0x7E9D2E: push    eax; a2
0x7E9D2F: mov     ecx, esi; this
0x7E9D31: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E9D39: call    NiSmartPointer_Set??
0x7E9D3E: mov     ecx, [esi]
0x7E9D40: mov     edx, [ecx]
0x7E9D42: mov     eax, [edx+18h]
0x7E9D45: push    0
0x7E9D47: push    offset flt_B2D898
0x7E9D4C: push    4
0x7E9D4E: push    10h
0x7E9D50: push    offset EmptyString
0x7E9D55: push    1
0x7E9D57: push    6
0x7E9D59: push    0
0x7E9D5B: push    10000007h
0x7E9D60: push    offset aTexratio0; "texRatio0"
0x7E9D65: call    eax
0x7E9D67: mov     ecx, [esi]
0x7E9D69: mov     edx, [ecx]
0x7E9D6B: mov     eax, [edx+18h]
0x7E9D6E: push    0
0x7E9D70: push    offset flt_B2D8A8
0x7E9D75: push    4
0x7E9D77: push    10h
0x7E9D79: push    offset EmptyString
0x7E9D7E: push    1
0x7E9D80: push    7
0x7E9D82: push    0
0x7E9D84: push    10000007h
0x7E9D89: push    offset aTexratio1; "texRatio1"
0x7E9D8E: call    eax
0x7E9D90: mov     ecx, [esp+1Ch+a2]
0x7E9D94: push    ecx; a2
0x7E9D95: mov     ecx, edi; this
0x7E9D97: call    sub_77AA60
0x7E9D9C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7E9DA0: mov     large fs:0, ecx
0x7E9DA7: pop     ecx
0x7E9DA8: pop     edi
0x7E9DA9: pop     esi
0x7E9DAA: add     esp, 10h
0x7E9DAD: retn    4
