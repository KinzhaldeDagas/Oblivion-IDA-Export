0x45FC60: push    ecx
0x45FC61: mov     eax, ds:0B33B00h
0x45FC66: mov     [esp+4+var_4], 0
0x45FC6D: mov     al, [eax+7Ch]
0x45FC70: cmp     al, 25h ; '%'
0x45FC72: push    esi
0x45FC73: mov     esi, ecx
0x45FC75: jb      loc_45FD91
0x45FC7B: cmp     al, 27h ; '''
0x45FC7D: push    edi; ArgList
0x45FC7E: mov     edi, [esp+0Ch+arg_0]
0x45FC82: jb      short loc_45FCA3
0x45FC84: mov     eax, [edi+4]
0x45FC87: push    1
0x45FC89: lea     ecx, [esp+10h+arg_0]
0x45FC8D: push    ecx
0x45FC8E: push    4
0x45FC90: lea     edx, [esp+18h+var_4]
0x45FC94: push    edx
0x45FC95: push    edi
0x45FC96: mov     [esp+20h+arg_0], 1
0x45FC9E: call    eax
0x45FCA0: add     esp, 14h
0x45FCA3: mov     ecx, ds:0B33B00h
0x45FCA9: cmp     byte ptr [ecx+7Ch], 27h ; '''
0x45FCAD: jnb     short loc_45FCD6
0x45FCAF: mov     ecx, [edi+4]
0x45FCB2: push    1
0x45FCB4: lea     edx, [esp+10h+arg_0]
0x45FCB8: push    edx
0x45FCB9: push    2
0x45FCBB: lea     eax, [esp+18h+var_4]
0x45FCBF: push    eax
0x45FCC0: push    edi
0x45FCC1: mov     [esp+20h+var_4], 0
0x45FCC9: mov     [esp+20h+arg_0], 1
0x45FCD1: call    ecx
0x45FCD3: add     esp, 14h
0x45FCD6: mov     eax, [esp+0Ch+var_4]
0x45FCDA: test    eax, eax
0x45FCDC: jz      loc_45FD90
0x45FCE2: mov     ecx, [esi+40h]
0x45FCE5: test    ecx, ecx
0x45FCE7: jz      short loc_45FCF4
0x45FCE9: push    offset aTempEffectsLis; "Temp Effects List"
0x45FCEE: push    eax
0x45FCEF: call    sub_4531B0
0x45FCF4: mov     edx, [esp+0Ch+var_4]
0x45FCF8: push    1
0x45FCFA: push    edx
0x45FCFB: mov     ecx, offset FormHeap
0x45FD00: call    j_MemoryHeap_Alloc
0x45FD05: test    eax, eax
0x45FD07: mov     [esi+14h], eax
0x45FD0A: jnz     short loc_45FD19
0x45FD0C: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x45FD11: call    sub_404EC0
0x45FD16: add     esp, 4
0x45FD19: mov     eax, ds:0B33B00h
0x45FD1E: cmp     byte ptr [eax+7Ch], 5Eh ; '^'
0x45FD22: push    ebp
0x45FD23: mov     ebp, [esi+14h]
0x45FD26: jb      short loc_45FD50
0x45FD28: mov     edx, [esp+10h+var_4]
0x45FD2C: mov     eax, [edi+4]
0x45FD2F: push    1
0x45FD31: lea     ecx, [esp+14h+arg_0]
0x45FD35: push    ecx
0x45FD36: push    edx
0x45FD37: push    ebp
0x45FD38: push    edi
0x45FD39: mov     [esp+24h+arg_0], 1
0x45FD41: call    eax
0x45FD43: add     esp, 14h
0x45FD46: mov     ecx, offset ActorProcessManager_ptr
0x45FD4B: call    sub_679850
0x45FD50: mov     ecx, ds:0B33B00h
0x45FD56: cmp     byte ptr [ecx+7Ch], 5Eh ; '^'
0x45FD5A: mov     eax, [esp+10h+var_4]
0x45FD5E: jnb     short loc_45FD63
0x45FD60: add     [esi+14h], eax
0x45FD63: lea     edx, [eax+ebp]
0x45FD66: cmp     edx, [esi+14h]
0x45FD69: jz      short loc_45FD7D
0x45FD6B: mov     ecx, ds:0B34D90h
0x45FD71: mov     eax, [ecx]
0x45FD73: mov     edx, [eax+18h]
0x45FD76: push    offset aLoadtempeffect; "LoadTempEffectsList() call did not prop"...
0x45FD7B: call    edx
0x45FD7D: push    ebp; void *
0x45FD7E: mov     ecx, offset FormHeap
0x45FD83: call    MemoryHeap_Free_checked
0x45FD88: mov     dword ptr [esi+14h], 0
0x45FD8F: pop     ebp
0x45FD90: pop     edi
0x45FD91: pop     esi
0x45FD92: pop     ecx
0x45FD93: retn    4
