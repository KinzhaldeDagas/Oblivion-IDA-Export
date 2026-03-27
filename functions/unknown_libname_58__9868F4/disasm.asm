0x9868F4: push    ebp
0x9868F5: mov     ebp, esp
0x9868F7: sub     esp, 18h
0x9868FA: push    ebx
0x9868FB: push    [ebp+arg_C]; struct localeinfo_struct *
0x9868FE: lea     ecx, [ebp+var_18]; this
0x986901: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986906: xor     ebx, ebx
0x986908: cmp     [ebp+MaxCount], ebx
0x98690B: jnz     short loc_986920
0x98690D: cmp     [ebp+var_C], bl
0x986910: jz      short loc_986919
0x986912: mov     eax, [ebp+var_10]
0x986915: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986919: xor     eax, eax
0x98691B: jmp     loc_986ADB
0x986920: mov     eax, [ebp+var_14]
0x986923: cmp     [eax+8], ebx
0x986926: jnz     short loc_98694E
0x986928: push    [ebp+MaxCount]; MaxCount
0x98692B: push    [ebp+Str2]; Str2
0x98692E: push    [ebp+Str1]; Str1
0x986931: call    __strnicmp
0x986936: add     esp, 0Ch
0x986939: cmp     [ebp+var_C], bl
0x98693C: jz      loc_986ADB
0x986942: mov     ecx, [ebp+var_10]
0x986945: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x986949: jmp     loc_986ADB
0x98694E: cmp     [ebp+Str1], ebx
0x986951: jnz     short loc_986981
0x986953: call    __errno
0x986958: push    ebx
0x986959: push    ebx
0x98695A: push    ebx
0x98695B: push    ebx
0x98695C: push    ebx
0x98695D: mov     dword ptr [eax], 16h
0x986963: call    __invalid_parameter
0x986968: add     esp, 14h
0x98696B: cmp     [ebp+var_C], bl
0x98696E: jz      short loc_986977
0x986970: mov     eax, [ebp+var_10]
0x986973: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986977: mov     eax, 7FFFFFFFh
0x98697C: jmp     loc_986ADB
0x986981: push    edi
0x986982: mov     edi, [ebp+Str2]
0x986985: cmp     edi, ebx
0x986987: jnz     short loc_9869B7
0x986989: call    __errno
0x98698E: push    ebx
0x98698F: push    ebx
0x986990: push    ebx
0x986991: push    ebx
0x986992: push    ebx
0x986993: mov     dword ptr [eax], 16h
0x986999: call    __invalid_parameter
0x98699E: add     esp, 14h
0x9869A1: cmp     [ebp+var_C], bl
0x9869A4: jz      short loc_9869AD
0x9869A6: mov     eax, [ebp+var_10]
0x9869A9: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9869AD: mov     eax, 7FFFFFFFh
0x9869B2: jmp     loc_986ADA
0x9869B7: push    esi
0x9869B8: mov     ecx, [ebp+Str1]
0x9869BB: movzx   cx, byte ptr [ecx]
0x9869BF: dec     [ebp+MaxCount]
0x9869C2: inc     [ebp+Str1]
0x9869C5: movzx   ecx, cx
0x9869C8: mov     [ebp+var_8], ecx
0x9869CB: movzx   ecx, cl
0x9869CE: test    byte ptr [ecx+eax+1Dh], 4
0x9869D3: jz      loc_986A69
0x9869D9: cmp     [ebp+MaxCount], ebx
0x9869DC: jnz     short loc_986A01
0x9869DE: movzx   ecx, byte ptr [edi]
0x9869E1: test    byte ptr [ecx+eax+1Dh], 4
0x9869E6: mov     [ebp+var_8], ebx
0x9869E9: jnz     loc_986ACB
0x9869EF: mov     si, bx
0x9869F2: movzx   ecx, cx
0x9869F5: mov     [ebp+var_4], ecx
0x9869F8: mov     cx, word ptr [ebp+var_4]
0x9869FC: jmp     unknown_libname_58___unknown_libname_59
0x986A01: mov     ecx, [ebp+Str1]
0x986A04: mov     cl, [ecx]
0x986A06: cmp     cl, bl
0x986A08: jnz     short loc_986A0F
0x986A0A: mov     [ebp+var_8], ebx
0x986A0D: jmp     short loc_986A84
0x986A0F: xor     edx, edx
0x986A11: mov     dh, byte ptr [ebp+var_8]
0x986A14: inc     [ebp+Str1]
0x986A17: mov     dl, cl
0x986A19: movzx   ecx, dx
0x986A1C: mov     si, cx
0x986A1F: cmp     si, [eax+10h]
0x986A23: mov     [ebp+var_8], ecx
0x986A26: jb      short loc_986A57
0x986A28: cmp     si, [eax+12h]
0x986A2C: ja      short loc_986A57
0x986A2E: add     si, [eax+14h]
0x986A32: xor     ebx, ebx
0x986A34: movzx   cx, byte ptr [edi]
0x986A38: movzx   ecx, cx
0x986A3B: mov     [ebp+var_4], ecx
0x986A3E: movzx   ecx, cl
0x986A41: inc     edi
0x986A42: test    byte ptr [ecx+eax+1Dh], 4
0x986A47: jz      loc_986AF0
0x986A4D: cmp     [ebp+MaxCount], ebx
0x986A50: jnz     short loc_986A8F
0x986A52: mov     [ebp+var_4], ebx
0x986A55: jmp     short loc_9869F8
0x986A57: cmp     si, [eax+16h]
0x986A5B: jb      short loc_986A32
0x986A5D: cmp     si, [eax+18h]
0x986A61: ja      short loc_986A32
0x986A63: add     si, [eax+1Ah]
0x986A67: jmp     short loc_986A32
0x986A69: movzx   edx, word ptr [ebp+var_8]
0x986A6D: lea     ecx, [edx+eax]
0x986A70: test    byte ptr [ecx+1Dh], 10h
0x986A74: jz      short loc_986A8A
0x986A76: movzx   cx, byte ptr [ecx+11Dh]
0x986A7E: movzx   ecx, cx
0x986A81: mov     [ebp+var_8], ecx
0x986A84: mov     si, word ptr [ebp+var_8]
0x986A88: jmp     short loc_986A34
0x986A8A: movzx   ecx, dx
0x986A8D: jmp     short loc_986A81
0x986A8F: mov     cl, [edi]
0x986A91: dec     [ebp+MaxCount]
0x986A94: cmp     cl, bl
0x986A96: jz      short loc_986A52
0x986A98: xor     edx, edx
0x986A9A: mov     dh, byte ptr [ebp+var_4]
0x986A9D: inc     edi
0x986A9E: mov     dl, cl
0x986AA0: movzx   ecx, dx
0x986AA3: cmp     cx, [eax+10h]
0x986AA7: mov     [ebp+var_4], ecx
0x986AAA: jb      short loc_986ADE
0x986AAC: cmp     cx, [eax+12h]
0x986AB0: ja      short loc_986ADE
0x986AB2: add     cx, [eax+14h]
0x986AB6: xor     ebx, ebx
