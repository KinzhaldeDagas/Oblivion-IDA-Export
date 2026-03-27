0x648C80: push    esi
0x648C81: mov     esi, ecx
0x648C83: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULP_LOCK_DATA@@@@PAVLowProcess@@ULP_LOCK_DATA@@@@6B@; const NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'
0x648C89: call    NiTMap_Clear
0x648C8E: mov     eax, [esi+8]
0x648C91: push    eax
0x648C92: call    FormHeapFree
0x648C97: add     esp, 4
0x648C9A: test    [esp+4+arg_0], 1
0x648C9F: jz      short loc_648CAA
0x648CA1: push    esi
0x648CA2: call    FormHeapFree
0x648CA7: add     esp, 4
0x648CAA: mov     eax, esi
0x648CAC: pop     esi
0x648CAD: retn    4
