0x450430: push    esi
0x450431: mov     esi, ecx
0x450433: push    edi
0x450434: mov     edi, [esi+284h]
0x45043A: test    edi, edi
0x45043C: jz      short loc_4504AA
0x45043E: mov     eax, ds:0BA9DE4h
0x450443: mov     ecx, large fs:2Ch
0x45044A: push    ebp
0x45044B: mov     ebp, [ecx+eax*4]
0x45044E: mov     edi, edi
0x450450: cmp     byte ptr [ebp+184h], 0
0x450457: jz      short loc_450462
0x450459: mov     ecx, esi
0x45045B: call    TESFile_CloseGroupRecord
0x450460: jmp     short loc_45049F
0x450462: test    edi, edi
0x450464: jz      short loc_45049F
0x450466: mov     eax, [esi+288h]
0x45046C: test    eax, eax
0x45046E: jz      short loc_45048C
0x450470: mov     edx, [eax+4]
0x450473: mov     [esi+288h], edx
0x450479: mov     ecx, [eax]
0x45047B: push    eax
0x45047C: mov     [esi+284h], ecx
0x450482: call    FormHeapFree
0x450487: add     esp, 4
0x45048A: jmp     short loc_450496
0x45048C: mov     dword ptr [esi+284h], 0
0x450496: push    edi
0x450497: call    FormHeapFree
0x45049C: add     esp, 4
0x45049F: mov     edi, [esi+284h]
0x4504A5: test    edi, edi
0x4504A7: jnz     short loc_450450
0x4504A9: pop     ebp
0x4504AA: pop     edi
0x4504AB: pop     esi
0x4504AC: retn
