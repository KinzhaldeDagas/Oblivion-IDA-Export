0x648C60: push    esi
0x648C61: mov     esi, ecx
0x648C63: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULP_LOCK_DATA@@@@PAVLowProcess@@ULP_LOCK_DATA@@@@6B@; const NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'
0x648C69: call    NiTMap_Clear
0x648C6E: mov     eax, [esi+8]
0x648C71: push    eax
0x648C72: call    FormHeapFree
0x648C77: add     esp, 4
0x648C7A: pop     esi
0x648C7B: retn
