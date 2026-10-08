0x6EDB80: push    ebx
0x6EDB81: mov     ebx, [esp+4+arg_4]
0x6EDB85: push    esi
0x6EDB86: mov     esi, [esp+8+source]
0x6EDB8A: cmp     esi, ebx
0x6EDB8C: jz      short loc_6EDBBB
0x6EDB8E: push    edi
0x6EDB8F: mov     edi, [esp+0Ch+arg_8]
0x6EDB93: push    esi; source
0x6EDB94: mov     ecx, edi; this
0x6EDB96: call    FaceGenMatrix_Assign; Deep matrix assignment. Copies rows/columns, resizes coefficient storage, then copies rows*columns floats.
0x6EDB9B: push    0FFFFFFFFh; count
0x6EDB9D: push    0; offset
0x6EDB9F: lea     eax, [esi+18h]
0x6EDBA2: push    eax; source
0x6EDBA3: lea     ecx, [edi+18h]; this
0x6EDBA6: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6EDBAB: add     esi, 34h ; '4'
0x6EDBAE: add     edi, 34h ; '4'
0x6EDBB1: cmp     esi, ebx
0x6EDBB3: jnz     short loc_6EDB93
0x6EDBB5: mov     eax, edi
0x6EDBB7: pop     edi
0x6EDBB8: pop     esi
0x6EDBB9: pop     ebx
0x6EDBBA: retn
0x6EDBBB: mov     eax, [esp+8+arg_8]
0x6EDBBF: pop     esi
0x6EDBC0: pop     ebx
0x6EDBC1: retn
