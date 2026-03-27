0x7AAA30: push    0FFFFFFFFh
0x7AAA32: push    offset EndTargetGroup_SEH
0x7AAA37: mov     eax, large fs:0
0x7AAA3D: push    eax
0x7AAA3E: sub     esp, 58h
0x7AAA41: push    ebx
0x7AAA42: push    ebp
0x7AAA43: push    esi
0x7AAA44: push    edi
0x7AAA45: mov     eax, ds:0B30AACh
0x7AAA4A: xor     eax, esp
0x7AAA4C: push    eax
0x7AAA4D: lea     eax, [esp+78h+var_C]
0x7AAA51: mov     large fs:0, eax
0x7AAA57: mov     ebx, ecx
0x7AAA59: mov     [esp+78h+var_60], ebx
0x7AAA5D: fldz
0x7AAA5F: mov     eax, [ebx+8]
0x7AAA62: mov     ecx, [esp+78h+arg_0]
0x7AAA66: fst     [esp+78h+var_1C]
0x7AAA6A: fst     [esp+78h+var_18]
0x7AAA6E: mov     [ebx+8], ecx
0x7AAA71: mov     edi, ds:0B3F928h
0x7AAA77: fst     [esp+78h+var_14]
0x7AAA7B: fstp    [esp+78h+var_10]
0x7AAA7F: mov     [esp+78h+var_48], eax
0x7AAA83: mov     eax, [edi+8]
0x7AAA86: xor     ebp, ebp
0x7AAA88: cmp     eax, ebp
0x7AAA8A: mov     [esp+78h+var_61], 0
0x7AAA8F: mov     [esp+78h+var_62], 0
0x7AAA94: mov     [esp+78h+var_54], edi
0x7AAA98: mov     [esp+78h+var_4C], eax
0x7AAA9C: jz      short loc_7AAAA8
0x7AAA9E: add     eax, 4
0x7AAAA1: push    eax; lpAddend
0x7AAAA2: call    dword ptr ds:0A28078h
0x7AAAA8: mov     esi, [edi+8]
0x7AAAAB: cmp     esi, ebp
0x7AAAAD: mov     [esp+78h+var_4], ebp
0x7AAAB1: jz      short loc_7AAAD2
0x7AAAB3: lea     edx, [esi+4]
0x7AAAB6: push    edx; lpAddend
0x7AAAB7: call    dword ptr ds:0A2807Ch
0x7AAABD: test    eax, eax
0x7AAABF: jnz     short loc_7AAACF
0x7AAAC1: cmp     esi, ebp
0x7AAAC3: jz      short loc_7AAACF
0x7AAAC5: mov     eax, [esi]
0x7AAAC7: mov     edx, [eax]
0x7AAAC9: push    1
0x7AAACB: mov     ecx, esi
0x7AAACD: call    edx
0x7AAACF: mov     [edi+8], ebp
0x7AAAD2: push    10h; Size
0x7AAAD4: call    FormHeapAlloc
0x7AAAD9: add     esp, 4
0x7AAADC: mov     [esp+78h+arg_0], eax
0x7AAAE0: cmp     eax, ebp
0x7AAAE2: mov     byte ptr [esp+78h+var_4], 1
0x7AAAE7: jz      short loc_7AAAFE
0x7AAAE9: push    ebp
0x7AAAEA: push    ebp
0x7AAAEB: push    1
0x7AAAED: push    ebp
0x7AAAEE: push    ebp
0x7AAAEF: push    eax
0x7AAAF0: call    sub_7E2370
0x7AAAF5: add     esp, 18h
0x7AAAF8: mov     [esp+78h+var_5C], eax
0x7AAAFC: jmp     short loc_7AAB02
0x7AAAFE: mov     [esp+78h+var_5C], ebp
0x7AAB02: push    ebp
0x7AAB03: mov     byte ptr [esp+7Ch+var_4], 0
0x7AAB08: call    sub_800B30
0x7AAB0D: mov     ebp, eax
0x7AAB0F: add     esp, 4
0x7AAB12: test    ebp, ebp
0x7AAB14: mov     [esp+78h+arg_0], ebp
0x7AAB18: jz      loc_7AAD86
0x7AAB1E: cmp     dword ptr [ebx+2224h], 0
0x7AAB25: jbe     loc_7AAD86
0x7AAB2B: mov     ecx, ebp; this
0x7AAB2D: call    BSRenderedTexture__UseTextureToRender
0x7AAB32: mov     ebx, [esp+78h+arg_4]
0x7AAB39: mov     ebp, eax
0x7AAB3B: mov     eax, [ebx]
0x7AAB3D: mov     esi, [ebp+0]
0x7AAB40: mov     edx, [eax+74h]
0x7AAB43: mov     ecx, ebx
0x7AAB45: add     esi, 6Ch ; 'l'
0x7AAB48: call    edx
0x7AAB4A: push    eax
0x7AAB4B: mov     eax, [esi]
0x7AAB4D: mov     ecx, ebp
0x7AAB4F: call    eax
0x7AAB51: mov     edx, [edi]
0x7AAB53: mov     edx, [edx+68h]
0x7AAB56: lea     eax, [esp+78h+var_1C]
0x7AAB5A: push    eax
0x7AAB5B: mov     ecx, edi
0x7AAB5D: call    edx
0x7AAB5F: fld     dword ptr ds:0A3D65Ch
0x7AAB65: mov     eax, [edi]
0x7AAB67: fst     [esp+78h+var_2C]
0x7AAB6B: mov     edx, [eax+60h]
0x7AAB6E: fstp    [esp+78h+var_28]
0x7AAB72: fldz
0x7AAB74: lea     ecx, [esp+78h+var_2C]
0x7AAB78: push    ecx
0x7AAB79: fst     [esp+7Ch+var_24]
0x7AAB7D: mov     ecx, edi
0x7AAB7F: fstp    [esp+7Ch+var_20]
0x7AAB83: call    edx
0x7AAB85: mov     [esp+78h+var_61], 1
0x7AAB8A: call    NiRenderer_EndScene
0x7AAB8F: cmp     dword ptr ds:0B34FC0h, 2
0x7AAB96: jl      short loc_7AABE4
0x7AAB98: mov     ecx, ds:0B3F928h
0x7AAB9E: mov     eax, [ecx]
0x7AABA0: mov     edx, [eax+7Ch]
0x7AABA3: call    edx
0x7AABA5: mov     edx, [eax]
0x7AABA7: mov     ecx, eax
0x7AABA9: mov     eax, [edx+84h]
0x7AABAF: call    eax
0x7AABB1: mov     edx, [ebx]
0x7AABB3: mov     esi, eax
0x7AABB5: mov     eax, [edx+84h]
0x7AABBB: mov     ecx, ebx
0x7AABBD: call    eax
0x7AABBF: mov     eax, [eax+0Ch]
0x7AABC2: mov     ecx, ds:0B3F928h
0x7AABC8: mov     ecx, [ecx+280h]
0x7AABCE: mov     esi, [esi+0Ch]
0x7AABD1: mov     edx, [ecx]
0x7AABD3: push    0
0x7AABD5: push    0
0x7AABD7: push    eax
0x7AABD8: mov     eax, [edx+88h]
0x7AABDE: push    0
0x7AABE0: push    esi
0x7AABE1: push    ecx
0x7AABE2: call    eax
0x7AABE4: mov     ecx, [esp+78h+arg_0]; this
0x7AABE8: call    BSRenderedTexture__UseTextureToRender
0x7AABED: push    eax; a2
0x7AABEE: push    0; a1
0x7AABF0: call    NiRenderer_BeginScene
0x7AABF5: mov     esi, [esp+80h+var_60]
0x7AABF9: mov     eax, [esi+8]
0x7AABFC: fld     dword ptr [eax+6Ch]
0x7AABFF: lea     ecx, [eax+110h]
0x7AAC05: fstp    [esp+80h+var_44]
0x7AAC09: lea     edx, [eax+0ECh]
0x7AAC0F: fld     dword ptr [eax+78h]
0x7AAC12: mov     ebp, 1
0x7AAC17: fstp    [esp+80h+var_40]
0x7AAC1B: add     esp, 8
0x7AAC1E: fld     dword ptr [eax+84h]
0x7AAC24: add     eax, 88h ; 'ˆ'
0x7AAC29: cmp     [edi+200h], ebp
0x7AAC2F: fstp    [esp+78h+var_3C]
0x7AAC33: fld     dword ptr [eax-20h]
0x7AAC36: fstp    [esp+78h+var_38]
0x7AAC3A: fld     dword ptr [eax-14h]
0x7AAC3D: fstp    [esp+78h+var_34]
0x7AAC41: fld     dword ptr [eax-8]
0x7AAC44: fstp    [esp+78h+var_30]
0x7AAC48: fld     dword ptr [eax-24h]
0x7AAC4B: fstp    [esp+78h+var_2C]
0x7AAC4F: fld     dword ptr [eax-18h]
0x7AAC52: fstp    [esp+78h+var_28]
0x7AAC56: fld     dword ptr [eax-0Ch]
0x7AAC59: fstp    [esp+78h+var_24]
0x7AAC5D: jz      short loc_7AAC67
0x7AAC5F: cmp     [edi+204h], ebp
0x7AAC65: jnz     short loc_7AAC8E
0x7AAC67: cmp     byte ptr [edi+20Ch], 1
0x7AAC6E: jnz     short loc_7AAC8E
0x7AAC70: mov     ebp, [edi]
0x7AAC72: push    ecx
0x7AAC73: push    edx
0x7AAC74: lea     ecx, [esp+80h+var_44]
0x7AAC78: push    ecx
0x7AAC79: lea     edx, [esp+84h+var_38]
0x7AAC7D: push    edx
0x7AAC7E: mov     edx, [ebp+140h]
0x7AAC84: lea     ecx, [esp+88h+var_2C]
0x7AAC88: push    ecx
0x7AAC89: push    eax
0x7AAC8A: mov     ecx, edi
0x7AAC8C: call    edx
0x7AAC8E: mov     eax, [esi+2218h]
0x7AAC94: test    eax, eax
0x7AAC96: jz      loc_7AAD7B
0x7AAC9C: jmp     short loc_7AACA4
0x7AAC9E: align 10h
0x7AACA0: mov     eax, [esp+78h+var_58]
0x7AACA4: mov     ebp, [eax+8]
0x7AACA7: mov     esi, [ebp+0BCh]
0x7AACAD: test    esi, esi
0x7AACAF: lea     ecx, [eax+8]
0x7AACB2: mov     eax, [eax]
0x7AACB4: mov     [esp+78h+var_58], eax
0x7AACB8: jz      loc_7AAD70
0x7AACBE: push    4
0x7AACC0: mov     ecx, ebp
0x7AACC2: call    NiNode_GetNiPropertyByID
0x7AACC7: test    byte ptr [eax+1Ch], 2
0x7AACCB: mov     edx, [esi]
0x7AACCD: mov     eax, [edx+1Ch]
0x7AACD0: mov     ecx, esi
0x7AACD2: setnbe  bl
0x7AACD5: call    eax
0x7AACD7: cmp     eax, 1
0x7AACDA: jl      short loc_7AAD03
0x7AACDC: mov     edx, [esi]
0x7AACDE: mov     eax, [edx+1Ch]
0x7AACE1: mov     ecx, esi
0x7AACE3: call    eax
0x7AACE5: cmp     eax, 5
0x7AACE8: jg      short loc_7AAD03
0x7AACEA: xor     ecx, ecx
0x7AACEC: test    bl, bl
0x7AACEE: setnz   cl
0x7AACF1: push    0
0x7AACF3: add     ecx, 163h
0x7AACF9: mov     edi, ecx
0x7AACFB: push    edi
0x7AACFC: call    sub_7D1320
0x7AAD01: jmp     short loc_7AAD28
0x7AAD03: mov     edx, [esi]
0x7AAD05: mov     eax, [edx+1Ch]
0x7AAD08: mov     ecx, esi
0x7AAD0A: call    eax
0x7AAD0C: cmp     eax, 1Bh
0x7AAD0F: jnz     short loc_7AAD69
0x7AAD11: xor     ecx, ecx
0x7AAD13: test    bl, bl
0x7AAD15: setnz   cl
0x7AAD18: push    0
0x7AAD1A: add     ecx, 159h
0x7AAD20: mov     edi, ecx
0x7AAD22: push    edi
0x7AAD23: call    sub_7FD260
0x7AAD28: mov     ecx, [esi+30h]
0x7AAD2B: mov     edx, [ecx]
0x7AAD2D: mov     eax, [edx+48h]
0x7AAD30: add     esp, 8
0x7AAD33: call    eax
0x7AAD35: mov     ecx, [esi+2Ch]
0x7AAD38: mov     edx, [ecx]
0x7AAD3A: mov     eax, [edx+48h]
0x7AAD3D: call    eax
0x7AAD3F: mov     eax, [esp+78h+var_5C]
0x7AAD43: mov     [eax+4], di
0x7AAD47: mov     ds:0B42EB8h, eax
0x7AAD4C: mov     eax, ds:0B3F928h
0x7AAD51: mov     ds:0B42E90h, edi
0x7AAD57: mov     edx, [ebp+0]
0x7AAD5A: mov     edx, [edx+84h]
0x7AAD60: push    eax
0x7AAD61: mov     ecx, ebp
0x7AAD63: call    edx
0x7AAD65: mov     edi, [esp+78h+var_54]
0x7AAD69: mov     ebx, [esp+78h+arg_4]
0x7AAD70: cmp     [esp+78h+var_58], 0
0x7AAD75: jnz     loc_7AACA0
0x7AAD7B: mov     ebp, [esp+78h+arg_0]
0x7AAD7F: mov     [esp+78h+var_62], 1
0x7AAD84: jmp     short loc_7AAD8D
0x7AAD86: mov     ebx, [esp+78h+arg_4]
0x7AAD8D: mov     esi, [esp+78h+var_60]
0x7AAD91: add     esi, 2214h
0x7AAD97: mov     ecx, esi
0x7AAD99: call    sub_7A9C30
0x7AAD9E: mov     eax, [esi+4]
0x7AADA1: mov     ecx, [esp+78h+var_60]
0x7AADA5: mov     [esi+0Ch], eax
0x7AADA8: xor     eax, eax
0x7AADAA: mov     [esi+4], eax
0x7AADAD: mov     [esi+8], eax
0x7AADB0: mov     [esi+10h], eax
0x7AADB3: mov     esi, [ecx+2210h]
0x7AADB9: cmp     esi, eax
0x7AADBB: mov     [esp+78h+var_50], esi
0x7AADBF: jbe     loc_7AB0E5
0x7AADC5: cmp     [esp+78h+var_62], al
0x7AADC9: jnz     loc_7AAF5D
0x7AADCF: cmp     ebp, eax
0x7AADD1: mov     byte ptr [esp+78h+arg_4], al
0x7AADD8: jnz     short loc_7AADF2
0x7AADDA: push    1
0x7AADDC: call    sub_800B30
0x7AADE1: add     esp, 4
0x7AADE4: mov     [esp+78h+arg_0], eax
0x7AADE8: mov     byte ptr [esp+78h+arg_4], 1
0x7AADF0: mov     ebp, eax
0x7AADF2: mov     ecx, ebp; this
0x7AADF4: call    BSRenderedTexture__UseTextureToRender
0x7AADF9: mov     edx, [ebx]
0x7AADFB: mov     ebp, eax
0x7AADFD: mov     esi, [ebp+0]
0x7AAE00: mov     eax, [edx+74h]
0x7AAE03: mov     ecx, ebx
0x7AAE05: add     esi, 6Ch ; 'l'
0x7AAE08: call    eax
0x7AAE0A: mov     edx, [esi]
0x7AAE0C: push    eax
0x7AAE0D: mov     ecx, ebp
0x7AAE0F: call    edx
0x7AAE11: mov     eax, [edi]
0x7AAE13: mov     edx, [eax+68h]
0x7AAE16: lea     ecx, [esp+78h+var_1C]
0x7AAE1A: push    ecx
0x7AAE1B: mov     ecx, edi
0x7AAE1D: call    edx
0x7AAE1F: fld     dword ptr ds:0A3D65Ch
0x7AAE25: mov     eax, [edi]
0x7AAE27: fst     [esp+78h+var_2C]
0x7AAE2B: mov     edx, [eax+60h]
0x7AAE2E: fstp    [esp+78h+var_28]
0x7AAE32: fldz
0x7AAE34: lea     ecx, [esp+78h+var_2C]
0x7AAE38: push    ecx
0x7AAE39: fst     [esp+7Ch+var_24]
0x7AAE3D: mov     ecx, edi
0x7AAE3F: fstp    [esp+7Ch+var_20]
0x7AAE43: call    edx
0x7AAE45: mov     [esp+78h+var_61], 1
0x7AAE4A: call    NiRenderer_EndScene
0x7AAE4F: cmp     dword ptr ds:0B34FC0h, 2
0x7AAE56: jl      short loc_7AAEA4
0x7AAE58: mov     ecx, ds:0B3F928h
0x7AAE5E: mov     eax, [ecx]
0x7AAE60: mov     edx, [eax+7Ch]
0x7AAE63: call    edx
0x7AAE65: mov     edx, [eax]
0x7AAE67: mov     ecx, eax
0x7AAE69: mov     eax, [edx+84h]
0x7AAE6F: call    eax
0x7AAE71: mov     edx, [ebx]
0x7AAE73: mov     esi, eax
0x7AAE75: mov     eax, [edx+84h]
0x7AAE7B: mov     ecx, ebx
0x7AAE7D: call    eax
0x7AAE7F: mov     eax, [eax+0Ch]
0x7AAE82: mov     ecx, ds:0B3F928h
0x7AAE88: mov     ecx, [ecx+280h]
0x7AAE8E: mov     esi, [esi+0Ch]
0x7AAE91: mov     edx, [ecx]
0x7AAE93: push    0
0x7AAE95: push    0
0x7AAE97: push    eax
0x7AAE98: mov     eax, [edx+88h]
0x7AAE9E: push    0
0x7AAEA0: push    esi
0x7AAEA1: push    ecx
0x7AAEA2: call    eax
0x7AAEA4: mov     ecx, [esp+78h+arg_0]; this
0x7AAEA8: call    BSRenderedTexture__UseTextureToRender
0x7AAEAD: xor     ecx, ecx
0x7AAEAF: cmp     byte ptr [esp+78h+arg_4], cl
0x7AAEB6: push    eax; a2
0x7AAEB7: setnz   cl
0x7AAEBA: push    ecx; a1
0x7AAEBB: call    NiRenderer_BeginScene
0x7AAEC0: mov     edx, [esp+80h+var_60]
0x7AAEC4: mov     eax, [edx+8]
0x7AAEC7: fld     dword ptr [eax+6Ch]
0x7AAECA: lea     ecx, [eax+110h]
0x7AAED0: fstp    [esp+80h+var_2C]
0x7AAED4: lea     edx, [eax+0ECh]
0x7AAEDA: fld     dword ptr [eax+78h]
0x7AAEDD: mov     esi, 1
0x7AAEE2: fstp    [esp+80h+var_28]
0x7AAEE6: add     esp, 8
0x7AAEE9: fld     dword ptr [eax+84h]
0x7AAEEF: add     eax, 88h ; 'ˆ'
0x7AAEF4: cmp     [edi+200h], esi
0x7AAEFA: fstp    [esp+78h+var_24]
0x7AAEFE: fld     dword ptr [eax-20h]
0x7AAF01: fstp    [esp+78h+var_38]
0x7AAF05: fld     dword ptr [eax-14h]
0x7AAF08: fstp    [esp+78h+var_34]
0x7AAF0C: fld     dword ptr [eax-8]
0x7AAF0F: fstp    [esp+78h+var_30]
0x7AAF13: fld     dword ptr [eax-24h]
0x7AAF16: fstp    [esp+78h+var_44]
0x7AAF1A: fld     dword ptr [eax-18h]
0x7AAF1D: fstp    [esp+78h+var_40]
0x7AAF21: fld     dword ptr [eax-0Ch]
0x7AAF24: fstp    [esp+78h+var_3C]
0x7AAF28: jz      short loc_7AAF32
0x7AAF2A: cmp     [edi+204h], esi
0x7AAF30: jnz     short loc_7AAF59
0x7AAF32: cmp     byte ptr [edi+20Ch], 1
0x7AAF39: jnz     short loc_7AAF59
0x7AAF3B: mov     esi, [edi]
0x7AAF3D: push    ecx
0x7AAF3E: push    edx
0x7AAF3F: lea     ecx, [esp+80h+var_2C]
0x7AAF43: push    ecx
0x7AAF44: lea     edx, [esp+84h+var_38]
0x7AAF48: push    edx
0x7AAF49: mov     edx, [esi+140h]
0x7AAF4F: lea     ecx, [esp+88h+var_44]
0x7AAF53: push    ecx
0x7AAF54: push    eax
0x7AAF55: mov     ecx, edi
0x7AAF57: call    edx
0x7AAF59: mov     ebp, [esp+78h+arg_0]
0x7AAF5D: mov     ebx, [esp+78h+var_5C]
0x7AAF61: mov     eax, [esp+78h+var_60]
0x7AAF65: mov     byte ptr [ebx+8], 0
0x7AAF69: mov     eax, [eax+2204h]
0x7AAF6F: test    eax, eax
0x7AAF71: jz      loc_7AB095
0x7AAF77: jmp     short loc_7AAF84
0x7AAF79: align 10h
0x7AAF80: mov     eax, [esp+78h+var_58]
0x7AAF84: mov     ebp, [eax+8]
0x7AAF87: mov     esi, [ebp+0BCh]
0x7AAF8D: test    esi, esi
0x7AAF8F: mov     edx, [eax]
0x7AAF91: lea     ecx, [eax+8]
0x7AAF94: mov     [esp+78h+var_58], edx
0x7AAF98: jz      loc_7AB082
0x7AAF9E: push    4
0x7AAFA0: mov     ecx, ebp
0x7AAFA2: call    NiNode_GetNiPropertyByID
0x7AAFA7: mov     eax, [eax+1Ch]
0x7AAFAA: test    al, 2
0x7AAFAC: setnbe  bl
0x7AAFAF: test    eax, 10000h
0x7AAFB4: mov     eax, [esi]
0x7AAFB6: mov     edx, [eax+1Ch]
0x7AAFB9: mov     ecx, esi
0x7AAFBB: setnbe  byte ptr [esp+78h+arg_4]
0x7AAFC3: call    edx
0x7AAFC5: cmp     eax, 1
0x7AAFC8: jl      short loc_7AB009
0x7AAFCA: mov     eax, [esi]
0x7AAFCC: mov     edx, [eax+1Ch]
0x7AAFCF: mov     ecx, esi
0x7AAFD1: call    edx
0x7AAFD3: cmp     eax, 5
0x7AAFD6: jg      short loc_7AB009
0x7AAFD8: cmp     byte ptr [esp+78h+arg_4], 0
0x7AAFE0: jz      short loc_7AAFF1
0x7AAFE2: mov     edi, 162h
0x7AAFE7: push    0
0x7AAFE9: push    edi
0x7AAFEA: call    sub_7D1320
0x7AAFEF: jmp     short loc_7AB03F
0x7AAFF1: xor     eax, eax
0x7AAFF3: test    bl, bl
0x7AAFF5: setnz   al
0x7AAFF8: push    0
0x7AAFFA: add     eax, 160h
0x7AAFFF: mov     edi, eax
0x7AB001: push    edi
0x7AB002: call    sub_7D1320
0x7AB007: jmp     short loc_7AB03F
0x7AB009: mov     edx, [esi]
0x7AB00B: mov     eax, [edx+1Ch]
0x7AB00E: mov     ecx, esi
0x7AB010: call    eax
0x7AB012: cmp     eax, 1Bh
0x7AB015: jnz     short loc_7AB082
0x7AB017: cmp     byte ptr [esp+78h+arg_4], 0
0x7AB01F: jz      short loc_7AB028
0x7AB021: mov     edi, 158h
0x7AB026: jmp     short loc_7AB037
0x7AB028: xor     ecx, ecx
0x7AB02A: test    bl, bl
0x7AB02C: setnz   cl
0x7AB02F: add     ecx, 156h
0x7AB035: mov     edi, ecx
0x7AB037: push    0
0x7AB039: push    edi
0x7AB03A: call    sub_7FD260
0x7AB03F: mov     ecx, [esi+30h]
0x7AB042: mov     edx, [ecx]
0x7AB044: mov     eax, [edx+48h]
0x7AB047: add     esp, 8
0x7AB04A: call    eax
0x7AB04C: mov     esi, [esi+2Ch]
0x7AB04F: mov     edx, [esi]
0x7AB051: mov     eax, [edx+48h]
0x7AB054: mov     ecx, esi
0x7AB056: call    eax
0x7AB058: mov     eax, [esp+78h+var_5C]
0x7AB05C: mov     [eax+4], di
0x7AB060: mov     ds:0B42EB8h, eax
0x7AB065: mov     eax, ds:0B3F928h
0x7AB06A: mov     ds:0B42E90h, edi
0x7AB070: mov     edx, [ebp+0]
0x7AB073: mov     edx, [edx+84h]
0x7AB079: push    eax
0x7AB07A: mov     ecx, ebp
0x7AB07C: call    edx
0x7AB07E: mov     edi, [esp+78h+var_54]
0x7AB082: cmp     [esp+78h+var_58], 0
0x7AB087: jnz     loc_7AAF80
0x7AB08D: mov     ebp, [esp+78h+arg_0]
0x7AB091: mov     ebx, [esp+78h+var_5C]
0x7AB095: mov     esi, [esp+78h+var_60]
0x7AB099: add     esi, 2200h
0x7AB09F: mov     ecx, esi
0x7AB0A1: call    sub_7A9C30
0x7AB0A6: mov     eax, [esi+4]
0x7AB0A9: mov     [esi+0Ch], eax
0x7AB0AC: xor     eax, eax
0x7AB0AE: mov     [esi+4], eax
0x7AB0B1: mov     [esi+8], eax
0x7AB0B4: mov     [esi+10h], eax
0x7AB0B7: cmp     ds:0B42CDCh, al
0x7AB0BD: jz      short loc_7AB0DF
0x7AB0BF: mov     ecx, ebp; this
0x7AB0C1: call    BSRenderedTexture__GetInnerTexture
0x7AB0C6: push    9; a1
0x7AB0C8: mov     esi, eax
0x7AB0CA: call    GetShaderDefinition
0x7AB0CF: add     eax, 4
0x7AB0D2: mov     eax, [eax]
0x7AB0D4: add     esp, 4
0x7AB0D7: push    esi; a2
0x7AB0D8: mov     ecx, eax; this
0x7AB0DA: call    sub_7FA470
0x7AB0DF: mov     esi, [esp+78h+var_50]
0x7AB0E3: jmp     short loc_7AB0E9
0x7AB0E5: mov     ebx, [esp+78h+var_5C]
0x7AB0E9: cmp     [esp+78h+var_62], 0
0x7AB0EE: jnz     short loc_7AB0F4
0x7AB0F0: test    esi, esi
0x7AB0F2: jbe     short loc_7AB0F9
0x7AB0F4: call    NiRenderer_EndScene
0x7AB0F9: test    ebp, ebp
0x7AB0FB: jz      short loc_7AB10F
0x7AB0FD: mov     ecx, ebp; this
0x7AB0FF: call    BSRenderedTexture__UseTextureToRender
0x7AB104: mov     edx, [eax]
0x7AB106: mov     ecx, eax
0x7AB108: mov     eax, [edx+6Ch]
0x7AB10B: push    0
0x7AB10D: call    eax
0x7AB10F: test    ebx, ebx
0x7AB111: jz      short loc_7AB123
0x7AB113: mov     ecx, ebx
0x7AB115: call    sub_7E2400
0x7AB11A: push    ebx
0x7AB11B: call    FormHeapFree
0x7AB120: add     esp, 4
0x7AB123: mov     ebx, [edi+8]
0x7AB126: mov     ebp, [esp+78h+var_4C]
0x7AB12A: cmp     ebx, ebp
0x7AB12C: jz      short loc_7AB15F
0x7AB12E: test    ebx, ebx
0x7AB130: jz      short loc_7AB14E
0x7AB132: lea     ecx, [ebx+4]
0x7AB135: push    ecx; lpAddend
0x7AB136: call    dword ptr ds:0A2807Ch
0x7AB13C: test    eax, eax
0x7AB13E: jnz     short loc_7AB14E
0x7AB140: test    ebx, ebx
0x7AB142: jz      short loc_7AB14E
0x7AB144: mov     edx, [ebx]
0x7AB146: mov     eax, [edx]
0x7AB148: push    1
0x7AB14A: mov     ecx, ebx
0x7AB14C: call    eax
0x7AB14E: test    ebp, ebp
0x7AB150: mov     [edi+8], ebp
0x7AB153: jz      short loc_7AB15F
0x7AB155: lea     ecx, [ebp+4]
0x7AB158: push    ecx; lpAddend
0x7AB159: call    dword ptr ds:0A28078h
0x7AB15F: cmp     [esp+78h+var_61], 0
0x7AB164: jz      short loc_7AB174
0x7AB166: mov     edx, [edi]
0x7AB168: mov     edx, [edx+60h]
0x7AB16B: lea     eax, [esp+78h+var_1C]
0x7AB16F: push    eax
0x7AB170: mov     ecx, edi
0x7AB172: call    edx
0x7AB174: mov     eax, [esp+78h+var_48]
0x7AB178: mov     ecx, [esp+78h+var_60]
0x7AB17C: test    esi, esi
0x7AB17E: setnbe  bl
0x7AB181: test    ebp, ebp
0x7AB183: mov     [ecx+8], eax
0x7AB186: mov     [esp+78h+var_4], 0FFFFFFFFh
0x7AB18E: jz      short loc_7AB1A9
0x7AB190: lea     edx, [ebp+4]
0x7AB193: push    edx; lpAddend
0x7AB194: call    dword ptr ds:0A2807Ch
0x7AB19A: test    eax, eax
0x7AB19C: jnz     short loc_7AB1A9
0x7AB19E: mov     eax, [ebp+0]
0x7AB1A1: mov     edx, [eax]
0x7AB1A3: push    1
0x7AB1A5: mov     ecx, ebp
0x7AB1A7: call    edx
0x7AB1A9: mov     al, bl
0x7AB1AB: mov     ecx, dword ptr [esp+78h+var_C]
0x7AB1AF: mov     large fs:0, ecx
0x7AB1B6: pop     ecx
0x7AB1B7: pop     edi
0x7AB1B8: pop     esi
0x7AB1B9: pop     ebp
0x7AB1BA: pop     ebx
0x7AB1BB: add     esp, 64h
0x7AB1BE: retn    8
