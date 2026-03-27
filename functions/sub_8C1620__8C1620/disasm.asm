0x8C1620: push    esi
0x8C1621: mov     esi, ecx
0x8C1623: cmp     dword ptr [esi+0Ch], 0
0x8C1627: jnz     short loc_8C169D
0x8C1629: push    14h; Size
0x8C162B: call    FormHeapAlloc
0x8C1630: add     esp, 4
0x8C1633: test    eax, eax
0x8C1635: jz      short loc_8C165D
0x8C1637: lea     ecx, [eax+4]
0x8C163A: mov     dword ptr [ecx], 0
0x8C1640: mov     dword ptr [eax+0Ch], 0
0x8C1647: mov     dword ptr [eax+10h], 0
0x8C164E: mov     dword ptr [eax+8], 1
0x8C1655: mov     dword ptr [eax], offset ??_7hkRagdollConstraintCinfo@@6B@; const hkRagdollConstraintCinfo::`vftable'
0x8C165B: jmp     short loc_8C165F
0x8C165D: xor     ecx, ecx
0x8C165F: cmp     dword ptr [esi+8], 0
0x8C1663: mov     [esi+0Ch], ecx
0x8C1666: jz      short loc_8C168F
0x8C1668: test    ecx, ecx
0x8C166A: jz      short loc_8C1685
0x8C166C: lea     eax, [ecx-4]
0x8C166F: push    eax
0x8C1670: mov     ecx, esi
0x8C1672: call    sub_8A07E0
0x8C1677: mov     eax, [esp+4+arg_0]
0x8C167B: mov     byte ptr [eax], 1
0x8C167E: mov     eax, [esi+0Ch]
0x8C1681: pop     esi
0x8C1682: retn    4
0x8C1685: xor     eax, eax
0x8C1687: push    eax
0x8C1688: mov     ecx, esi
0x8C168A: call    sub_8A07E0
0x8C168F: mov     eax, [esp+4+arg_0]
0x8C1693: mov     byte ptr [eax], 1
0x8C1696: mov     eax, [esi+0Ch]
0x8C1699: pop     esi
0x8C169A: retn    4
0x8C169D: mov     ecx, [esp+4+arg_0]
0x8C16A1: mov     byte ptr [ecx], 0
0x8C16A4: mov     eax, [esi+0Ch]
0x8C16A7: pop     esi
0x8C16A8: retn    4
