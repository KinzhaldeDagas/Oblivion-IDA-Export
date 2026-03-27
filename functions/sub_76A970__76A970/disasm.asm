0x76A970: sub     esp, 10h
0x76A973: push    ebx
0x76A974: push    ebp
0x76A975: push    esi
0x76A976: mov     ebp, ecx
0x76A978: mov     ecx, [ebp+8BCh]
0x76A97E: push    edi
0x76A97F: call    sub_776B10
0x76A984: mov     ecx, [ebp+8B4h]
0x76A98A: call    sub_7786C0
0x76A98F: mov     ecx, [ebp+8B0h]
0x76A995: call    sub_777A50
0x76A99A: mov     eax, [ebp+280h]
0x76A9A0: push    1; a2
0x76A9A2: push    eax; a1
0x76A9A3: call    UnsetRenderTarget
0x76A9A8: mov     ecx, [ebp+280h]
0x76A9AE: push    2; a2
0x76A9B0: push    ecx; a1
0x76A9B1: call    UnsetRenderTarget
0x76A9B6: mov     edx, [ebp+280h]
0x76A9BC: push    3; a2
0x76A9BE: push    edx; a1
0x76A9BF: call    UnsetRenderTarget
0x76A9C4: mov     ecx, [ebp+888h]
0x76A9CA: xor     ebx, ebx
0x76A9CC: add     esp, 18h
0x76A9CF: xor     eax, eax
0x76A9D1: cmp     ecx, ebx
0x76A9D3: jbe     short loc_76A9EE
0x76A9D5: mov     esi, [ebp+88Ch]
0x76A9DB: mov     edx, esi
0x76A9DD: lea     ecx, [ecx+0]
0x76A9E0: cmp     [edx], ebx
0x76A9E2: jnz     short loc_76AA37
0x76A9E4: add     eax, 1
0x76A9E7: add     edx, 4
0x76A9EA: cmp     eax, ecx
0x76A9EC: jb      short loc_76A9E0
0x76A9EE: xor     eax, eax
0x76A9F0: cmp     eax, ebx
0x76A9F2: mov     [esp+20h+var_10], eax
0x76A9F6: jz      loc_76AADB
0x76A9FC: lea     esp, [esp+0]
0x76AA00: lea     eax, [esp+20h+a2]
0x76AA04: push    eax
0x76AA05: lea     ecx, [esp+24h+var_4]
0x76AA09: push    ecx
0x76AA0A: lea     edx, [esp+28h+var_10]
0x76AA0E: push    edx
0x76AA0F: lea     ecx, [ebp+884h]
0x76AA15: mov     [esp+2Ch+a2], ebx
0x76AA19: call    sub_7B2600
0x76AA1E: mov     edi, [esp+20h+a2]
0x76AA22: mov     eax, [edi]
0x76AA24: mov     edx, [eax+70h]
0x76AA27: push    ebx
0x76AA28: mov     ecx, edi
0x76AA2A: call    edx
0x76AA2C: mov     esi, [eax+10h]
0x76AA2F: cmp     esi, ebx
0x76AA31: jnz     short loc_76AA3C
0x76AA33: xor     eax, eax
0x76AA35: jmp     short loc_76AA6A
0x76AA37: mov     eax, [esi+eax*4]
0x76AA3A: jmp     short loc_76A9F0
0x76AA3C: mov     eax, [esi]
0x76AA3E: mov     edx, [eax+10h]
0x76AA41: mov     ecx, esi
0x76AA43: call    edx
0x76AA45: cmp     eax, ebx
0x76AA47: jz      short loc_76AA62
0x76AA49: lea     esp, [esp+0]
0x76AA50: cmp     eax, offset unk_B4265C
0x76AA55: jz      loc_76ACB3
0x76AA5B: mov     eax, [eax+4]
0x76AA5E: cmp     eax, ebx
0x76AA60: jnz     short loc_76AA50
0x76AA62: xor     al, al
0x76AA64: neg     al
0x76AA66: sbb     eax, eax
0x76AA68: and     eax, esi
0x76AA6A: mov     edx, [eax]
0x76AA6C: mov     ecx, eax
0x76AA6E: mov     eax, [edx+2Ch]
0x76AA71: call    eax
0x76AA73: mov     edx, [edi]
0x76AA75: mov     eax, [edx+74h]
0x76AA78: mov     ecx, edi
0x76AA7A: call    eax
0x76AA7C: cmp     eax, ebx
0x76AA7E: jz      short loc_76AAB9
0x76AA80: mov     esi, [eax+10h]
0x76AA83: cmp     esi, ebx
0x76AA85: jz      short loc_76AAB9
0x76AA87: mov     edx, [esi]
0x76AA89: mov     eax, [edx+10h]
0x76AA8C: mov     ecx, esi
0x76AA8E: call    eax
0x76AA90: cmp     eax, ebx
0x76AA92: jz      short loc_76AAA6
0x76AA94: cmp     eax, offset unk_B4263C
0x76AA99: jz      loc_76ACBA
0x76AA9F: mov     eax, [eax+4]
0x76AAA2: cmp     eax, ebx
0x76AAA4: jnz     short loc_76AA94
0x76AAA6: xor     al, al
0x76AAA8: neg     al
0x76AAAA: sbb     eax, eax
0x76AAAC: and     eax, esi
0x76AAAE: jz      short loc_76AAB9
0x76AAB0: mov     edx, [eax]
0x76AAB2: mov     ecx, eax
0x76AAB4: mov     eax, [edx+2Ch]
0x76AAB7: call    eax
0x76AAB9: lea     ecx, [edi+4]
0x76AABC: push    ecx; lpAddend
0x76AABD: call    dword ptr ds:0A2807Ch
0x76AAC3: test    eax, eax
0x76AAC5: jnz     short loc_76AAD1
0x76AAC7: mov     edx, [edi]
0x76AAC9: mov     eax, [edx]
0x76AACB: push    1
0x76AACD: mov     ecx, edi
0x76AACF: call    eax
0x76AAD1: cmp     [esp+20h+var_10], ebx
0x76AAD5: jnz     loc_76AA00
0x76AADB: mov     edx, [ebp+8C4h]
0x76AAE1: xor     eax, eax
0x76AAE3: cmp     edx, ebx
0x76AAE5: jbe     short loc_76AB02
0x76AAE7: mov     esi, [ebp+8C8h]
0x76AAED: mov     ecx, esi
0x76AAEF: nop
0x76AAF0: cmp     [ecx], ebx
0x76AAF2: jnz     loc_76ACC1
0x76AAF8: add     eax, 1
0x76AAFB: add     ecx, 4
0x76AAFE: cmp     eax, edx
0x76AB00: jb      short loc_76AAF0
0x76AB02: xor     eax, eax
0x76AB04: cmp     eax, ebx
0x76AB06: mov     [esp+20h+var_10], eax
0x76AB0A: jz      short loc_76AB4D
0x76AB0C: lea     esp, [esp+0]
0x76AB10: lea     ecx, [esp+20h+var_4]
0x76AB14: push    ecx
0x76AB15: lea     edx, [esp+24h+a2]
0x76AB19: push    edx
0x76AB1A: lea     eax, [esp+28h+var_10]
0x76AB1E: lea     edi, [ebp+8C0h]
0x76AB24: push    eax
0x76AB25: mov     ecx, edi
0x76AB27: call    sub_452600
0x76AB2C: mov     edx, [ebp+0]
0x76AB2F: mov     esi, [esp+20h+a2]
0x76AB33: mov     eax, [edx+0CCh]
0x76AB39: push    esi
0x76AB3A: mov     ecx, ebp
0x76AB3C: call    eax
0x76AB3E: push    ebx; a3
0x76AB3F: push    esi; a2
0x76AB40: mov     ecx, edi; this
0x76AB42: call    NiTMap_SetAt
0x76AB47: cmp     [esp+20h+var_10], ebx
0x76AB4B: jnz     short loc_76AB10
0x76AB4D: mov     edx, [ebp+8D4h]
0x76AB53: xor     eax, eax
0x76AB55: cmp     edx, ebx
0x76AB57: jbe     short loc_76AB73
0x76AB59: mov     esi, [ebp+8D8h]
0x76AB5F: mov     ecx, esi
0x76AB61: cmp     [ecx], ebx
0x76AB63: jnz     loc_76ACC9
0x76AB69: add     eax, 1
0x76AB6C: add     ecx, 4
0x76AB6F: cmp     eax, edx
0x76AB71: jb      short loc_76AB61
0x76AB73: xor     eax, eax
0x76AB75: cmp     eax, ebx
0x76AB77: mov     [esp+20h+var_10], eax
0x76AB7B: jz      short loc_76ABBD
0x76AB7D: lea     ecx, [ecx+0]
0x76AB80: lea     ecx, [esp+20h+var_4]
0x76AB84: push    ecx
0x76AB85: lea     edx, [esp+24h+a2]
0x76AB89: push    edx
0x76AB8A: lea     eax, [esp+28h+var_10]
0x76AB8E: lea     edi, [ebp+8D0h]
0x76AB94: push    eax
0x76AB95: mov     ecx, edi
0x76AB97: call    sub_452600
0x76AB9C: mov     edx, [ebp+0]
0x76AB9F: mov     esi, [esp+20h+a2]
0x76ABA3: mov     eax, [edx+0CCh]
0x76ABA9: push    esi
0x76ABAA: mov     ecx, ebp
0x76ABAC: call    eax
0x76ABAE: push    ebx; a3
0x76ABAF: push    esi; a2
0x76ABB0: mov     ecx, edi; this
0x76ABB2: call    NiTMap_SetAt
0x76ABB7: cmp     [esp+20h+var_10], ebx
0x76ABBB: jnz     short loc_76AB80
0x76ABBD: mov     edx, [ebp+8E4h]
0x76ABC3: xor     eax, eax
0x76ABC5: cmp     edx, ebx
0x76ABC7: jbe     short loc_76ABE3
0x76ABC9: mov     esi, [ebp+8E8h]
0x76ABCF: mov     ecx, esi
0x76ABD1: cmp     [ecx], ebx
0x76ABD3: jnz     loc_76ACD1
0x76ABD9: add     eax, 1
0x76ABDC: add     ecx, 4
0x76ABDF: cmp     eax, edx
0x76ABE1: jb      short loc_76ABD1
0x76ABE3: xor     eax, eax
0x76ABE5: cmp     eax, ebx
0x76ABE7: mov     [esp+20h+var_10], eax
0x76ABEB: jz      short loc_76AC32
0x76ABED: lea     ecx, [ecx+0]
0x76ABF0: lea     ecx, [esp+20h+var_8]
0x76ABF4: push    ecx
0x76ABF5: lea     edx, [esp+24h+a2]
0x76ABF9: push    edx
0x76ABFA: lea     eax, [esp+28h+var_10]
0x76ABFE: lea     edi, [ebp+8E0h]
0x76AC04: push    eax
0x76AC05: mov     ecx, edi
0x76AC07: call    sub_452600
0x76AC0C: mov     ecx, [esp+20h+var_8]
0x76AC10: cmp     ecx, ebx
0x76AC12: mov     esi, [esp+20h+a2]
0x76AC16: mov     [esi+24h], ebx
0x76AC19: jz      short loc_76AC23
0x76AC1B: mov     edx, [ecx]
0x76AC1D: mov     eax, [edx]
0x76AC1F: push    1
0x76AC21: call    eax
0x76AC23: push    ebx; a3
0x76AC24: push    esi; a2
0x76AC25: mov     ecx, edi; this
0x76AC27: call    NiTMap_SetAt
0x76AC2C: cmp     [esp+20h+var_10], ebx
0x76AC30: jnz     short loc_76ABF0
0x76AC32: call    sub_76DB00
0x76AC37: mov     esi, [ebp+908h]
0x76AC3D: cmp     esi, ebx
0x76AC3F: jz      short loc_76AC54
0x76AC41: mov     ecx, [esi+8]
0x76AC44: mov     edx, [ecx]
0x76AC46: lea     eax, [esi+8]
0x76AC49: mov     eax, [edx+58h]
0x76AC4C: mov     esi, [esi]
0x76AC4E: call    eax
0x76AC50: cmp     esi, ebx
0x76AC52: jnz     short loc_76AC41
0x76AC54: mov     ecx, [ebp+8A8h]
0x76AC5A: mov     edx, [ecx]
0x76AC5C: mov     eax, [edx]
0x76AC5E: call    eax
0x76AC60: movzx   edi, word ptr [ebp+0AA2h]
0x76AC67: xor     esi, esi
0x76AC69: cmp     edi, ebx
0x76AC6B: mov     dword ptr [esp+20h+var_4], edi
0x76AC6F: jbe     short loc_76AC9A
0x76AC71: mov     ecx, [ebp+0A9Ch]
0x76AC77: mov     eax, [ecx+esi*4]
0x76AC7A: cmp     eax, ebx
0x76AC7C: mov     edx, [ebp+0AACh]
0x76AC82: mov     ecx, [edx+esi*4]
0x76AC85: jz      short loc_76AC93
0x76AC87: push    ecx
0x76AC88: push    1
0x76AC8A: call    eax
0x76AC8C: add     esp, 8
0x76AC8F: test    al, al
0x76AC91: jz      short loc_76ACD9
0x76AC93: add     esi, 1
0x76AC96: cmp     esi, edi
0x76AC98: jb      short loc_76AC71
0x76AC9A: mov     ecx, [ebp+878h]
0x76ACA0: mov     eax, [ecx]
0x76ACA2: mov     edx, [eax+70h]
0x76ACA5: push    ebx
0x76ACA6: call    edx
0x76ACA8: mov     esi, [eax+10h]
0x76ACAB: cmp     esi, ebx
0x76ACAD: jnz     short loc_76ACF0
0x76ACAF: xor     eax, eax
0x76ACB1: jmp     short loc_76AD1A
0x76ACB3: mov     al, 1
0x76ACB5: jmp     loc_76AA64
0x76ACBA: mov     al, 1
0x76ACBC: jmp     loc_76AAA8
0x76ACC1: mov     eax, [esi+eax*4]
0x76ACC4: jmp     loc_76AB04
0x76ACC9: mov     eax, [esi+eax*4]
0x76ACCC: jmp     loc_76AB75
0x76ACD1: mov     eax, [esi+eax*4]
0x76ACD4: jmp     loc_76ABE5
0x76ACD9: push    offset aNidx9rendererR; "NiDX9Renderer::Recreate> Reset notifica"...
0x76ACDE: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76ACE3: add     esp, 4
0x76ACE6: pop     edi
0x76ACE7: pop     esi
0x76ACE8: pop     ebp
0x76ACE9: xor     al, al
0x76ACEB: pop     ebx
0x76ACEC: add     esp, 10h
0x76ACEF: retn
0x76ACF0: mov     eax, [esi]
0x76ACF2: mov     edx, [eax+10h]
0x76ACF5: mov     ecx, esi
0x76ACF7: call    edx
0x76ACF9: cmp     eax, ebx
0x76ACFB: jz      short loc_76AD12
0x76ACFD: lea     ecx, [ecx+0]
0x76AD00: cmp     eax, offset unk_B4265C
0x76AD05: jz      loc_76ADA7
0x76AD0B: mov     eax, [eax+4]
0x76AD0E: cmp     eax, ebx
0x76AD10: jnz     short loc_76AD00
0x76AD12: xor     al, al
0x76AD14: neg     al
0x76AD16: sbb     eax, eax
0x76AD18: and     eax, esi
0x76AD1A: mov     ecx, [ebp+280h]
0x76AD20: mov     edx, [ecx]
0x76AD22: add     eax, 14h
0x76AD25: push    eax
0x76AD26: mov     eax, [edx+40h]
0x76AD29: push    ecx
0x76AD2A: call    eax
0x76AD2C: test    eax, eax
0x76AD2E: jl      short loc_76ACE6
0x76AD30: add     dword ptr [ebp+6ECh], 1
0x76AD37: mov     ecx, [ebp+888h]
0x76AD3D: xor     eax, eax
0x76AD3F: cmp     ecx, ebx
0x76AD41: jbe     short loc_76AD5E
0x76AD43: mov     esi, [ebp+88Ch]
0x76AD49: mov     edx, esi
0x76AD4B: jmp     short loc_76AD50
0x76AD4D: align 10h
0x76AD50: cmp     [edx], ebx
0x76AD52: jnz     short loc_76ADAE
0x76AD54: add     eax, 1
0x76AD57: add     edx, 4
0x76AD5A: cmp     eax, ecx
0x76AD5C: jb      short loc_76AD50
0x76AD5E: xor     eax, eax
0x76AD60: cmp     eax, ebx
0x76AD62: mov     [esp+20h+var_10], eax
0x76AD66: jz      loc_76AE5A
0x76AD6C: lea     esp, [esp+0]
0x76AD70: lea     ecx, [esp+20h+a2]
0x76AD74: push    ecx
0x76AD75: lea     edx, [esp+24h+var_8]
0x76AD79: push    edx
0x76AD7A: lea     eax, [esp+28h+var_10]
0x76AD7E: push    eax
0x76AD7F: lea     ecx, [ebp+884h]
0x76AD85: mov     [esp+2Ch+a2], ebx
0x76AD89: call    sub_7B2600
0x76AD8E: mov     edi, [esp+20h+a2]
0x76AD92: mov     edx, [edi]
0x76AD94: mov     eax, [edx+70h]
0x76AD97: push    ebx
0x76AD98: mov     ecx, edi
0x76AD9A: call    eax
0x76AD9C: mov     esi, [eax+10h]
0x76AD9F: cmp     esi, ebx
0x76ADA1: jnz     short loc_76ADB3
0x76ADA3: xor     eax, eax
0x76ADA5: jmp     short loc_76ADDA
0x76ADA7: mov     al, 1
0x76ADA9: jmp     loc_76AD14
0x76ADAE: mov     eax, [esi+eax*4]
0x76ADB1: jmp     short loc_76AD60
0x76ADB3: mov     edx, [esi]
0x76ADB5: mov     eax, [edx+10h]
0x76ADB8: mov     ecx, esi
0x76ADBA: call    eax
0x76ADBC: cmp     eax, ebx
0x76ADBE: jz      short loc_76ADD2
0x76ADC0: cmp     eax, offset unk_B4265C
0x76ADC5: jz      loc_76AE88
0x76ADCB: mov     eax, [eax+4]
0x76ADCE: cmp     eax, ebx
0x76ADD0: jnz     short loc_76ADC0
0x76ADD2: xor     al, al
0x76ADD4: neg     al
0x76ADD6: sbb     eax, eax
0x76ADD8: and     eax, esi
0x76ADDA: mov     ecx, [ebp+280h]
0x76ADE0: mov     edx, [eax]
0x76ADE2: mov     edx, [edx+30h]
0x76ADE5: push    ecx
0x76ADE6: mov     ecx, eax
0x76ADE8: call    edx
0x76ADEA: mov     eax, [edi]
0x76ADEC: mov     edx, [eax+84h]
0x76ADF2: mov     ecx, edi
0x76ADF4: call    edx
0x76ADF6: mov     esi, eax
0x76ADF8: cmp     esi, ebx
0x76ADFA: jz      short loc_76AE38
0x76ADFC: mov     eax, [esi]
0x76ADFE: mov     edx, [eax+10h]
0x76AE01: mov     ecx, esi
0x76AE03: call    edx
0x76AE05: cmp     eax, ebx
0x76AE07: jz      short loc_76AE1E
0x76AE09: lea     esp, [esp+0]
0x76AE10: cmp     eax, offset unk_B4263C
0x76AE15: jz      short loc_76AE8F
0x76AE17: mov     eax, [eax+4]
0x76AE1A: cmp     eax, ebx
0x76AE1C: jnz     short loc_76AE10
0x76AE1E: xor     al, al
0x76AE20: neg     al
0x76AE22: sbb     eax, eax
0x76AE24: and     eax, esi
0x76AE26: jz      short loc_76AE38
0x76AE28: mov     ecx, [ebp+280h]
0x76AE2E: mov     edx, [eax]
0x76AE30: mov     edx, [edx+30h]
0x76AE33: push    ecx
0x76AE34: mov     ecx, eax
0x76AE36: call    edx
0x76AE38: lea     eax, [edi+4]
0x76AE3B: push    eax; lpAddend
0x76AE3C: call    dword ptr ds:0A2807Ch
0x76AE42: test    eax, eax
0x76AE44: jnz     short loc_76AE50
0x76AE46: mov     edx, [edi]
0x76AE48: mov     eax, [edx]
0x76AE4A: push    1
0x76AE4C: mov     ecx, edi
0x76AE4E: call    eax
0x76AE50: cmp     [esp+20h+var_10], ebx
0x76AE54: jnz     loc_76AD70
0x76AE5A: mov     ecx, [ebp+880h]
0x76AE60: mov     [ebp+87Ch], ecx
0x76AE66: mov     ecx, ebp; this
0x76AE68: call    sub_768C10
0x76AE6D: test    al, al
0x76AE6F: jnz     short loc_76AE93
0x76AE71: push    offset aNidx9rendere_0; "NiDX9Renderer::Recreate> Could not init"...
0x76AE76: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76AE7B: add     esp, 4
0x76AE7E: pop     edi
0x76AE7F: pop     esi
0x76AE80: pop     ebp
0x76AE81: xor     al, al
0x76AE83: pop     ebx
0x76AE84: add     esp, 10h
0x76AE87: retn
0x76AE88: mov     al, 1
0x76AE8A: jmp     loc_76ADD4
0x76AE8F: mov     al, 1
0x76AE91: jmp     short loc_76AE20
0x76AE93: mov     edx, [ebp+8C4h]
0x76AE99: xor     eax, eax
0x76AE9B: cmp     edx, ebx
0x76AE9D: jbe     short loc_76AEB9
0x76AE9F: mov     esi, [ebp+8C8h]
0x76AEA5: mov     ecx, esi
0x76AEA7: cmp     [ecx], ebx
0x76AEA9: jnz     loc_76B052
0x76AEAF: add     eax, 1
0x76AEB2: add     ecx, 4
0x76AEB5: cmp     eax, edx
0x76AEB7: jb      short loc_76AEA7
0x76AEB9: xor     eax, eax
0x76AEBB: cmp     eax, ebx
0x76AEBD: mov     [esp+20h+var_10], eax
0x76AEC1: jz      short loc_76AEF5
0x76AEC3: lea     edx, [esp+20h+a2]
0x76AEC7: push    edx
0x76AEC8: lea     eax, [esp+24h+var_8]
0x76AECC: push    eax
0x76AECD: lea     ecx, [esp+28h+var_10]
0x76AED1: push    ecx
0x76AED2: lea     ecx, [ebp+8C0h]
0x76AED8: call    sub_452600
0x76AEDD: mov     edx, [ebp+0]
0x76AEE0: mov     eax, [esp+20h+var_8]
0x76AEE4: mov     edx, [edx+108h]
0x76AEEA: push    eax
0x76AEEB: mov     ecx, ebp
0x76AEED: call    edx
0x76AEEF: cmp     [esp+20h+var_10], ebx
0x76AEF3: jnz     short loc_76AEC3
0x76AEF5: mov     edx, [ebp+8D4h]
0x76AEFB: xor     eax, eax
0x76AEFD: cmp     edx, ebx
0x76AEFF: jbe     short loc_76AF22
0x76AF01: mov     esi, [ebp+8D8h]
0x76AF07: mov     ecx, esi
0x76AF09: lea     esp, [esp+0]
0x76AF10: cmp     [ecx], ebx
0x76AF12: jnz     loc_76B05A
0x76AF18: add     eax, 1
0x76AF1B: add     ecx, 4
0x76AF1E: cmp     eax, edx
0x76AF20: jb      short loc_76AF10
0x76AF22: xor     eax, eax
0x76AF24: cmp     eax, ebx
0x76AF26: mov     [esp+20h+var_10], eax
0x76AF2A: jz      short loc_76AF62
0x76AF2C: lea     esp, [esp+0]
0x76AF30: lea     eax, [esp+20h+a2]
0x76AF34: push    eax
0x76AF35: lea     ecx, [esp+24h+var_8]
0x76AF39: push    ecx
0x76AF3A: lea     edx, [esp+28h+var_10]
0x76AF3E: push    edx
0x76AF3F: lea     ecx, [ebp+8D0h]
0x76AF45: call    sub_452600
0x76AF4A: mov     ecx, [esp+20h+var_8]
0x76AF4E: mov     eax, [ebp+0]
0x76AF51: mov     edx, [eax+110h]
0x76AF57: push    ecx
0x76AF58: mov     ecx, ebp
0x76AF5A: call    edx
0x76AF5C: cmp     [esp+20h+var_10], ebx
0x76AF60: jnz     short loc_76AF30
0x76AF62: mov     edx, [ebp+8E4h]
0x76AF68: xor     eax, eax
0x76AF6A: cmp     edx, ebx
0x76AF6C: jbe     short loc_76AF88
0x76AF6E: mov     esi, [ebp+8E8h]
0x76AF74: mov     ecx, esi
0x76AF76: cmp     [ecx], ebx
0x76AF78: jnz     loc_76B062
0x76AF7E: add     eax, 1
0x76AF81: add     ecx, 4
0x76AF84: cmp     eax, edx
0x76AF86: jb      short loc_76AF76
0x76AF88: xor     eax, eax
0x76AF8A: cmp     eax, ebx
0x76AF8C: mov     [esp+20h+var_10], eax
0x76AF90: jz      short loc_76AFC4
0x76AF92: lea     eax, [esp+20h+a2]
0x76AF96: push    eax
0x76AF97: lea     ecx, [esp+24h+var_8]
0x76AF9B: push    ecx
0x76AF9C: lea     edx, [esp+28h+var_10]
0x76AFA0: push    edx
0x76AFA1: lea     ecx, [ebp+8E0h]
0x76AFA7: call    sub_452600
0x76AFAC: mov     ecx, [esp+20h+var_8]
0x76AFB0: mov     eax, [ebp+0]
0x76AFB3: mov     edx, [eax+114h]
0x76AFB9: push    ecx
0x76AFBA: mov     ecx, ebp
0x76AFBC: call    edx
0x76AFBE: cmp     [esp+20h+var_10], ebx
0x76AFC2: jnz     short loc_76AF92
0x76AFC4: mov     eax, [ebp+280h]
0x76AFCA: push    eax
0x76AFCB: call    sub_76DB60
0x76AFD0: mov     esi, [ebp+908h]
0x76AFD6: add     esp, 4
0x76AFD9: cmp     esi, ebx
0x76AFDB: jz      short loc_76AFF3
0x76AFDD: lea     ecx, [ecx+0]
0x76AFE0: mov     ecx, [esi+8]
0x76AFE3: mov     edx, [ecx]
0x76AFE5: lea     eax, [esi+8]
0x76AFE8: mov     eax, [edx+5Ch]
0x76AFEB: mov     esi, [esi]
0x76AFED: call    eax
0x76AFEF: cmp     esi, ebx
0x76AFF1: jnz     short loc_76AFE0
0x76AFF3: mov     ecx, [ebp+8ACh]
0x76AFF9: mov     edx, [ecx]
0x76AFFB: mov     eax, [edx+104h]
0x76B001: call    eax
0x76B003: mov     ecx, [ebp+8BCh]
0x76B009: call    sub_776240
0x76B00E: mov     edi, dword ptr [esp+20h+var_4]
0x76B012: xor     esi, esi
0x76B014: cmp     edi, ebx
0x76B016: jbe     short loc_76B048
0x76B018: jmp     short loc_76B020
0x76B01A: align 10h
0x76B020: mov     ecx, [ebp+0A9Ch]
0x76B026: mov     eax, [ecx+esi*4]
0x76B029: cmp     eax, ebx
0x76B02B: mov     edx, [ebp+0AACh]
0x76B031: mov     ecx, [edx+esi*4]
0x76B034: jz      short loc_76B041
0x76B036: push    ecx
0x76B037: push    ebx
0x76B038: call    eax
0x76B03A: add     esp, 8
0x76B03D: test    al, al
0x76B03F: jz      short loc_76B06A
0x76B041: add     esi, 1
0x76B044: cmp     esi, edi
0x76B046: jb      short loc_76B020
0x76B048: pop     edi
0x76B049: pop     esi
0x76B04A: pop     ebp
0x76B04B: mov     al, 1
0x76B04D: pop     ebx
0x76B04E: add     esp, 10h
0x76B051: retn
0x76B052: mov     eax, [esi+eax*4]
0x76B055: jmp     loc_76AEBB
0x76B05A: mov     eax, [esi+eax*4]
0x76B05D: jmp     loc_76AF24
0x76B062: mov     eax, [esi+eax*4]
0x76B065: jmp     loc_76AF8A
0x76B06A: push    offset aNidx9rendere_1; "NiDX9Renderer::Recreate> Reset notifica"...
0x76B06F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76B074: add     esp, 4
0x76B077: pop     edi
0x76B078: pop     esi
0x76B079: pop     ebp
0x76B07A: xor     al, al
0x76B07C: pop     ebx
0x76B07D: add     esp, 10h
0x76B080: retn
