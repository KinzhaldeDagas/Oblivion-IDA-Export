0x447740: push    ebp
0x447741: push    esi
0x447742: mov     esi, [esp+8+arg_8]
0x447746: test    esi, esi
0x447748: mov     ebp, ecx
0x44774A: jnz     short loc_44775A
0x44774C: mov     esi, [ebp+0Ch]
0x44774F: test    esi, esi
0x447751: jnz     short loc_44775A
0x447753: pop     esi
0x447754: xor     eax, eax
0x447756: pop     ebp
0x447757: retn    10h
0x44775A: push    ebx
0x44775B: mov     ebx, [esp+0Ch+arg_0]
0x44775F: cmp     ebx, 7FFFh
0x447765: push    edi
0x447766: jg      short loc_4477C6
0x447768: mov     edi, [esp+10h+arg_4]
0x44776C: cmp     edi, 7FFFh
0x447772: jg      short loc_4477C6
0x447774: cmp     ebx, 0FFFF8000h
0x44777A: jl      short loc_4477C6
0x44777C: cmp     edi, 0FFFF8000h
0x447782: jl      short loc_4477C6
0x447784: push    edi; signed int
0x447785: push    ebx; signed int
0x447786: mov     ecx, esi; this
0x447788: call    TESWorldSpace__GetCellAtCellCoord
0x44778D: test    eax, eax
0x44778F: jnz     short loc_4477DF
0x447791: mov     eax, ds:0BA9DE4h
0x447796: mov     ecx, large fs:2Ch
0x44779D: mov     edx, [ecx+eax*4]
0x4477A0: cmp     byte ptr [edx+184h], 0
0x4477A7: jnz     short loc_4477DD
0x4477A9: cmp     [esp+10h+arg_C], 0
0x4477AE: jz      short loc_4477DD
0x4477B0: push    esi
0x4477B1: push    edi
0x4477B2: push    ebx
0x4477B3: push    offset EmptyString
0x4477B8: mov     ecx, ebp
0x4477BA: call    sub_4471D0
0x4477BF: pop     edi
0x4477C0: pop     ebx
0x4477C1: pop     esi
0x4477C2: pop     ebp
0x4477C3: retn    10h
0x4477C6: push    7FFFh
0x4477CB: push    0FFFF8000h; ArgList
0x4477D0: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4477D5: call    PrintError
0x4477DA: add     esp, 0Ch
0x4477DD: xor     eax, eax
0x4477DF: pop     edi
0x4477E0: pop     ebx
0x4477E1: pop     esi
0x4477E2: pop     ebp
0x4477E3: retn    10h
