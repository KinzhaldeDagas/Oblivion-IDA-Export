0x7090C0: push    esi
0x7090C1: mov     esi, ecx
0x7090C3: call    ??0NiAVObject@@QAE@XZ; NiAVObject::NiAVObject(void)
0x7090C8: xor     eax, eax
0x7090CA: mov     dword ptr [esi], offset ??_7NiDynamicEffect@@6B@; const NiDynamicEffect::`vftable'
0x7090D0: mov     [esi+0B4h], eax
0x7090D6: mov     ecx, 1
0x7090DB: mov     [esi+0ACh], cl
0x7090E1: mov     [esi+0B8h], ecx
0x7090E7: mov     [esi+0C8h], eax
0x7090ED: mov     [esi+0C0h], eax
0x7090F3: mov     [esi+0C4h], eax
0x7090F9: mov     ecx, offset ??_7?$NiTPointerList@PAVNiNode@@@@6B@; const NiTPointerList<NiNode *>::`vftable'
0x7090FE: mov     [esi+0BCh], ecx
0x709104: push    offset dword_B259FC; lpAddend
0x709109: mov     [esi+0D8h], eax
0x70910F: mov     [esi+0D0h], eax
0x709115: mov     [esi+0D4h], eax
0x70911B: mov     [esi+0CCh], ecx
0x709121: call    dword ptr ds:0A28078h
0x709127: mov     [esi+0B0h], eax
0x70912D: mov     eax, esi
0x70912F: pop     esi
0x709130: retn
