0x679A70: sub     esp, 8
0x679A73: cmp     byte ptr ds:0B3A6D4h, 0
0x679A7A: push    esi
0x679A7B: mov     esi, ecx
0x679A7D: mov     [esp+0Ch+var_4], esi
0x679A81: jnz     loc_679BFD
0x679A87: push    ebx
0x679A88: push    ebp
0x679A89: push    edi
0x679A8A: xor     edi, edi
0x679A8C: mov     [esp+18h+var_8], edi
0x679A90: test    edi, edi
0x679A92: jnz     short loc_679A97
0x679A94: push    edi
0x679A95: jmp     short loc_679AA9
0x679A97: cmp     edi, 1
0x679A9A: jnz     short loc_679A9F
0x679A9C: push    edi
0x679A9D: jmp     short loc_679AA9
0x679A9F: cmp     edi, 2
0x679AA2: jnz     short loc_679AA7
0x679AA4: push    edi
0x679AA5: jmp     short loc_679AA9
0x679AA7: push    3; a2
0x679AA9: mov     ecx, esi; this
0x679AAB: call    sub_673A50
0x679AB0: mov     ecx, eax; this
0x679AB2: call    sub_7616D0
0x679AB7: mov     ebx, eax
0x679AB9: test    ebx, ebx
0x679ABB: mov     ebp, ebx
0x679ABD: jz      loc_679BD4
0x679AC3: mov     ecx, [ebx]
0x679AC5: test    ecx, ecx
0x679AC7: jz      loc_679BD4
0x679ACD: mov     eax, [ecx]
0x679ACF: mov     edx, [eax+190h]
0x679AD5: xor     esi, esi
0x679AD7: call    edx
0x679AD9: test    al, al
0x679ADB: jz      short loc_679ADF
0x679ADD: mov     esi, [ebx]
0x679ADF: mov     ebx, [ebx+4]
0x679AE2: xor     edi, edi
0x679AE4: test    esi, esi
0x679AE6: jz      loc_679BC4
0x679AEC: lea     esp, [esp+0]
0x679AF0: mov     eax, [esi]
0x679AF2: mov     edx, [eax+154h]
0x679AF8: mov     ecx, esi
0x679AFA: call    edx
0x679AFC: test    eax, eax
0x679AFE: jz      short loc_679B34
0x679B00: mov     ecx, esi; this
0x679B02: call    TESObjectREFR_GetParentCell
0x679B07: test    eax, eax
0x679B09: jz      short loc_679B24
0x679B0B: push    0; a2
0x679B0D: mov     ecx, esi; this
0x679B0F: call    TESObjectREFR_GetParentCell
0x679B14: mov     ecx, ds:0B333A0h
0x679B1A: push    eax; a1
0x679B1B: call    TESObjectCELL_IsProcessLevel?LowHigh
0x679B20: test    al, al
0x679B22: jnz     short loc_679B34
0x679B24: mov     eax, [esi]
0x679B26: mov     edx, [eax+150h]
0x679B2C: push    0
0x679B2E: mov     ecx, esi
0x679B30: call    edx
0x679B32: jmp     short loc_679B9D
0x679B34: mov     eax, [esi]
0x679B36: mov     edx, [eax+154h]
0x679B3C: mov     ecx, esi
0x679B3E: call    edx
0x679B40: test    eax, eax
0x679B42: jnz     short loc_679B9D
0x679B44: mov     ecx, ds:0B33A1Ch
0x679B4A: push    esi
0x679B4B: call    sub_4354F0
0x679B50: test    al, al
0x679B52: jnz     short loc_679B9D
0x679B54: mov     eax, [esi+8]
0x679B57: mov     ecx, eax
0x679B59: shr     ecx, 0Bh
0x679B5C: test    cl, 1
0x679B5F: jnz     short loc_679B9D
0x679B61: shr     eax, 5
0x679B64: test    al, 1
0x679B66: jnz     short loc_679B9D
0x679B68: mov     ecx, esi; this
0x679B6A: call    TESObjectREFR_GetParentCell
0x679B6F: test    eax, eax
0x679B71: jz      short loc_679B9D
0x679B73: push    1; a2
0x679B75: mov     ecx, esi; this
0x679B77: call    TESObjectREFR_GetParentCell
0x679B7C: mov     ecx, ds:0B333A0h
0x679B82: push    eax; a1
0x679B83: call    TESObjectCELL_IsProcessLevel?LowHigh
0x679B88: test    al, al
0x679B8A: jz      short loc_679B9D
0x679B8C: push    esi; Concurrency::details::SchedulerBase *
0x679B8D: mov     ecx, esi; this
0x679B8F: call    TESObjectREFR_GetParentCell
0x679B94: mov     ecx, eax
0x679B96: call    sub_4D35D0
0x679B9B: mov     ebx, ebp
0x679B9D: test    edi, edi
0x679B9F: jz      short loc_679BC4
0x679BA1: mov     ecx, [edi]
0x679BA3: test    ecx, ecx
0x679BA5: jz      short loc_679BC4
0x679BA7: mov     edx, [ecx]
0x679BA9: mov     eax, [edx+190h]
0x679BAF: xor     esi, esi
0x679BB1: call    eax
0x679BB3: test    al, al
0x679BB5: jz      short loc_679BB9
0x679BB7: mov     esi, [edi]
0x679BB9: test    esi, esi
0x679BBB: mov     edi, [edi+4]
0x679BBE: jnz     loc_679AF0
0x679BC4: test    ebx, ebx
0x679BC6: mov     esi, [esp+18h+var_4]
0x679BCA: mov     edi, [esp+18h+var_8]
0x679BCE: jnz     loc_679AC3
0x679BD4: add     edi, 1
0x679BD7: cmp     edi, 4
0x679BDA: mov     [esp+18h+var_8], edi
0x679BDE: jl      loc_679A90
0x679BE4: mov     ecx, ds:0B333A0h
0x679BEA: call    sub_441610
0x679BEF: pop     edi
0x679BF0: pop     ebp
0x679BF1: pop     ebx
0x679BF2: mov     ecx, esi
0x679BF4: pop     esi
0x679BF5: add     esp, 8
0x679BF8: jmp     sub_678750
0x679BFD: pop     esi
0x679BFE: add     esp, 8
0x679C01: retn
