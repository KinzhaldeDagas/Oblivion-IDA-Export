0x6F8750: push    ebx
0x6F8751: mov     ebx, [esp+4+arg_4]
0x6F8755: push    esi
0x6F8756: mov     esi, [esp+8+arg_0]
0x6F875A: cmp     esi, ebx
0x6F875C: jz      short loc_6F8779
0x6F875E: push    edi
0x6F875F: lea     edi, [ecx+8]
0x6F8762: movzx   eax, byte ptr [esi]
0x6F8765: push    edi; _Ctypevec *
0x6F8766: push    eax; int
0x6F8767: call    __Tolower
0x6F876C: mov     [esi], al
0x6F876E: add     esi, 1
0x6F8771: add     esp, 8
0x6F8774: cmp     esi, ebx
0x6F8776: jnz     short loc_6F8762
0x6F8778: pop     edi
0x6F8779: mov     eax, esi
0x6F877B: pop     esi
0x6F877C: pop     ebx
0x6F877D: retn    8
