0x679120: sub     esp, 8
0x679123: push    ebx
0x679124: push    ebp
0x679125: xor     eax, eax
0x679127: push    esi
0x679128: mov     [esp+14h+var_4], eax
0x67912C: fld     dword ptr ds:0A32048h
0x679132: lea     esi, [ecx+48h]
0x679135: fstp    [esp+14h+var_8]
0x679139: xor     ebp, ebp
0x67913B: cmp     [esi+4], eax
0x67913E: push    edi
0x67913F: jnz     short loc_679150
0x679141: xor     edi, edi
0x679143: cmp     [esi], edi
0x679145: mov     eax, 1
0x67914A: jnz     short loc_679154
0x67914C: mov     bl, al
0x67914E: jmp     short loc_679156
0x679150: mov     edi, [esp+18h+arg_0]
0x679154: xor     bl, bl
0x679156: test    al, 1
0x679158: jz      short loc_679176
0x67915A: test    edi, edi
0x67915C: jz      short loc_679176
0x67915E: lea     eax, [edi+4]
0x679161: push    eax; lpAddend
0x679162: call    dword ptr ds:0A2807Ch
0x679168: test    eax, eax
0x67916A: jnz     short loc_679176
0x67916C: mov     edx, [edi]
0x67916E: mov     eax, [edx]
0x679170: push    1
0x679172: mov     ecx, edi
0x679174: call    eax
0x679176: test    bl, bl
0x679178: jnz     loc_679233
0x67917E: mov     ebx, esi
0x679180: test    ebx, ebx
0x679182: jz      loc_679233
0x679188: lea     ecx, [esp+18h+var_4]
0x67918C: push    ecx
0x67918D: mov     ecx, ebx
0x67918F: call    sub_677C70
0x679194: mov     esi, [eax]
0x679196: mov     eax, [esp+18h+var_4]
0x67919A: test    eax, eax
0x67919C: jz      short loc_6791BC
0x67919E: mov     edi, eax
0x6791A0: add     eax, 4
0x6791A3: push    eax; lpAddend
0x6791A4: call    dword ptr ds:0A2807Ch
0x6791AA: test    eax, eax
0x6791AC: jnz     short loc_6791BC
0x6791AE: test    edi, edi
0x6791B0: jz      short loc_6791BC
0x6791B2: mov     edx, [edi]
0x6791B4: mov     eax, [edx]
0x6791B6: push    1
0x6791B8: mov     ecx, edi
0x6791BA: call    eax
0x6791BC: test    esi, esi
0x6791BE: jz      short loc_679228
0x6791C0: mov     edx, [esi]
0x6791C2: mov     eax, [edx+4]
0x6791C5: mov     ecx, esi
0x6791C7: call    eax
0x6791C9: test    eax, eax
0x6791CB: jz      short loc_679228
0x6791CD: lea     ecx, [ecx+0]
0x6791D0: cmp     eax, offset unk_B3C0D4
0x6791D5: jz      short loc_6791E0
0x6791D7: mov     eax, [eax+4]
0x6791DA: test    eax, eax
0x6791DC: jnz     short loc_6791D0
0x6791DE: jmp     short loc_679228
0x6791E0: mov     ecx, [esp+18h+arg_0]
0x6791E4: cmp     [esi+1Ch], ecx
0x6791E7: jnz     short loc_679228
0x6791E9: cmp     byte ptr [esi+28h], 0
0x6791ED: jnz     short loc_679228
0x6791EF: fld     dword ptr [esi+10h]
0x6791F2: fld     [esp+18h+var_8]
0x6791F6: fcompp
0x6791F8: fnstsw  ax
0x6791FA: test    ah, 41h
0x6791FD: jz      short loc_67921F
0x6791FF: test    ebp, ebp
0x679201: jz      short loc_679228
0x679203: mov     ecx, [ebp+34h]
0x679206: push    1
0x679208: call    sub_4AC730
0x67920D: test    al, al
0x67920F: jz      short loc_679228
0x679211: mov     ecx, [esi+34h]
0x679214: push    1
0x679216: call    sub_4AC730
0x67921B: test    al, al
0x67921D: jnz     short loc_679228
0x67921F: fld     dword ptr [esi+10h]
0x679222: mov     ebp, esi
0x679224: fstp    [esp+18h+var_8]
0x679228: mov     ebx, [ebx+4]
0x67922B: test    ebx, ebx
0x67922D: jnz     loc_679188
0x679233: pop     edi
0x679234: pop     esi
0x679235: mov     eax, ebp
0x679237: pop     ebp
0x679238: pop     ebx
0x679239: add     esp, 8
0x67923C: retn    4
