0x89EFC0: push    0FFFFFFFFh
0x89EFC2: push    offset SEH_8C62B0
0x89EFC7: mov     eax, large fs:0
0x89EFCD: push    eax
0x89EFCE: push    ecx
0x89EFCF: push    esi
0x89EFD0: mov     eax, ds:0B30AACh
0x89EFD5: xor     eax, esp
0x89EFD7: push    eax
0x89EFD8: lea     eax, [esp+18h+var_C]
0x89EFDC: mov     large fs:0, eax
0x89EFE2: push    14h; Size
0x89EFE4: call    FormHeapAlloc
0x89EFE9: mov     esi, eax
0x89EFEB: add     esp, 4
0x89EFEE: mov     [esp+18h+var_10], esi
0x89EFF2: xor     eax, eax
0x89EFF4: cmp     esi, eax
0x89EFF6: mov     [esp+18h+var_4], eax
0x89EFFA: jz      short loc_89F00B
0x89EFFC: mov     ecx, esi
0x89EFFE: call    sub_897600
0x89F003: mov     dword ptr [esi], offset ??_7bhkPCollisionObject@@6B@; const bhkPCollisionObject::`vftable'
0x89F009: mov     eax, esi
0x89F00B: mov     ecx, [esp+18h+var_C]
0x89F00F: mov     large fs:0, ecx
0x89F016: pop     ecx
0x89F017: pop     esi
0x89F018: add     esp, 10h
0x89F01B: retn
