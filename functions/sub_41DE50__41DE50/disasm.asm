0x41DE50: mov     ecx, TlsIndex
0x41DE56: mov     edx, large fs:2Ch
0x41DE5D: mov     eax, 1
0x41DE62: add     dword_B33780, eax
0x41DE68: push    esi
0x41DE69: mov     esi, [edx+ecx*4]
0x41DE6C: add     [esi+0Ch], eax
0x41DE72: mov     eax, [esp+4+arg_0]
0x41DE76: cmp     eax, [esi+8]
0x41DE7C: jnz     short loc_41DE9E
0x41DE7E: push    174h
0x41DE83: lea     ecx, [esi+10h]
0x41DE89: push    0
0x41DE8B: push    ecx
0x41DE8C: call    __memset
0x41DE91: add     esp, 0Ch
0x41DE94: mov     dword ptr [esi+8], 0
0x41DE9E: pop     esi
0x41DE9F: retn
