0x5AE980: sub     esp, 130h
0x5AE986: mov     eax, ds:0B30AACh
0x5AE98B: xor     eax, esp
0x5AE98D: mov     [esp+130h+var_4], eax
0x5AE994: push    ebx
0x5AE995: push    ebp
0x5AE996: mov     ebx, ecx
0x5AE998: mov     eax, [ebx+48h]
0x5AE99B: push    esi
0x5AE99C: mov     esi, [eax+34h]
0x5AE99F: test    esi, esi
0x5AE9A1: push    edi
0x5AE9A2: jz      short loc_5AE9BC
0x5AE9A4: mov     ecx, [esi+8]
0x5AE9A7: test    ecx, ecx
0x5AE9A9: lea     eax, [esi+8]
0x5AE9AC: mov     esi, [esi]
0x5AE9AE: jz      short loc_5AE9B8
0x5AE9B0: mov     edx, [ecx]
0x5AE9B2: mov     eax, [edx]
0x5AE9B4: push    1
0x5AE9B6: call    eax
0x5AE9B8: test    esi, esi
0x5AE9BA: jnz     short loc_5AE9A4
0x5AE9BC: mov     ecx, [ebx+48h]
0x5AE9BF: add     ecx, 30h ; '0'
0x5AE9C2: call    NiTPointerList__FreeAllNodes
0x5AE9C7: mov     ecx, ds:0B33B00h
0x5AE9CD: call    sub_459400
0x5AE9D2: mov     ecx, ds:0B33B00h
0x5AE9D8: call    sub_45D450
0x5AE9DD: mov     ecx, ds:0B33B00h
0x5AE9E3: mov     esi, [ecx+6Ch]
0x5AE9E6: xor     edi, edi
0x5AE9E8: xor     ebp, ebp
0x5AE9EA: test    esi, esi
0x5AE9EC: mov     [ebx+54h], esi
0x5AE9EF: mov     eax, esi
0x5AE9F1: jz      short loc_5AEA05
0x5AE9F3: cmp     [eax], edi
0x5AE9F5: jz      short loc_5AE9FA
0x5AE9F7: add     ebp, 1
0x5AE9FA: mov     eax, [eax+4]
0x5AE9FD: test    eax, eax
0x5AE9FF: jnz     short loc_5AE9F3
0x5AEA01: test    ebp, ebp
0x5AEA03: jnz     short loc_5AEA20
0x5AEA05: push    0
0x5AEA07: push    0
0x5AEA09: push    0
0x5AEA0B: lea     edx, [esp+14Ch+var_130]
0x5AEA0F: push    edx
0x5AEA10: mov     ecx, ebx
0x5AEA12: call    sub_5AE6D0
0x5AEA17: jmp     short loc_5AEA3F
0x5AEA19: align 10h
0x5AEA20: mov     eax, [esi]
0x5AEA22: test    eax, eax
0x5AEA24: jz      short loc_5AEA3F
0x5AEA26: push    ebp
0x5AEA27: push    eax
0x5AEA28: push    edi
0x5AEA29: lea     eax, [esp+14Ch+var_130]
0x5AEA2D: push    eax
0x5AEA2E: mov     ecx, ebx
0x5AEA30: call    sub_5AE6D0
0x5AEA35: mov     esi, [esi+4]
0x5AEA38: add     edi, 1
0x5AEA3B: test    esi, esi
0x5AEA3D: jnz     short loc_5AEA20
0x5AEA3F: mov     ecx, [esp+140h+var_4]
0x5AEA46: pop     edi
0x5AEA47: pop     esi
0x5AEA48: pop     ebp
0x5AEA49: pop     ebx
0x5AEA4A: xor     ecx, esp
0x5AEA4C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AEA51: add     esp, 130h
0x5AEA57: retn
