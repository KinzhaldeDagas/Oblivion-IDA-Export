0x9A61E0: cmp     [esp+arg_8], 0
0x9A61E5: push    ebx
0x9A61E6: mov     ebx, ecx
0x9A61E8: jnz     short loc_9A61F3
0x9A61EA: mov     eax, 1
0x9A61EF: pop     ebx
0x9A61F0: retn    34h ; '4'
0x9A61F3: mov     edx, [esp+4+arg_30]
0x9A61F7: test    edx, edx
0x9A61F9: push    esi
0x9A61FA: mov     esi, [esp+8+arg_4]
0x9A61FE: push    edi
0x9A61FF: jz      short loc_9A622C
0x9A6201: mov     ecx, ds:dword_AB2908
0x9A6207: mov     edi, [edx+14h]
0x9A620A: mov     eax, [edx+1Ch]
0x9A620D: push    ebp
0x9A620E: mov     ebp, [esp+10h+arg_28]
0x9A6212: shl     ebp, cl
0x9A6214: lea     eax, [eax+edi*8]
0x9A6217: or      ebp, [esi+1Ch]
0x9A621A: cmp     [eax], ebp
0x9A621C: pop     ebp
0x9A621D: jnz     short loc_9A622C
0x9A621F: mov     eax, [eax+4]
0x9A6222: add     edi, 1
0x9A6225: test    eax, eax
0x9A6227: mov     [edx+14h], edi
0x9A622A: jnz     short loc_9A6256
0x9A622C: mov     eax, [esi+0Ch]
0x9A622F: mov     ecx, [esp+0Ch+arg_8]
0x9A6233: push    eax
0x9A6234: call    NiObjectNET_GetExtraData
0x9A6239: test    eax, eax
0x9A623B: jnz     short loc_9A6256
0x9A623D: push    esi
0x9A623E: mov     ecx, ebx
0x9A6240: call    sub_9A92E0
0x9A6245: mov     edi, eax
0x9A6247: test    edi, edi
0x9A6249: jnz     short loc_9A6270
0x9A624B: pop     edi
0x9A624C: pop     esi
0x9A624D: mov     eax, 80000010h
0x9A6252: pop     ebx
0x9A6253: retn    34h ; '4'
0x9A6256: push    eax
0x9A6257: push    esi
0x9A6258: mov     ecx, ebx
0x9A625A: call    sub_9A9040
0x9A625F: mov     edi, eax
0x9A6261: test    edi, edi
0x9A6263: jnz     short loc_9A6270
0x9A6265: pop     edi
0x9A6266: pop     esi
0x9A6267: mov     eax, 80000040h
0x9A626C: pop     ebx
0x9A626D: retn    34h ; '4'
0x9A6270: cmp     byte_B4295B, 0
0x9A6277: mov     ebx, [esi+14h]
0x9A627A: jnz     short loc_9A6281
0x9A627C: call    sub_783C70
0x9A6281: and     ebx, 0FFh
0x9A6287: cmp     dword_B428D8[ebx*4], 9
0x9A628F: jnz     short loc_9A62B3
0x9A6291: mov     ecx, [esp+0Ch+arg_0]
0x9A6295: mov     edx, [ecx]
0x9A6297: mov     eax, [edx+28h]
0x9A629A: push    4
0x9A629C: push    edi
0x9A629D: push    esi
0x9A629E: call    eax
0x9A62A0: test    al, al
0x9A62A2: jnz     loc_9A6346
0x9A62A8: pop     edi
0x9A62A9: pop     esi
0x9A62AA: mov     eax, 80000050h
0x9A62AF: pop     ebx
0x9A62B0: retn    34h ; '4'
0x9A62B3: cmp     byte_B4295B, 0
0x9A62BA: mov     ebx, [esi+14h]
0x9A62BD: jnz     short loc_9A62C4
0x9A62BF: call    sub_783C70
0x9A62C4: and     ebx, 0FFh
0x9A62CA: cmp     dword_B428D8[ebx*4], 6
0x9A62D2: jz      short loc_9A634E
0x9A62D4: mov     ecx, esi
0x9A62D6: call    sub_7833A0
0x9A62DB: test    al, al
0x9A62DD: jnz     short loc_9A634E
0x9A62DF: mov     ecx, esi
0x9A62E1: call    sub_783340
0x9A62E6: test    al, al
0x9A62E8: jnz     short loc_9A634E
0x9A62EA: mov     ecx, esi
0x9A62EC: call    sub_783310
0x9A62F1: test    al, al
0x9A62F3: jnz     short loc_9A634E
0x9A62F5: mov     ecx, esi
0x9A62F7: call    sub_7833D0
0x9A62FC: test    al, al
0x9A62FE: jnz     short loc_9A634E
0x9A6300: mov     ecx, esi
0x9A6302: call    sub_7832E0
0x9A6307: test    al, al
0x9A6309: jnz     short loc_9A634E
0x9A630B: mov     ecx, esi
0x9A630D: call    sub_7832B0
0x9A6312: test    al, al
0x9A6314: jnz     short loc_9A634E
0x9A6316: mov     ecx, esi
0x9A6318: call    sub_782DE0
0x9A631D: test    al, al
0x9A631F: jz      short loc_9A633F
0x9A6321: mov     ecx, [esp+0Ch+arg_0]
0x9A6325: mov     edx, [ecx]
0x9A6327: mov     eax, [edx+28h]
0x9A632A: push    3
0x9A632C: push    edi
0x9A632D: push    esi
0x9A632E: call    eax
0x9A6330: test    al, al
0x9A6332: jnz     short loc_9A6346
0x9A6334: pop     edi
0x9A6335: pop     esi
0x9A6336: mov     eax, 80000050h
0x9A633B: pop     ebx
0x9A633C: retn    34h ; '4'
0x9A633F: mov     ecx, esi
0x9A6341: call    sub_9A32B0
0x9A6346: pop     edi
0x9A6347: pop     esi
0x9A6348: xor     eax, eax
0x9A634A: pop     ebx
0x9A634B: retn    34h ; '4'
0x9A634E: mov     ecx, [esp+0Ch+arg_0]
0x9A6352: mov     edx, [ecx]
0x9A6354: mov     eax, [edx+28h]
0x9A6357: push    0
0x9A6359: push    edi
0x9A635A: push    esi
0x9A635B: call    eax
0x9A635D: test    al, al
0x9A635F: jnz     short loc_9A6346
0x9A6361: pop     edi
0x9A6362: pop     esi
0x9A6363: mov     eax, 80000050h
0x9A6368: pop     ebx
0x9A6369: retn    34h ; '4'
