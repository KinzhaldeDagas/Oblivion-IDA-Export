0x5771C0: push    0FFFFFFFFh
0x5771C2: push    offset SEH_5771C0
0x5771C7: mov     eax, large fs:0
0x5771CD: push    eax
0x5771CE: push    ecx
0x5771CF: push    ebx
0x5771D0: push    esi
0x5771D1: push    edi
0x5771D2: mov     eax, ds:0B30AACh
0x5771D7: xor     eax, esp
0x5771D9: push    eax
0x5771DA: lea     eax, [esp+20h+var_C]
0x5771DE: mov     large fs:0, eax
0x5771E4: mov     esi, ecx
0x5771E6: mov     [esp+20h+var_10], esi
0x5771EA: mov     eax, [esi+0Ch]
0x5771ED: xor     ebx, ebx
0x5771EF: cmp     eax, ebx
0x5771F1: mov     [esp+20h+var_4], ebx
0x5771F5: jz      short loc_577242
0x5771F7: mov     eax, [esi+4]
0x5771FA: mov     ecx, [eax]
0x5771FC: cmp     ecx, ebx
0x5771FE: mov     [esi+4], ecx
0x577201: jz      short loc_577208
0x577203: mov     [ecx+4], ebx
0x577206: jmp     short loc_57720B
0x577208: mov     [esi+8], ebx
0x57720B: mov     edx, [esi]
0x57720D: mov     edi, [eax+8]
0x577210: push    eax
0x577211: mov     eax, [edx+8]
0x577214: mov     ecx, esi
0x577216: call    eax
0x577218: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x57721C: cmp     edi, ebx
0x57721E: jz      short loc_57723D
0x577220: mov     eax, [edi+1Ch]
0x577223: push    eax
0x577224: call    FormHeapFree
0x577229: push    edi
0x57722A: mov     [edi+1Ch], ebx
0x57722D: mov     [edi+22h], bx
0x577231: mov     [edi+20h], bx
0x577235: call    FormHeapFree
0x57723A: add     esp, 8
0x57723D: cmp     [esi+0Ch], ebx
0x577240: jnz     short loc_5771F7
0x577242: mov     ecx, esi
0x577244: mov     [esp+20h+var_4], 0FFFFFFFFh
0x57724C: call    ??1?$NiTList@PAVCharData@FontManager@@@@UAE@XZ; NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(void)
0x577251: mov     ecx, dword ptr [esp+20h+var_C]
0x577255: mov     large fs:0, ecx
0x57725C: pop     ecx
0x57725D: pop     edi
0x57725E: pop     esi
0x57725F: pop     ebx
0x577260: add     esp, 10h
0x577263: retn
