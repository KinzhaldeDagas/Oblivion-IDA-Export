0x5E0990: push    ebx
0x5E0991: push    ebp
0x5E0992: push    esi
0x5E0993: mov     esi, ecx
0x5E0995: mov     eax, [esi]
0x5E0997: mov     edx, [eax+170h]
0x5E099D: push    edi
0x5E099E: xor     edi, edi
0x5E09A0: call    edx
0x5E09A2: mov     ebx, eax
0x5E09A4: test    ebx, ebx
0x5E09A6: jz      short loc_5E09BA
0x5E09A8: mov     eax, [esi]
0x5E09AA: mov     edx, [eax+190h]
0x5E09B0: mov     ecx, esi
0x5E09B2: call    edx
0x5E09B4: test    al, al
0x5E09B6: jz      short loc_5E09BA
0x5E09B8: mov     edi, ebx
0x5E09BA: mov     ebp, [esp+10h+arg_0]
0x5E09BE: push    ebp
0x5E09BF: lea     ecx, [edi+54h]
0x5E09C2: call    TESSpellList_AddSpell
0x5E09C7: mov     bl, al
0x5E09C9: test    bl, bl
0x5E09CB: mov     byte ptr [esp+10h+arg_0], bl
0x5E09CF: jz      short loc_5E0A04
0x5E09D1: mov     eax, [esi]
0x5E09D3: mov     edx, [eax+170h]
0x5E09D9: mov     ecx, esi
0x5E09DB: xor     ebx, ebx
0x5E09DD: call    edx
0x5E09DF: mov     edi, eax
0x5E09E1: test    edi, edi
0x5E09E3: jz      short loc_5E09F7
0x5E09E5: mov     eax, [esi]
0x5E09E7: mov     edx, [eax+190h]
0x5E09ED: mov     ecx, esi
0x5E09EF: call    edx
0x5E09F1: test    al, al
0x5E09F3: jz      short loc_5E09F7
0x5E09F5: mov     ebx, edi
0x5E09F7: push    20h ; ' '; a2
0x5E09F9: mov     ecx, ebx; this
0x5E09FB: call    TESForm_MarkAsModified
0x5E0A00: mov     bl, byte ptr [esp+10h+arg_0]
0x5E0A04: mov     eax, [ebp+18h]
0x5E0A07: mov     edx, [eax+18h]
0x5E0A0A: lea     edi, [ebp+18h]
0x5E0A0D: mov     ecx, edi
0x5E0A0F: call    edx
0x5E0A11: cmp     eax, 4
0x5E0A14: jz      short Actor_AddMagicItemForm___ApplySpellToActor
0x5E0A16: mov     eax, [edi]
0x5E0A18: mov     edx, [eax+18h]
0x5E0A1B: mov     ecx, edi
0x5E0A1D: call    edx
0x5E0A1F: cmp     eax, 1
0x5E0A22: jnz     short Actor_AddMagicItemForm___Done
