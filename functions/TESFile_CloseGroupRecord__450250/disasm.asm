0x450250: push    esi
0x450251: mov     esi, ecx
0x450253: push    edi
0x450254: mov     edi, [esi+284h]
0x45025A: test    edi, edi
0x45025C: jz      short loc_4502B7
0x45025E: cmp     dword ptr [esi+10h], 0
0x450262: jz      short loc_4502AE
0x450264: mov     ecx, [esi+10h]
0x450267: mov     edx, ds:0A853D8h
0x45026D: mov     eax, [ecx]
0x45026F: mov     eax, [eax+0Ch]
0x450272: push    edx
0x450273: push    0
0x450275: call    eax
0x450277: mov     ecx, [esi+10h]
0x45027A: mov     eax, [ecx+30h]
0x45027D: cmp     eax, 0FFFFFFFFh
0x450280: jnz     short loc_450288
0x450282: mov     eax, [ecx+148h]
0x450288: mov     edx, [edi+14h]
0x45028B: sub     eax, edx
0x45028D: push    ebx
0x45028E: mov     [edi+4], eax
0x450291: mov     ebx, ds:0A853D0h
0x450297: mov     ecx, [esi+10h]
0x45029A: mov     eax, [ecx]
0x45029C: push    ebx
0x45029D: push    edx
0x45029E: mov     edx, [eax+0Ch]
0x4502A1: call    edx
0x4502A3: push    14h
0x4502A5: push    edi
0x4502A6: mov     ecx, esi
0x4502A8: call    TESFile_WriteData
0x4502AD: pop     ebx
0x4502AE: pop     edi
0x4502AF: mov     ecx, esi
0x4502B1: pop     esi
0x4502B2: jmp     TESFile_CloseGroupRecord___TESFile_PopGroup
0x4502B7: pop     edi
0x4502B8: pop     esi
0x4502B9: retn
