0x7830C0: push    ebx
0x7830C1: mov     ebx, [esp+4+arg_4]
0x7830C5: test    ebx, ebx
0x7830C7: push    ebp
0x7830C8: push    esi
0x7830C9: push    edi
0x7830CA: mov     edi, [esp+10h+arg_0]
0x7830CE: mov     ebp, ecx
0x7830D0: jnz     short loc_7830D5
0x7830D2: mov     ebx, [edi+30h]
0x7830D5: mov     esi, [esp+10h+arg_8]
0x7830D9: test    esi, esi
0x7830DB: jnz     short loc_7830E9
0x7830DD: mov     esi, [edi+20h]
0x7830E0: test    esi, esi
0x7830E2: jnz     short loc_7830E9
0x7830E4: mov     esi, 1
0x7830E9: cmp     byte ptr ds:0B4295Bh, 0
0x7830F0: mov     eax, [edi+14h]
0x7830F3: mov     [esp+10h+arg_4], eax
0x7830F7: jnz     short loc_783102
0x7830F9: call    sub_783C70
0x7830FE: mov     eax, [esp+10h+arg_4]
0x783102: mov     edi, [edi+1Ch]
0x783105: mov     ebp, [ebp+24h]
0x783108: and     eax, 0FFh
0x78310D: mov     eax, ds:0B428D8h[eax*4]
0x783114: cmp     eax, 1
0x783117: push    esi
0x783118: push    ebx
0x783119: push    edi
0x78311A: jnz     short loc_78313D
0x78311C: mov     eax, [ebp+0FF8h]
0x783122: mov     ecx, [eax]
0x783124: mov     edx, [ecx+188h]
0x78312A: push    eax
0x78312B: call    edx
0x78312D: pop     edi
0x78312E: xor     ecx, ecx
0x783130: test    eax, eax
0x783132: pop     esi
0x783133: setnl   cl
0x783136: pop     ebp
0x783137: mov     al, cl
0x783139: pop     ebx
0x78313A: retn    0Ch
0x78313D: cmp     eax, 3
0x783140: mov     eax, [ebp+0FF8h]
0x783146: mov     edx, [eax]
0x783148: push    eax
0x783149: jnz     short loc_783163
0x78314B: mov     eax, [edx+180h]
0x783151: call    eax
0x783153: pop     edi
0x783154: xor     ecx, ecx
0x783156: test    eax, eax
0x783158: pop     esi
0x783159: setnl   cl
0x78315C: pop     ebp
0x78315D: mov     al, cl
0x78315F: pop     ebx
0x783160: retn    0Ch
0x783163: mov     eax, [edx+178h]
0x783169: call    eax
0x78316B: pop     edi
0x78316C: xor     ecx, ecx
0x78316E: test    eax, eax
0x783170: pop     esi
0x783171: setnl   cl
0x783174: pop     ebp
0x783175: mov     al, cl
0x783177: pop     ebx
0x783178: retn    0Ch
