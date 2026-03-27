0x480630: push    ebx
0x480631: mov     ebx, [esp+4+arg_0]
0x480635: movzx   eax, word ptr [ebx+0B6h]
0x48063C: test    ax, ax
0x48063F: jnz     short loc_480645
0x480641: xor     eax, eax
0x480643: pop     ebx
0x480644: retn
0x480645: push    edi
0x480646: movzx   edi, ax
0x480649: push    esi
0x48064A: movzx   eax, word ptr [ebx+0B6h]
0x480651: sub     edi, 1
0x480654: cmp     eax, edi
0x480656: jbe     short loc_4806C0
0x480658: mov     ecx, [ebx+0B0h]
0x48065E: mov     ecx, [ecx+edi*4]
0x480661: test    ecx, ecx
0x480663: jz      short loc_4806C0
0x480665: mov     edx, [ecx]
0x480667: mov     eax, [edx+8]
0x48066A: call    eax
0x48066C: test    eax, eax
0x48066E: jz      short loc_4806C0
0x480670: cmp     word ptr [eax+0B6h], 0
0x480678: jbe     short loc_4806C0
0x48067A: mov     ecx, [eax+0B0h]
0x480680: mov     ecx, [ecx]
0x480682: test    ecx, ecx
0x480684: jz      short loc_4806C0
0x480686: push    4
0x480688: call    NiNode_GetNiPropertyByID
0x48068D: mov     esi, eax
0x48068F: test    esi, esi
0x480691: jz      short loc_4806C0
0x480693: mov     edx, [esi]
0x480695: mov     eax, [edx+54h]
0x480698: mov     ecx, esi
0x48069A: call    eax
0x48069C: cmp     eax, 5
0x48069F: jl      short loc_4806B6
0x4806A1: mov     edx, [esi]
0x4806A3: mov     eax, [edx+54h]
0x4806A6: mov     ecx, esi
0x4806A8: call    eax
0x4806AA: cmp     eax, 0Ah
0x4806AD: jg      short loc_4806B6
0x4806AF: mov     eax, 1
0x4806B4: jmp     short loc_4806B8
0x4806B6: xor     eax, eax
0x4806B8: neg     eax
0x4806BA: sbb     eax, eax
0x4806BC: and     eax, esi
0x4806BE: jnz     short loc_4806CD
0x4806C0: test    edi, edi
0x4806C2: jnz     short loc_48064A
0x4806C4: push    ebx
0x4806C5: call    sub_480560
0x4806CA: add     esp, 4
0x4806CD: pop     esi
0x4806CE: pop     edi
0x4806CF: pop     ebx
0x4806D0: retn
