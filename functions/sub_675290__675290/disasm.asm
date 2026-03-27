0x675290: push    ebx
0x675291: push    edi
0x675292: add     ecx, 68h ; 'h'; this
0x675295: xor     ebx, ebx
0x675297: call    sub_7616D0
0x67529C: mov     edi, eax
0x67529E: test    edi, edi
0x6752A0: jz      short loc_6752FA
0x6752A2: push    ebp
0x6752A3: mov     ebp, [esp+0Ch+arg_0]
0x6752A7: push    esi
0x6752A8: cmp     dword ptr [edi+4], 0
0x6752AC: jnz     short loc_6752B3
0x6752AE: cmp     dword ptr [edi], 0
0x6752B1: jz      short loc_6752F8
0x6752B3: test    ebx, ebx
0x6752B5: jnz     short loc_6752F8
0x6752B7: mov     ecx, [edi]
0x6752B9: mov     eax, [ecx]
0x6752BB: mov     edx, [eax+190h]
0x6752C1: call    edx
0x6752C3: test    al, al
0x6752C5: jz      short loc_6752F1
0x6752C7: mov     esi, [edi]
0x6752C9: test    esi, esi
0x6752CB: jz      short loc_6752F1
0x6752CD: cmp     esi, ds:0B333C4h
0x6752D3: mov     ecx, esi; this
0x6752D5: setz    al
0x6752D8: push    eax
0x6752D9: push    ebp
0x6752DA: push    ebx; a2
0x6752DB: call    Actor_GetActorBaseForm
0x6752E0: mov     ecx, eax
0x6752E2: add     ecx, 24h ; '$'
0x6752E5: call    TESActorBaseData_GetFactionRank
0x6752EA: cmp     eax, 0FFFFFFFFh
0x6752ED: jle     short loc_6752F1
0x6752EF: mov     ebx, esi
0x6752F1: mov     edi, [edi+4]
0x6752F4: test    edi, edi
0x6752F6: jnz     short loc_6752A8
0x6752F8: pop     esi
0x6752F9: pop     ebp
0x6752FA: pop     edi
0x6752FB: mov     eax, ebx
0x6752FD: pop     ebx
0x6752FE: retn    4
