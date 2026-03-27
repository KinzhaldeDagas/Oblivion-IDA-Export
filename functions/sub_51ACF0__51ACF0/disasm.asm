0x51ACF0: mov     eax, [esp+arg_0]
0x51ACF4: push    ebx
0x51ACF5: push    esi
0x51ACF6: mov     esi, ecx
0x51ACF8: mov     ebx, [esi+24h]
0x51ACFB: push    edi
0x51ACFC: xor     edi, edi
0x51ACFE: cmp     eax, edi
0x51AD00: mov     [esi+24h], eax
0x51AD03: mov     ecx, offset FormHeap
0x51AD08: jnz     short loc_51AD1C
0x51AD0A: mov     eax, [esi+28h]
0x51AD0D: push    eax; void *
0x51AD0E: call    MemoryHeap_Free_checked
0x51AD13: mov     [esi+28h], edi
0x51AD16: pop     edi
0x51AD17: pop     esi
0x51AD18: pop     ebx
0x51AD19: retn    4
0x51AD1C: cmp     ebx, edi
0x51AD1E: jz      loc_51ADCA
0x51AD24: push    ebp
0x51AD25: mov     edi, ebx
0x51AD27: push    1
0x51AD29: shl     edi, 4
0x51AD2C: push    edi
0x51AD2D: call    j_MemoryHeap_Alloc
0x51AD32: mov     ecx, [esi+28h]
0x51AD35: push    edi; Size
0x51AD36: mov     ebp, eax
0x51AD38: push    ecx; Src
0x51AD39: push    ebp; Dst
0x51AD3A: call    _memcpy
0x51AD3F: mov     eax, [esi+24h]
0x51AD42: mov     ecx, [esi+28h]
0x51AD45: add     esp, 0Ch
0x51AD48: shl     eax, 4
0x51AD4B: push    eax; NewSize
0x51AD4C: push    ecx; Src
0x51AD4D: mov     ecx, offset FormHeap
0x51AD52: call    MemoryHeap_Reallocate
0x51AD57: mov     edx, [esi+24h]
0x51AD5A: cmp     ebx, edx
0x51AD5C: mov     [esi+28h], eax
0x51AD5F: mov     ecx, ebx
0x51AD61: jbe     short loc_51AD65
0x51AD63: mov     ecx, edx
0x51AD65: shl     ecx, 4
0x51AD68: push    ecx; Size
0x51AD69: push    ebp; Src
0x51AD6A: push    eax; Dst
0x51AD6B: call    _memcpy
0x51AD70: add     esp, 0Ch
0x51AD73: push    ebp; void *
0x51AD74: mov     ecx, offset FormHeap
0x51AD79: call    MemoryHeap_Free_checked
0x51AD7E: cmp     ebx, [esi+24h]
0x51AD81: mov     ecx, ebx
0x51AD83: pop     ebp
0x51AD84: jnb     loc_51AE15
0x51AD8A: fldz
0x51AD8C: mov     eax, edi
0x51AD8E: fld1
0x51AD90: mov     dl, 0FAh ; 'ú'
0x51AD92: mov     edi, [esi+28h]
0x51AD95: fxch    st(1)
0x51AD97: mov     dword ptr [eax+edi+0Ch], 0
0x51AD9F: mov     edi, [esi+28h]
0x51ADA2: fst     dword ptr [eax+edi]
0x51ADA5: mov     edi, [esi+28h]
0x51ADA8: mov     [eax+edi+4], dl
0x51ADAC: fxch    st(1)
0x51ADAE: mov     edi, [esi+28h]
0x51ADB1: fst     dword ptr [eax+edi+8]
0x51ADB5: add     ecx, 1
0x51ADB8: add     eax, 10h
0x51ADBB: cmp     ecx, [esi+24h]
0x51ADBE: jb      short loc_51AD92
0x51ADC0: pop     edi
0x51ADC1: fstp    st(1)
0x51ADC3: pop     esi
0x51ADC4: fstp    st
0x51ADC6: pop     ebx
0x51ADC7: retn    4
0x51ADCA: shl     eax, 4
0x51ADCD: push    1
0x51ADCF: push    eax
0x51ADD0: call    j_MemoryHeap_Alloc
0x51ADD5: xor     ecx, ecx
0x51ADD7: cmp     [esi+24h], edi
0x51ADDA: mov     [esi+28h], eax
0x51ADDD: jbe     short loc_51AE15
0x51ADDF: fldz
0x51ADE1: xor     eax, eax
0x51ADE3: fld1
0x51ADE5: mov     dl, 0FAh ; 'ú'
0x51ADE7: mov     ebx, [esi+28h]
0x51ADEA: fxch    st(1)
0x51ADEC: mov     [eax+ebx+0Ch], edi
0x51ADF0: mov     ebx, [esi+28h]
0x51ADF3: fst     dword ptr [eax+ebx]
0x51ADF6: mov     ebx, [esi+28h]
0x51ADF9: mov     [eax+ebx+4], dl
0x51ADFD: fxch    st(1)
0x51ADFF: mov     ebx, [esi+28h]
0x51AE02: fst     dword ptr [eax+ebx+8]
0x51AE06: add     ecx, 1
0x51AE09: add     eax, 10h
0x51AE0C: cmp     ecx, [esi+24h]
0x51AE0F: jb      short loc_51ADE7
0x51AE11: fstp    st(1)
0x51AE13: fstp    st
0x51AE15: pop     edi
0x51AE16: pop     esi
0x51AE17: pop     ebx
0x51AE18: retn    4
