0x486150: push    ebx
0x486151: push    ebp
0x486152: mov     ebx, ecx
0x486154: mov     ecx, [ebx+4]; this
0x486157: test    ecx, ecx
0x486159: push    esi
0x48615A: push    edi
0x48615B: jz      short loc_486164
0x48615D: call    TESObjectREFR_GetContainer
0x486162: jmp     short loc_486166
0x486164: xor     eax, eax
0x486166: mov     ebp, [esp+10h+arg_4]
0x48616A: lea     edi, [eax+8]
0x48616D: xor     esi, esi
0x48616F: test    edi, edi
0x486171: jz      short loc_4861DD
0x486173: test    esi, esi
0x486175: jnz     short loc_4861DD
0x486177: mov     eax, [edi]
0x486179: mov     esi, [eax+4]
0x48617C: test    esi, esi
0x48617E: jz      short loc_4861D4
0x486180: push    esi
0x486181: call    sub_568240
0x486186: add     esp, 4
0x486189: cmp     eax, [esp+10h+arg_0]
0x48618D: jnz     short loc_4861D4
0x48618F: mov     eax, [ebx]
0x486191: test    eax, eax
0x486193: mov     dl, 1
0x486195: jz      short loc_4861B1
0x486197: test    dl, dl
0x486199: jz      short loc_4861BA
0x48619B: mov     ecx, [eax]
0x48619D: test    ecx, ecx
0x48619F: jz      short loc_4861AA
0x4861A1: cmp     [ecx+8], esi
0x4861A4: jnz     short loc_4861AA
0x4861A6: xor     dl, dl
0x4861A8: jmp     short loc_4861AD
0x4861AA: mov     eax, [eax+4]
0x4861AD: test    eax, eax
0x4861AF: jnz     short loc_486197
0x4861B1: mov     ecx, [edi]
0x4861B3: mov     edx, [ecx]
0x4861B5: mov     [ebp+0], edx
0x4861B8: jmp     short loc_4861D6
0x4861BA: test    eax, eax
0x4861BC: jz      short loc_4861B1
0x4861BE: mov     eax, [eax]
0x4861C0: test    eax, eax
0x4861C2: jz      short loc_4861B1
0x4861C4: mov     ecx, [edi]
0x4861C6: mov     edx, [eax+4]
0x4861C9: mov     eax, [ecx]
0x4861CB: add     eax, edx
0x4861CD: jz      short loc_4861D6
0x4861CF: mov     [ebp+0], eax
0x4861D2: jmp     short loc_4861D6
0x4861D4: xor     esi, esi
0x4861D6: mov     edi, [edi+4]
0x4861D9: test    edi, edi
0x4861DB: jnz     short loc_486173
0x4861DD: mov     edi, [ebx]
0x4861DF: test    edi, edi
0x4861E1: jz      short loc_486232
0x4861E3: test    esi, esi
0x4861E5: jnz     short loc_486232
0x4861E7: mov     eax, [edi]
0x4861E9: mov     esi, [eax+8]
0x4861EC: test    esi, esi
0x4861EE: jz      short loc_486229
0x4861F0: push    esi
0x4861F1: call    sub_568240
0x4861F6: add     esp, 4
0x4861F9: cmp     eax, [esp+10h+arg_0]
0x4861FD: jnz     short loc_486229
0x4861FF: mov     ecx, [ebx+4]; this
0x486202: test    ecx, ecx
0x486204: jz      short loc_48620D
0x486206: call    TESObjectREFR_GetContainer
0x48620B: jmp     short loc_48620F
0x48620D: xor     eax, eax
0x48620F: push    esi; a2
0x486210: mov     ecx, eax; this
0x486212: call    TESContainer_HasForm
0x486217: test    al, al
0x486219: jnz     short loc_48622B
0x48621B: mov     ecx, [edi]
0x48621D: mov     eax, [ecx+4]
0x486220: test    eax, eax
0x486222: jle     short loc_48622B
0x486224: mov     [ebp+0], eax
0x486227: jmp     short loc_48622B
0x486229: xor     esi, esi
0x48622B: mov     edi, [edi+4]
0x48622E: test    edi, edi
0x486230: jnz     short loc_4861E3
0x486232: pop     edi
0x486233: mov     eax, esi
0x486235: pop     esi
0x486236: pop     ebp
0x486237: pop     ebx
0x486238: retn    8
