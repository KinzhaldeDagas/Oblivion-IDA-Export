0x556720: mov     edx, [ecx+0Ch]
0x556723: sub     esp, 24h
0x556726: push    edi
0x556727: xor     edi, edi
0x556729: test    edx, edx
0x55672B: jz      short loc_55676D
0x55672D: movzx   eax, word ptr [edx+4]
0x556731: cmp     ax, 0FFFFh
0x556735: jnz     short loc_55674E
0x556737: mov     eax, [edx]
0x556739: push    esi
0x55673A: lea     esi, [eax+1]
0x55673D: lea     ecx, [ecx+0]
0x556740: mov     cl, [eax]
0x556742: add     eax, 1
0x556745: test    cl, cl
0x556747: jnz     short loc_556740
0x556749: sub     eax, esi
0x55674B: pop     esi
0x55674C: jmp     short loc_556751
0x55674E: movzx   eax, ax
0x556751: test    eax, eax
0x556753: jz      short loc_55676D
0x556755: mov     edx, [edx]
0x556757: lea     eax, [esp+28h+FileInformation]
0x55675B: push    eax; lpFileInformation
0x55675C: push    0; fInfoLevelId
0x55675E: push    edx; lpFileName
0x55675F: call    dword ptr ds:0A2817Ch
0x556765: test    eax, eax
0x556767: mov     eax, [esp+28h+var_4]
0x55676B: jnz     short loc_55676F
0x55676D: mov     eax, edi
0x55676F: pop     edi
0x556770: add     esp, 24h
0x556773: retn
