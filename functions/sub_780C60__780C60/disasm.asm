0x780C60: mov     eax, [esp+Src]
0x780C64: test    eax, eax
0x780C66: push    ebp
0x780C67: push    esi
0x780C68: push    edi; Src
0x780C69: mov     ebp, ecx
0x780C6B: jz      short loc_780CE9
0x780C6D: mov     edi, offset EmptyString
0x780C72: mov     esi, eax
0x780C74: mov     ecx, 1
0x780C79: xor     edx, edx
0x780C7B: repe cmpsb
0x780C7D: jz      short loc_780CE9
0x780C7F: lea     edx, [eax+1]
0x780C82: mov     cl, [eax]
0x780C84: add     eax, 1
0x780C87: test    cl, cl
0x780C89: jnz     short loc_780C82
0x780C8B: mov     ecx, [ebp+0Ch]
0x780C8E: sub     eax, edx
0x780C90: test    ecx, ecx
0x780C92: lea     esi, [eax+1]
0x780C95: jz      short loc_780CBF
0x780C97: mov     eax, ecx
0x780C99: lea     edi, [eax+1]
0x780C9C: lea     esp, [esp+0]
0x780CA0: mov     dl, [eax]
0x780CA2: add     eax, 1
0x780CA5: test    dl, dl
0x780CA7: jnz     short loc_780CA0
0x780CA9: sub     eax, edi
0x780CAB: cmp     eax, esi
0x780CAD: jnb     short loc_780CBF
0x780CAF: push    ecx
0x780CB0: call    FormHeapFree
0x780CB5: add     esp, 4
0x780CB8: mov     dword ptr [ebp+0Ch], 0
0x780CBF: cmp     dword ptr [ebp+0Ch], 0
0x780CC3: jnz     short loc_780CD1
0x780CC5: push    esi; Size
0x780CC6: call    FormHeapAlloc
0x780CCB: add     esp, 4
0x780CCE: mov     [ebp+0Ch], eax
0x780CD1: mov     eax, [esp+0Ch+Src]
0x780CD5: mov     ecx, [ebp+0Ch]
0x780CD8: push    eax; Src
0x780CD9: push    esi; SizeInBytes
0x780CDA: push    ecx; Dst
0x780CDB: call    _strcpy_s
0x780CE0: add     esp, 0Ch
0x780CE3: pop     edi
0x780CE4: pop     esi
0x780CE5: pop     ebp
0x780CE6: retn    4
0x780CE9: mov     edx, [ebp+0Ch]
0x780CEC: push    edx
0x780CED: call    FormHeapFree
0x780CF2: add     esp, 4
0x780CF5: pop     edi
0x780CF6: pop     esi
0x780CF7: mov     dword ptr [ebp+0Ch], 0
0x780CFE: pop     ebp
0x780CFF: retn    4
