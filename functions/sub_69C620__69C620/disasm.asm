0x69C620: push    ebx
0x69C621: mov     ebx, ecx
0x69C623: mov     ecx, [esp+4+arg_0]
0x69C627: test    ecx, ecx
0x69C629: push    edi
0x69C62A: jz      loc_69C6B2
0x69C630: mov     edi, [esp+8+arg_4]
0x69C634: test    edi, edi
0x69C636: jz      short loc_69C6B2
0x69C638: mov     eax, [edi+8]
0x69C63B: cmp     eax, [ebx+6Ch]
0x69C63E: jz      short loc_69C647
0x69C640: pop     edi
0x69C641: mov     al, 1
0x69C643: pop     ebx
0x69C644: retn    8
0x69C647: mov     edx, [ecx]
0x69C649: mov     eax, [edx+4]
0x69C64C: push    esi
0x69C64D: call    eax
0x69C64F: mov     edi, [edi+0Ch]
0x69C652: mov     esi, eax
0x69C654: mov     eax, [ebx+94h]
0x69C65A: test    eax, eax
0x69C65C: jz      short loc_69C670
0x69C65E: mov     edi, edi
0x69C660: cmp     [eax], esi
0x69C662: jnz     short loc_69C669
0x69C664: cmp     [eax+4], edi
0x69C667: jz      short loc_69C69A
0x69C669: mov     eax, [eax+8]
0x69C66C: test    eax, eax
0x69C66E: jnz     short loc_69C660
0x69C670: push    0Ch; Size
0x69C672: call    FormHeapAlloc
0x69C677: add     esp, 4
0x69C67A: test    eax, eax
0x69C67C: jz      short loc_69C6A2
0x69C67E: mov     ecx, [ebx+94h]
0x69C684: mov     [eax], esi
0x69C686: mov     [eax+4], edi
0x69C689: pop     esi
0x69C68A: mov     [eax+8], ecx
0x69C68D: mov     [ebx+94h], eax
0x69C693: pop     edi
0x69C694: mov     al, 1
0x69C696: pop     ebx
0x69C697: retn    8
0x69C69A: pop     esi
0x69C69B: pop     edi
0x69C69C: xor     al, al
0x69C69E: pop     ebx
0x69C69F: retn    8
0x69C6A2: pop     esi
0x69C6A3: xor     eax, eax
0x69C6A5: mov     [ebx+94h], eax
0x69C6AB: pop     edi
0x69C6AC: mov     al, 1
0x69C6AE: pop     ebx
0x69C6AF: retn    8
0x69C6B2: pop     edi
0x69C6B3: xor     al, al
0x69C6B5: pop     ebx
0x69C6B6: retn    8
