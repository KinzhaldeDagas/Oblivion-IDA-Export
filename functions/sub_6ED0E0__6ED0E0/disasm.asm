0x6ED0E0: push    ebx
0x6ED0E1: push    esi
0x6ED0E2: mov     esi, ecx
0x6ED0E4: mov     eax, [esi]
0x6ED0E6: mov     edx, [eax+0ACh]
0x6ED0EC: push    edi
0x6ED0ED: call    edx
0x6ED0EF: mov     edi, [esp+8+arg_4]
0x6ED0F3: test    al, al
0x6ED0F5: mov     eax, [esi]
0x6ED0F7: mov     edx, [eax+0A0h]
0x6ED0FD: mov     ecx, esi
0x6ED0FF: push    edi
0x6ED100: jz      short loc_6ED120
0x6ED102: call    edx
0x6ED104: mov     ebx, eax
0x6ED106: mov     eax, [esi]
0x6ED108: mov     edx, [eax+9Ch]
0x6ED10E: push    edi
0x6ED10F: mov     ecx, esi
0x6ED111: call    edx
0x6ED113: imul    ebx, eax
0x6ED116: pop     edi
0x6ED117: add     ebx, ebx
0x6ED119: pop     esi
0x6ED11A: mov     eax, ebx
0x6ED11C: pop     ebx
0x6ED11D: retn    4
0x6ED120: call    edx
0x6ED122: mov     ebx, eax
0x6ED124: mov     eax, [esi]
0x6ED126: mov     edx, [eax+9Ch]
0x6ED12C: push    edi
0x6ED12D: mov     ecx, esi
0x6ED12F: call    edx
0x6ED131: imul    ebx, eax
0x6ED134: add     ebx, ebx
0x6ED136: pop     edi
0x6ED137: add     ebx, ebx
0x6ED139: pop     esi
0x6ED13A: mov     eax, ebx
0x6ED13C: pop     ebx
0x6ED13D: retn    4
