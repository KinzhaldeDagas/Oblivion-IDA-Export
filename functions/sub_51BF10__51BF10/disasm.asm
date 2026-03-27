0x51BF10: mov     eax, [esp+arg_0]
0x51BF14: push    esi
0x51BF15: push    edi
0x51BF16: push    0; int
0x51BF18: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x51BF1D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51BF22: push    0; int
0x51BF24: push    eax; void *
0x51BF25: mov     edi, ecx
0x51BF27: call    OblivionDynamicCast
0x51BF2C: mov     esi, eax
0x51BF2E: add     esp, 14h
0x51BF31: test    esi, esi
0x51BF33: jnz     short loc_51BF3C
0x51BF35: pop     edi
0x51BF36: mov     al, 1
0x51BF38: pop     esi
0x51BF39: retn    4
0x51BF3C: push    esi; a2
0x51BF3D: mov     ecx, edi; this
0x51BF3F: call    TESForm_CompareAllComponentsTo
0x51BF44: test    al, al
0x51BF46: jnz     short loc_51BF35
0x51BF48: mov     eax, 34h ; '4'
0x51BF4D: lea     ecx, [esi+38h]
0x51BF50: lea     edx, [edi+38h]
0x51BF53: mov     esi, [edx]
0x51BF55: cmp     esi, [ecx]
0x51BF57: jnz     short loc_51BF6B
0x51BF59: sub     eax, 4
0x51BF5C: add     ecx, 4
0x51BF5F: add     edx, 4
0x51BF62: cmp     eax, 4
0x51BF65: jnb     short loc_51BF53
0x51BF67: test    eax, eax
0x51BF69: jz      short loc_51BFD0
0x51BF6B: movzx   esi, byte ptr [edx]
0x51BF6E: movzx   edi, byte ptr [ecx]
0x51BF71: sub     esi, edi
0x51BF73: jnz     short loc_51BFBA
0x51BF75: sub     eax, 1
0x51BF78: add     ecx, 1
0x51BF7B: add     edx, 1
0x51BF7E: test    eax, eax
0x51BF80: jz      short loc_51BFD0
0x51BF82: movzx   esi, byte ptr [edx]
0x51BF85: movzx   edi, byte ptr [ecx]
0x51BF88: sub     esi, edi
0x51BF8A: jnz     short loc_51BFBA
0x51BF8C: sub     eax, 1
0x51BF8F: add     ecx, 1
0x51BF92: add     edx, 1
0x51BF95: test    eax, eax
0x51BF97: jz      short loc_51BFD0
0x51BF99: movzx   esi, byte ptr [edx]
0x51BF9C: movzx   edi, byte ptr [ecx]
0x51BF9F: sub     esi, edi
0x51BFA1: jnz     short loc_51BFBA
0x51BFA3: sub     eax, 1
0x51BFA6: add     ecx, 1
0x51BFA9: add     edx, 1
0x51BFAC: test    eax, eax
0x51BFAE: jz      short loc_51BFD0
0x51BFB0: movzx   esi, byte ptr [edx]
0x51BFB3: movzx   ecx, byte ptr [ecx]
0x51BFB6: sub     esi, ecx
0x51BFB8: jz      short loc_51BFD0
0x51BFBA: test    esi, esi
0x51BFBC: mov     eax, 1
0x51BFC1: jg      short loc_51BFD2
0x51BFC3: or      eax, 0FFFFFFFFh
0x51BFC6: test    eax, eax
0x51BFC8: pop     edi
0x51BFC9: setnz   al
0x51BFCC: pop     esi
0x51BFCD: retn    4
0x51BFD0: xor     eax, eax
0x51BFD2: test    eax, eax
0x51BFD4: pop     edi
0x51BFD5: setnz   al
0x51BFD8: pop     esi
0x51BFD9: retn    4
