0x54A080: push    esi
0x54A081: mov     esi, ecx
0x54A083: mov     ecx, [esi+0Ch]
0x54A086: test    ecx, ecx
0x54A088: jz      short loc_54A092
0x54A08A: mov     eax, [ecx]
0x54A08C: mov     edx, [eax]
0x54A08E: push    1
0x54A090: call    edx
0x54A092: mov     dword ptr [esi+0Ch], 0
0x54A099: pop     esi
0x54A09A: retn
