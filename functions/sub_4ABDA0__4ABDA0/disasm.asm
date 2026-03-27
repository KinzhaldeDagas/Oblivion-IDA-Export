0x4ABDA0: mov     eax, [esp+arg_0]
0x4ABDA4: push    ebx
0x4ABDA5: push    ebp
0x4ABDA6: push    0; int
0x4ABDA8: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x4ABDAD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ABDB2: push    0; int
0x4ABDB4: push    eax; void *
0x4ABDB5: mov     ebx, ecx
0x4ABDB7: call    OblivionDynamicCast
0x4ABDBC: mov     ebp, eax
0x4ABDBE: add     esp, 14h
0x4ABDC1: test    ebp, ebp
0x4ABDC3: jz      loc_4ABE4A
0x4ABDC9: push    esi
0x4ABDCA: push    edi
0x4ABDCB: push    ebp; a2
0x4ABDCC: mov     ecx, ebx; this
0x4ABDCE: call    TESForm_CopyAllComponentsFrom
0x4ABDD3: lea     esi, [ebp+18h]
0x4ABDD6: lea     edi, [ebx+18h]
0x4ABDD9: mov     ecx, 1Fh
0x4ABDDE: rep movsd
0x4ABDE0: cmp     dword ptr [ebp+94h], 0
0x4ABDE7: jz      short loc_4ABE2B
0x4ABDE9: cmp     dword ptr [ebx+94h], 0
0x4ABDF0: jnz     short loc_4ABE11
0x4ABDF2: push    54h ; 'T'; Size
0x4ABDF4: call    FormHeapAlloc
0x4ABDF9: add     esp, 4
0x4ABDFC: test    eax, eax
0x4ABDFE: jz      short loc_4ABE09
0x4ABE00: mov     ecx, eax
0x4ABE02: call    sub_4A9BF0
0x4ABE07: jmp     short loc_4ABE0B
0x4ABE09: xor     eax, eax
0x4ABE0B: mov     [ebx+94h], eax
0x4ABE11: mov     esi, [ebp+94h]
0x4ABE17: mov     edi, [ebx+94h]
0x4ABE1D: mov     ecx, 15h
0x4ABE22: rep movsd
0x4ABE24: pop     edi
0x4ABE25: pop     esi
0x4ABE26: pop     ebp
0x4ABE27: pop     ebx
0x4ABE28: retn    4
0x4ABE2B: mov     eax, [ebx+94h]
0x4ABE31: test    eax, eax
0x4ABE33: jz      short loc_4ABE3E
0x4ABE35: push    eax
0x4ABE36: call    FormHeapFree
0x4ABE3B: add     esp, 4
0x4ABE3E: pop     edi
0x4ABE3F: mov     dword ptr [ebx+94h], 0
0x4ABE49: pop     esi
0x4ABE4A: pop     ebp
0x4ABE4B: pop     ebx
0x4ABE4C: retn    4
