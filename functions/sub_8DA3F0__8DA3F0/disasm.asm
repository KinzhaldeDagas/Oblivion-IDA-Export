0x8DA3F0: mov     eax, [esp+arg_4]
0x8DA3F4: push    ebx
0x8DA3F5: push    ebp
0x8DA3F6: push    esi
0x8DA3F7: mov     esi, [esp+0Ch+arg_0]
0x8DA3FB: mov     edx, eax
0x8DA3FD: shl     edx, 5
0x8DA400: push    edi
0x8DA401: lea     edi, [edx+ecx+0Ch]
0x8DA405: lea     ebx, [ecx+eax*4+0Ch]
0x8DA409: mov     ebp, 8
0x8DA40E: mov     edi, edi
0x8DA410: cmp     word ptr [esi+4], 0
0x8DA415: jz      short loc_8DA41B
0x8DA417: inc     word ptr [esi+6]
0x8DA41B: mov     ecx, [ebx]
0x8DA41D: cmp     word ptr [ecx+4], 0
0x8DA422: jz      short loc_8DA435
0x8DA424: dec     word ptr [ecx+6]
0x8DA428: cmp     word ptr [ecx+6], 0
0x8DA42D: jnz     short loc_8DA435
0x8DA42F: mov     eax, [ecx]
0x8DA431: push    1
0x8DA433: call    dword ptr [eax]
0x8DA435: mov     [ebx], esi
0x8DA437: cmp     word ptr [esi+4], 0
0x8DA43C: jz      short loc_8DA442
0x8DA43E: inc     word ptr [esi+6]
0x8DA442: mov     ecx, [edi]
0x8DA444: cmp     word ptr [ecx+4], 0
0x8DA449: jz      short loc_8DA45C
0x8DA44B: dec     word ptr [ecx+6]
0x8DA44F: cmp     word ptr [ecx+6], 0
0x8DA454: jnz     short loc_8DA45C
0x8DA456: mov     edx, [ecx]
0x8DA458: push    1
0x8DA45A: call    dword ptr [edx]
0x8DA45C: mov     [edi], esi
0x8DA45E: add     edi, 4
0x8DA461: add     ebx, 20h ; ' '
0x8DA464: dec     ebp
0x8DA465: jnz     short loc_8DA410
0x8DA467: pop     edi
0x8DA468: pop     esi
0x8DA469: pop     ebp
0x8DA46A: pop     ebx
0x8DA46B: retn    8
