0x8CA450: push    ebx
0x8CA451: push    ebp
0x8CA452: push    esi
0x8CA453: mov     esi, ecx
0x8CA455: mov     eax, [esi+2Ch]
0x8CA458: mov     ecx, [esi+28h]
0x8CA45B: push    edi
0x8CA45C: lea     edi, [esi+24h]
0x8CA45F: and     eax, 3FFFFFFFh
0x8CA464: cmp     ecx, eax
0x8CA466: jnz     short loc_8CA473
0x8CA468: push    8
0x8CA46A: push    edi
0x8CA46B: call    sub_8A6EE0
0x8CA470: add     esp, 8
0x8CA473: mov     eax, [edi+4]
0x8CA476: mov     ecx, [edi]
0x8CA478: mov     ebx, [esp+10h+arg_0]
0x8CA47C: mov     ebp, [esp+10h+arg_4]
0x8CA480: lea     ecx, [ecx+eax*8]
0x8CA483: inc     eax
0x8CA484: mov     [edi+4], eax
0x8CA487: mov     [ecx], ebx
0x8CA489: mov     [ecx+4], ebp
0x8CA48C: mov     eax, [esi+34h]
0x8CA48F: xor     edi, edi
0x8CA491: test    eax, eax
0x8CA493: jle     short loc_8CA4C8
0x8CA495: jmp     short loc_8CA4A0
0x8CA497: align 10h
0x8CA4A0: mov     edx, [esi+3Ch]
0x8CA4A3: mov     eax, [edx+edi*4]
0x8CA4A6: lea     ecx, ds:0[edi*4]
0x8CA4AD: push    eax
0x8CA4AE: push    ecx
0x8CA4AF: mov     eax, esp
0x8CA4B1: mov     byte ptr [eax], 1
0x8CA4B4: mov     eax, [esi+30h]
0x8CA4B7: push    ebp
0x8CA4B8: add     eax, ecx
0x8CA4BA: push    ebx
0x8CA4BB: call    dword ptr [eax]
0x8CA4BD: mov     eax, [esi+34h]
0x8CA4C0: add     esp, 10h
0x8CA4C3: inc     edi
0x8CA4C4: cmp     edi, eax
0x8CA4C6: jl      short loc_8CA4A0
0x8CA4C8: pop     edi
0x8CA4C9: pop     esi
0x8CA4CA: pop     ebp
0x8CA4CB: pop     ebx
0x8CA4CC: retn    0Ch
