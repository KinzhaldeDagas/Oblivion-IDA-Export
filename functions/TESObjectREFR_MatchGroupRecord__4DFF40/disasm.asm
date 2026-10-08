0x4DFF40: push    ebx; Runtime corroboration of TESCS 0x545820: TESObjectREFR/ACHR/ACRE group matcher accepts owning CELL group type 6 as an ancestor, or strict direct role type 8 when reference flag 0x400 (Persistent), else type 10 when flag 0x8000 (Visible When Distant), else type 9. Persistent is tested first; labels match the owning CELL FormID in the low 24 bits.
0x4DFF41: push    esi
0x4DFF42: mov     esi, [esp+8+a2]
0x4DFF46: xor     bl, bl
0x4DFF48: test    esi, esi
0x4DFF4A: push    edi
0x4DFF4B: mov     edi, ecx
0x4DFF4D: jz      loc_4DFFF3
0x4DFF53: mov     eax, [esi]
0x4DFF55: cmp     eax, ds:0B05E20h
0x4DFF5B: jnz     loc_4DFFF3
0x4DFF61: mov     edx, [edi+18h]
0x4DFF64: mov     eax, [edx]
0x4DFF66: lea     ecx, [edi+18h]
0x4DFF69: call    eax
0x4DFF6B: mov     edx, [esi+0Ch]
0x4DFF6E: cmp     edx, 6
0x4DFF71: mov     ecx, eax; this
0x4DFF73: jz      short loc_4DFFA0; GRUP type 6 is the owning-CELL ancestor and requires include_parent.
0x4DFF75: cmp     edx, 7
0x4DFF78: jbe     short loc_4DFF7F
0x4DFF7A: cmp     edx, 0Ah
0x4DFF7D: jbe     short loc_4DFFB1
0x4DFF7F: mov     eax, dword ptr [esp+0Ch+a3]
0x4DFF83: test    al, al
0x4DFF85: jz      short loc_4DFFF3
0x4DFF87: mov     edi, dword ptr [esp+0Ch+a4]
0x4DFF8B: mov     edx, [ecx]
0x4DFF8D: push    edi
0x4DFF8E: push    eax
0x4DFF8F: mov     eax, [edx+0BCh]
0x4DFF95: push    esi
0x4DFF96: call    eax
0x4DFF98: pop     edi
0x4DFF99: pop     esi
0x4DFF9A: mov     bl, al
0x4DFF9C: pop     ebx
0x4DFF9D: retn    0Ch
0x4DFFA0: cmp     [esp+0Ch+a3], 0
0x4DFFA5: jnz     short loc_4DFFB1
0x4DFFA7: pop     edi
0x4DFFA8: xor     bl, bl
0x4DFFAA: pop     esi
0x4DFFAB: mov     al, bl
0x4DFFAD: pop     ebx
0x4DFFAE: retn    0Ch
0x4DFFB1: mov     edx, [esi+8]
0x4DFFB4: push    edx; candidate_form_id
0x4DFFB5: call    TESForm_FormIDMatchesObjectID24; Compares only the low 24-bit object-ID portions of this form's FormID and a serialized group label; load-order/master byte is intentionally ignored.
0x4DFFBA: test    al, al
0x4DFFBC: jz      short loc_4DFFF3
0x4DFFBE: cmp     [esp+0Ch+a4], 0
0x4DFFC3: jz      short loc_4DFFF1
0x4DFFC5: cmp     dword ptr [esi+0Ch], 6
0x4DFFC9: jz      short loc_4DFFF1; In strict mode, owning type 6 remains an accepted ancestor; direct child classification follows.
0x4DFFCB: mov     ecx, edi; this
0x4DFFCD: call    TESObjectREFR_IsPersistent
0x4DFFD2: test    al, al
0x4DFFD4: jz      short loc_4DFFDC
0x4DFFD6: cmp     dword ptr [esi+0Ch], 8; Persistent reference is tested first and requires direct role GRUP type 8. Dual Persistent+VWD references therefore use type 8.
0x4DFFDA: jmp     short loc_4DFFEF
0x4DFFDC: test    dword ptr [edi+8], 8000h; Only when the reference is not Persistent, test Visible When Distant (formFlags 0x8000).
0x4DFFE3: jz      short loc_4DFFEB
0x4DFFE5: cmp     dword ptr [esi+0Ch], 0Ah; Visible When Distant and non-persistent => direct role GRUP type 10; otherwise the following comparison requires type 9.
0x4DFFE9: jmp     short loc_4DFFEF
0x4DFFEB: cmp     dword ptr [esi+0Ch], 9
0x4DFFEF: jnz     short loc_4DFFF3
0x4DFFF1: mov     bl, 1
0x4DFFF3: pop     edi
0x4DFFF4: pop     esi
0x4DFFF5: mov     al, bl
0x4DFFF7: pop     ebx
0x4DFFF8: retn    0Ch
