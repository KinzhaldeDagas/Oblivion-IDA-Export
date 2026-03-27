0x4FD430: mov     ecx, [esp+arg_0]
0x4FD434: push    ebx
0x4FD435: mov     ebx, [esp+4+arg_4]
0x4FD439: push    ebp
0x4FD43A: push    esi
0x4FD43B: push    edi; ArgList
0x4FD43C: xor     eax, eax
0x4FD43E: xor     edx, edx
0x4FD440: xor     edi, edi
0x4FD442: add     ecx, 50h ; 'P'
0x4FD445: jz      loc_4FD4F5
0x4FD44B: jmp     short loc_4FD450
0x4FD44D: align 10h
0x4FD450: mov     esi, [ecx+4]
0x4FD453: test    esi, esi
0x4FD455: jnz     short loc_4FD45F
0x4FD457: cmp     [ecx], esi
0x4FD459: jz      loc_4FD4F1
0x4FD45F: test    edi, edi
0x4FD461: jnz     loc_4FD50D
0x4FD467: mov     ecx, [ecx]
0x4FD469: mov     ebp, [ecx]
0x4FD46B: cmp     ebp, [ebx]
0x4FD46D: jbe     short loc_4FD4E7
0x4FD46F: mov     ecx, [ecx+410h]
0x4FD475: cmp     ecx, 18h
0x4FD478: jg      short loc_4FD4AD
0x4FD47A: cmp     ecx, 17h
0x4FD47D: jge     short loc_4FD4A2
0x4FD47F: cmp     ecx, 12h
0x4FD482: jl      short loc_4FD4E4
0x4FD484: cmp     ecx, 14h
0x4FD487: jle     short loc_4FD4E7
0x4FD489: cmp     ecx, 16h
0x4FD48C: jnz     short loc_4FD4E4
0x4FD48E: add     edx, 1
0x4FD491: add     eax, 1
0x4FD494: cmp     edx, 0Ah
0x4FD497: jl      short loc_4FD4E7
0x4FD499: push    0Ah
0x4FD49B: push    offset aMaxNestingOfDE; "Max nesting of %d exceeded."
0x4FD4A0: jmp     short loc_4FD4FD
0x4FD4A2: test    edx, edx
0x4FD4A4: jnz     short loc_4FD4E4
0x4FD4A6: mov     edi, 1
0x4FD4AB: jmp     short loc_4FD4E7
0x4FD4AD: cmp     ecx, 19h
0x4FD4B0: jz      short loc_4FD4D6
0x4FD4B2: cmp     ecx, 0FFFFh
0x4FD4B8: jnz     short loc_4FD4E4
0x4FD4BA: mov     ecx, [esp+10h+arg_0]
0x4FD4BE: push    offset aMismatchedIfEl; "Mismatched if/else/endif."
0x4FD4C3: push    ecx; int
0x4FD4C4: call    sub_4FCE30
0x4FD4C9: add     esp, 8
0x4FD4CC: pop     edi
0x4FD4CD: pop     esi
0x4FD4CE: pop     ebp
0x4FD4CF: or      eax, 0FFFFFFFFh
0x4FD4D2: pop     ebx
0x4FD4D3: retn    8
0x4FD4D6: test    edx, edx
0x4FD4D8: jnz     short loc_4FD4E1
0x4FD4DA: mov     edi, 1
0x4FD4DF: jmp     short loc_4FD4E7
0x4FD4E1: sub     edx, 1
0x4FD4E4: add     eax, 1
0x4FD4E7: mov     ecx, esi
0x4FD4E9: test    ecx, ecx
0x4FD4EB: jnz     loc_4FD450
0x4FD4F1: test    edi, edi
0x4FD4F3: jnz     short loc_4FD50D
0x4FD4F5: mov     edx, [ebx]
0x4FD4F7: push    edx; ArgList
0x4FD4F8: push    offset aMismatchedIf_0; "Mismatched if/else/endif block starting"...
0x4FD4FD: mov     eax, [esp+18h+arg_0]
0x4FD501: push    eax; int
0x4FD502: call    sub_4FCE30
0x4FD507: add     esp, 0Ch
0x4FD50A: or      eax, 0FFFFFFFFh
0x4FD50D: pop     edi
0x4FD50E: pop     esi
0x4FD50F: pop     ebp
0x4FD510: pop     ebx
0x4FD511: retn    8
