0x608310: mov     eax, [esp+arg_0]
0x608314: push    ebx
0x608315: push    esi
0x608316: push    edi
0x608317: push    eax
0x608318: mov     edi, ecx
0x60831A: call    MobileObject_ModifiedFormSize
0x60831F: mov     ecx, ds:0B33B00h
0x608325: movzx   esi, ax
0x608328: movzx   ebx, si
0x60832B: call    sub_45A170
0x608330: test    al, al
0x608332: jz      short loc_608337
0x608334: add     esi, 6
0x608337: mov     edi, [edi+5Ch]
0x60833A: add     esi, 30h ; '0'
0x60833D: xor     al, al
0x60833F: test    edi, edi
0x608341: jz      short loc_608345
0x608343: mov     al, 1
0x608345: mov     ecx, ds:0B33B00h
0x60834B: add     esi, 1
0x60834E: test    al, al
0x608350: jz      short loc_60836C
0x608352: add     esi, 28h ; '('
0x608355: cmp     byte ptr [ecx+7Ch], 50h ; 'P'
0x608359: jb      short loc_60835E
0x60835B: add     esi, 10h
0x60835E: mov     edi, [edi]
0x608360: cmp     edi, 1
0x608363: jz      short loc_608369
0x608365: test    edi, edi
0x608367: jnz     short loc_60836C
0x608369: add     esi, 8
0x60836C: mov     al, [ecx+7Ch]
0x60836F: cmp     al, 54h ; 'T'
0x608371: jb      short loc_608376
0x608373: add     esi, 1
0x608376: cmp     al, 55h ; 'U'
0x608378: jb      short loc_60837D
0x60837A: add     esi, 1
0x60837D: cmp     byte ptr ds:0B05BACh, 0
0x608384: jz      short loc_6083F8
0x608386: mov     edi, [ecx+84h]
0x60838C: test    edi, edi
0x60838E: jz      short loc_6083D8
0x608390: mov     ecx, [edi]
0x608392: push    ecx; a1
0x608393: call    TESForm_LookupByFormID
0x608398: mov     edx, [edi+5]
0x60839B: add     esp, 4
0x60839E: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x6083A3: push    87Ah
0x6083A8: push    edx
0x6083A9: mov     edx, [eax]
0x6083AB: mov     ecx, eax
0x6083AD: mov     eax, [edx+0D4h]
0x6083B3: call    eax
0x6083B5: mov     ecx, [edi]
0x6083B7: push    eax
0x6083B8: movzx   edx, bx
0x6083BB: movzx   eax, si
0x6083BE: push    ecx
0x6083BF: sub     eax, edx
0x6083C1: push    eax; ArgList
0x6083C2: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6083C7: call    sub_40FEC0
0x6083CC: add     esp, 1Ch
0x6083CF: pop     edi
0x6083D0: mov     ax, si
0x6083D3: pop     esi
0x6083D4: pop     ebx
0x6083D5: retn    4
0x6083D8: movzx   ecx, bx
0x6083DB: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x6083E0: movzx   edx, si
0x6083E3: push    87Ah
0x6083E8: sub     edx, ecx
0x6083EA: push    edx; ArgList
0x6083EB: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x6083F0: call    sub_40FEC0
0x6083F5: add     esp, 10h
0x6083F8: pop     edi
0x6083F9: mov     ax, si
0x6083FC: pop     esi
0x6083FD: pop     ebx
0x6083FE: retn    4
