0x58BDD0: push    edi
0x58BDD1: mov     edi, ecx
0x58BDD3: mov     eax, [edi]
0x58BDD5: cmp     byte ptr [eax+5], 0
0x58BDD9: jnz     loc_58BEDA
0x58BDDF: mov     ecx, [edi+14h]
0x58BDE2: push    ebx
0x58BDE3: mov     ebx, [ecx+14h]
0x58BDE6: test    ebx, ebx
0x58BDE8: push    esi
0x58BDE9: jz      loc_58BE98
0x58BDEF: nop
0x58BDF0: mov     ecx, edi
0x58BDF2: call    sub_589770
0x58BDF7: test    al, al
0x58BDF9: jz      loc_58BE87
0x58BDFF: mov     eax, [ebx]
0x58BE01: test    eax, eax
0x58BE03: mov     esi, ebx
0x58BE05: jz      short loc_58BE0F
0x58BE07: mov     esi, eax
0x58BE09: mov     eax, [esi]
0x58BE0B: test    eax, eax
0x58BE0D: jnz     short loc_58BE07
0x58BE0F: mov     eax, [esi+8]
0x58BE12: mov     ecx, [edi+8]
0x58BE15: add     eax, 8
0x58BE18: test    ecx, ecx
0x58BE1A: jz      short loc_58BE2E
0x58BE1C: mov     eax, [eax]
0x58BE1E: test    eax, eax
0x58BE20: jz      short loc_58BE2E
0x58BE22: push    ecx; Str2
0x58BE23: push    eax; Str1
0x58BE24: call    __strcmp
0x58BE29: add     esp, 8
0x58BE2C: jmp     short loc_58BE39
0x58BE2E: xor     eax, eax
0x58BE30: test    ecx, ecx
0x58BE32: setz    al
0x58BE35: lea     eax, [eax+eax-1]
0x58BE39: test    eax, eax
0x58BE3B: jz      short loc_58BE8D
0x58BE3D: mov     edx, [edi+8]
0x58BE40: mov     ecx, [esi+8]
0x58BE43: push    0; a3
0x58BE45: push    edx; a2
0x58BE46: add     ecx, 8; this
0x58BE49: call    BSStringT_Set
0x58BE4E: fldz
0x58BE50: mov     eax, [esi+8]
0x58BE53: fstp    dword ptr [eax+4]
0x58BE56: mov     ecx, [esi+8]
0x58BE59: mov     ecx, [ecx]
0x58BE5B: mov     edx, [ecx]
0x58BE5D: mov     eax, [edx+0Ch]
0x58BE60: call    eax
0x58BE62: cmp     eax, 387h
0x58BE67: jnz     short loc_58BE72
0x58BE69: mov     ecx, [esi+8]
0x58BE6C: mov     eax, [ecx]
0x58BE6E: or      dword ptr [eax+2Ch], 2
0x58BE72: mov     edx, [esi+8]
0x58BE75: cmp     word ptr [edx+18h], 0FE6h
0x58BE7B: jnz     short loc_58BE8D
0x58BE7D: mov     eax, edx
0x58BE7F: mov     eax, [eax]
0x58BE81: or      dword ptr [eax+2Ch], 20h
0x58BE85: jmp     short loc_58BE8D
0x58BE87: fld     dword ptr [edi+4]
0x58BE8A: fstp    dword ptr [ebx+8]
0x58BE8D: mov     ebx, [ebx+14h]
0x58BE90: test    ebx, ebx
0x58BE92: jnz     loc_58BDF0
0x58BE98: mov     ecx, [edi+14h]
0x58BE9B: mov     esi, [ecx+14h]
0x58BE9E: xor     edx, edx
0x58BEA0: test    esi, esi
0x58BEA2: jz      short loc_58BED8
0x58BEA4: xor     edi, edi
0x58BEA6: cmp     [esi+0Ch], edi
0x58BEA9: jz      short loc_58BECF
0x58BEAB: mov     eax, [esi]
0x58BEAD: test    eax, eax
0x58BEAF: mov     ecx, esi
0x58BEB1: jz      short loc_58BEBB
0x58BEB3: mov     ecx, eax
0x58BEB5: mov     eax, [ecx]
0x58BEB7: test    eax, eax
0x58BEB9: jnz     short loc_58BEB3
0x58BEBB: mov     edi, [ecx+8]
0x58BEBE: test    edi, edi
0x58BEC0: jz      short loc_58BECF
0x58BEC2: cmp     edi, edx
0x58BEC4: jz      short loc_58BECF
0x58BEC6: push    0
0x58BEC8: mov     ecx, edi
0x58BECA: call    DoActionEnumeration
0x58BECF: mov     esi, [esi+14h]
0x58BED2: test    esi, esi
0x58BED4: mov     edx, edi
0x58BED6: jnz     short loc_58BEA4
0x58BED8: pop     esi
0x58BED9: pop     ebx
0x58BEDA: pop     edi
0x58BEDB: retn
