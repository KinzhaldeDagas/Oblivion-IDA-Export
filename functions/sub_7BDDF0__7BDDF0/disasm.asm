0x7BDDF0: push    0FFFFFFFFh
0x7BDDF2: push    offset SEH_803C90
0x7BDDF7: mov     eax, large fs:0
0x7BDDFD: push    eax
0x7BDDFE: push    ecx
0x7BDDFF: push    esi
0x7BDE00: push    edi
0x7BDE01: mov     eax, ds:0B30AACh
0x7BDE06: xor     eax, esp
0x7BDE08: push    eax
0x7BDE09: lea     eax, [esp+1Ch+var_C]
0x7BDE0D: mov     large fs:0, eax
0x7BDE13: mov     edi, ecx
0x7BDE15: cmp     dword ptr [edi+2Ch], 0
0x7BDE19: lea     esi, [edi+2Ch]
0x7BDE1C: jnz     loc_7BDF06
0x7BDE22: push    34h ; '4'; Size
0x7BDE24: call    FormHeapAlloc
0x7BDE29: add     esp, 4
0x7BDE2C: mov     [esp+1Ch+var_10], eax
0x7BDE30: test    eax, eax
0x7BDE32: mov     [esp+1Ch+var_4], 0
0x7BDE3A: jz      short loc_7BDE49
0x7BDE3C: mov     ecx, [edi+14h]
0x7BDE3F: push    ecx
0x7BDE40: mov     ecx, eax
0x7BDE42: call    NiD3DShaderCostantMapPixel__Construct
0x7BDE47: jmp     short loc_7BDE4B
0x7BDE49: xor     eax, eax
0x7BDE4B: push    eax; a2
0x7BDE4C: mov     ecx, esi; this
0x7BDE4E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BDE56: call    NiSmartPointer_Set??
0x7BDE5B: mov     ecx, [esi]
0x7BDE5D: mov     edx, [ecx]
0x7BDE5F: mov     edx, [edx+18h]
0x7BDE62: push    0
0x7BDE64: lea     eax, [edi+80h]
0x7BDE6A: push    eax
0x7BDE6B: push    4
0x7BDE6D: push    10h
0x7BDE6F: push    offset EmptyString
0x7BDE74: push    1
0x7BDE76: push    0
0x7BDE78: push    0
0x7BDE7A: push    10000007h
0x7BDE7F: push    offset aTimingdata; "timingdata"
0x7BDE84: call    edx
0x7BDE86: mov     ecx, [esi]
0x7BDE88: mov     eax, [ecx]
0x7BDE8A: mov     eax, [eax+18h]
0x7BDE8D: push    0
0x7BDE8F: lea     edx, [edi+108h]
0x7BDE95: push    edx
0x7BDE96: push    4
0x7BDE98: push    10h
0x7BDE9A: push    offset EmptyString
0x7BDE9F: push    1
0x7BDEA1: push    1
0x7BDEA3: push    0
0x7BDEA5: push    10000007h
0x7BDEAA: push    offset aHdrparam; "hdrparam"
0x7BDEAF: call    eax
0x7BDEB1: mov     ecx, [esi]
0x7BDEB3: mov     edx, [ecx]
0x7BDEB5: mov     eax, [edx+18h]
0x7BDEB8: push    0
0x7BDEBA: push    offset flt_B2C794
0x7BDEBF: push    4
0x7BDEC1: push    10h
0x7BDEC3: push    offset EmptyString
0x7BDEC8: push    1
0x7BDECA: push    2
0x7BDECC: push    0
0x7BDECE: push    10000007h
0x7BDED3: push    offset aBlurscale; "blurscale"
0x7BDED8: call    eax
0x7BDEDA: mov     ecx, [esi]
0x7BDEDC: mov     edx, [ecx]
0x7BDEDE: mov     eax, [edx+18h]
0x7BDEE1: push    0
0x7BDEE3: push    offset unk_B43228
0x7BDEE8: push    4
0x7BDEEA: push    100h
0x7BDEEF: push    offset EmptyString
0x7BDEF4: push    10h
0x7BDEF6: push    3
0x7BDEF8: push    0
0x7BDEFA: push    10000009h
0x7BDEFF: push    offset aBlurdata; "blurdata"
0x7BDF04: call    eax
0x7BDF06: cmp     dword ptr [edi+30h], 0
0x7BDF0A: lea     esi, [edi+30h]
0x7BDF0D: jnz     loc_7BDF9E
0x7BDF13: push    34h ; '4'; Size
0x7BDF15: call    FormHeapAlloc
0x7BDF1A: add     esp, 4
0x7BDF1D: mov     [esp+1Ch+var_10], eax
0x7BDF21: test    eax, eax
0x7BDF23: mov     [esp+1Ch+var_4], 1
0x7BDF2B: jz      short loc_7BDF3A
0x7BDF2D: mov     ecx, [edi+14h]
0x7BDF30: push    ecx
0x7BDF31: mov     ecx, eax
0x7BDF33: call    NiD3DShaderCostantMapVertex__Construct
0x7BDF38: jmp     short loc_7BDF3C
0x7BDF3A: xor     eax, eax
0x7BDF3C: push    eax; a2
0x7BDF3D: mov     ecx, esi; this
0x7BDF3F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BDF47: call    NiSmartPointer_Set??
0x7BDF4C: mov     ecx, [esi]
0x7BDF4E: mov     edx, [ecx]
0x7BDF50: mov     eax, [edx+18h]
0x7BDF53: push    0
0x7BDF55: push    offset flt_B2C774
0x7BDF5A: push    4
0x7BDF5C: push    10h
0x7BDF5E: push    offset EmptyString
0x7BDF63: push    1
0x7BDF65: push    6
0x7BDF67: push    0
0x7BDF69: push    10000007h
0x7BDF6E: push    offset aTexratio0; "texRatio0"
0x7BDF73: call    eax
0x7BDF75: mov     ecx, [esi]
0x7BDF77: mov     edx, [ecx]
0x7BDF79: mov     eax, [edx+18h]
0x7BDF7C: push    0
0x7BDF7E: push    offset flt_B2C784
0x7BDF83: push    4
0x7BDF85: push    10h
0x7BDF87: push    offset EmptyString
0x7BDF8C: push    1
0x7BDF8E: push    7
0x7BDF90: push    0
0x7BDF92: push    10000007h
0x7BDF97: push    offset aTexratio1; "texRatio1"
0x7BDF9C: call    eax
0x7BDF9E: mov     ecx, [esp+1Ch+a2]
0x7BDFA2: push    ecx; a2
0x7BDFA3: mov     ecx, edi; this
0x7BDFA5: call    sub_77AA60
0x7BDFAA: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7BDFAE: mov     large fs:0, ecx
0x7BDFB5: pop     ecx
0x7BDFB6: pop     edi
0x7BDFB7: pop     esi
0x7BDFB8: add     esp, 10h
0x7BDFBB: retn    4
