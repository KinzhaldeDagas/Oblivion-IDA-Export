0x480560: push    ecx
0x480561: push    ebx
0x480562: mov     ebx, [esp+8+arg_0]
0x480566: movzx   eax, word ptr [ebx+0B6h]
0x48056D: xor     ecx, ecx
0x48056F: test    ax, ax
0x480572: mov     [esp+8+var_4], ecx
0x480576: jnz     short loc_48057D
0x480578: xor     eax, eax
0x48057A: pop     ebx
0x48057B: pop     ecx
0x48057C: retn
0x48057D: push    ebp
0x48057E: push    esi
0x48057F: movzx   ebp, ax
0x480582: push    edi
0x480583: xor     edi, edi
0x480585: test    ebp, ebp
0x480587: jbe     loc_480624
0x48058D: lea     ecx, [ecx+0]
0x480590: test    ecx, ecx
0x480592: jnz     loc_480624
0x480598: movzx   eax, word ptr [ebx+0B6h]
0x48059F: cmp     eax, edi
0x4805A1: jbe     short loc_480615
0x4805A3: mov     ecx, [ebx+0B0h]
0x4805A9: mov     esi, [ecx+edi*4]
0x4805AC: test    esi, esi
0x4805AE: jz      short loc_480615
0x4805B0: mov     edx, [esi]
0x4805B2: mov     eax, [edx+8]
0x4805B5: mov     ecx, esi
0x4805B7: call    eax
0x4805B9: test    eax, eax
0x4805BB: jz      short loc_4805CC
0x4805BD: push    esi
0x4805BE: call    sub_480560
0x4805C3: add     esp, 4
0x4805C6: mov     [esp+14h+var_4], eax
0x4805CA: jmp     short loc_480615
0x4805CC: mov     edx, [esi]
0x4805CE: mov     eax, [edx+0Ch]
0x4805D1: mov     ecx, esi
0x4805D3: call    eax
0x4805D5: test    eax, eax
0x4805D7: jz      short loc_480615
0x4805D9: push    4
0x4805DB: mov     ecx, esi
0x4805DD: call    NiNode_GetNiPropertyByID
0x4805E2: mov     esi, eax
0x4805E4: test    esi, esi
0x4805E6: jz      short loc_480615
0x4805E8: mov     edx, [esi]
0x4805EA: mov     eax, [edx+54h]
0x4805ED: mov     ecx, esi
0x4805EF: call    eax
0x4805F1: cmp     eax, 5
0x4805F4: jl      short loc_48060B
0x4805F6: mov     edx, [esi]
0x4805F8: mov     eax, [edx+54h]
0x4805FB: mov     ecx, esi
0x4805FD: call    eax
0x4805FF: cmp     eax, 0Ah
0x480602: jg      short loc_48060B
0x480604: mov     eax, 1
0x480609: jmp     short loc_48060D
0x48060B: xor     eax, eax
0x48060D: neg     eax
0x48060F: sbb     eax, eax
0x480611: and     eax, esi
0x480613: jnz     short loc_480626
0x480615: mov     ecx, [esp+14h+var_4]
0x480619: add     edi, 1
0x48061C: cmp     edi, ebp
0x48061E: jb      loc_480590
0x480624: mov     eax, ecx
0x480626: pop     edi
0x480627: pop     esi
0x480628: pop     ebp
0x480629: pop     ebx
0x48062A: pop     ecx
0x48062B: retn
