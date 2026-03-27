0x56BD40: fldz
0x56BD42: push    esi
0x56BD43: mov     esi, ecx
0x56BD45: fst     dword ptr [esi+8]
0x56BD48: xor     eax, eax
0x56BD4A: fstp    dword ptr [esi+10h]
0x56BD4D: mov     dword ptr [esi], offset ??_7BSTempEffect@@6B@; const BSTempEffect::`vftable'
0x56BD53: mov     [esi+0Ch], eax
0x56BD56: mov     [esi+14h], al
0x56BD59: call    NiRefObject_destr
0x56BD5E: test    [esp+4+arg_0], 1
0x56BD63: jz      short loc_56BD6E
0x56BD65: push    esi
0x56BD66: call    FormHeapFree
0x56BD6B: add     esp, 4
0x56BD6E: mov     eax, esi
0x56BD70: pop     esi
0x56BD71: retn    4
