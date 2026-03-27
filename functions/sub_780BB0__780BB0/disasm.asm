0x780BB0: mov     eax, [esp+Src]
0x780BB4: test    eax, eax
0x780BB6: push    ebp
0x780BB7: push    esi
0x780BB8: push    edi; Src
0x780BB9: mov     ebp, ecx
0x780BBB: jz      short loc_780C39
0x780BBD: mov     edi, offset EmptyString
0x780BC2: mov     esi, eax
0x780BC4: mov     ecx, 1
0x780BC9: xor     edx, edx
0x780BCB: repe cmpsb
0x780BCD: jz      short loc_780C39
0x780BCF: lea     edx, [eax+1]
0x780BD2: mov     cl, [eax]
0x780BD4: add     eax, 1
0x780BD7: test    cl, cl
0x780BD9: jnz     short loc_780BD2
0x780BDB: mov     ecx, [ebp+8]
0x780BDE: sub     eax, edx
0x780BE0: test    ecx, ecx
0x780BE2: lea     esi, [eax+1]
0x780BE5: jz      short loc_780C0F
0x780BE7: mov     eax, ecx
0x780BE9: lea     edi, [eax+1]
0x780BEC: lea     esp, [esp+0]
0x780BF0: mov     dl, [eax]
0x780BF2: add     eax, 1
0x780BF5: test    dl, dl
0x780BF7: jnz     short loc_780BF0
0x780BF9: sub     eax, edi
0x780BFB: cmp     eax, esi
0x780BFD: jnb     short loc_780C0F
0x780BFF: push    ecx
0x780C00: call    FormHeapFree
0x780C05: add     esp, 4
0x780C08: mov     dword ptr [ebp+8], 0
0x780C0F: cmp     dword ptr [ebp+8], 0
0x780C13: jnz     short loc_780C21
0x780C15: push    esi; Size
0x780C16: call    FormHeapAlloc
0x780C1B: add     esp, 4
0x780C1E: mov     [ebp+8], eax
0x780C21: mov     eax, [esp+0Ch+Src]
0x780C25: mov     ecx, [ebp+8]
0x780C28: push    eax; Src
0x780C29: push    esi; SizeInBytes
0x780C2A: push    ecx; Dst
0x780C2B: call    _strcpy_s
0x780C30: add     esp, 0Ch
0x780C33: pop     edi
0x780C34: pop     esi
0x780C35: pop     ebp
0x780C36: retn    4
0x780C39: mov     edx, [ebp+8]
0x780C3C: push    edx
0x780C3D: call    FormHeapFree
0x780C42: add     esp, 4
0x780C45: pop     edi
0x780C46: pop     esi
0x780C47: mov     dword ptr [ebp+8], 0
0x780C4E: pop     ebp
0x780C4F: retn    4
