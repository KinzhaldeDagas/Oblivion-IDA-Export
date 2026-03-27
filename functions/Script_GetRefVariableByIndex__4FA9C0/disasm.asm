0x4FA9C0: sub     esp, 8
0x4FA9C3: push    ebp
0x4FA9C4: mov     ebp, [esp+0Ch+index]
0x4FA9C8: test    ebp, ebp
0x4FA9CA: push    edi
0x4FA9CB: mov     edi, ecx
0x4FA9CD: jnz     short loc_4FA9D9
0x4FA9CF: pop     edi
0x4FA9D0: xor     eax, eax
0x4FA9D2: pop     ebp
0x4FA9D3: add     esp, 8
0x4FA9D6: retn    8
0x4FA9D9: cmp     ebp, [edi+1Ch]
0x4FA9DC: ja      short loc_4FA9CF
0x4FA9DE: cmp     ds:0B361B0h, edi
0x4FA9E4: push    ebx
0x4FA9E5: mov     ebx, [esp+14h+arg_4]
0x4FA9E9: jnz     short loc_4FAA09
0x4FA9EB: cmp     ds:0B09E1Ch, ebp
0x4FA9F1: jnz     short loc_4FAA09
0x4FA9F3: cmp     ds:0B361B4h, ebx
0x4FA9F9: jnz     short loc_4FAA09
0x4FA9FB: mov     eax, ds:0B361B8h
0x4FAA00: pop     ebx
0x4FAA01: pop     edi
0x4FAA02: pop     ebp
0x4FAA03: add     esp, 8
0x4FAA06: retn    8
0x4FAA09: lea     eax, [edi+40h]
0x4FAA0C: test    eax, eax
0x4FAA0E: mov     edx, 1
0x4FAA13: jz      short loc_4FAA2D
0x4FAA15: mov     ecx, [eax+4]
0x4FAA18: test    ecx, ecx
0x4FAA1A: jnz     short loc_4FAA20
0x4FAA1C: cmp     [eax], ecx
0x4FAA1E: jz      short loc_4FAA38
0x4FAA20: cmp     edx, ebp
0x4FAA22: jnb     short loc_4FAA38
0x4FAA24: mov     eax, ecx
0x4FAA26: add     edx, 1
0x4FAA29: test    eax, eax
0x4FAA2B: jnz     short loc_4FAA15
0x4FAA2D: pop     ebx
0x4FAA2E: pop     edi
0x4FAA2F: xor     eax, eax
0x4FAA31: pop     ebp
0x4FAA32: add     esp, 8
0x4FAA35: retn    8
0x4FAA38: push    esi
0x4FAA39: mov     esi, [eax]
0x4FAA3B: mov     eax, [esi+0Ch]
0x4FAA3E: test    eax, eax
0x4FAA40: jz      short loc_4FAA67
0x4FAA42: test    ebx, ebx
0x4FAA44: jz      short loc_4FAA67
0x4FAA46: push    edi; a3
0x4FAA47: push    eax; ArgList
0x4FAA48: mov     ecx, ebx; this
0x4FAA4A: call    sub_4FA110
0x4FAA4F: fstp    [esp+18h+a1]
0x4FAA53: mov     eax, dword ptr [esp+18h+a1]
0x4FAA57: test    eax, eax
0x4FAA59: jz      short loc_4FAA67
0x4FAA5B: push    eax; a1
0x4FAA5C: call    TESForm_LookupByFormID
0x4FAA61: add     esp, 4
0x4FAA64: mov     [esi+8], eax
0x4FAA67: mov     ds:0B361B8h, esi
0x4FAA6D: mov     eax, esi
0x4FAA6F: pop     esi
0x4FAA70: mov     ds:0B361B4h, ebx
0x4FAA76: pop     ebx
0x4FAA77: mov     ds:0B361B0h, edi
0x4FAA7D: pop     edi
0x4FAA7E: mov     ds:0B09E1Ch, ebp
0x4FAA84: pop     ebp
0x4FAA85: add     esp, 8
0x4FAA88: retn    8
