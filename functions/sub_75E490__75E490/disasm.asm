0x75E490: push    esi
0x75E491: push    edi
0x75E492: mov     edi, [esp+8+arg_0]
0x75E496: push    edi
0x75E497: mov     esi, ecx
0x75E499: call    sub_6CE3A0
0x75E49E: test    al, al
0x75E4A0: jnz     short loc_75E4A9
0x75E4A2: pop     edi
0x75E4A3: xor     al, al
0x75E4A5: pop     esi
0x75E4A6: retn    4
0x75E4A9: mov     eax, [esi+44h]
0x75E4AC: test    eax, eax
0x75E4AE: jz      short loc_75E4BA
0x75E4B0: cmp     dword ptr [edi+44h], 0
0x75E4B4: jz      short loc_75E4A2
0x75E4B6: test    eax, eax
0x75E4B8: jnz     short loc_75E4C4
0x75E4BA: cmp     dword ptr [edi+44h], 0
0x75E4BE: jnz     short loc_75E4A2
0x75E4C0: test    eax, eax
0x75E4C2: jz      short loc_75E4DA
0x75E4C4: mov     eax, [edi+44h]
0x75E4C7: test    eax, eax
0x75E4C9: jz      short loc_75E4DA
0x75E4CB: mov     ecx, [esi+44h]
0x75E4CE: mov     edx, [ecx]
0x75E4D0: push    eax
0x75E4D1: mov     eax, [edx+2Ch]
0x75E4D4: call    eax
0x75E4D6: test    al, al
0x75E4D8: jz      short loc_75E4A2
0x75E4DA: mov     eax, [esi+40h]
0x75E4DD: test    eax, eax
0x75E4DF: jz      short loc_75E4EB
0x75E4E1: cmp     dword ptr [edi+40h], 0
0x75E4E5: jz      short loc_75E4A2
0x75E4E7: test    eax, eax
0x75E4E9: jnz     short loc_75E4F5
0x75E4EB: cmp     dword ptr [edi+40h], 0
0x75E4EF: jnz     short loc_75E4A2
0x75E4F1: test    eax, eax
0x75E4F3: jz      short loc_75E52D
0x75E4F5: mov     ecx, [edi+40h]
0x75E4F8: test    ecx, ecx
0x75E4FA: jz      short loc_75E52D
0x75E4FC: lea     esp, [esp+0]
0x75E500: mov     dl, [eax]
0x75E502: cmp     dl, [ecx]
0x75E504: jnz     short loc_75E520
0x75E506: test    dl, dl
0x75E508: jz      short loc_75E51C
0x75E50A: mov     dl, [eax+1]
0x75E50D: cmp     dl, [ecx+1]
0x75E510: jnz     short loc_75E520
0x75E512: add     eax, 2
0x75E515: add     ecx, 2
0x75E518: test    dl, dl
0x75E51A: jnz     short loc_75E500
0x75E51C: xor     eax, eax
0x75E51E: jmp     short loc_75E525
0x75E520: sbb     eax, eax
0x75E522: sbb     eax, 0FFFFFFFFh
0x75E525: test    eax, eax
0x75E527: jnz     loc_75E4A2
0x75E52D: pop     edi
0x75E52E: mov     al, 1
0x75E530: pop     esi
0x75E531: retn    4
