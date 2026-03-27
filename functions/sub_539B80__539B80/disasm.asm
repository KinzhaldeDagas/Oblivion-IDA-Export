0x539B80: push    ebp
0x539B81: mov     ebp, esp
0x539B83: and     esp, 0FFFFFFF0h
0x539B86: push    0FFFFFFFFh
0x539B88: push    offset SEH_539B80
0x539B8D: mov     eax, large fs:0
0x539B93: push    eax
0x539B94: sub     esp, 0C8h
0x539B9A: mov     eax, ds:0B30AACh
0x539B9F: xor     eax, esp
0x539BA1: mov     [esp+0D4h+var_14], eax
0x539BA8: push    ebx
0x539BA9: push    esi
0x539BAA: push    edi
0x539BAB: mov     eax, ds:0B30AACh
0x539BB0: xor     eax, esp
0x539BB2: push    eax
0x539BB3: lea     eax, [esp+0E4h+var_C]
0x539BBA: mov     large fs:0, eax
0x539BC0: mov     esi, [ebp+arg_0]
0x539BC3: xor     ebx, ebx
0x539BC5: cmp     esi, ebx
0x539BC7: mov     edi, ecx
0x539BC9: jz      loc_539DD2
0x539BCF: fldz
0x539BD1: push    1; a3
0x539BD3: push    ecx
0x539BD4: fstp    [esp+0ECh+a2]; a2
0x539BD7: mov     ecx, esi; this
0x539BD9: call    NiAVObject_UpdateNiAVObject
0x539BDE: mov     esi, [esi+1Ch]
0x539BE1: cmp     esi, ebx
0x539BE3: jz      loc_539DD2
0x539BE9: push    esi
0x539BEA: call    sub_47FAC0
0x539BEF: add     esp, 4
0x539BF2: cmp     eax, ebx
0x539BF4: mov     [esp+0E4h+var_BC], eax
0x539BF8: jz      loc_539DD2
0x539BFE: mov     [esp+0E4h+var_CC], ebx
0x539C02: mov     [esp+0E4h+var_C4], ebx
0x539C06: mov     [esp+0E4h+var_C0], ebx
0x539C0A: mov     [esp+0E4h+var_C8], 1
0x539C12: mov     [esp+0E4h+var_D0], offset ??_7hkLimitedHingeConstraintCinfo@@6B@; const hkLimitedHingeConstraintCinfo::`vftable'
0x539C1A: mov     ecx, edi
0x539C1C: mov     [esp+0E4h+var_4], ebx
0x539C23: call    sub_452A60
0x539C28: lea     ecx, [esp+0E4h+var_D0]
0x539C2C: call    sub_8B2B00
0x539C31: mov     eax, [esp+0E4h+var_BC]
0x539C35: mov     edi, [edi+10h]
0x539C38: cmp     edi, ebx
0x539C3A: mov     eax, [eax+10h]
0x539C3D: mov     [esp+0E4h+var_B8], eax
0x539C41: jz      short loc_539C4C
0x539C43: mov     ecx, [edi+8]
0x539C46: mov     [esp+0E4h+var_C4], ecx
0x539C4A: jmp     short loc_539C50
0x539C4C: mov     [esp+0E4h+var_C4], ebx
0x539C50: cmp     eax, ebx
0x539C52: jz      short loc_539C5D
0x539C54: mov     edx, [eax+8]
0x539C57: mov     [esp+0E4h+var_C0], edx
0x539C5B: jmp     short loc_539C61
0x539C5D: mov     [esp+0E4h+var_C0], ebx
0x539C61: add     esi, 64h ; 'd'
0x539C64: lea     eax, [esp+0E4h+var_A0]
0x539C68: push    esi
0x539C69: push    eax
0x539C6A: call    sub_5398E0
0x539C6F: fldz
0x539C71: mov     ecx, [esp+0ECh+var_CC]
0x539C75: fst     dword ptr [ecx+0Ch]
0x539C78: mov     edx, [esp+0ECh+var_CC]
0x539C7C: fld     dword ptr ds:0A2FAACh
0x539C82: fstp    dword ptr [edx+10h]
0x539C85: add     esp, 8
0x539C88: movaps  xmm0, [esp+0E4h+var_A0]
0x539C8D: lea     eax, [esp+0E4h+var_B0]
0x539C91: fst     [esp+0E4h+var_B0]
0x539C95: push    eax
0x539C96: fst     [esp+0E8h+var_AC]
0x539C9A: movaps  [esp+0E8h+var_60], xmm0
0x539CA2: movaps  xmm0, [esp+0E8h+var_90]
0x539CA7: fld1
0x539CA9: lea     ecx, [esp+0E8h+var_70]
0x539CAD: fstp    [esp+0E8h+var_A8]
0x539CB1: push    ecx
0x539CB2: mov     ecx, [esp+0ECh+var_CC]
0x539CB6: movaps  [esp+0ECh+var_50], xmm0
0x539CBE: fstp    [esp+0ECh+var_A4]
0x539CC2: movaps  xmm0, [esp+0ECh+var_80]
0x539CC7: lea     edx, [esp+0ECh+var_A0]
0x539CCB: push    edx
0x539CCC: lea     eax, [esp+0F0h+var_60]
0x539CD3: movaps  [esp+0F0h+var_40], xmm0
0x539CDB: movaps  xmm0, [esp+0F0h+var_70]
0x539CE3: push    eax
0x539CE4: movaps  [esp+0F4h+var_30], xmm0
0x539CEC: call    sub_8B23E0
0x539CF1: push    10h; Size
0x539CF3: call    FormHeapAlloc
0x539CF8: add     esp, 4
0x539CFB: mov     [esp+0E4h+var_B4], eax
0x539CFF: cmp     eax, ebx
0x539D01: mov     byte ptr [esp+0E4h+var_4], 1
0x539D09: jz      short loc_539D19
0x539D0B: lea     ecx, [esp+0E4h+var_D0]
0x539D0F: push    ecx
0x539D10: mov     ecx, eax
0x539D12: call    sub_5399B0
0x539D17: jmp     short loc_539D1B
0x539D19: xor     eax, eax
0x539D1B: push    eax
0x539D1C: mov     ecx, edi
0x539D1E: mov     byte ptr [esp+0E8h+var_4], bl
0x539D25: call    sub_8A46C0
0x539D2A: mov     esi, [esp+0E4h+var_B8]
0x539D2E: cmp     esi, ebx
0x539D30: jz      short loc_539D45
0x539D32: mov     eax, [esi+8]
0x539D35: cmp     eax, ebx
0x539D37: jz      short loc_539D45
0x539D39: add     eax, 14h
0x539D3C: cmp     eax, ebx
0x539D3E: jz      short loc_539D45
0x539D40: mov     eax, [eax+1Ch]
0x539D43: jmp     short loc_539D47
0x539D45: xor     eax, eax
0x539D47: and     eax, 0FFFFF6C0h
0x539D4C: or      eax, 1600h
0x539D51: or      eax, 8
0x539D54: cmp     edi, ebx
0x539D56: jz      short loc_539D69
0x539D58: mov     ecx, [edi+8]
0x539D5B: cmp     ecx, ebx
0x539D5D: jz      short loc_539D69
0x539D5F: add     ecx, 14h
0x539D62: cmp     ecx, ebx
0x539D64: jz      short loc_539D69
0x539D66: mov     [ecx+1Ch], eax
0x539D69: mov     edx, [edi]
0x539D6B: mov     eax, [edx+80h]
0x539D71: mov     ecx, edi
0x539D73: call    eax
0x539D75: mov     edx, [esi]
0x539D77: mov     eax, [edx+58h]
0x539D7A: mov     ecx, esi
0x539D7C: call    eax
0x539D7E: cmp     eax, ebx
0x539D80: jz      short loc_539D8A
0x539D82: mov     eax, [eax+2B0h]
0x539D88: jmp     short loc_539D8C
0x539D8A: xor     eax, eax
0x539D8C: mov     ecx, eax
0x539D8E: cmp     ecx, ebx
0x539D90: jnz     short loc_539DAF
0x539D92: mov     ecx, [esp+0E4h+var_BC]
0x539D96: push    ecx
0x539D97: push    offset dword_BA7A20
0x539D9C: call    NiRTTI_Cast
0x539DA1: add     esp, 8
0x539DA4: cmp     eax, ebx
0x539DA6: jz      short loc_539DB5
0x539DA8: mov     ecx, [eax+20h]
0x539DAB: cmp     ecx, ebx
0x539DAD: jz      short loc_539DB5
0x539DAF: push    edi
0x539DB0: call    sub_532C80
0x539DB5: push    ebx
0x539DB6: lea     ecx, [esp+0E8h+var_D0]
0x539DBA: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x539DC5: mov     [esp+0E8h+var_D0], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x539DCD: call    sub_8A0200
0x539DD2: mov     ecx, [esp+0E4h+var_C]
0x539DD9: mov     large fs:0, ecx
0x539DE0: pop     ecx
0x539DE1: pop     edi
0x539DE2: pop     esi
0x539DE3: pop     ebx
0x539DE4: mov     ecx, [esp+0D4h+var_14]
0x539DEB: xor     ecx, esp
0x539DED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x539DF2: mov     esp, ebp
0x539DF4: pop     ebp
0x539DF5: retn    4
