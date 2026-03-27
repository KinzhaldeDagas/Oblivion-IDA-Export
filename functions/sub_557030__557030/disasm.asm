0x557030: push    ebp
0x557031: mov     ebp, [esp+4+arg_4]
0x557035: push    edi
0x557036: mov     edi, [esp+8+arg_0]
0x55703A: cmp     edi, ebp
0x55703C: jz      short loc_55706E
0x55703E: push    ebx
0x55703F: push    esi
0x557040: lea     esi, [edi+1Ch]
0x557043: xor     ebx, ebx
0x557045: cmp     dword ptr [esi], 10h
0x557048: jb      short loc_557056
0x55704A: mov     eax, [esi-14h]
0x55704D: push    eax
0x55704E: call    FormHeapFree
0x557053: add     esp, 4
0x557056: mov     dword ptr [esi], 0Fh
0x55705C: mov     [esi-4], ebx
0x55705F: mov     [esi-14h], bl
0x557062: add     edi, 20h ; ' '
0x557065: add     esi, 20h ; ' '
0x557068: cmp     edi, ebp
0x55706A: jnz     short loc_557045
0x55706C: pop     esi
0x55706D: pop     ebx
0x55706E: pop     edi
0x55706F: pop     ebp
0x557070: retn
