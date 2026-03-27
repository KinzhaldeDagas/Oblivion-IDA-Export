0x4701B0: mov     eax, [esp+arg_0]
0x4701B4: push    ebx
0x4701B5: push    0; int
0x4701B7: push    offset ??_R0?AVTESTexture@@@8; struct TypeDescriptor *
0x4701BC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4701C1: push    0; int
0x4701C3: push    eax; void *
0x4701C4: mov     ebx, ecx
0x4701C6: call    OblivionDynamicCast
0x4701CB: add     esp, 14h
0x4701CE: test    eax, eax
0x4701D0: jnz     short loc_4701D8
0x4701D2: mov     al, 1
0x4701D4: pop     ebx
0x4701D5: retn    4
0x4701D8: movzx   ecx, word ptr [ebx+8]
0x4701DC: cmp     cx, 0FFFFh
0x4701E1: push    esi
0x4701E2: jnz     short loc_4701FD
0x4701E4: mov     ecx, [ebx+4]
0x4701E7: lea     esi, [ecx+1]
0x4701EA: lea     ebx, [ebx+0]
0x4701F0: mov     dl, [ecx]
0x4701F2: add     ecx, 1
0x4701F5: test    dl, dl
0x4701F7: jnz     short loc_4701F0
0x4701F9: sub     ecx, esi
0x4701FB: jmp     short loc_470200
0x4701FD: movzx   ecx, cx
0x470200: test    ecx, ecx
0x470202: jnz     short loc_470229
0x470204: movzx   ecx, word ptr [eax+8]
0x470208: cmp     cx, 0FFFFh
0x47020D: jnz     short loc_470222
0x47020F: mov     ecx, [eax+4]
0x470212: lea     esi, [ecx+1]
0x470215: mov     dl, [ecx]
0x470217: add     ecx, 1
0x47021A: test    dl, dl
0x47021C: jnz     short loc_470215
0x47021E: sub     ecx, esi
0x470220: jmp     short loc_470225
0x470222: movzx   ecx, cx
0x470225: test    ecx, ecx
0x470227: jz      short loc_4702A5
0x470229: movzx   ecx, word ptr [ebx+8]
0x47022D: cmp     cx, 0FFFFh
0x470232: push    edi
0x470233: jnz     short loc_47024F
0x470235: mov     ecx, [ebx+4]
0x470238: lea     esi, [ecx+1]
0x47023B: jmp     short loc_470240
0x47023D: align 10h
0x470240: mov     dl, [ecx]
0x470242: add     ecx, 1
0x470245: test    dl, dl
0x470247: jnz     short loc_470240
0x470249: sub     ecx, esi
0x47024B: mov     edi, ecx
0x47024D: jmp     short loc_470252
0x47024F: movzx   edi, cx
0x470252: movzx   ecx, word ptr [eax+8]
0x470256: cmp     cx, 0FFFFh
0x47025B: jnz     short loc_470270
0x47025D: mov     ecx, [eax+4]
0x470260: lea     esi, [ecx+1]
0x470263: mov     dl, [ecx]
0x470265: add     ecx, 1
0x470268: test    dl, dl
0x47026A: jnz     short loc_470263
0x47026C: sub     ecx, esi
0x47026E: jmp     short loc_470273
0x470270: movzx   ecx, cx
0x470273: cmp     edi, ecx
0x470275: pop     edi
0x470276: jnz     short loc_47029E
0x470278: mov     eax, [eax+4]
0x47027B: test    eax, eax
0x47027D: jnz     short loc_470284
0x47027F: mov     eax, offset EmptyString
0x470284: mov     ecx, [ebx+4]
0x470287: test    ecx, ecx
0x470289: jnz     short loc_470290
0x47028B: mov     ecx, offset EmptyString
0x470290: push    eax; Str2
0x470291: push    ecx; Str1
0x470292: call    __strcmp
0x470297: add     esp, 8
0x47029A: test    eax, eax
0x47029C: jz      short loc_4702A5
0x47029E: pop     esi
0x47029F: mov     al, 1
0x4702A1: pop     ebx
0x4702A2: retn    4
0x4702A5: pop     esi
0x4702A6: xor     al, al
0x4702A8: pop     ebx
0x4702A9: retn    4
