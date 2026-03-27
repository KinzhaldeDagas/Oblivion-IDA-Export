0x785400: push    ebx
0x785401: mov     ebx, [esp+4+arg_0]
0x785405: push    esi
0x785406: mov     esi, ecx
0x785408: cmp     esi, ebx
0x78540A: jz      loc_78556C
0x785410: push    ebp
0x785411: mov     ebp, [ebx+4]
0x785414: test    ebp, ebp
0x785416: jz      short loc_785430
0x785418: mov     ecx, [ebx+8]
0x78541B: sub     ecx, ebp
0x78541D: mov     eax, 2AAAAAABh
0x785422: imul    ecx
0x785424: sar     edx, 2
0x785427: mov     ecx, edx
0x785429: shr     ecx, 1Fh
0x78542C: add     ecx, edx
0x78542E: jnz     short loc_78543F
0x785430: mov     ecx, esi
0x785432: call    sub_784BF0
0x785437: pop     ebp
0x785438: mov     eax, esi
0x78543A: pop     esi
0x78543B: pop     ebx
0x78543C: retn    4
0x78543F: push    edi
0x785440: mov     edi, [esi+4]
0x785443: test    edi, edi
0x785445: jnz     short loc_78544B
0x785447: xor     eax, eax
0x785449: jmp     short loc_785461
0x78544B: mov     edx, [esi+8]
0x78544E: sub     edx, edi
0x785450: mov     eax, 2AAAAAABh
0x785455: imul    edx
0x785457: sar     edx, 2
0x78545A: mov     eax, edx
0x78545C: shr     eax, 1Fh
0x78545F: add     eax, edx
0x785461: cmp     ecx, eax
0x785463: ja      short loc_7854C6
0x785465: mov     eax, [ebx+8]
0x785468: push    edi
0x785469: push    eax
0x78546A: push    ebp
0x78546B: call    sub_784880
0x785470: mov     ecx, [esi+8]
0x785473: add     esp, 0Ch
0x785476: push    ecx
0x785477: push    eax
0x785478: mov     ecx, esi
0x78547A: call    sub_7849F0
0x78547F: mov     eax, [ebx+4]
0x785482: test    eax, eax
0x785484: jnz     short loc_78549B
0x785486: lea     edx, [eax+eax*2]
0x785489: mov     eax, [esi+4]
0x78548C: pop     edi
0x78548D: lea     ecx, [eax+edx*8]
0x785490: pop     ebp
0x785491: mov     [esi+8], ecx
0x785494: mov     eax, esi
0x785496: pop     esi
0x785497: pop     ebx
0x785498: retn    4
0x78549B: mov     ebx, [ebx+8]
0x78549E: sub     ebx, eax
0x7854A0: mov     eax, 2AAAAAABh
0x7854A5: imul    ebx
0x7854A7: sar     edx, 2
0x7854AA: mov     eax, edx
0x7854AC: shr     eax, 1Fh
0x7854AF: add     eax, edx
0x7854B1: lea     edx, [eax+eax*2]
0x7854B4: mov     eax, [esi+4]
0x7854B7: pop     edi
0x7854B8: lea     ecx, [eax+edx*8]
0x7854BB: pop     ebp
0x7854BC: mov     [esi+8], ecx
0x7854BF: mov     eax, esi
0x7854C1: pop     esi
0x7854C2: pop     ebx
0x7854C3: retn    4
0x7854C6: test    edi, edi
0x7854C8: jnz     short loc_7854CE
0x7854CA: xor     eax, eax
0x7854CC: jmp     short loc_7854E4
0x7854CE: mov     edx, [esi+0Ch]
0x7854D1: sub     edx, edi
0x7854D3: mov     eax, 2AAAAAABh
0x7854D8: imul    edx
0x7854DA: sar     edx, 2
0x7854DD: mov     eax, edx
0x7854DF: shr     eax, 1Fh
0x7854E2: add     eax, edx
0x7854E4: cmp     ecx, eax
0x7854E6: ja      short loc_785525
0x7854E8: mov     ecx, esi
0x7854EA: call    sub_783FE0
0x7854EF: lea     edx, [eax+eax*2]
0x7854F2: lea     eax, [ebp+edx*8+0]
0x7854F6: push    edi
0x7854F7: push    eax
0x7854F8: push    ebp
0x7854F9: mov     [esp+1Ch+arg_0], eax
0x7854FD: call    sub_784880
0x785502: mov     eax, [esi+8]
0x785505: mov     ecx, [ebx+8]
0x785508: mov     edx, [esp+1Ch+arg_0]
0x78550C: add     esp, 0Ch
0x78550F: push    eax
0x785510: push    ecx
0x785511: push    edx
0x785512: mov     ecx, esi
0x785514: call    sub_7849C0
0x785519: pop     edi
0x78551A: mov     [esi+8], eax
0x78551D: pop     ebp
0x78551E: mov     eax, esi
0x785520: pop     esi
0x785521: pop     ebx
0x785522: retn    4
0x785525: test    edi, edi
0x785527: jz      short loc_785541
0x785529: mov     eax, [esi+8]
0x78552C: push    eax
0x78552D: push    edi
0x78552E: mov     ecx, esi
0x785530: call    sub_7849F0
0x785535: mov     ecx, [esi+4]
0x785538: push    ecx
0x785539: call    FormHeapFree
0x78553E: add     esp, 4
0x785541: mov     ecx, ebx
0x785543: call    sub_783FE0
0x785548: push    eax
0x785549: mov     ecx, esi
0x78554B: call    sub_784FA0
0x785550: test    al, al
0x785552: jz      short loc_78556A
0x785554: mov     edx, [esi+4]
0x785557: mov     eax, [ebx+8]
0x78555A: mov     ecx, [ebx+4]
0x78555D: push    edx
0x78555E: push    eax
0x78555F: push    ecx
0x785560: mov     ecx, esi
0x785562: call    sub_7849C0
0x785567: mov     [esi+8], eax
0x78556A: pop     edi
0x78556B: pop     ebp
0x78556C: mov     eax, esi
0x78556E: pop     esi
0x78556F: pop     ebx
0x785570: retn    4
