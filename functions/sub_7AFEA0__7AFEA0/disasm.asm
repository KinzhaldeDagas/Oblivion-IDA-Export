0x7AFEA0: push    0FFFFFFFFh
0x7AFEA2: push    offset SEH_803C90
0x7AFEA7: mov     eax, large fs:0
0x7AFEAD: push    eax
0x7AFEAE: push    ecx
0x7AFEAF: push    esi
0x7AFEB0: push    edi
0x7AFEB1: mov     eax, ds:0B30AACh
0x7AFEB6: xor     eax, esp
0x7AFEB8: push    eax
0x7AFEB9: lea     eax, [esp+1Ch+var_C]
0x7AFEBD: mov     large fs:0, eax
0x7AFEC3: mov     edi, ecx
0x7AFEC5: cmp     dword ptr [edi+2Ch], 0
0x7AFEC9: lea     esi, [edi+2Ch]
0x7AFECC: jnz     loc_7AFF5F
0x7AFED2: push    34h ; '4'; Size
0x7AFED4: call    FormHeapAlloc
0x7AFED9: add     esp, 4
0x7AFEDC: mov     [esp+1Ch+var_10], eax
0x7AFEE0: test    eax, eax
0x7AFEE2: mov     [esp+1Ch+var_4], 0
0x7AFEEA: jz      short loc_7AFEF9
0x7AFEEC: mov     ecx, [edi+14h]
0x7AFEEF: push    ecx
0x7AFEF0: mov     ecx, eax
0x7AFEF2: call    NiD3DShaderCostantMapPixel__Construct
0x7AFEF7: jmp     short loc_7AFEFB
0x7AFEF9: xor     eax, eax
0x7AFEFB: push    eax; a2
0x7AFEFC: mov     ecx, esi; this
0x7AFEFE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7AFF06: call    NiSmartPointer_Set??
0x7AFF0B: mov     ecx, [esi]
0x7AFF0D: mov     edx, [ecx]
0x7AFF0F: mov     eax, [edx+18h]
0x7AFF12: push    0
0x7AFF14: push    offset flt_B2C2C4
0x7AFF19: push    4
0x7AFF1B: push    10h
0x7AFF1D: push    offset EmptyString
0x7AFF22: push    1
0x7AFF24: push    0
0x7AFF26: push    0
0x7AFF28: push    10000007h
0x7AFF2D: push    offset aBlendw; "blendW"
0x7AFF32: call    eax
0x7AFF34: mov     ecx, [esi]
0x7AFF36: mov     edx, [ecx]
0x7AFF38: mov     edx, [edx+18h]
0x7AFF3B: push    0
0x7AFF3D: lea     eax, [edi+0D0h]
0x7AFF43: push    eax
0x7AFF44: push    4
0x7AFF46: push    10h
0x7AFF48: push    offset EmptyString
0x7AFF4D: push    1
0x7AFF4F: push    2
0x7AFF51: push    0
0x7AFF53: push    10000007h
0x7AFF58: push    offset aAlphaadd; "alphaAdd"
0x7AFF5D: call    edx
0x7AFF5F: cmp     dword ptr [edi+30h], 0
0x7AFF63: lea     esi, [edi+30h]
0x7AFF66: jnz     loc_7B004D
0x7AFF6C: push    34h ; '4'; Size
0x7AFF6E: call    FormHeapAlloc
0x7AFF73: add     esp, 4
0x7AFF76: mov     [esp+1Ch+var_10], eax
0x7AFF7A: test    eax, eax
0x7AFF7C: mov     [esp+1Ch+var_4], 1
0x7AFF84: jz      short loc_7AFF93
0x7AFF86: mov     ecx, [edi+14h]
0x7AFF89: push    ecx
0x7AFF8A: mov     ecx, eax
0x7AFF8C: call    NiD3DShaderCostantMapVertex__Construct
0x7AFF91: jmp     short loc_7AFF95
0x7AFF93: xor     eax, eax
0x7AFF95: push    eax; a2
0x7AFF96: mov     ecx, esi; this
0x7AFF98: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7AFFA0: call    NiSmartPointer_Set??
0x7AFFA5: mov     ecx, [esi]
0x7AFFA7: mov     edx, [ecx]
0x7AFFA9: mov     edx, [edx+18h]
0x7AFFAC: push    0
0x7AFFAE: lea     eax, [edi+0B0h]
0x7AFFB4: push    eax
0x7AFFB5: push    4
0x7AFFB7: push    10h
0x7AFFB9: push    offset EmptyString
0x7AFFBE: push    1
0x7AFFC0: push    4
0x7AFFC2: push    0
0x7AFFC4: push    10000007h
0x7AFFC9: push    offset aXTexcoordOffse; "x texcoord offsets"
0x7AFFCE: call    edx
0x7AFFD0: mov     ecx, [esi]
0x7AFFD2: mov     eax, [ecx]
0x7AFFD4: mov     eax, [eax+18h]
0x7AFFD7: push    0
0x7AFFD9: lea     edx, [edi+0C0h]
0x7AFFDF: push    edx
0x7AFFE0: push    4
0x7AFFE2: push    10h
0x7AFFE4: push    offset EmptyString
0x7AFFE9: push    1
0x7AFFEB: push    5
0x7AFFED: push    0
0x7AFFEF: push    10000007h
0x7AFFF4: push    offset aYTexcoordOffse; "y texcoord offsets"
0x7AFFF9: call    eax
0x7AFFFB: mov     ecx, [esi]
0x7AFFFD: mov     edx, [ecx]
0x7AFFFF: mov     eax, [edx+18h]
0x7B0002: push    0
0x7B0004: push    offset flt_B2C2D4
0x7B0009: push    4
0x7B000B: push    10h
0x7B000D: push    offset EmptyString
0x7B0012: push    1
0x7B0014: push    6
0x7B0016: push    0
0x7B0018: push    10000007h
0x7B001D: push    offset aTexratio0; "texRatio0"
0x7B0022: call    eax
0x7B0024: mov     ecx, [esi]
0x7B0026: mov     edx, [ecx]
0x7B0028: mov     eax, [edx+18h]
0x7B002B: push    0
0x7B002D: push    offset flt_B2C2E4
0x7B0032: push    4
0x7B0034: push    10h
0x7B0036: push    offset EmptyString
0x7B003B: push    1
0x7B003D: push    7
0x7B003F: push    0
0x7B0041: push    10000007h
0x7B0046: push    offset aTexratio1; "texRatio1"
0x7B004B: call    eax
0x7B004D: mov     ecx, [esp+1Ch+a2]
0x7B0051: push    ecx; a2
0x7B0052: mov     ecx, edi; this
0x7B0054: call    sub_77AA60
0x7B0059: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7B005D: mov     large fs:0, ecx
0x7B0064: pop     ecx
0x7B0065: pop     edi
0x7B0066: pop     esi
0x7B0067: add     esp, 10h
0x7B006A: retn    4
