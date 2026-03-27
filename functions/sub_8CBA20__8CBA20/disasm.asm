0x8CBA20: push    ebx
0x8CBA21: push    esi
0x8CBA22: push    edi
0x8CBA23: mov     edi, [esp+0Ch+arg_0]
0x8CBA27: mov     eax, [edi+40h]
0x8CBA2A: mov     ecx, [edi+3Ch]
0x8CBA2D: lea     ebx, [edi+38h]
0x8CBA30: and     eax, 3FFFFFFFh
0x8CBA35: cmp     ecx, eax
0x8CBA37: jnz     short loc_8CBA44
0x8CBA39: push    4
0x8CBA3B: push    ebx
0x8CBA3C: call    sub_8A6EE0
0x8CBA41: add     esp, 8
0x8CBA44: mov     ecx, [ebx+4]
0x8CBA47: mov     edx, [ebx]
0x8CBA49: mov     esi, [esp+0Ch+arg_4]
0x8CBA4D: mov     [edx+ecx*4], esi
0x8CBA50: inc     dword ptr [ebx+4]
0x8CBA53: mov     eax, [edi+44h]
0x8CBA56: mov     ecx, [edi+48h]
0x8CBA59: mov     ecx, [eax+ecx*4-4]
0x8CBA5D: movzx   edx, word ptr [esi+20h]
0x8CBA61: mov     [eax+edx*4], ecx
0x8CBA64: mov     ax, [esi+20h]
0x8CBA68: mov     ecx, [edi+44h]
0x8CBA6B: movzx   edx, ax
0x8CBA6E: mov     edx, [ecx+edx*4]
0x8CBA71: mov     [edx+20h], ax
0x8CBA75: dec     dword ptr [edi+48h]
0x8CBA78: mov     ax, [edi+3Ch]
0x8CBA7C: dec     ax
0x8CBA7E: mov     [esi+20h], ax
0x8CBA82: mov     byte ptr [esi+29h], 1
0x8CBA86: mov     eax, [esi+38h]
0x8CBA89: xor     ebx, ebx
0x8CBA8B: test    eax, eax
0x8CBA8D: mov     dword ptr [esi+2Ch], 0
0x8CBA94: mov     dword ptr [esi+30h], 0
0x8CBA9B: jle     short loc_8CBAC1
0x8CBA9D: lea     ecx, [ecx+0]
0x8CBAA0: mov     ecx, [esi+34h]
0x8CBAA3: mov     edx, [ecx+ebx*4]
0x8CBAA6: mov     eax, [edx+50h]
0x8CBAA9: add     eax, 10h
0x8CBAAC: push    eax; int
0x8CBAAD: push    0; int
0x8CBAAF: push    0; float
0x8CBAB1: call    sub_8DD0C0
0x8CBAB6: mov     eax, [esi+38h]
0x8CBAB9: add     esp, 0Ch
0x8CBABC: inc     ebx
0x8CBABD: cmp     ebx, eax
0x8CBABF: jl      short loc_8CBAA0
0x8CBAC1: mov     ecx, [edi+74h]
0x8CBAC4: mov     edx, [edi+160h]
0x8CBACA: mov     eax, [esi+68h]
0x8CBACD: push    ecx
0x8CBACE: push    edx
0x8CBACF: push    eax
0x8CBAD0: push    esi
0x8CBAD1: call    sub_8E77F0
0x8CBAD6: push    esi
0x8CBAD7: push    edi
0x8CBAD8: call    sub_8DCAC0
0x8CBADD: add     esp, 18h
0x8CBAE0: pop     edi
0x8CBAE1: pop     esi
0x8CBAE2: pop     ebx
0x8CBAE3: retn
