0x4AEE40: mov     eax, [esp+arg_0]
0x4AEE44: sub     esp, 8
0x4AEE47: push    esi
0x4AEE48: push    edi
0x4AEE49: push    0; int
0x4AEE4B: push    offset ??_R0?AVTESGrass@@@8; struct TypeDescriptor *
0x4AEE50: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AEE55: push    0; int
0x4AEE57: push    eax; void *
0x4AEE58: mov     edi, ecx
0x4AEE5A: call    OblivionDynamicCast
0x4AEE5F: mov     esi, eax
0x4AEE61: add     esp, 14h
0x4AEE64: test    esi, esi
0x4AEE66: jnz     short loc_4AEE72
0x4AEE68: pop     edi
0x4AEE69: mov     al, 1
0x4AEE6B: pop     esi
0x4AEE6C: add     esp, 8
0x4AEE6F: retn    4
0x4AEE72: push    esi; a2
0x4AEE73: mov     ecx, edi; this
0x4AEE75: call    TESForm_CompareAllComponentsTo
0x4AEE7A: test    al, al
0x4AEE7C: jnz     short loc_4AEE68
0x4AEE7E: mov     edx, [esi]
0x4AEE80: mov     eax, [edx+120h]
0x4AEE86: push    ebx
0x4AEE87: mov     ecx, esi
0x4AEE89: call    eax
0x4AEE8B: mov     edx, [edi]
0x4AEE8D: mov     bl, al
0x4AEE8F: mov     eax, [edx+120h]
0x4AEE95: mov     ecx, edi
0x4AEE97: call    eax
0x4AEE99: cmp     al, bl
0x4AEE9B: jnz     loc_4AF00B
0x4AEEA1: mov     edx, [esi]
0x4AEEA3: mov     eax, [edx+128h]
0x4AEEA9: mov     ecx, esi
0x4AEEAB: call    eax
0x4AEEAD: mov     edx, [edi]
0x4AEEAF: mov     bl, al
0x4AEEB1: mov     eax, [edx+128h]
0x4AEEB7: mov     ecx, edi
0x4AEEB9: call    eax
0x4AEEBB: cmp     al, bl
0x4AEEBD: jnz     loc_4AF00B
0x4AEEC3: mov     edx, [esi]
0x4AEEC5: mov     eax, [edx+130h]
0x4AEECB: mov     ecx, esi
0x4AEECD: call    eax
0x4AEECF: mov     edx, [edi]
0x4AEED1: mov     bl, al
0x4AEED3: mov     eax, [edx+130h]
0x4AEED9: mov     ecx, edi
0x4AEEDB: call    eax
0x4AEEDD: cmp     al, bl
0x4AEEDF: jnz     loc_4AF00B
0x4AEEE5: mov     edx, [esi]
0x4AEEE7: mov     eax, [edx+140h]
0x4AEEED: mov     ecx, esi
0x4AEEEF: call    eax
0x4AEEF1: mov     edx, [edi]
0x4AEEF3: mov     bx, ax
0x4AEEF6: mov     eax, [edx+140h]
0x4AEEFC: mov     ecx, edi
0x4AEEFE: call    eax
0x4AEF00: cmp     ax, bx
0x4AEF03: jnz     loc_4AF00B
0x4AEF09: mov     edx, [esi]
0x4AEF0B: mov     eax, [edx+148h]
0x4AEF11: mov     ecx, esi
0x4AEF13: call    eax
0x4AEF15: mov     edx, [edi]
0x4AEF17: mov     ebx, eax
0x4AEF19: mov     eax, [edx+148h]
0x4AEF1F: mov     ecx, edi
0x4AEF21: call    eax
0x4AEF23: cmp     eax, ebx
0x4AEF25: jnz     loc_4AF00B
0x4AEF2B: mov     edx, [edi]
0x4AEF2D: mov     eax, [edx+150h]
0x4AEF33: mov     ecx, edi
0x4AEF35: call    eax
0x4AEF37: fstp    [esp+14h+var_8]
0x4AEF3B: mov     edx, [esi]
0x4AEF3D: mov     eax, [edx+150h]
0x4AEF43: mov     ecx, esi
0x4AEF45: call    eax
0x4AEF47: fcomp   [esp+14h+var_8]
0x4AEF4B: fnstsw  ax
0x4AEF4D: test    ah, 44h
0x4AEF50: jp      loc_4AF00B
0x4AEF56: mov     edx, [edi]
0x4AEF58: mov     eax, [edx+158h]
0x4AEF5E: mov     ecx, edi
0x4AEF60: call    eax
0x4AEF62: fstp    [esp+14h+var_8]
0x4AEF66: mov     edx, [esi]
0x4AEF68: mov     eax, [edx+158h]
0x4AEF6E: mov     ecx, esi
0x4AEF70: call    eax
0x4AEF72: fcomp   [esp+14h+var_8]
0x4AEF76: fnstsw  ax
0x4AEF78: test    ah, 44h
0x4AEF7B: jp      loc_4AF00B
0x4AEF81: mov     edx, [edi]
0x4AEF83: mov     eax, [edx+160h]
0x4AEF89: mov     ecx, edi
0x4AEF8B: call    eax
0x4AEF8D: fstp    [esp+14h+var_8]
0x4AEF91: mov     edx, [esi]
0x4AEF93: mov     eax, [edx+160h]
0x4AEF99: mov     ecx, esi
0x4AEF9B: call    eax
0x4AEF9D: fcomp   [esp+14h+var_8]
0x4AEFA1: fnstsw  ax
0x4AEFA3: test    ah, 44h
0x4AEFA6: jp      short loc_4AF00B
0x4AEFA8: mov     edx, [edi]
0x4AEFAA: mov     eax, [edx+168h]
0x4AEFB0: mov     ecx, edi
0x4AEFB2: call    eax
0x4AEFB4: fstp    [esp+14h+var_8]
0x4AEFB8: mov     edx, [esi]
0x4AEFBA: mov     eax, [edx+168h]
0x4AEFC0: mov     ecx, esi
0x4AEFC2: call    eax
0x4AEFC4: fcomp   [esp+14h+var_8]
0x4AEFC8: fnstsw  ax
0x4AEFCA: test    ah, 44h
0x4AEFCD: jp      short loc_4AF00B
0x4AEFCF: mov     edx, [esi]
0x4AEFD1: mov     eax, [edx+170h]
0x4AEFD7: mov     ecx, esi
0x4AEFD9: call    eax
0x4AEFDB: mov     edx, [edi]
0x4AEFDD: mov     bl, al
0x4AEFDF: mov     eax, [edx+170h]
0x4AEFE5: mov     ecx, edi
0x4AEFE7: call    eax
0x4AEFE9: cmp     al, bl
0x4AEFEB: jnz     short loc_4AF00B
0x4AEFED: mov     edx, [esi]
0x4AEFEF: mov     eax, [edx+178h]
0x4AEFF5: mov     ecx, esi
0x4AEFF7: call    eax
0x4AEFF9: mov     edx, [edi]
0x4AEFFB: mov     bl, al
0x4AEFFD: mov     eax, [edx+178h]
0x4AF003: mov     ecx, edi
0x4AF005: call    eax
0x4AF007: cmp     al, bl
0x4AF009: jz      short loc_4AF016
0x4AF00B: pop     ebx
0x4AF00C: pop     edi
0x4AF00D: mov     al, 1
0x4AF00F: pop     esi
0x4AF010: add     esp, 8
0x4AF013: retn    4
0x4AF016: mov     edx, [esi]
0x4AF018: mov     eax, [edx+180h]
0x4AF01E: mov     ecx, esi
0x4AF020: call    eax
0x4AF022: mov     edx, [edi]
0x4AF024: mov     bl, al
0x4AF026: mov     eax, [edx+180h]
0x4AF02C: mov     ecx, edi
0x4AF02E: call    eax
0x4AF030: cmp     al, bl
0x4AF032: pop     ebx
0x4AF033: pop     edi
0x4AF034: setnz   al
0x4AF037: pop     esi
0x4AF038: add     esp, 8
0x4AF03B: retn    4
