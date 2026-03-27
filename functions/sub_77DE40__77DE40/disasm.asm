0x77DE40: mov     eax, [esp+arg_0]
0x77DE44: mov     edx, [esp+arg_4]
0x77DE48: push    ebx
0x77DE49: push    esi
0x77DE4A: mov     esi, [eax+18h]
0x77DE4D: xor     ebx, ebx
0x77DE4F: cmp     edx, [eax+1Ch]
0x77DE52: push    edi
0x77DE53: jnb     short loc_77DE5D
0x77DE55: mov     edi, [eax+20h]
0x77DE58: mov     edx, [edi+edx*4]
0x77DE5B: jmp     short loc_77DE5F
0x77DE5D: xor     edx, edx
0x77DE5F: imul    edx, esi
0x77DE62: cmp     [eax+10h], bl
0x77DE65: mov     esi, edx
0x77DE67: mov     edx, 8
0x77DE6C: jz      short loc_77DE73
0x77DE6E: mov     edx, 18h
0x77DE73: mov     eax, [eax+8]
0x77DE76: mov     ecx, [ecx+8]
0x77DE79: mov     edi, [ecx]
0x77DE7B: push    ebp
0x77DE7C: push    ebx
0x77DE7D: lea     ebp, [esp+14h+arg_0]
0x77DE81: push    ebp
0x77DE82: push    1
0x77DE84: push    eax
0x77DE85: push    edx
0x77DE86: push    esi
0x77DE87: push    ecx
0x77DE88: mov     ecx, [edi+68h]
0x77DE8B: call    ecx
0x77DE8D: mov     edi, [esp+10h+arg_0]
0x77DE91: push    20h ; ' '; Size
0x77DE93: call    FormHeapAlloc
0x77DE98: add     esp, 4
0x77DE9B: cmp     eax, ebx
0x77DE9D: pop     ebp
0x77DE9E: jz      short loc_77DECE
0x77DEA0: mov     [eax], ebx
0x77DEA2: mov     [eax+4], ebx
0x77DEA5: mov     [eax+8], ebx
0x77DEA8: mov     [eax+0Ch], ebx
0x77DEAB: mov     [eax+14h], ebx
0x77DEAE: mov     [eax+10h], ebx
0x77DEB1: mov     [eax+18h], ebx
0x77DEB4: mov     [eax+1Ch], ebx
0x77DEB7: mov     [eax+8], edi
0x77DEBA: pop     edi
0x77DEBB: mov     [eax+14h], esi
0x77DEBE: pop     esi
0x77DEBF: mov     [eax], ebx
0x77DEC1: mov     [eax+4], ebx
0x77DEC4: mov     [eax+0Ch], ebx
0x77DEC7: mov     [eax+10h], ebx
0x77DECA: pop     ebx
0x77DECB: retn    8
0x77DECE: pop     edi
0x77DECF: pop     esi
0x77DED0: xor     eax, eax
0x77DED2: pop     ebx
0x77DED3: retn    8
