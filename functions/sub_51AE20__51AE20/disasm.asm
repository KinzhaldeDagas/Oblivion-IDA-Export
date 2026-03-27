0x51AE20: push    esi
0x51AE21: push    edi
0x51AE22: mov     edi, dword ptr [esp+8+ArgList]
0x51AE26: test    edi, edi
0x51AE28: mov     esi, ecx
0x51AE2A: jge     short loc_51AE56
0x51AE2C: movzx   eax, word ptr [esi+8]
0x51AE30: push    eax
0x51AE31: and     eax, 0FFh
0x51AE36: lea     eax, [eax+eax*8]
0x51AE39: mov     ecx, ds:0B102E0h[eax*4]
0x51AE40: push    ecx
0x51AE41: push    edi; ArgList
0x51AE42: push    offset aInvalidAnimGro; "Invalid anim group action (action %d to"...
0x51AE47: call    PrintError
0x51AE4C: add     esp, 10h
0x51AE4F: fldz
0x51AE51: pop     edi
0x51AE52: pop     esi
0x51AE53: retn    4
0x51AE56: mov     ecx, [esi+0Ch]
0x51AE59: cmp     edi, ecx
0x51AE5B: jb      short loc_51AE88
0x51AE5D: movzx   eax, word ptr [esi+8]
0x51AE61: push    eax
0x51AE62: and     eax, 0FFh
0x51AE67: lea     edx, [eax+eax*8]
0x51AE6A: mov     eax, ds:0B102E0h[edx*4]
0x51AE71: push    eax
0x51AE72: push    ecx
0x51AE73: push    edi; ArgList
0x51AE74: push    offset aInvalidAnimG_0; "Invalid anim group action (action %d to"...
0x51AE79: call    PrintError
0x51AE7E: add     esp, 14h
0x51AE81: fldz
0x51AE83: pop     edi
0x51AE84: pop     esi
0x51AE85: retn    4
0x51AE88: mov     eax, [esi+10h]
0x51AE8B: test    eax, eax
0x51AE8D: jz      short loc_51AE4F
0x51AE8F: fld     dword ptr [eax+edi*4]
0x51AE92: sub     esp, 8
0x51AE95: fstp    [esp+10h+X]; X
0x51AE98: call    __isnan
0x51AE9D: add     esp, 8
0x51AEA0: test    eax, eax
0x51AEA2: jz      short loc_51AEBE
0x51AEA4: movzx   ecx, word ptr [esi+8]
0x51AEA8: push    ecx
0x51AEA9: push    edi; ArgList
0x51AEAA: push    offset aTimeDInGroup04; "Time %d in group %04X is QNAN"
0x51AEAF: call    PrintError
0x51AEB4: add     esp, 0Ch
0x51AEB7: fldz
0x51AEB9: pop     edi
0x51AEBA: pop     esi
0x51AEBB: retn    4
0x51AEBE: mov     edx, [esi+10h]
0x51AEC1: fld     dword ptr [edx+edi*4]
0x51AEC4: pop     edi
0x51AEC5: pop     esi
0x51AEC6: retn    4
