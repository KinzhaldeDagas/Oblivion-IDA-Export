0x8C1270: cmp     [esp+arg_0], 0
0x8C1275: push    edi
0x8C1276: mov     edi, ecx
0x8C1278: jz      short loc_8C12A9
0x8C127A: mov     eax, [edi+0Ch]
0x8C127D: test    eax, eax
0x8C127F: jz      short loc_8C12A2
0x8C1281: push    esi
0x8C1282: lea     esi, [eax-4]
0x8C1285: test    esi, esi
0x8C1287: jz      short loc_8C12A1
0x8C1289: push    0
0x8C128B: mov     ecx, esi
0x8C128D: mov     dword ptr [esi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8C1293: call    sub_8A0200
0x8C1298: push    esi
0x8C1299: call    FormHeapFree
0x8C129E: add     esp, 4
0x8C12A1: pop     esi
0x8C12A2: mov     dword ptr [edi+0Ch], 0
0x8C12A9: pop     edi
0x8C12AA: retn    4
