0x585330: push    ecx
0x585331: push    ebx
0x585332: push    esi
0x585333: mov     esi, ecx
0x585335: mov     eax, [esi+14h]
0x585338: xor     ebx, ebx
0x58533A: cmp     eax, ebx
0x58533C: push    edi
0x58533D: mov     dword ptr [esi], offset ??_7Menu@@6B@; const Menu::`vftable'
0x585343: jz      short loc_58535A
0x585345: push    1
0x585347: push    eax
0x585348: push    1; arg1
0x58534A: push    ebx; canCreate
0x58534B: call    InterfaceManager_GetSingleton
0x585350: add     esp, 8
0x585353: mov     ecx, eax
0x585355: call    sub_57CFE0
0x58535A: mov     ecx, [esi+20h]
0x58535D: lea     eax, [esp+10h+var_4]
0x585361: sub     ecx, 3E9h
0x585367: push    eax
0x585368: push    ecx
0x585369: mov     ecx, offset Menu_OpenMenuArray
0x58536E: mov     [esp+18h+var_4], ebx
0x585372: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x585377: mov     eax, [esi+4]
0x58537A: cmp     eax, ebx
0x58537C: jz      short loc_585390
0x58537E: mov     [eax+44h], ebx
0x585381: mov     ecx, [esi+4]
0x585384: cmp     ecx, ebx
0x585386: jz      short loc_585390
0x585388: mov     edx, [ecx]
0x58538A: mov     eax, [edx]
0x58538C: push    1
0x58538E: call    eax
0x585390: cmp     [esi+1Ch], bl
0x585393: mov     [esi+4], ebx
0x585396: jz      short loc_5853BE
0x585398: lea     edi, [esi+8]
0x58539B: cmp     edi, ebx
0x58539D: jz      short loc_5853BE
0x58539F: push    ebp
0x5853A0: mov     ebp, [edi]
0x5853A2: cmp     ebp, ebx
0x5853A4: jz      short loc_5853B6
0x5853A6: mov     ecx, ebp
0x5853A8: call    sub_5852C0
0x5853AD: push    ebp
0x5853AE: call    FormHeapFree
0x5853B3: add     esp, 4
0x5853B6: mov     edi, [edi+4]
0x5853B9: cmp     edi, ebx
0x5853BB: jnz     short loc_5853A0
0x5853BD: pop     ebp
0x5853BE: cmp     [esi+0Ch], ebx
0x5853C1: jz      short loc_5853D9
0x5853C3: mov     eax, [esi+0Ch]
0x5853C6: mov     edi, [eax+4]
0x5853C9: push    eax
0x5853CA: call    FormHeapFree
0x5853CF: add     esp, 4
0x5853D2: cmp     edi, ebx
0x5853D4: mov     [esi+0Ch], edi
0x5853D7: jnz     short loc_5853C3
0x5853D9: pop     edi
0x5853DA: mov     [esi+8], ebx
0x5853DD: pop     esi
0x5853DE: pop     ebx
0x5853DF: pop     ecx
0x5853E0: retn
