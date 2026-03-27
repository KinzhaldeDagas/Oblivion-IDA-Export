0x6A0AC0: push    0FFFFFFFFh
0x6A0AC2: push    offset ??1MagicShaderHitEffect@@UAE@XZ_SEH
0x6A0AC7: mov     eax, large fs:0
0x6A0ACD: push    eax
0x6A0ACE: sub     esp, 10Ch
0x6A0AD4: mov     eax, ds:0B30AACh
0x6A0AD9: xor     eax, esp
0x6A0ADB: mov     [esp+118h+var_10], eax
0x6A0AE2: push    ebx
0x6A0AE3: push    ebp
0x6A0AE4: push    esi
0x6A0AE5: push    edi
0x6A0AE6: mov     eax, ds:0B30AACh
0x6A0AEB: xor     eax, esp
0x6A0AED: push    eax
0x6A0AEE: lea     eax, [esp+12Ch+var_C]
0x6A0AF5: mov     large fs:0, eax
0x6A0AFB: mov     esi, ecx
0x6A0AFD: mov     [esp+12Ch+var_118], esi
0x6A0B01: mov     dword ptr [esi], offset ??_7MagicShaderHitEffect@@6B@; const MagicShaderHitEffect::`vftable'
0x6A0B07: mov     eax, [esi+48h]
0x6A0B0A: xor     ebx, ebx
0x6A0B0C: cmp     eax, ebx
0x6A0B0E: mov     [esp+12Ch+var_4], 3
0x6A0B19: jz      short loc_6A0B6F
0x6A0B1B: mov     eax, [esi+1Ch]
0x6A0B1E: mov     ecx, ds:0B333C4h
0x6A0B24: cmp     eax, ecx
0x6A0B26: jnz     short loc_6A0B4E
0x6A0B28: push    1
0x6A0B2A: call    PlayerCharacter_GetPlayerNode
0x6A0B2F: cmp     eax, ebx
0x6A0B31: jz      short loc_6A0B40
0x6A0B33: mov     ecx, [esi+48h]
0x6A0B36: push    ecx
0x6A0B37: mov     ecx, [esi+34h]
0x6A0B3A: push    eax
0x6A0B3B: call    sub_4ADAD0
0x6A0B40: mov     ecx, ds:0B333C4h
0x6A0B46: push    ebx
0x6A0B47: call    PlayerCharacter_GetPlayerNode
0x6A0B4C: jmp     short loc_6A0B5E
0x6A0B4E: cmp     eax, ebx
0x6A0B50: jz      short loc_6A0B6F
0x6A0B52: mov     edx, [eax]
0x6A0B54: mov     ecx, eax
0x6A0B56: mov     eax, [edx+154h]
0x6A0B5C: call    eax
0x6A0B5E: cmp     eax, ebx
0x6A0B60: jz      short loc_6A0B6F
0x6A0B62: mov     ecx, [esi+48h]
0x6A0B65: push    ecx
0x6A0B66: mov     ecx, [esi+34h]
0x6A0B69: push    eax
0x6A0B6A: call    sub_4ADAD0
0x6A0B6F: mov     eax, [esi+40h]
0x6A0B72: cmp     eax, ebx
0x6A0B74: jz      short loc_6A0B83
0x6A0B76: mov     ecx, [esi+3Ch]
0x6A0B79: push    ecx
0x6A0B7A: mov     ecx, [esi+34h]
0x6A0B7D: push    eax
0x6A0B7E: call    sub_4AC740
0x6A0B83: mov     edi, [esi+3Ch]
0x6A0B86: cmp     edi, ebx
0x6A0B88: mov     ebp, ds:0A2807Ch
0x6A0B8E: jz      short loc_6A0BAB
0x6A0B90: lea     ecx, [edi+4]
0x6A0B93: push    ecx; lpAddend
0x6A0B94: call    ebp ; InterlockedDecrement
0x6A0B96: test    eax, eax
0x6A0B98: jnz     short loc_6A0BA8
0x6A0B9A: cmp     edi, ebx
0x6A0B9C: jz      short loc_6A0BA8
0x6A0B9E: mov     edx, [edi]
0x6A0BA0: mov     eax, [edx]
0x6A0BA2: push    1
0x6A0BA4: mov     ecx, edi
0x6A0BA6: call    eax
0x6A0BA8: mov     [esi+3Ch], ebx
0x6A0BAB: mov     ecx, [esi+40h]
0x6A0BAE: cmp     ecx, ebx
0x6A0BB0: jz      short loc_6A0BB8
0x6A0BB2: push    ebx
0x6A0BB3: call    sub_7074B0
0x6A0BB8: mov     edi, [esi+40h]
0x6A0BBB: cmp     edi, ebx
0x6A0BBD: jz      short loc_6A0BDA
0x6A0BBF: lea     ecx, [edi+4]
0x6A0BC2: push    ecx; lpAddend
0x6A0BC3: call    ebp ; InterlockedDecrement
0x6A0BC5: test    eax, eax
0x6A0BC7: jnz     short loc_6A0BD7
0x6A0BC9: cmp     edi, ebx
0x6A0BCB: jz      short loc_6A0BD7
0x6A0BCD: mov     edx, [edi]
0x6A0BCF: mov     eax, [edx]
0x6A0BD1: push    1
0x6A0BD3: mov     ecx, edi
0x6A0BD5: call    eax
0x6A0BD7: mov     [esi+40h], ebx
0x6A0BDA: mov     edi, [esi+48h]
0x6A0BDD: cmp     edi, ebx
0x6A0BDF: jz      short loc_6A0BFC
0x6A0BE1: lea     ecx, [edi+4]
0x6A0BE4: push    ecx; lpAddend
0x6A0BE5: call    ebp ; InterlockedDecrement
0x6A0BE7: test    eax, eax
0x6A0BE9: jnz     short loc_6A0BF9
0x6A0BEB: cmp     edi, ebx
0x6A0BED: jz      short loc_6A0BF9
0x6A0BEF: mov     edx, [edi]
0x6A0BF1: mov     eax, [edx]
0x6A0BF3: push    1
0x6A0BF5: mov     ecx, edi
0x6A0BF7: call    eax
0x6A0BF9: mov     [esi+48h], ebx
0x6A0BFC: mov     edx, [esi+34h]
0x6A0BFF: cmp     edx, ebx
0x6A0C01: jz      loc_6A0CDC
0x6A0C07: mov     eax, [esi+1Ch]
0x6A0C0A: cmp     eax, ebx
0x6A0C0C: mov     ecx, ds:0B33398h
0x6A0C12: mov     ecx, [ecx+24h]
0x6A0C15: jz      short loc_6A0C3A
0x6A0C17: cmp     ecx, ebx
0x6A0C19: jz      short loc_6A0C3A
0x6A0C1B: mov     edx, [edx+0Ch]
0x6A0C1E: cmp     edx, 852FEh
0x6A0C24: jz      short loc_6A0C2E
0x6A0C26: cmp     edx, 84A51h
0x6A0C2C: jnz     short loc_6A0C3A
0x6A0C2E: fld1
0x6A0C30: push    ecx
0x6A0C31: fstp    [esp+130h+var_130]; float
0x6A0C34: push    eax; int
0x6A0C35: call    sub_6AC420
0x6A0C3A: mov     eax, [esi+34h]
0x6A0C3D: mov     ecx, [eax+108h]
0x6A0C43: mov     eax, ecx
0x6A0C45: cmp     eax, ebx
0x6A0C47: jnz     short loc_6A0C4E
0x6A0C49: mov     eax, offset EmptyString
0x6A0C4E: push    eax
0x6A0C4F: push    offset aTextures; "Textures"
0x6A0C54: lea     edx, [esp+134h+var_114]
0x6A0C58: push    offset aSS_2; "%s\\%s"
0x6A0C5D: push    edx
0x6A0C5E: call    __sprintf
0x6A0C63: mov     ecx, ds:0B333A0h
0x6A0C69: add     esp, 10h
0x6A0C6C: push    ebx
0x6A0C6D: lea     eax, [esp+130h+var_114]
0x6A0C71: push    eax
0x6A0C72: call    sub_440420
0x6A0C77: mov     edx, [esi+34h]
0x6A0C7A: movzx   eax, word ptr [edx+100h]
0x6A0C81: cmp     ax, 0FFFFh
0x6A0C85: jnz     short loc_6A0C9D
0x6A0C87: mov     eax, [edx+0FCh]
0x6A0C8D: lea     edi, [eax+1]
0x6A0C90: mov     cl, [eax]
0x6A0C92: add     eax, 1
0x6A0C95: cmp     cl, bl
0x6A0C97: jnz     short loc_6A0C90
0x6A0C99: sub     eax, edi
0x6A0C9B: jmp     short loc_6A0CA0
0x6A0C9D: movzx   eax, ax
0x6A0CA0: cmp     eax, ebx
0x6A0CA2: jbe     short loc_6A0CDC
0x6A0CA4: mov     eax, [edx+0FCh]
0x6A0CAA: cmp     eax, ebx
0x6A0CAC: jnz     short loc_6A0CB3
0x6A0CAE: mov     eax, offset EmptyString
0x6A0CB3: push    eax
0x6A0CB4: push    offset aTextures; "Textures"
0x6A0CB9: lea     ecx, [esp+134h+var_114]
0x6A0CBD: push    offset aSS_2; "%s\\%s"
0x6A0CC2: push    ecx
0x6A0CC3: call    __sprintf
0x6A0CC8: mov     ecx, ds:0B333A0h
0x6A0CCE: add     esp, 10h
0x6A0CD1: push    ebx
0x6A0CD2: lea     edx, [esp+130h+var_114]
0x6A0CD6: push    edx
0x6A0CD7: call    sub_440420
0x6A0CDC: mov     edi, [esi+48h]
0x6A0CDF: cmp     edi, ebx
0x6A0CE1: mov     byte ptr [esp+12Ch+var_4], 2
0x6A0CE9: jz      short loc_6A0D03
0x6A0CEB: lea     eax, [edi+4]
0x6A0CEE: push    eax; lpAddend
0x6A0CEF: call    ebp ; InterlockedDecrement
0x6A0CF1: test    eax, eax
0x6A0CF3: jnz     short loc_6A0D03
0x6A0CF5: cmp     edi, ebx
0x6A0CF7: jz      short loc_6A0D03
0x6A0CF9: mov     edx, [edi]
0x6A0CFB: mov     eax, [edx]
0x6A0CFD: push    1
0x6A0CFF: mov     ecx, edi
0x6A0D01: call    eax
0x6A0D03: mov     edi, [esi+40h]
0x6A0D06: cmp     edi, ebx
0x6A0D08: mov     byte ptr [esp+12Ch+var_4], 1
0x6A0D10: jz      short loc_6A0D2A
0x6A0D12: lea     ecx, [edi+4]
0x6A0D15: push    ecx; lpAddend
0x6A0D16: call    ebp ; InterlockedDecrement
0x6A0D18: test    eax, eax
0x6A0D1A: jnz     short loc_6A0D2A
0x6A0D1C: cmp     edi, ebx
0x6A0D1E: jz      short loc_6A0D2A
0x6A0D20: mov     edx, [edi]
0x6A0D22: mov     eax, [edx]
0x6A0D24: push    1
0x6A0D26: mov     ecx, edi
0x6A0D28: call    eax
0x6A0D2A: mov     edi, [esi+3Ch]
0x6A0D2D: cmp     edi, ebx
0x6A0D2F: mov     byte ptr [esp+12Ch+var_4], bl
0x6A0D36: jz      short loc_6A0D50
0x6A0D38: lea     ecx, [edi+4]
0x6A0D3B: push    ecx; lpAddend
0x6A0D3C: call    ebp ; InterlockedDecrement
0x6A0D3E: test    eax, eax
0x6A0D40: jnz     short loc_6A0D50
0x6A0D42: cmp     edi, ebx
0x6A0D44: jz      short loc_6A0D50
0x6A0D46: mov     edx, [edi]
0x6A0D48: mov     eax, [edx]
0x6A0D4A: push    1
0x6A0D4C: mov     ecx, edi
0x6A0D4E: call    eax
0x6A0D50: mov     ecx, esi
0x6A0D52: mov     [esp+12Ch+var_4], 0FFFFFFFFh
0x6A0D5D: call    MagicHitEffect_destr
0x6A0D62: mov     ecx, dword ptr [esp+12Ch+var_C]
0x6A0D69: mov     large fs:0, ecx
0x6A0D70: pop     ecx
0x6A0D71: pop     edi
0x6A0D72: pop     esi
0x6A0D73: pop     ebp
0x6A0D74: pop     ebx
0x6A0D75: mov     ecx, [esp+118h+var_10]
0x6A0D7C: xor     ecx, esp
0x6A0D7E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A0D83: add     esp, 118h
0x6A0D89: retn
