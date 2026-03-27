0x6760D0: push    ebx
0x6760D1: push    edi
0x6760D2: add     ecx, 68h ; 'h'; this
0x6760D5: xor     bl, bl
0x6760D7: call    sub_7616D0
0x6760DC: mov     edi, eax
0x6760DE: test    edi, edi
0x6760E0: jz      loc_67618D
0x6760E6: push    ebp
0x6760E7: mov     ebp, [esp+0Ch+arg_0]
0x6760EB: push    esi
0x6760EC: lea     esp, [esp+0]
0x6760F0: mov     ecx, [edi]
0x6760F2: test    ecx, ecx
0x6760F4: jz      loc_67618B
0x6760FA: test    bl, bl
0x6760FC: jnz     loc_67618B
0x676102: mov     eax, [ecx]
0x676104: mov     edx, [eax+190h]
0x67610A: call    edx
0x67610C: test    al, al
0x67610E: jz      short loc_676180
0x676110: mov     esi, [edi]
0x676112: test    esi, esi
0x676114: jz      short loc_676180
0x676116: mov     ecx, esi; this
0x676118: call    Actor_IsNPC
0x67611D: test    al, al
0x67611F: jz      short loc_676180
0x676121: push    ebp
0x676122: mov     ecx, esi
0x676124: call    sub_5E10A0
0x676129: cmp     eax, 3
0x67612C: jnz     short loc_676180
0x67612E: mov     eax, [esi]
0x676130: mov     edx, [eax+334h]
0x676136: push    1
0x676138: mov     ecx, esi
0x67613A: call    edx
0x67613C: test    al, al
0x67613E: jz      short loc_67617E
0x676140: mov     eax, [esi]
0x676142: mov     edx, [eax+330h]
0x676148: mov     ecx, esi
0x67614A: call    edx
0x67614C: test    eax, eax
0x67614E: jz      short loc_67617E
0x676150: mov     eax, [esi]
0x676152: mov     edx, [eax+330h]
0x676158: mov     ecx, esi
0x67615A: call    edx
0x67615C: mov     ecx, eax
0x67615E: call    sub_6135F0
0x676163: cmp     eax, ebp
0x676165: jnz     short loc_67617E
0x676167: mov     eax, [esi]
0x676169: mov     edx, [eax+330h]
0x67616F: mov     ecx, esi
0x676171: call    edx
0x676173: mov     ecx, eax
