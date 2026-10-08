0x440510: mov     eax, ecx
0x440512: mov     ecx, [eax+34h]
0x440515: test    ecx, ecx
0x440517: jz      short loc_44051E
0x440519: jmp     loc_4D6560
0x44051E: mov     ecx, [eax+8]
0x440521: jmp     loc_482600
0x482600: push    ecx
0x482601: mov     eax, ds:0B35C24h
0x482606: test    eax, eax
0x482608: push    edi
0x482609: mov     edi, ecx
0x48260B: jz      short loc_482664
0x48260D: cmp     byte ptr [eax+1Ah], 0
0x482611: push    ebp
0x482612: setz    al
0x482615: mov     byte ptr [esp+0Ch+var_4], al
0x482619: mov     eax, [edi+0Ch]
0x48261C: xor     ebp, ebp
0x48261E: test    eax, eax
0x482620: jbe     short loc_482663
0x482622: push    ebx
0x482623: mov     ebx, [esp+10h+var_4]
0x482627: push    esi
0x482628: xor     esi, esi
0x48262A: test    eax, eax
0x48262C: jbe     short loc_482657
0x48262E: mov     edi, edi
0x482630: mov     ecx, [edi+10h]
0x482633: imul    eax, ebp
0x482636: add     eax, esi
0x482638: lea     eax, [ecx+eax*8]
0x48263B: mov     ecx, [eax]
0x48263D: test    ecx, ecx
0x48263F: jz      short loc_48264D
0x482641: cmp     byte ptr [ecx+26h], 6
0x482645: jnz     short loc_48264D
0x482647: push    ebx
0x482648: call    sub_4D5320
0x48264D: mov     eax, [edi+0Ch]
0x482650: add     esi, 1
0x482653: cmp     esi, eax
0x482655: jb      short loc_482630
0x482657: mov     eax, [edi+0Ch]
0x48265A: add     ebp, 1
0x48265D: cmp     ebp, eax
0x48265F: jb      short loc_482628
0x482661: pop     esi
0x482662: pop     ebx
0x482663: pop     ebp
0x482664: pop     edi
0x482665: pop     ecx
0x482666: retn
0x4D6560: push    ecx
0x4D6561: push    ebx
0x4D6562: push    esi
0x4D6563: mov     esi, ecx
0x4D6565: xor     bl, bl
0x4D6567: test    byte ptr [esi+24h], 1
0x4D656B: jz      short loc_4D6577
0x4D656D: lea     ecx, [esi+28h]
0x4D6570: call    sub_424180
0x4D6575: jmp     short loc_4D657C
0x4D6577: mov     eax, ds:0B35C24h
0x4D657C: test    eax, eax
0x4D657E: jz      short loc_4D65C7
0x4D6580: cmp     byte ptr [eax+1Ah], 0
0x4D6584: setz    bl
0x4D6587: test    byte ptr [esi+24h], 1
0x4D658B: mov     byte ptr [esp+0Ch+var_4], bl
0x4D658F: jz      short loc_4D659B
0x4D6591: lea     ecx, [esi+28h]
0x4D6594: call    sub_424180
0x4D6599: jmp     short loc_4D65A0
0x4D659B: mov     eax, ds:0B35C24h
0x4D65A0: test    eax, eax
0x4D65A2: mov     ecx, [esi+54h]
0x4D65A5: jz      short loc_4D65C7
0x4D65A7: test    ecx, ecx
0x4D65A9: jz      short loc_4D65C7
0x4D65AB: mov     edx, [eax]
0x4D65AD: push    edi
0x4D65AE: mov     edi, [esp+10h+var_4]
0x4D65B2: push    edi
0x4D65B3: push    ecx
0x4D65B4: mov     ecx, eax
0x4D65B6: mov     eax, [edx+98h]
0x4D65BC: call    eax
0x4D65BE: push    edi
0x4D65BF: mov     ecx, esi
0x4D65C1: call    sub_4D1E40
0x4D65C6: pop     edi
0x4D65C7: pop     esi
0x4D65C8: mov     al, bl
0x4D65CA: pop     ebx
0x4D65CB: pop     ecx
0x4D65CC: retn
