0x64A8B0: sub     esp, 10h
0x64A8B3: push    esi
0x64A8B4: mov     esi, [esp+14h+arg_0]
0x64A8B8: mov     [esp+14h+var_4], ecx
0x64A8BC: mov     ecx, esi; this
0x64A8BE: call    Actor_IsCreature
0x64A8C3: test    al, al
0x64A8C5: jnz     loc_64ABBE
0x64A8CB: mov     eax, [esi]
0x64A8CD: mov     edx, [eax+380h]
0x64A8D3: mov     ecx, esi
0x64A8D5: call    edx
0x64A8D7: test    eax, eax
0x64A8D9: jnz     loc_64ABBE
0x64A8DF: push    ebx
0x64A8E0: push    ebp
0x64A8E1: push    edi
0x64A8E2: mov     ecx, esi
0x64A8E4: mov     [esp+20h+var_D], al
0x64A8E8: mov     [esp+20h+var_E], al
0x64A8EC: call    sub_5E0380
0x64A8F1: lea     ecx, [esi+44h]; this
0x64A8F4: mov     ebx, eax
0x64A8F6: call    ExtraDataList__GetTravelHorse
0x64A8FB: mov     edi, eax
0x64A8FD: xor     ebp, ebp
0x64A8FF: test    edi, edi
0x64A901: jz      short loc_64A915
0x64A903: mov     eax, [edi]
0x64A905: mov     edx, [eax+190h]
0x64A90B: mov     ecx, edi
0x64A90D: call    edx
0x64A90F: test    al, al
0x64A911: jz      short loc_64A915
0x64A913: mov     ebp, edi
0x64A915: test    ebx, ebx
0x64A917: fldz
0x64A919: fstp    dword ptr [esp+20h+var_C]
0x64A91D: mov     byte ptr [esp+20h+arg_0], 0
0x64A922: jz      loc_64AAB6
0x64A928: mov     eax, [ebx+1Ch]
0x64A92B: shr     eax, 17h
0x64A92E: test    al, 1
0x64A930: jnz     short loc_64A967
0x64A932: mov     eax, [esp+20h+var_4]
0x64A936: cmp     dword ptr [eax+34h], 0
0x64A93A: jz      short loc_64A94B
0x64A93C: mov     ecx, [eax+34h]
0x64A93F: mov     edx, [ecx]
0x64A941: mov     eax, [edx+28h]
0x64A944: push    esi
0x64A945: call    eax
0x64A947: fstp    dword ptr [esp+20h+var_C]
0x64A94B: fld     dword ptr [esp+20h+var_C]
0x64A94F: fld     dword ptr ds:0B37528h
0x64A955: fcompp
0x64A957: fnstsw  ax
0x64A959: test    ah, 41h
0x64A95C: jp      short loc_64A967
0x64A95E: test    ebp, ebp
0x64A960: jz      short loc_64A967
0x64A962: mov     byte ptr [esp+20h+arg_0], 1
0x64A967: mov     ecx, [ebx+1Ch]
0x64A96A: shr     ecx, 17h
0x64A96D: test    cl, 1
0x64A970: jnz     short loc_64A97D
0x64A972: cmp     byte ptr [esp+20h+arg_0], 0
0x64A977: jz      loc_64AB24
0x64A97D: test    edi, edi
0x64A97F: jz      loc_64AADE
0x64A985: test    ebp, ebp
0x64A987: jz      loc_64AADE
0x64A98D: cmp     dword ptr [ebp+58h], 0
0x64A991: jz      loc_64AADE
0x64A997: mov     edx, [ebp+0]
0x64A99A: mov     eax, [edx+198h]
0x64A9A0: push    0
0x64A9A2: mov     ecx, ebp
0x64A9A4: call    eax
0x64A9A6: test    al, al
0x64A9A8: jnz     loc_64AADE
0x64A9AE: mov     edx, [ebp+0]
0x64A9B1: mov     eax, [edx+388h]
0x64A9B7: mov     ecx, ebp
0x64A9B9: call    eax
0x64A9BB: test    eax, eax
0x64A9BD: jnz     loc_64AADE
0x64A9C3: mov     edx, [esi]
0x64A9C5: mov     eax, [edx+170h]
0x64A9CB: mov     ecx, esi
0x64A9CD: call    eax
0x64A9CF: push    eax
0x64A9D0: lea     ecx, [edi+44h]
0x64A9D3: call    ExtraDataList__SetOrRemoveExtraOwnership
0x64A9D8: mov     ecx, [esi+58h]
0x64A9DB: mov     edx, [ecx]
0x64A9DD: mov     eax, [edx+8]
0x64A9E0: call    eax
0x64A9E2: cmp     eax, 3
0x64A9E5: jnz     short loc_64A9F8
0x64A9E7: mov     ecx, [ebp+58h]
0x64A9EA: mov     edx, [ecx]
0x64A9EC: mov     eax, [edx+8]
0x64A9EF: call    eax
0x64A9F1: cmp     eax, 3
0x64A9F4: mov     bl, 1
0x64A9F6: jz      short loc_64A9FC
0x64A9F8: mov     bl, [esp+20h+var_E]
0x64A9FC: mov     ecx, edi; this
0x64A9FE: call    TESObjectREFR_GetWorldSpace
0x64AA03: mov     ecx, esi; this
0x64AA05: mov     ebp, eax
0x64AA07: call    TESObjectREFR_GetWorldSpace
0x64AA0C: cmp     ebp, eax
0x64AA0E: jnz     loc_64AB24
0x64AA14: mov     edx, [edi]
0x64AA16: mov     eax, [edx+198h]
0x64AA1C: push    0
0x64AA1E: mov     ecx, edi
0x64AA20: call    eax
0x64AA22: test    al, al
0x64AA24: jnz     loc_64AB24
0x64AA2A: mov     ecx, [edi+8]
0x64AA2D: shr     ecx, 0Bh
0x64AA30: test    cl, 1
0x64AA33: jnz     loc_64AB24
0x64AA39: push    0
0x64AA3B: push    esi
0x64AA3C: mov     ecx, edi
0x64AA3E: call    TesObjectREF_GetDistance
0x64AA43: fstp    [esp+20h+var_C]
0x64AA47: mov     ecx, offset fAIAcquireObjectDistance
0x64AA4C: call    GameSetting_GetSafeFloatPointer
0x64AA51: fld     dword ptr [eax]
0x64AA53: fcomp   [esp+20h+var_C]
0x64AA57: fnstsw  ax
0x64AA59: test    ah, 1
0x64AA5C: jz      short loc_64AA66
0x64AA5E: test    bl, bl
0x64AA60: jz      loc_64AB24
0x64AA66: mov     ebx, [esp+20h+var_4]
0x64AA6A: mov     edx, [ebx]
0x64AA6C: mov     eax, [edx+40Ch]
0x64AA72: mov     ecx, ebx
0x64AA74: call    eax
0x64AA76: test    eax, eax
0x64AA78: jz      short loc_64AAC2
0x64AA7A: mov     edx, [ebx]
0x64AA7C: mov     eax, [edx+40Ch]
0x64AA82: mov     ecx, ebx
0x64AA84: call    eax
0x64AA86: mov     ecx, eax
0x64AA88: call    sub_68A180
0x64AA8D: test    eax, eax
0x64AA8F: jz      short loc_64AAC2
0x64AA91: mov     edx, [ebx]
0x64AA93: mov     eax, [edx+40Ch]
0x64AA99: mov     ecx, ebx
0x64AA9B: call    eax
0x64AA9D: mov     ecx, eax
0x64AA9F: call    sub_68A180
0x64AAA4: mov     edx, [eax]
0x64AAA6: mov     ecx, eax
0x64AAA8: mov     eax, [edx+170h]
0x64AAAE: call    eax
0x64AAB0: cmp     byte ptr [eax+4], 18h
0x64AAB4: jnz     short loc_64AAC2
0x64AAB6: pop     edi
0x64AAB7: pop     ebp
0x64AAB8: pop     ebx
0x64AAB9: xor     al, al
0x64AABB: pop     esi
0x64AABC: add     esp, 10h
0x64AABF: retn    8
0x64AAC2: mov     edx, [esi]
0x64AAC4: mov     eax, [edx+384h]
0x64AACA: push    edi
0x64AACB: mov     ecx, esi
0x64AACD: call    eax
0x64AACF: mov     edx, [edi]
0x64AAD1: mov     eax, [edx+38Ch]
0x64AAD7: push    esi
0x64AAD8: mov     ecx, edi
0x64AADA: call    eax
0x64AADC: jmp     short loc_64AB24
0x64AADE: mov     ecx, esi; this
0x64AAE0: call    TESObjectREFR_GetParentCell
0x64AAE5: mov     edx, [esi]
0x64AAE7: mov     eax, [edx+174h]
0x64AAED: mov     ecx, esi
0x64AAEF: call    eax
0x64AAF1: fld     dword ptr ds:0B368E8h
0x64AAF7: mov     edx, [esi]
0x64AAF9: mov     eax, [edx+174h]
0x64AAFF: push    esi; int
0x64AB00: push    offset sub_646400; int
0x64AB05: push    ecx
0x64AB06: mov     ecx, esi
0x64AB08: fstp    [esp+2Ch+var_2C]; float
0x64AB0B: call    eax
0x64AB0D: fld     dword ptr ds:0B368E8h
0x64AB13: push    eax; int
0x64AB14: push    ecx
0x64AB15: mov     ecx, ds:0B33A98h
0x64AB1B: fstp    [esp+34h+var_34]; float
0x64AB1E: push    esi; int
0x64AB1F: call    sub_446A40
0x64AB24: mov     edx, [esi]
0x64AB26: mov     eax, [edx+380h]
0x64AB2C: mov     ecx, esi
0x64AB2E: call    eax
0x64AB30: test    eax, eax
0x64AB32: jz      short loc_64ABB0
0x64AB34: mov     edx, [esi]
0x64AB36: mov     eax, [edx+154h]
0x64AB3C: mov     ecx, esi
0x64AB3E: call    eax
0x64AB40: test    eax, eax
0x64AB42: jz      short loc_64ABB0
0x64AB44: mov     edx, [esi]
0x64AB46: mov     eax, [edx+380h]
0x64AB4C: mov     ecx, esi
0x64AB4E: call    eax
0x64AB50: mov     edx, [eax]
0x64AB52: mov     ecx, eax
0x64AB54: mov     eax, [edx+154h]
0x64AB5A: call    eax
0x64AB5C: test    eax, eax
0x64AB5E: jz      short loc_64ABB0
0x64AB60: mov     edx, [esi]
0x64AB62: mov     eax, [edx+380h]
0x64AB68: mov     ecx, esi
0x64AB6A: call    eax
0x64AB6C: mov     edx, [eax]
0x64AB6E: mov     ecx, eax
0x64AB70: mov     eax, [edx+340h]
0x64AB76: push    0
0x64AB78: call    eax
0x64AB7A: mov     edx, [esi]
0x64AB7C: mov     eax, [edx+380h]
0x64AB82: mov     ecx, esi
0x64AB84: call    eax
0x64AB86: mov     ecx, eax; this
0x64AB88: call    sub_5F8000
0x64AB8D: mov     edi, [esi]
0x64AB8F: mov     edx, [edi+380h]
0x64AB95: mov     ecx, esi
0x64AB97: call    edx
0x64AB99: push    eax
0x64AB9A: mov     eax, [edi+22Ch]
0x64ABA0: mov     ecx, esi
0x64ABA2: call    eax
0x64ABA4: pop     edi
0x64ABA5: pop     ebp
0x64ABA6: pop     ebx
0x64ABA7: mov     al, 1
0x64ABA9: pop     esi
0x64ABAA: add     esp, 10h
0x64ABAD: retn    8
0x64ABB0: mov     al, [esp+20h+var_D]
0x64ABB4: pop     edi
0x64ABB5: pop     ebp
0x64ABB6: pop     ebx
0x64ABB7: pop     esi
0x64ABB8: add     esp, 10h
0x64ABBB: retn    8
0x64ABBE: xor     al, al
0x64ABC0: pop     esi
0x64ABC1: add     esp, 10h
0x64ABC4: retn    8
