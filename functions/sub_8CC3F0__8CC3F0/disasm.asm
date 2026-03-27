0x8CC3F0: push    ebx
0x8CC3F1: mov     ebx, [esp+4+arg_0]
0x8CC3F5: mov     eax, [ebx+54h]
0x8CC3F8: test    eax, eax
0x8CC3FA: jz      loc_8CC4D0
0x8CC400: push    ebp
0x8CC401: push    esi
0x8CC402: push    edi
0x8CC403: mov     eax, [ebx+54h]
0x8CC406: mov     ecx, [ebx+50h]
0x8CC409: mov     ebp, [ecx+eax*4-4]
0x8CC40D: mov     ecx, eax
0x8CC40F: dec     ecx
0x8CC410: test    ebp, ebp
0x8CC412: mov     [ebx+54h], ecx
0x8CC415: jz      loc_8CC4C2
0x8CC41B: mov     al, [ebp+27h]
0x8CC41E: test    al, al
0x8CC420: mov     word ptr [ebp+22h], 0FFFFh
0x8CC426: jz      short loc_8CC498
0x8CC428: mov     edx, [ebp+60h]
0x8CC42B: lea     esi, [ebp+5Ch]
0x8CC42E: or      edi, 0FFFFFFFFh
0x8CC431: xor     eax, eax
0x8CC433: test    edx, edx
0x8CC435: jle     short loc_8CC453
0x8CC437: mov     ecx, [esi]
0x8CC439: lea     esp, [esp+0]
0x8CC440: cmp     dword ptr [ecx], 0
0x8CC443: jz      short loc_8CC450
0x8CC445: inc     eax
0x8CC446: add     ecx, 4
0x8CC449: cmp     eax, [esi+4]
0x8CC44C: jl      short loc_8CC440
0x8CC44E: jmp     short loc_8CC453
0x8CC450: mov     edi, eax
0x8CC452: inc     eax
0x8CC453: cmp     eax, edx
0x8CC455: jge     short loc_8CC46C
0x8CC457: mov     ecx, [esi]
0x8CC459: mov     edx, [ecx+eax*4]
0x8CC45C: test    edx, edx
0x8CC45E: jz      short loc_8CC464
0x8CC460: mov     [ecx+edi*4], edx
0x8CC463: inc     edi
0x8CC464: mov     ecx, [esi+4]
0x8CC467: inc     eax
0x8CC468: cmp     eax, ecx
0x8CC46A: jl      short loc_8CC457
0x8CC46C: cmp     edi, 0FFFFFFFFh
0x8CC46F: jz      short loc_8CC494
0x8CC471: mov     eax, [esi+8]
0x8CC474: and     eax, 3FFFFFFFh
0x8CC479: cmp     eax, edi
0x8CC47B: jge     short loc_8CC491
0x8CC47D: add     eax, eax
0x8CC47F: cmp     edi, eax
0x8CC481: jl      short loc_8CC485
0x8CC483: mov     eax, edi
0x8CC485: push    4
0x8CC487: push    eax
0x8CC488: push    esi
0x8CC489: call    sub_8A6E40
0x8CC48E: add     esp, 0Ch
0x8CC491: mov     [esi+4], edi
0x8CC494: mov     byte ptr [ebp+27h], 0
0x8CC498: mov     cl, [ebp+29h]
0x8CC49B: mov     al, [ebp+28h]
0x8CC49E: test    cl, cl
0x8CC4A0: setnz   dl
0x8CC4A3: movzx   ecx, dl
0x8CC4A6: movsx   edx, al
0x8CC4A9: cmp     edx, ecx
0x8CC4AB: jz      short loc_8CC4C2
0x8CC4AD: test    al, al
0x8CC4AF: push    ebp
0x8CC4B0: push    ebx
0x8CC4B1: jz      short loc_8CC4BA
0x8CC4B3: call    sub_8CBA20
0x8CC4B8: jmp     short loc_8CC4BF
0x8CC4BA: call    sub_8CBAF0
0x8CC4BF: add     esp, 8
0x8CC4C2: mov     eax, [ebx+54h]
0x8CC4C5: test    eax, eax
0x8CC4C7: jnz     loc_8CC403
0x8CC4CD: pop     edi
0x8CC4CE: pop     esi
0x8CC4CF: pop     ebp
0x8CC4D0: pop     ebx
0x8CC4D1: retn
