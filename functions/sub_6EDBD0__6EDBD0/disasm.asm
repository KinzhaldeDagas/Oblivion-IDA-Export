0x6EDBD0: push    ebx
0x6EDBD1: mov     ebx, [esp+4+arg_0]
0x6EDBD5: push    esi
0x6EDBD6: mov     esi, [esp+8+arg_4]
0x6EDBDA: cmp     ebx, esi
0x6EDBDC: jz      short loc_6EDC0B
0x6EDBDE: push    edi
0x6EDBDF: mov     edi, [esp+0Ch+arg_8]
0x6EDBE3: sub     esi, 34h ; '4'
0x6EDBE6: sub     edi, 34h ; '4'
0x6EDBE9: push    esi; source
0x6EDBEA: mov     ecx, edi; this
0x6EDBEC: call    FaceGenMatrix_Assign; Deep matrix assignment. Copies rows/columns, resizes coefficient storage, then copies rows*columns floats.
0x6EDBF1: push    0FFFFFFFFh; count
0x6EDBF3: push    0; offset
0x6EDBF5: lea     eax, [esi+18h]
0x6EDBF8: push    eax; source
0x6EDBF9: lea     ecx, [edi+18h]; this
0x6EDBFC: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6EDC01: cmp     esi, ebx
0x6EDC03: jnz     short loc_6EDBE3
0x6EDC05: mov     eax, edi
0x6EDC07: pop     edi
0x6EDC08: pop     esi
0x6EDC09: pop     ebx
0x6EDC0A: retn
0x6EDC0B: mov     eax, [esp+8+arg_8]
0x6EDC0F: pop     esi
0x6EDC10: pop     ebx
0x6EDC11: retn
