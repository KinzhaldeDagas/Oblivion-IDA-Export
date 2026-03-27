0x4BEAD0: mov     eax, [esp+arg_0]
0x4BEAD4: push    ebx
0x4BEAD5: push    ebp
0x4BEAD6: push    0; int
0x4BEAD8: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x4BEADD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BEAE2: push    0; int
0x4BEAE4: push    eax; void *
0x4BEAE5: mov     ebx, ecx
0x4BEAE7: call    OblivionDynamicCast
0x4BEAEC: mov     ebp, eax
0x4BEAEE: add     esp, 14h
0x4BEAF1: test    ebp, ebp
0x4BEAF3: jnz     short loc_4BEAFC
0x4BEAF5: pop     ebp
0x4BEAF6: mov     al, 1
0x4BEAF8: pop     ebx
0x4BEAF9: retn    4
0x4BEAFC: push    ebp; a2
0x4BEAFD: mov     ecx, ebx; this
0x4BEAFF: call    TESForm_CompareAllComponentsTo
0x4BEB04: test    al, al
0x4BEB06: jnz     short loc_4BEAF5
0x4BEB08: push    esi
0x4BEB09: push    edi
0x4BEB0A: mov     eax, ebp
0x4BEB0C: xor     edi, edi
0x4BEB0E: sub     eax, ebx
0x4BEB10: lea     esi, [ebx+38h]
0x4BEB13: mov     [esp+10h+arg_0], eax
0x4BEB17: jmp     short loc_4BEB24
0x4BEB19: align 10h
0x4BEB20: mov     eax, [esp+10h+arg_0]
0x4BEB24: mov     edx, [esi]
0x4BEB26: add     eax, esi
0x4BEB28: push    eax
0x4BEB29: mov     eax, [edx+0Ch]
0x4BEB2C: mov     ecx, esi
0x4BEB2E: call    eax
0x4BEB30: test    al, al
0x4BEB32: jnz     short loc_4BEB62
0x4BEB34: add     edi, 1
0x4BEB37: add     esi, 0Ch
0x4BEB3A: cmp     edi, 2
0x4BEB3D: jl      short loc_4BEB20
0x4BEB3F: mov     edx, [ebx+18h]
0x4BEB42: mov     edx, [edx+0Ch]
0x4BEB45: lea     ecx, [ebx+18h]
0x4BEB48: lea     eax, [ebp+18h]
0x4BEB4B: push    eax
0x4BEB4C: call    edx
0x4BEB4E: test    al, al
0x4BEB50: jnz     short loc_4BEB62
0x4BEB52: lea     eax, [ebp+30h]
0x4BEB55: push    eax
0x4BEB56: lea     ecx, [ebx+30h]
0x4BEB59: call    sub_4EEBB0
0x4BEB5E: test    al, al
0x4BEB60: jz      short loc_4BEB6B
0x4BEB62: pop     edi
0x4BEB63: pop     esi
0x4BEB64: pop     ebp
0x4BEB65: mov     al, 1
0x4BEB67: pop     ebx
0x4BEB68: retn    4
0x4BEB6B: mov     eax, 6
0x4BEB70: lea     ecx, [ebp+50h]
0x4BEB73: lea     edx, [ebx+50h]
0x4BEB76: mov     esi, [edx]
0x4BEB78: cmp     esi, [ecx]
0x4BEB7A: jnz     short loc_4BEB8E
0x4BEB7C: sub     eax, 4
0x4BEB7F: add     ecx, 4
0x4BEB82: add     edx, 4
0x4BEB85: cmp     eax, 4
0x4BEB88: jnb     short loc_4BEB76
0x4BEB8A: test    eax, eax
0x4BEB8C: jz      short loc_4BEBF5
0x4BEB8E: movzx   esi, byte ptr [edx]
0x4BEB91: movzx   edi, byte ptr [ecx]
0x4BEB94: sub     esi, edi
0x4BEB96: jnz     short loc_4BEBDD
0x4BEB98: sub     eax, 1
0x4BEB9B: add     ecx, 1
0x4BEB9E: add     edx, 1
0x4BEBA1: test    eax, eax
0x4BEBA3: jz      short loc_4BEBF5
0x4BEBA5: movzx   esi, byte ptr [edx]
0x4BEBA8: movzx   edi, byte ptr [ecx]
0x4BEBAB: sub     esi, edi
0x4BEBAD: jnz     short loc_4BEBDD
0x4BEBAF: sub     eax, 1
0x4BEBB2: add     ecx, 1
0x4BEBB5: add     edx, 1
0x4BEBB8: test    eax, eax
0x4BEBBA: jz      short loc_4BEBF5
0x4BEBBC: movzx   esi, byte ptr [edx]
0x4BEBBF: movzx   edi, byte ptr [ecx]
0x4BEBC2: sub     esi, edi
0x4BEBC4: jnz     short loc_4BEBDD
0x4BEBC6: sub     eax, 1
0x4BEBC9: add     ecx, 1
0x4BEBCC: add     edx, 1
0x4BEBCF: test    eax, eax
0x4BEBD1: jz      short loc_4BEBF5
0x4BEBD3: movzx   esi, byte ptr [edx]
0x4BEBD6: movzx   ecx, byte ptr [ecx]
0x4BEBD9: sub     esi, ecx
0x4BEBDB: jz      short loc_4BEBF5
0x4BEBDD: test    esi, esi
0x4BEBDF: mov     eax, 1
0x4BEBE4: jg      short loc_4BEBF7
0x4BEBE6: pop     edi
0x4BEBE7: or      eax, 0FFFFFFFFh
0x4BEBEA: pop     esi
0x4BEBEB: test    eax, eax
0x4BEBED: pop     ebp
0x4BEBEE: setnz   al
0x4BEBF1: pop     ebx
0x4BEBF2: retn    4
0x4BEBF5: xor     eax, eax
0x4BEBF7: pop     edi
0x4BEBF8: pop     esi
0x4BEBF9: test    eax, eax
0x4BEBFB: pop     ebp
0x4BEBFC: setnz   al
0x4BEBFF: pop     ebx
0x4BEC00: retn    4
