0x6F87A0: push    ebx
0x6F87A1: mov     ebx, [esp+4+arg_4]
0x6F87A5: push    esi
0x6F87A6: mov     esi, [esp+8+arg_0]
0x6F87AA: cmp     esi, ebx
0x6F87AC: jz      short loc_6F87C9
0x6F87AE: push    edi
0x6F87AF: lea     edi, [ecx+8]
0x6F87B2: movzx   eax, byte ptr [esi]
0x6F87B5: push    edi; _Ctypevec *
0x6F87B6: push    eax; int
0x6F87B7: call    __Toupper
0x6F87BC: mov     [esi], al
0x6F87BE: add     esi, 1
0x6F87C1: add     esp, 8
0x6F87C4: cmp     esi, ebx
0x6F87C6: jnz     short loc_6F87B2
0x6F87C8: pop     edi
0x6F87C9: mov     eax, esi
0x6F87CB: pop     esi
0x6F87CC: pop     ebx
0x6F87CD: retn    8
