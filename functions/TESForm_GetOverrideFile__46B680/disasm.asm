0x46B680: push    edi
0x46B681: add     ecx, 10h
0x46B684: xor     edi, edi
0x46B686: xor     eax, eax
0x46B688: test    ecx, ecx
0x46B68A: jz      short loc_46B6AD
0x46B68C: push    esi
0x46B68D: mov     esi, [esp+8+arg_0]
0x46B691: mov     edx, [ecx]
0x46B693: test    edx, edx
0x46B695: mov     ecx, [ecx+4]
0x46B698: jz      short TESForm_GetOverrideFile___LoopContinue
0x46B69A: cmp     esi, 0FFFFFFFFh
0x46B69D: mov     eax, edx
0x46B69F: jz      short TESForm_GetOverrideFile___LoopContinue
0x46B6A1: add     edi, 1
0x46B6A4: cmp     edi, esi
0x46B6A6: jg      short loc_46B6AC
0x46B6A8: test    ecx, ecx
0x46B6AA: jnz     short TESForm_GetOverrideFile___LoopTest
0x46B6AC: pop     esi
0x46B6AD: pop     edi
0x46B6AE: retn    4
