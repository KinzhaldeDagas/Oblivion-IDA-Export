0x412000: cmp     byte ptr [esp+arg_0], 0
0x412005: mov     eax, 20h ; ' '
0x41200A: jnz     short loc_412011
0x41200C: mov     eax, 22h ; '"'
0x412011: add     eax, 2
0x412014: cmp     dword ptr [ecx+28h], 0
0x412018: mov     [esp+arg_0], eax
0x41201C: jz      short loc_412038
0x41201E: mov     ecx, [ecx+28h]
0x412021: mov     eax, [ecx]
0x412023: mov     edx, [eax+8]
0x412026: push    1
0x412028: call    edx
0x41202A: mov     cx, word ptr [esp+arg_0]
0x41202F: add     cx, ax
0x412032: mov     ax, cx
0x412035: retn    4
0x412038: mov     ax, word ptr [esp+arg_0]
0x41203D: retn    4
