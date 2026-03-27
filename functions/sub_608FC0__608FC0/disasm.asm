0x608FC0: sub     esp, 8
0x608FC3: push    ebx
0x608FC4: push    esi; ArgList
0x608FC5: mov     esi, ecx
0x608FC7: mov     eax, [esi]
0x608FC9: mov     edx, [eax+154h]
0x608FCF: mov     [esp+10h+var_4], esi
0x608FD3: call    edx
0x608FD5: mov     ebx, eax
0x608FD7: mov     eax, [esi]
0x608FD9: mov     edx, [eax+1C8h]
0x608FDF: mov     ecx, esi
0x608FE1: call    edx
0x608FE3: mov     eax, [esi+5Ch]
0x608FE6: cmp     dword ptr [eax+28h], 0
0x608FEA: jz      loc_60912D
0x608FF0: mov     ecx, eax
0x608FF2: mov     ecx, [ecx+28h]
0x608FF5: mov     edx, [ecx]
0x608FF7: mov     eax, [edx+190h]
0x608FFD: call    eax
0x608FFF: test    al, al
0x609001: jz      loc_60912D
0x609007: mov     ecx, [esi+5Ch]
0x60900A: push    ebp
0x60900B: mov     ebp, [ecx+2Ch]
0x60900E: test    ebp, ebp
0x609010: jnz     short loc_60901D
0x609012: pop     ebp
0x609013: pop     esi
0x609014: xor     al, al
0x609016: pop     ebx
0x609017: add     esp, 8
0x60901A: retn    4
0x60901D: push    edi
0x60901E: push    0
0x609020: push    1
0x609022: push    ebx
0x609023: call    sub_88CD50
0x609028: push    ebx
0x609029: call    sub_536740
0x60902E: fld     dword ptr [ebx+60h]
0x609031: mov     eax, [esi+5Ch]
0x609034: mov     edx, [eax+4]
0x609037: add     eax, 4
0x60903A: mov     [ebx+54h], edx
0x60903D: mov     ecx, [eax+4]
0x609040: mov     [ebx+58h], ecx
0x609043: mov     edx, [eax+8]
0x609046: mov     [ebx+5Ch], edx
0x609049: mov     esi, [esi+5Ch]
0x60904C: add     esi, 30h ; '0'
0x60904F: lea     edi, [ebx+30h]
0x609052: mov     ecx, 9
0x609057: rep movsd
0x609059: fdiv    dword ptr [ebp+94h]
0x60905F: push    0
0x609061: fstp    [esp+2Ch+var_8]
0x609065: fld     [esp+2Ch+var_8]
0x609069: fabs
0x60906B: fstp    [esp+2Ch+var_8]
0x60906F: fld     [esp+2Ch+var_8]
0x609073: fstp    dword ptr [ebx+60h]
0x609076: call    GetShadowSceneNode
0x60907B: add     esp, 14h
0x60907E: mov     esi, eax
0x609080: push    ebx
0x609081: mov     ecx, esi
0x609083: call    sub_7C5E70
0x609088: mov     eax, [ebp+0]
0x60908B: mov     edx, [eax+84h]
0x609091: push    1
0x609093: push    ebx
0x609094: mov     ecx, ebp
0x609096: call    edx
0x609098: push    ebx
0x609099: mov     ecx, esi
0x60909B: call    sub_7C5D00
0x6090A0: xor     edi, edi
0x6090A2: cmp     [ebx+14h], di
0x6090A6: jbe     short loc_609101
0x6090A8: jmp     short loc_6090B0
0x6090AA: align 10h
0x6090B0: mov     ecx, [ebx+10h]
0x6090B3: movzx   ebp, di
0x6090B6: movzx   eax, bp
0x6090B9: mov     esi, [ecx+eax*4]
0x6090BC: test    esi, esi
0x6090BE: jz      short loc_6090F6
0x6090C0: mov     edx, [esi]
0x6090C2: mov     eax, [edx+4]
0x6090C5: mov     ecx, esi
0x6090C7: call    eax
0x6090C9: test    eax, eax
0x6090CB: jz      short loc_6090DE
0x6090CD: lea     ecx, [ecx+0]
0x6090D0: cmp     eax, offset dword_B35ACC
0x6090D5: jz      short loc_6090F2
0x6090D7: mov     eax, [eax+4]
0x6090DA: test    eax, eax
0x6090DC: jnz     short loc_6090D0
0x6090DE: xor     al, al
0x6090E0: neg     al
0x6090E2: sbb     eax, eax
0x6090E4: and     eax, esi
0x6090E6: jz      short loc_6090F6
0x6090E8: push    ebp
0x6090E9: mov     ecx, ebx
0x6090EB: call    sub_6FFBE0
0x6090F0: jmp     short loc_6090F9
0x6090F2: mov     al, 1
0x6090F4: jmp     short loc_6090E0
0x6090F6: add     edi, 1
0x6090F9: movzx   ecx, word ptr [ebx+14h]
0x6090FD: cmp     edi, ecx
0x6090FF: jb      short loc_6090B0
0x609101: mov     edx, [esp+18h+var_4]
0x609105: mov     eax, [edx+5Ch]
0x609108: mov     eax, [eax+28h]
0x60910B: test    eax, eax
0x60910D: pop     edi
0x60910E: jz      short loc_609122
0x609110: mov     ecx, [eax+58h]
0x609113: test    ecx, ecx
0x609115: jz      short loc_609122
0x609117: mov     eax, [ecx]
0x609119: push    edx
0x60911A: mov     edx, [eax+4F8h]
0x609120: call    edx
0x609122: pop     ebp
0x609123: pop     esi
0x609124: mov     al, 1
0x609126: pop     ebx
0x609127: add     esp, 8
0x60912A: retn    4
0x60912D: push    offset aAnArrowThink_0; "An arrow thinks it is colliding with an"...
0x609132: call    PrintError
0x609137: add     esp, 4
0x60913A: pop     esi
0x60913B: xor     al, al
0x60913D: pop     ebx
0x60913E: add     esp, 8
0x609141: retn    4
