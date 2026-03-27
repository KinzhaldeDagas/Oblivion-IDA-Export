0x52E990: mov     eax, [esp+arg_0]
0x52E994: push    ebx
0x52E995: push    ebp
0x52E996: push    0; int
0x52E998: push    offset ??_R0?AVTESSkill@@@8; struct TypeDescriptor *
0x52E99D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52E9A2: push    0; int
0x52E9A4: push    eax; void *
0x52E9A5: mov     ebp, ecx
0x52E9A7: call    OblivionDynamicCast
0x52E9AC: mov     ebx, eax
0x52E9AE: add     esp, 14h
0x52E9B1: test    ebx, ebx
0x52E9B3: jnz     short loc_52E9BC
0x52E9B5: pop     ebp
0x52E9B6: mov     al, 1
0x52E9B8: pop     ebx
0x52E9B9: retn    4
0x52E9BC: push    ebx; a2
0x52E9BD: mov     ecx, ebp; this
0x52E9BF: call    TESForm_CompareAllComponentsTo
0x52E9C4: test    al, al
0x52E9C6: jnz     short loc_52E9B5
0x52E9C8: push    esi
0x52E9C9: mov     eax, 14h
0x52E9CE: lea     ecx, [ebx+2Ch]
0x52E9D1: lea     edx, [ebp+2Ch]
0x52E9D4: push    edi
0x52E9D5: mov     esi, [edx]
0x52E9D7: cmp     esi, [ecx]
0x52E9D9: jnz     short loc_52E9ED
0x52E9DB: sub     eax, 4
0x52E9DE: add     ecx, 4
0x52E9E1: add     edx, 4
0x52E9E4: cmp     eax, 4
0x52E9E7: jnb     short loc_52E9D5
0x52E9E9: test    eax, eax
0x52E9EB: jz      short loc_52EA4A
0x52E9ED: movzx   esi, byte ptr [edx]
0x52E9F0: movzx   edi, byte ptr [ecx]
0x52E9F3: sub     esi, edi
0x52E9F5: jnz     short loc_52EA3C
0x52E9F7: sub     eax, 1
0x52E9FA: add     ecx, 1
0x52E9FD: add     edx, 1
0x52EA00: test    eax, eax
0x52EA02: jz      short loc_52EA4A
0x52EA04: movzx   esi, byte ptr [edx]
0x52EA07: movzx   edi, byte ptr [ecx]
0x52EA0A: sub     esi, edi
0x52EA0C: jnz     short loc_52EA3C
0x52EA0E: sub     eax, 1
0x52EA11: add     ecx, 1
0x52EA14: add     edx, 1
0x52EA17: test    eax, eax
0x52EA19: jz      short loc_52EA4A
0x52EA1B: movzx   esi, byte ptr [edx]
0x52EA1E: movzx   edi, byte ptr [ecx]
0x52EA21: sub     esi, edi
0x52EA23: jnz     short loc_52EA3C
0x52EA25: sub     eax, 1
0x52EA28: add     ecx, 1
0x52EA2B: add     edx, 1
0x52EA2E: test    eax, eax
0x52EA30: jz      short loc_52EA4A
0x52EA32: movzx   esi, byte ptr [edx]
0x52EA35: movzx   ecx, byte ptr [ecx]
0x52EA38: sub     esi, ecx
0x52EA3A: jz      short loc_52EA4A
0x52EA3C: test    esi, esi
0x52EA3E: mov     eax, 1
0x52EA43: jg      short loc_52EA4C
0x52EA45: or      eax, 0FFFFFFFFh
0x52EA48: jmp     short loc_52EA4C
0x52EA4A: xor     eax, eax
0x52EA4C: test    eax, eax
0x52EA4E: jnz     short loc_52EA7A
0x52EA50: xor     edi, edi
0x52EA52: lea     esi, [ebp+40h]
0x52EA55: sub     ebx, ebp
0x52EA57: mov     edx, [esi]
0x52EA59: mov     edx, [edx+0Ch]
0x52EA5C: lea     eax, [ebx+esi]
0x52EA5F: push    eax
0x52EA60: mov     ecx, esi
0x52EA62: call    edx
0x52EA64: test    al, al
0x52EA66: jnz     short loc_52EA7A
0x52EA68: add     edi, 1
0x52EA6B: add     esi, 8
0x52EA6E: cmp     edi, 4
0x52EA71: jl      short loc_52EA57
0x52EA73: pop     edi
0x52EA74: pop     esi
0x52EA75: pop     ebp
0x52EA76: pop     ebx
0x52EA77: retn    4
0x52EA7A: pop     edi
0x52EA7B: pop     esi
0x52EA7C: pop     ebp
0x52EA7D: mov     al, 1
0x52EA7F: pop     ebx
0x52EA80: retn    4
