0x8CDD20: push    ebx
0x8CDD21: push    ebp
0x8CDD22: push    esi
0x8CDD23: push    edi
0x8CDD24: mov     esi, ecx
0x8CDD26: mov     ecx, ds:0BA7D98h
0x8CDD2C: mov     eax, [ecx]
0x8CDD2E: push    2Eh ; '.'
0x8CDD30: push    0A0h ; ' '
0x8CDD35: call    dword ptr [eax+10h]
0x8CDD38: mov     word ptr [eax+4], 0A0h ; ' '
0x8CDD3E: mov     ecx, [esi+30h]
0x8CDD41: push    ecx
0x8CDD42: lea     ecx, [esi+70h]
0x8CDD45: push    ecx
0x8CDD46: mov     ecx, eax
0x8CDD48: call    sub_8CDCB0
0x8CDD4D: mov     edx, [esi+54h]
0x8CDD50: mov     ebx, ds:0BA9DE4h
0x8CDD56: mov     ebp, large fs:2Ch
0x8CDD5D: mov     edi, eax
0x8CDD5F: mov     ecx, [edi+58h]
0x8CDD62: mov     eax, ecx
0x8CDD64: and     eax, 3FFFFFFFh
0x8CDD69: cmp     eax, edx
0x8CDD6B: jge     short loc_8CDDCB
0x8CDD6D: test    ecx, ecx
0x8CDD6F: js      short loc_8CDD94
0x8CDD71: mov     edx, [ebp+ebx*4+0]
0x8CDD75: mov     ecx, [edx+19Ch]
0x8CDD7B: test    ecx, ecx
0x8CDD7D: jnz     short loc_8CDD85
0x8CDD7F: mov     ecx, ds:0BA7D9Ch
0x8CDD85: mov     edx, [edi+50h]
0x8CDD88: push    14h
0x8CDD8A: shl     eax, 2
0x8CDD8D: push    eax
0x8CDD8E: push    edx
0x8CDD8F: call    sub_8A75D0
0x8CDD94: mov     eax, [ebp+ebx*4+0]
0x8CDD98: mov     eax, [eax+19Ch]
0x8CDD9E: test    eax, eax
0x8CDDA0: jnz     short loc_8CDDA7
0x8CDDA2: mov     eax, ds:0BA7D9Ch
0x8CDDA7: mov     ecx, [esi+54h]
0x8CDDAA: shl     ecx, 2
0x8CDDAD: push    14h
0x8CDDAF: push    ecx
0x8CDDB0: mov     ecx, eax
0x8CDDB2: call    sub_8A7560
0x8CDDB7: mov     edx, [edi+58h]
0x8CDDBA: mov     [edi+50h], eax
0x8CDDBD: mov     eax, [esi+54h]
0x8CDDC0: and     edx, 40000000h
0x8CDDC6: or      edx, eax
0x8CDDC8: mov     [edi+58h], edx
0x8CDDCB: mov     ecx, [esi+54h]
0x8CDDCE: test    ecx, ecx
0x8CDDD0: mov     eax, [edi+50h]
0x8CDDD3: mov     [edi+54h], ecx
0x8CDDD6: mov     edx, [esi+50h]
0x8CDDD9: jle     short loc_8CDDF2
0x8CDDDB: sub     edx, eax
0x8CDDDD: lea     ecx, [ecx+0]
0x8CDDE0: mov     ebp, [edx+eax]
0x8CDDE3: mov     [eax], ebp
0x8CDDE5: add     eax, 4
0x8CDDE8: dec     ecx
0x8CDDE9: jnz     short loc_8CDDE0
0x8CDDEB: mov     ebp, large fs:2Ch
0x8CDDF2: mov     ecx, [edi+64h]
0x8CDDF5: mov     edx, [esi+60h]
0x8CDDF8: mov     eax, ecx
0x8CDDFA: and     eax, 3FFFFFFFh
0x8CDDFF: cmp     eax, edx
0x8CDE01: jge     short loc_8CDE64
0x8CDE03: test    ecx, ecx
0x8CDE05: js      short loc_8CDE2E
0x8CDE07: mov     ecx, [ebp+ebx*4+0]
0x8CDE0B: mov     ecx, [ecx+19Ch]
0x8CDE11: test    ecx, ecx
0x8CDE13: jnz     short loc_8CDE1B
0x8CDE15: mov     ecx, ds:0BA7D9Ch
0x8CDE1B: push    14h
0x8CDE1D: lea     edx, ds:0[eax*4]
0x8CDE24: mov     eax, [edi+5Ch]
0x8CDE27: push    edx
0x8CDE28: push    eax
0x8CDE29: call    sub_8A75D0
0x8CDE2E: mov     ecx, [ebp+ebx*4+0]
0x8CDE32: mov     eax, [ecx+19Ch]
0x8CDE38: test    eax, eax
0x8CDE3A: jnz     short loc_8CDE41
0x8CDE3C: mov     eax, ds:0BA7D9Ch
0x8CDE41: mov     edx, [esi+60h]
0x8CDE44: push    14h
0x8CDE46: shl     edx, 2
0x8CDE49: push    edx
0x8CDE4A: mov     ecx, eax
0x8CDE4C: call    sub_8A7560
0x8CDE51: mov     [edi+5Ch], eax
0x8CDE54: mov     eax, [edi+64h]
0x8CDE57: mov     ecx, [esi+60h]
0x8CDE5A: and     eax, 40000000h
0x8CDE5F: or      eax, ecx
0x8CDE61: mov     [edi+64h], eax
0x8CDE64: mov     ecx, [esi+60h]
0x8CDE67: test    ecx, ecx
0x8CDE69: mov     eax, [edi+5Ch]
0x8CDE6C: mov     [edi+60h], ecx
0x8CDE6F: mov     edx, [esi+5Ch]
0x8CDE72: jle     short loc_8CDE81
0x8CDE74: sub     edx, eax
0x8CDE76: mov     ebx, [edx+eax]
0x8CDE79: mov     [eax], ebx
0x8CDE7B: add     eax, 4
0x8CDE7E: dec     ecx
0x8CDE7F: jnz     short loc_8CDE76
0x8CDE81: push    esi
0x8CDE82: mov     ecx, edi
0x8CDE84: call    sub_8A9E50
0x8CDE89: mov     eax, edi
0x8CDE8B: pop     edi
0x8CDE8C: pop     esi
0x8CDE8D: pop     ebp
0x8CDE8E: pop     ebx
0x8CDE8F: retn
