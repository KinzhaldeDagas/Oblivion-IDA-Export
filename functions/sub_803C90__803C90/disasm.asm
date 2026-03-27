0x803C90: push    0FFFFFFFFh
0x803C92: push    offset SEH_803C90
0x803C97: mov     eax, large fs:0
0x803C9D: push    eax
0x803C9E: push    ecx
0x803C9F: push    esi
0x803CA0: push    edi
0x803CA1: mov     eax, ds:0B30AACh
0x803CA6: xor     eax, esp
0x803CA8: push    eax
0x803CA9: lea     eax, [esp+1Ch+var_C]
0x803CAD: mov     large fs:0, eax
0x803CB3: mov     edi, ecx
0x803CB5: cmp     dword ptr [edi+30h], 0
0x803CB9: lea     esi, [edi+30h]
0x803CBC: jnz     loc_803D78
0x803CC2: push    34h ; '4'; Size
0x803CC4: call    FormHeapAlloc
0x803CC9: add     esp, 4
0x803CCC: mov     [esp+1Ch+var_10], eax
0x803CD0: test    eax, eax
0x803CD2: mov     [esp+1Ch+var_4], 0
0x803CDA: jz      short loc_803CE9
0x803CDC: mov     ecx, [edi+14h]
0x803CDF: push    ecx
0x803CE0: mov     ecx, eax
0x803CE2: call    NiD3DShaderCostantMapVertex__Construct
0x803CE7: jmp     short loc_803CEB
0x803CE9: xor     eax, eax
0x803CEB: push    eax; a2
0x803CEC: mov     ecx, esi; this
0x803CEE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x803CF6: call    NiSmartPointer_Set??
0x803CFB: mov     ecx, [esi]
0x803CFD: mov     edx, [ecx]
0x803CFF: mov     edx, [edx+18h]
0x803D02: push    0
0x803D04: lea     eax, [edi+0A8h]
0x803D0A: push    eax
0x803D0B: push    4
0x803D0D: push    10h
0x803D0F: push    offset EmptyString
0x803D14: push    1
0x803D16: push    6
0x803D18: push    0
0x803D1A: push    10000007h
0x803D1F: push    offset aTexratio0; "texRatio0"
0x803D24: call    edx
0x803D26: mov     ecx, [esi]
0x803D28: mov     eax, [ecx]
0x803D2A: mov     edx, [eax+18h]
0x803D2D: push    0
0x803D2F: push    offset dword_B474CC
0x803D34: push    4
0x803D36: push    10h
0x803D38: push    offset EmptyString
0x803D3D: push    1
0x803D3F: push    8
0x803D41: push    0
0x803D43: push    10000007h
0x803D48: push    offset aRowone; "RowOne"
0x803D4D: call    edx
0x803D4F: mov     ecx, [esi]
0x803D51: mov     eax, [ecx]
0x803D53: mov     edx, [eax+18h]
0x803D56: push    0
0x803D58: push    offset dword_B474DC
0x803D5D: push    4
0x803D5F: push    10h
0x803D61: push    offset EmptyString
0x803D66: push    1
0x803D68: push    9
0x803D6A: push    0
0x803D6C: push    10000007h
0x803D71: push    offset aRowtwo; "RowTwo"
0x803D76: call    edx
0x803D78: cmp     dword ptr [edi+2Ch], 0
0x803D7C: lea     esi, [edi+2Ch]
0x803D7F: jnz     loc_803E13
0x803D85: push    34h ; '4'; Size
0x803D87: call    FormHeapAlloc
0x803D8C: add     esp, 4
0x803D8F: mov     [esp+1Ch+var_10], eax
0x803D93: test    eax, eax
0x803D95: mov     [esp+1Ch+var_4], 1
0x803D9D: jz      short loc_803DAC
0x803D9F: mov     ecx, [edi+14h]
0x803DA2: push    ecx
0x803DA3: mov     ecx, eax
0x803DA5: call    NiD3DShaderCostantMapPixel__Construct
0x803DAA: jmp     short loc_803DAE
0x803DAC: xor     eax, eax
0x803DAE: push    eax; a2
0x803DAF: mov     ecx, esi; this
0x803DB1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x803DB9: call    NiSmartPointer_Set??
0x803DBE: mov     ecx, [esi]
0x803DC0: mov     edx, [ecx]
0x803DC2: mov     eax, [edx+18h]
0x803DC5: push    0
0x803DC7: push    offset flt_B2E03C
0x803DCC: push    4
0x803DCE: push    10h
0x803DD0: push    offset EmptyString
0x803DD5: push    1
0x803DD7: push    3
0x803DD9: push    0
0x803DDB: push    10000007h
0x803DE0: push    offset aBlurscale; "blurscale"
0x803DE5: call    eax
0x803DE7: mov     ecx, [esi]
0x803DE9: mov     edx, [ecx]
0x803DEB: mov     eax, [edx+18h]
0x803DEE: push    0
0x803DF0: push    offset unk_B474F8
0x803DF5: push    4
0x803DF7: push    100h
0x803DFC: push    offset EmptyString
0x803E01: push    10h
0x803E03: push    4
0x803E05: push    0
0x803E07: push    10000009h
0x803E0C: push    offset aBlurdata; "blurdata"
0x803E11: call    eax
0x803E13: mov     ecx, [esp+1Ch+a2]
0x803E17: push    ecx; a2
0x803E18: mov     ecx, edi; this
0x803E1A: call    sub_77AA60
0x803E1F: mov     ecx, dword ptr [esp+1Ch+var_C]
0x803E23: mov     large fs:0, ecx
0x803E2A: pop     ecx
0x803E2B: pop     edi
0x803E2C: pop     esi
0x803E2D: add     esp, 10h
0x803E30: retn    4
