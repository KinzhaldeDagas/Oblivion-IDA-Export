0x69C100: push    esi
0x69C101: mov     esi, ecx
0x69C103: cmp     dword ptr [esi+94h], 0
0x69C10A: jz      short loc_69C131
0x69C10C: lea     esp, [esp+0]
0x69C110: mov     eax, [esi+94h]
0x69C116: mov     ecx, [eax+8]
0x69C119: push    eax
0x69C11A: mov     [esi+94h], ecx
0x69C120: call    FormHeapFree
0x69C125: add     esp, 4
0x69C128: cmp     dword ptr [esi+94h], 0
0x69C12F: jnz     short loc_69C110
0x69C131: mov     dword ptr [esi+94h], 0
0x69C13B: pop     esi
0x69C13C: retn
