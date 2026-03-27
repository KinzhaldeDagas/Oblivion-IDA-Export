0x8FD760: push    ebp
0x8FD761: mov     ebp, [esp+4+arg_4]
0x8FD765: mov     al, [ebp+21h]
0x8FD768: push    edi
0x8FD769: xor     edi, edi
0x8FD76B: test    al, al
0x8FD76D: jbe     short loc_8FD7A1
0x8FD76F: push    ebx
0x8FD770: mov     ebx, [esp+0Ch+arg_8]
0x8FD774: push    esi
0x8FD775: lea     esi, [ebp+2]
0x8FD778: jmp     short loc_8FD780
0x8FD77A: align 10h
0x8FD780: xor     eax, eax
0x8FD782: mov     ax, [esi]
0x8FD785: cmp     ax, 0FFFFh
0x8FD789: jz      short loc_8FD793
0x8FD78B: mov     edx, [ebx]
0x8FD78D: push    eax
0x8FD78E: mov     ecx, ebx
0x8FD790: call    dword ptr [edx+10h]
0x8FD793: movzx   eax, byte ptr [ebp+21h]
0x8FD797: inc     edi
0x8FD798: add     esi, 4
0x8FD79B: cmp     edi, eax
0x8FD79D: jl      short loc_8FD780
0x8FD79F: pop     esi
0x8FD7A0: pop     ebx
0x8FD7A1: mov     ecx, [esp+8+arg_0]
0x8FD7A5: mov     byte ptr [ebp+21h], 0
0x8FD7A9: pop     edi
0x8FD7AA: lea     eax, [ebp+50h]
0x8FD7AD: mov     byte ptr [ecx+2], 0
0x8FD7B1: pop     ebp
0x8FD7B2: retn
