0x984166: push    ebp
0x984167: mov     ebp, esp
0x984169: push    ecx
0x98416A: and     [ebp+var_4], 0
0x98416E: push    ebx
0x98416F: mov     ebx, [ebp+MaxCount]
0x984172: test    ebx, ebx
0x984174: jnz     short loc_98417D
0x984176: xor     eax, eax
0x984178: jmp     loc_984217
0x98417D: cmp     ebx, 4
0x984180: push    edi
0x984181: jb      short loc_9841F8
0x984183: lea     edi, [ebx-4]
0x984186: test    edi, edi
0x984188: jbe     short loc_9841F8
0x98418A: mov     ecx, [ebp+Str2]
0x98418D: mov     eax, [ebp+Str1]
0x984190: mov     dl, [eax]
0x984192: add     eax, 4
0x984195: add     ecx, 4
0x984198: test    dl, dl
0x98419A: jz      short loc_9841EE
0x98419C: cmp     dl, [ecx-4]
0x98419F: jnz     short loc_9841EE
0x9841A1: mov     dl, [eax-3]
0x9841A4: test    dl, dl
0x9841A6: jz      short loc_9841E4
0x9841A8: cmp     dl, [ecx-3]
0x9841AB: jnz     short loc_9841E4
0x9841AD: mov     dl, [eax-2]
0x9841B0: test    dl, dl
0x9841B2: jz      short loc_9841DA
0x9841B4: cmp     dl, [ecx-2]
0x9841B7: jnz     short loc_9841DA
0x9841B9: mov     dl, [eax-1]
0x9841BC: test    dl, dl
0x9841BE: jz      short loc_9841D0
0x9841C0: cmp     dl, [ecx-1]
0x9841C3: jnz     short loc_9841D0
0x9841C5: add     [ebp+var_4], 4
0x9841C9: cmp     [ebp+var_4], edi
0x9841CC: jb      short loc_984190
0x9841CE: jmp     short loc_98420F
0x9841D0: movzx   eax, byte ptr [eax-1]
0x9841D4: movzx   ecx, byte ptr [ecx-1]
0x9841D8: jmp     short loc_984220
0x9841DA: movzx   eax, byte ptr [eax-2]
0x9841DE: movzx   ecx, byte ptr [ecx-2]
0x9841E2: jmp     short loc_984220
0x9841E4: movzx   eax, byte ptr [eax-3]
0x9841E8: movzx   ecx, byte ptr [ecx-3]
0x9841EC: jmp     short loc_984220
0x9841EE: movzx   eax, byte ptr [eax-4]
0x9841F2: movzx   ecx, byte ptr [ecx-4]
0x9841F6: jmp     short loc_984220
0x9841F8: mov     ecx, [ebp+Str2]
0x9841FB: mov     eax, [ebp+Str1]
0x9841FE: jmp     short loc_98420F
0x984200: mov     dl, [eax]
0x984202: test    dl, dl
0x984204: jz      short loc_98421A
0x984206: cmp     dl, [ecx]
0x984208: jnz     short loc_98421A
0x98420A: inc     eax
0x98420B: inc     ecx
0x98420C: inc     [ebp+var_4]
0x98420F: cmp     [ebp+var_4], ebx
0x984212: jb      short loc_984200
0x984214: xor     eax, eax
0x984216: pop     edi
0x984217: pop     ebx
0x984218: leave
0x984219: retn
0x98421A: movzx   eax, byte ptr [eax]
0x98421D: movzx   ecx, byte ptr [ecx]
0x984220: sub     eax, ecx
0x984222: jmp     short loc_984216
