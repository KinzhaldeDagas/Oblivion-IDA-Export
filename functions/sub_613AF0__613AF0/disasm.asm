0x613AF0: sub     esp, 8
0x613AF3: push    ebx
0x613AF4: push    esi
0x613AF5: push    edi
0x613AF6: mov     edi, [esp+14h+arg_8]
0x613AFA: xor     bl, bl
0x613AFC: test    edi, edi
0x613AFE: mov     esi, ecx
0x613B00: jnz     short loc_613B0D
0x613B02: pop     edi
0x613B03: pop     esi
0x613B04: xor     al, al
0x613B06: pop     ebx
0x613B07: add     esp, 8
0x613B0A: retn    0Ch
0x613B0D: mov     ecx, [esi+3Ch]; this
0x613B10: push    ebp
0x613B11: call    Actor_IsCreature
0x613B16: test    al, al
0x613B18: mov     ebp, [esp+18h+arg_4]
0x613B1C: jz      short loc_613B46
0x613B1E: cmp     ebp, 20000h
0x613B24: jz      short loc_613B3A
0x613B26: cmp     ebp, 10000h
0x613B2C: jnz     short loc_613B46
0x613B2E: mov     ecx, [esi+3Ch]
0x613B31: call    sub_5E1CF0
0x613B36: test    al, al
0x613B38: jnz     short loc_613B46
0x613B3A: pop     ebp
0x613B3B: pop     edi
0x613B3C: pop     esi
0x613B3D: xor     al, al
0x613B3F: pop     ebx
0x613B40: add     esp, 8
0x613B43: retn    0Ch
0x613B46: mov     esi, [esp+18h+arg_0]
0x613B4A: mov     ecx, [esi]
0x613B4C: push    ebp
0x613B4D: add     ecx, 0Ch
0x613B50: call    EffectItemList_HasEffectWithFlags
0x613B55: test    al, al
0x613B57: jz      short loc_613B97
0x613B59: mov     eax, [edi]
0x613B5B: test    eax, eax
0x613B5D: jz      short loc_613B93
0x613B5F: mov     eax, [eax]
0x613B61: lea     ecx, [eax+0Ch]
0x613B64: mov     eax, [ecx]
0x613B66: mov     edx, [eax]
0x613B68: push    0
0x613B6A: call    edx
0x613B6C: fstp    [esp+18h+var_C+4]
0x613B70: mov     eax, [esi]
0x613B72: lea     ecx, [eax+0Ch]
0x613B75: mov     eax, [ecx]
0x613B77: mov     edx, [eax]
0x613B79: push    0
0x613B7B: call    edx
0x613B7D: fcomp   [esp+18h+var_C+4]
0x613B81: fnstsw  ax
0x613B83: test    ah, 41h
0x613B86: jnz     short loc_613B97
0x613B88: mov     eax, [edi]
0x613B8A: push    eax
0x613B8B: call    FormHeapFree
0x613B90: add     esp, 4
0x613B93: mov     bl, 1
0x613B95: mov     [edi], esi
0x613B97: pop     ebp
0x613B98: pop     edi
0x613B99: pop     esi
0x613B9A: mov     al, bl
0x613B9C: pop     ebx
0x613B9D: add     esp, 8
0x613BA0: retn    0Ch
