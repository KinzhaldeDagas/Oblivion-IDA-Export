0x7728D0: push    ebp
0x7728D1: push    edi
0x7728D2: mov     edi, [esp+8+arg_0]
0x7728D6: test    edi, edi
0x7728D8: mov     ebp, ecx
0x7728DA: mov     [ebp+4], edi
0x7728DD: mov     dword ptr [ebp+8], 0
0x7728E4: jbe     short loc_77292E
0x7728E6: xor     ecx, ecx
0x7728E8: mov     eax, edi
0x7728EA: mov     edx, 10h
0x7728EF: mul     edx
0x7728F1: seto    cl
0x7728F4: push    esi
0x7728F5: neg     ecx
0x7728F7: or      ecx, eax
0x7728F9: push    ecx; Size
0x7728FA: call    FormHeapAlloc
0x7728FF: mov     esi, eax
0x772901: add     esp, 4
0x772904: test    esi, esi
0x772906: jz      short loc_772921
0x772908: push    offset sub_772690
0x77290D: push    edi
0x77290E: push    10h
0x772910: push    esi
0x772911: call    sub_401080
0x772916: mov     [ebp+0], esi
0x772919: pop     esi
0x77291A: pop     edi
0x77291B: mov     eax, ebp
0x77291D: pop     ebp
0x77291E: retn    4
0x772921: xor     esi, esi
0x772923: mov     [ebp+0], esi
0x772926: pop     esi
0x772927: pop     edi
0x772928: mov     eax, ebp
0x77292A: pop     ebp
0x77292B: retn    4
0x77292E: pop     edi
0x77292F: mov     dword ptr [ebp+0], 0
0x772936: mov     eax, ebp
0x772938: pop     ebp
0x772939: retn    4
