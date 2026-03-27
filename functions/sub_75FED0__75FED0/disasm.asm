0x75FED0: push    ebx
0x75FED1: push    esi
0x75FED2: mov     ebx, 1
0x75FED7: test    ds:0B4204Ch, bl
0x75FEDD: push    edi
0x75FEDE: mov     esi, ecx
0x75FEE0: jnz     short loc_75FEFF
0x75FEE2: or      ds:0B4204Ch, ebx
0x75FEE8: push    offset sub_A26D40; void (__cdecl *)()
0x75FEED: mov     dword ptr ds:0B42048h, 0
0x75FEF7: call    _atexit
0x75FEFC: add     esp, 4
0x75FEFF: movzx   ecx, word ptr [esi+0Ah]
0x75FF03: mov     eax, [esp+0Ch+arg_0]
0x75FF07: cmp     eax, ecx
0x75FF09: mov     edi, [esp+0Ch+arg_4]
0x75FF0D: jb      short loc_75FF26
0x75FF0F: lea     edx, [eax+1]
0x75FF12: mov     [esi+0Ah], dx
0x75FF16: mov     ecx, [edi]
0x75FF18: cmp     ecx, ds:0B42048h
0x75FF1E: jz      short loc_75FF49
0x75FF20: add     [esi+0Ch], bx
0x75FF24: jmp     short loc_75FF49
0x75FF26: mov     ecx, ds:0B42048h
0x75FF2C: cmp     [edi], ecx
0x75FF2E: mov     edx, [esi+4]
0x75FF31: jz      short loc_75FF3E
0x75FF33: cmp     [edx+eax*4], ecx
0x75FF36: jnz     short loc_75FF49
0x75FF38: add     [esi+0Ch], bx
0x75FF3C: jmp     short loc_75FF49
0x75FF3E: cmp     [edx+eax*4], ecx
0x75FF41: jz      short loc_75FF49
0x75FF43: add     word ptr [esi+0Ch], 0FFFFh
0x75FF49: mov     ecx, [esi+4]
0x75FF4C: lea     esi, [ecx+eax*4]
0x75FF4F: mov     ecx, [esi]
0x75FF51: cmp     ecx, [edi]
0x75FF53: jz      short loc_75FF6F
0x75FF55: test    ecx, ecx
0x75FF57: jz      short loc_75FF64
0x75FF59: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FF5D: jnz     short loc_75FF64
0x75FF5F: call    sub_772560
0x75FF64: mov     eax, [edi]
0x75FF66: test    eax, eax
0x75FF68: mov     [esi], eax
0x75FF6A: jz      short loc_75FF6F
0x75FF6C: add     [eax+5Ch], ebx
0x75FF6F: pop     edi
0x75FF70: pop     esi
0x75FF71: pop     ebx
0x75FF72: retn    8
