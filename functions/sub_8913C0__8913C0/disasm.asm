0x8913C0: push    ecx
0x8913C1: push    esi
0x8913C2: push    edi
0x8913C3: mov     edi, ecx
0x8913C5: mov     esi, [edi+374h]
0x8913CB: test    esi, esi
0x8913CD: jz      short loc_89142E
0x8913CF: mov     eax, [esi]
0x8913D1: mov     edx, [eax+4]
0x8913D4: mov     ecx, esi
0x8913D6: call    edx
0x8913D8: test    eax, eax
0x8913DA: jz      short loc_8913EE
0x8913DC: lea     esp, [esp+0]
0x8913E0: cmp     eax, offset dword_BA7FD8
0x8913E5: jz      short loc_891413
0x8913E7: mov     eax, [eax+4]
0x8913EA: test    eax, eax
0x8913EC: jnz     short loc_8913E0
0x8913EE: xor     al, al
0x8913F0: neg     al
0x8913F2: sbb     eax, eax
0x8913F4: and     eax, esi
0x8913F6: jz      short loc_89142E
0x8913F8: mov     eax, [eax+8]
0x8913FB: test    eax, eax
0x8913FD: jz      short loc_891417
0x8913FF: fld     dword ptr [eax+0Ch]
0x891402: pop     edi
0x891403: fstp    [esp+8+var_4]
0x891407: pop     esi
0x891408: fld     [esp+4+var_4]
0x89140B: fstp    [esp+4+var_4]
0x89140E: fld     [esp+4+var_4]
0x891411: pop     ecx
0x891412: retn
0x891413: mov     al, 1
0x891415: jmp     short loc_8913F0
0x891417: fld     dword ptr ds:0B2EFC4h
0x89141D: pop     edi
0x89141E: fstp    [esp+8+var_4]
0x891422: pop     esi
0x891423: fld     [esp+4+var_4]
0x891426: fstp    [esp+4+var_4]
0x891429: fld     [esp+4+var_4]
0x89142C: pop     ecx
0x89142D: retn
0x89142E: fld     dword ptr [edi+3A0h]
0x891434: pop     edi
0x891435: fstp    [esp+8+var_4]
0x891439: pop     esi
0x89143A: fld     [esp+4+var_4]
0x89143D: pop     ecx
0x89143E: retn
