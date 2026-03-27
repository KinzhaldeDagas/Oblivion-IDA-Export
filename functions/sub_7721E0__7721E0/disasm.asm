0x7721E0: sub     esp, 0Ch
0x7721E3: push    esi
0x7721E4: mov     esi, ecx
0x7721E6: lea     eax, [esp+10h+var_A]
0x7721EA: push    eax
0x7721EB: lea     ecx, [esp+14h+var_8]
0x7721EF: push    ecx
0x7721F0: mov     ecx, [esi+0Ch]
0x7721F3: push    0Bh
0x7721F5: mov     [esp+1Ch+var_8], 0
0x7721FD: mov     [esp+1Ch+var_A], 0
0x772202: call    sub_7730A0
0x772207: test    al, al
0x772209: mov     eax, [esp+10h+var_8]
0x77220D: jnz     short loc_772211
0x77220F: mov     eax, [esi]
0x772211: mov     ecx, ds:0B42758h
0x772217: mov     edx, [ecx]
0x772219: mov     edx, [edx+0C8h]
0x77221F: push    edi
0x772220: push    0
0x772222: push    eax
0x772223: mov     eax, [esi]
0x772225: push    0Bh
0x772227: push    eax
0x772228: call    edx
0x77222A: mov     eax, [esi+4]
0x77222D: xor     edi, edi
0x77222F: test    eax, eax
0x772231: jz      short loc_772258
0x772233: mov     ecx, ds:0B42754h
0x772239: mov     ecx, [ecx+8B8h]
0x77223F: mov     edx, [ecx]
0x772241: lea     edi, [esp+10h]
0x772245: push    edi
0x772246: lea     edi, [esp+14h+var_8+3]
0x77224A: push    edi
0x77224B: lea     edi, [esp+18h+var_8+2]
0x77224F: push    edi
0x772250: push    eax
0x772251: mov     eax, [edx+8]
0x772254: call    eax
0x772256: mov     edi, eax
0x772258: mov     ecx, ds:0B42758h
0x77225E: mov     edx, [ecx]
0x772260: mov     eax, [esi]
0x772262: mov     edx, [edx+0E0h]
0x772268: push    edi
0x772269: push    eax
0x77226A: call    edx
0x77226C: test    edi, edi
0x77226E: pop     edi
0x77226F: jz      short loc_7722A4
0x772271: cmp     [esp+10h+var_9], 0
0x772276: jnz     short loc_772291
0x772278: mov     ecx, ds:0B42758h
0x77227E: mov     eax, [ecx]
0x772280: mov     edx, [esi]
0x772282: mov     eax, [eax+0D0h]
0x772288: push    0
0x77228A: push    0
0x77228C: push    7
0x77228E: push    edx
0x77228F: call    eax
0x772291: mov     ecx, [esp+10h+var_4]
0x772295: push    ecx
0x772296: mov     ecx, esi
0x772298: call    sub_7716E0
0x77229D: mov     ecx, esi
0x77229F: call    sub_772150
0x7722A4: pop     esi
0x7722A5: add     esp, 0Ch
0x7722A8: retn
