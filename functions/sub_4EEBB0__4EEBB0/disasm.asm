0x4EEBB0: push    edi
0x4EEBB1: mov     edi, [esp+4+arg_0]
0x4EEBB5: test    edi, edi
0x4EEBB7: jnz     short loc_4EEBBF
0x4EEBB9: mov     al, 1
0x4EEBBB: pop     edi
0x4EEBBC: retn    4
0x4EEBBF: cmp     dword ptr [ecx+4], 0
0x4EEBC3: jnz     short loc_4EEBDB
0x4EEBC5: cmp     dword ptr [ecx], 0
0x4EEBC8: jnz     short loc_4EEBDB
0x4EEBCA: cmp     dword ptr [edi+4], 0
0x4EEBCE: jnz     short loc_4EEBDB
0x4EEBD0: cmp     dword ptr [edi], 0
0x4EEBD3: jnz     short loc_4EEBDB
0x4EEBD5: xor     al, al
0x4EEBD7: pop     edi
0x4EEBD8: retn    4
0x4EEBDB: push    esi
0x4EEBDC: xor     esi, esi
0x4EEBDE: mov     eax, ecx
0x4EEBE0: cmp     dword ptr [eax], 0
0x4EEBE3: jz      short loc_4EEBE8
0x4EEBE5: add     esi, 1
0x4EEBE8: mov     eax, [eax+4]
0x4EEBEB: test    eax, eax
0x4EEBED: jnz     short loc_4EEBE0
0x4EEBEF: xor     edx, edx
0x4EEBF1: mov     eax, edi
0x4EEBF3: cmp     dword ptr [eax], 0
0x4EEBF6: jz      short loc_4EEBFB
0x4EEBF8: add     edx, 1
0x4EEBFB: mov     eax, [eax+4]
0x4EEBFE: test    eax, eax
0x4EEC00: jnz     short loc_4EEBF3
0x4EEC02: cmp     esi, edx
0x4EEC04: jz      short loc_4EEC0D
0x4EEC06: pop     esi
0x4EEC07: mov     al, 1
0x4EEC09: pop     edi
0x4EEC0A: retn    4
0x4EEC0D: push    ebx
0x4EEC0E: push    ebp
0x4EEC0F: mov     ebx, ecx
0x4EEC11: jmp     short loc_4EEC17
0x4EEC13: mov     edi, [esp+10h+arg_0]
0x4EEC17: xor     al, al
0x4EEC19: lea     esp, [esp+0]
0x4EEC20: test    edi, edi
0x4EEC22: jz      loc_4EECBA
0x4EEC28: mov     ecx, [edi]
0x4EEC2A: mov     edx, [ebx]
0x4EEC2C: mov     eax, 8
0x4EEC31: mov     esi, [edx]
0x4EEC33: cmp     esi, [ecx]
0x4EEC35: jnz     short loc_4EEC49
0x4EEC37: sub     eax, 4
0x4EEC3A: add     ecx, 4
0x4EEC3D: add     edx, 4
0x4EEC40: cmp     eax, 4
0x4EEC43: jnb     short loc_4EEC31
0x4EEC45: test    eax, eax
0x4EEC47: jz      short loc_4EECA6
0x4EEC49: movzx   esi, byte ptr [edx]
0x4EEC4C: movzx   ebp, byte ptr [ecx]
0x4EEC4F: sub     esi, ebp
0x4EEC51: jnz     short loc_4EEC98
0x4EEC53: sub     eax, 1
0x4EEC56: add     ecx, 1
0x4EEC59: add     edx, 1
0x4EEC5C: test    eax, eax
0x4EEC5E: jz      short loc_4EECA6
0x4EEC60: movzx   esi, byte ptr [edx]
0x4EEC63: movzx   ebp, byte ptr [ecx]
0x4EEC66: sub     esi, ebp
0x4EEC68: jnz     short loc_4EEC98
0x4EEC6A: sub     eax, 1
0x4EEC6D: add     ecx, 1
0x4EEC70: add     edx, 1
0x4EEC73: test    eax, eax
0x4EEC75: jz      short loc_4EECA6
0x4EEC77: movzx   esi, byte ptr [edx]
0x4EEC7A: movzx   ebp, byte ptr [ecx]
0x4EEC7D: sub     esi, ebp
0x4EEC7F: jnz     short loc_4EEC98
0x4EEC81: sub     eax, 1
0x4EEC84: add     ecx, 1
0x4EEC87: add     edx, 1
0x4EEC8A: test    eax, eax
0x4EEC8C: jz      short loc_4EECA6
0x4EEC8E: movzx   esi, byte ptr [edx]
0x4EEC91: movzx   eax, byte ptr [ecx]
0x4EEC94: sub     esi, eax
0x4EEC96: jz      short loc_4EECA6
0x4EEC98: test    esi, esi
0x4EEC9A: mov     eax, 1
0x4EEC9F: jg      short loc_4EECA8
0x4EECA1: or      eax, 0FFFFFFFFh
0x4EECA4: jmp     short loc_4EECA8
0x4EECA6: xor     eax, eax
0x4EECA8: mov     edi, [edi+4]
0x4EECAB: test    eax, eax
0x4EECAD: setz    al
0x4EECB0: test    al, al
0x4EECB2: jz      loc_4EEC20
0x4EECB8: jmp     short loc_4EECBE
0x4EECBA: test    al, al
0x4EECBC: jz      short loc_4EECD2
0x4EECBE: mov     ebx, [ebx+4]
0x4EECC1: test    ebx, ebx
0x4EECC3: jnz     loc_4EEC13
0x4EECC9: pop     ebp
0x4EECCA: pop     ebx
0x4EECCB: pop     esi
0x4EECCC: xor     al, al
0x4EECCE: pop     edi
0x4EECCF: retn    4
0x4EECD2: pop     ebp
0x4EECD3: pop     ebx
0x4EECD4: pop     esi
0x4EECD5: mov     al, 1
0x4EECD7: pop     edi
0x4EECD8: retn    4
