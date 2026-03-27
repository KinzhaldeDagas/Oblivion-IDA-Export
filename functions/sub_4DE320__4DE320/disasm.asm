0x4DE320: push    ebp
0x4DE321: mov     ebp, [esp+4+arg_0]
0x4DE325: test    ebp, ebp
0x4DE327: jnz     short loc_4DE32D
0x4DE329: xor     al, al
0x4DE32B: pop     ebp
0x4DE32C: retn
0x4DE32D: mov     eax, [ebp+8]
0x4DE330: push    ebx
0x4DE331: xor     bl, bl
0x4DE333: test    eax, eax
0x4DE335: push    edi
0x4DE336: jz      short loc_4DE357
0x4DE338: push    9; MaxCount
0x4DE33A: push    offset aFlamenode; "FlameNode"
0x4DE33F: push    eax; Str1
0x4DE340: call    __strnicmp
0x4DE345: add     esp, 0Ch
0x4DE348: test    eax, eax
0x4DE34A: jnz     short loc_4DE357
0x4DE34C: cmp     [ebp+0B8h], ax
0x4DE353: jz      short loc_4DE357
0x4DE355: mov     bl, 1
0x4DE357: movzx   eax, word ptr [ebp+0B6h]
0x4DE35E: xor     edi, edi
0x4DE360: test    eax, eax
0x4DE362: jbe     short loc_4DE3AD
0x4DE364: cmp     eax, edi
0x4DE366: push    esi
0x4DE367: jbe     short loc_4DE39E
0x4DE369: mov     eax, [ebp+0B0h]
0x4DE36F: mov     esi, [eax+edi*4]
0x4DE372: test    esi, esi
0x4DE374: jz      short loc_4DE39E
0x4DE376: mov     edx, [esi]
0x4DE378: mov     eax, [edx+4]
0x4DE37B: mov     ecx, esi
0x4DE37D: call    eax
0x4DE37F: cmp     eax, offset dword_B3FAB0
0x4DE384: setz    al
0x4DE387: test    al, al
0x4DE389: jz      short loc_4DE39E
0x4DE38B: test    bl, bl
0x4DE38D: jnz     short loc_4DE39E
0x4DE38F: push    esi
0x4DE390: call    sub_4DE320
0x4DE395: add     esp, 4
0x4DE398: test    al, al
0x4DE39A: jz      short loc_4DE39E
0x4DE39C: mov     bl, 1
0x4DE39E: movzx   eax, word ptr [ebp+0B6h]
0x4DE3A5: add     edi, 1
0x4DE3A8: cmp     eax, edi
0x4DE3AA: ja      short loc_4DE369
0x4DE3AC: pop     esi
0x4DE3AD: pop     edi
0x4DE3AE: mov     al, bl
0x4DE3B0: pop     ebx
0x4DE3B1: pop     ebp
0x4DE3B2: retn
