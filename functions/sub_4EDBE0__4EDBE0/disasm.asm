0x4EDBE0: mov     eax, [esp+arg_0]
0x4EDBE4: push    ebx
0x4EDBE5: push    edi
0x4EDBE6: push    0; int
0x4EDBE8: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x4EDBED: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EDBF2: push    0; int
0x4EDBF4: push    eax; void *
0x4EDBF5: mov     ebx, ecx
0x4EDBF7: call    OblivionDynamicCast
0x4EDBFC: mov     edi, eax
0x4EDBFE: add     esp, 14h
0x4EDC01: test    edi, edi
0x4EDC03: jnz     short loc_4EDC0C
0x4EDC05: pop     edi
0x4EDC06: mov     al, 1
0x4EDC08: pop     ebx
0x4EDC09: retn    4
0x4EDC0C: push    edi; a2
0x4EDC0D: mov     ecx, ebx; this
0x4EDC0F: call    TESForm_CompareAllComponentsTo
0x4EDC14: test    al, al
0x4EDC16: jnz     short loc_4EDC05
0x4EDC18: mov     cl, [ebx+2Dh]
0x4EDC1B: cmp     cl, [edi+2Dh]
0x4EDC1E: jnz     short loc_4EDC05
0x4EDC20: mov     dl, [ebx+2Ch]
0x4EDC23: cmp     dl, [edi+2Ch]
0x4EDC26: jnz     short loc_4EDC05
0x4EDC28: push    ebp
0x4EDC29: mov     edx, 64h ; 'd'
0x4EDC2E: lea     eax, [edi+3Ch]
0x4EDC31: lea     ecx, [ebx+3Ch]
0x4EDC34: push    esi
0x4EDC35: mov     esi, [ecx]
0x4EDC37: cmp     esi, [eax]
0x4EDC39: jnz     short loc_4EDC4D
0x4EDC3B: sub     edx, 4
0x4EDC3E: add     eax, 4
0x4EDC41: add     ecx, 4
0x4EDC44: cmp     edx, 4
0x4EDC47: jnb     short loc_4EDC35
0x4EDC49: test    edx, edx
0x4EDC4B: jz      short loc_4EDCAA
0x4EDC4D: movzx   esi, byte ptr [ecx]
0x4EDC50: movzx   ebp, byte ptr [eax]
0x4EDC53: sub     esi, ebp
0x4EDC55: jnz     short loc_4EDC9C
0x4EDC57: sub     edx, 1
0x4EDC5A: add     eax, 1
0x4EDC5D: add     ecx, 1
0x4EDC60: test    edx, edx
0x4EDC62: jz      short loc_4EDCAA
0x4EDC64: movzx   esi, byte ptr [ecx]
0x4EDC67: movzx   ebp, byte ptr [eax]
0x4EDC6A: sub     esi, ebp
0x4EDC6C: jnz     short loc_4EDC9C
0x4EDC6E: sub     edx, 1
0x4EDC71: add     eax, 1
0x4EDC74: add     ecx, 1
0x4EDC77: test    edx, edx
0x4EDC79: jz      short loc_4EDCAA
0x4EDC7B: movzx   esi, byte ptr [ecx]
0x4EDC7E: movzx   ebp, byte ptr [eax]
0x4EDC81: sub     esi, ebp
0x4EDC83: jnz     short loc_4EDC9C
0x4EDC85: sub     edx, 1
0x4EDC88: add     eax, 1
0x4EDC8B: add     ecx, 1
0x4EDC8E: test    edx, edx
0x4EDC90: jz      short loc_4EDCAA
0x4EDC92: movzx   esi, byte ptr [ecx]
0x4EDC95: movzx   eax, byte ptr [eax]
0x4EDC98: sub     esi, eax
0x4EDC9A: jz      short loc_4EDCAA
0x4EDC9C: test    esi, esi
0x4EDC9E: mov     eax, 1
0x4EDCA3: jg      short loc_4EDCAC
0x4EDCA5: or      eax, 0FFFFFFFFh
0x4EDCA8: jmp     short loc_4EDCAC
0x4EDCAA: xor     eax, eax
0x4EDCAC: test    eax, eax
0x4EDCAE: jnz     short loc_4EDCE7
0x4EDCB0: mov     edx, [ebx+20h]
0x4EDCB3: mov     edx, [edx+0Ch]
0x4EDCB6: lea     ecx, [ebx+20h]
0x4EDCB9: lea     eax, [edi+20h]
0x4EDCBC: push    eax
0x4EDCBD: call    edx
0x4EDCBF: test    al, al
0x4EDCC1: jnz     short loc_4EDCE7
0x4EDCC3: mov     eax, [ebx+38h]
0x4EDCC6: cmp     eax, [edi+38h]
0x4EDCC9: jnz     short loc_4EDCE7
0x4EDCCB: mov     eax, [ebx+30h]
0x4EDCCE: test    eax, eax
0x4EDCD0: jnz     short loc_4EDCD7
0x4EDCD2: mov     eax, offset EmptyString
0x4EDCD7: mov     ecx, [edi+30h]
0x4EDCDA: test    ecx, ecx
0x4EDCDC: jnz     short loc_4EDCE3
0x4EDCDE: mov     ecx, offset EmptyString
0x4EDCE3: cmp     eax, ecx
0x4EDCE5: jz      short loc_4EDCF0
0x4EDCE7: pop     esi
0x4EDCE8: pop     ebp
0x4EDCE9: pop     edi
0x4EDCEA: mov     al, 1
0x4EDCEC: pop     ebx
0x4EDCED: retn    4
0x4EDCF0: mov     eax, 0Ch
0x4EDCF5: lea     ecx, [edi+0A0h]
0x4EDCFB: lea     edx, [ebx+0A0h]
0x4EDD01: mov     esi, [edx]
0x4EDD03: cmp     esi, [ecx]
0x4EDD05: jnz     short loc_4EDD19
0x4EDD07: sub     eax, 4
0x4EDD0A: add     ecx, 4
0x4EDD0D: add     edx, 4
0x4EDD10: cmp     eax, 4
0x4EDD13: jnb     short loc_4EDD01
0x4EDD15: test    eax, eax
0x4EDD17: jz      short loc_4EDD80
0x4EDD19: movzx   esi, byte ptr [edx]
0x4EDD1C: movzx   edi, byte ptr [ecx]
0x4EDD1F: sub     esi, edi
0x4EDD21: jnz     short loc_4EDD68
0x4EDD23: sub     eax, 1
0x4EDD26: add     ecx, 1
0x4EDD29: add     edx, 1
0x4EDD2C: test    eax, eax
0x4EDD2E: jz      short loc_4EDD80
0x4EDD30: movzx   esi, byte ptr [edx]
0x4EDD33: movzx   edi, byte ptr [ecx]
0x4EDD36: sub     esi, edi
0x4EDD38: jnz     short loc_4EDD68
0x4EDD3A: sub     eax, 1
0x4EDD3D: add     ecx, 1
0x4EDD40: add     edx, 1
0x4EDD43: test    eax, eax
0x4EDD45: jz      short loc_4EDD80
0x4EDD47: movzx   esi, byte ptr [edx]
0x4EDD4A: movzx   edi, byte ptr [ecx]
0x4EDD4D: sub     esi, edi
0x4EDD4F: jnz     short loc_4EDD68
0x4EDD51: sub     eax, 1
0x4EDD54: add     ecx, 1
0x4EDD57: add     edx, 1
0x4EDD5A: test    eax, eax
0x4EDD5C: jz      short loc_4EDD80
0x4EDD5E: movzx   esi, byte ptr [edx]
0x4EDD61: movzx   ecx, byte ptr [ecx]
0x4EDD64: sub     esi, ecx
0x4EDD66: jz      short loc_4EDD80
0x4EDD68: test    esi, esi
0x4EDD6A: mov     eax, 1
0x4EDD6F: jg      short loc_4EDD82
0x4EDD71: pop     esi
0x4EDD72: or      eax, 0FFFFFFFFh
0x4EDD75: pop     ebp
0x4EDD76: test    eax, eax
0x4EDD78: pop     edi
0x4EDD79: setnz   al
0x4EDD7C: pop     ebx
0x4EDD7D: retn    4
0x4EDD80: xor     eax, eax
0x4EDD82: pop     esi
0x4EDD83: pop     ebp
0x4EDD84: test    eax, eax
0x4EDD86: pop     edi
0x4EDD87: setnz   al
0x4EDD8A: pop     ebx
0x4EDD8B: retn    4
