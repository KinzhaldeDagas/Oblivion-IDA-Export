0x7488E0: push    esi
0x7488E1: mov     esi, ecx
0x7488E3: mov     ecx, [esi+10h]
0x7488E6: mov     eax, [esi+14h]
0x7488E9: push    edi
0x7488EA: mov     edi, [esp+8+Size]
0x7488EE: sub     eax, ecx
0x7488F0: cmp     edi, eax
0x7488F2: jbe     short loc_7488F6
0x7488F4: mov     edi, eax
0x7488F6: mov     eax, [esi+0Ch]
0x7488F9: add     eax, ecx
0x7488FB: mov     ecx, [esp+8+Dst]
0x7488FF: push    edi; Size
0x748900: push    eax; Src
0x748901: push    ecx; Dst
0x748902: call    _memcpy
0x748907: add     [esi+10h], edi
0x74890A: add     esp, 0Ch
0x74890D: mov     eax, edi
0x74890F: pop     edi
0x748910: pop     esi
0x748911: retn    8
