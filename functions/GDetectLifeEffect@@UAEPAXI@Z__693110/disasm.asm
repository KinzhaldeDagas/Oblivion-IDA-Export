0x693110: push    esi
0x693111: mov     esi, ecx
0x693113: mov     dword ptr [esi], offset ??_7DetectLifeEffect@@6B@; const DetectLifeEffect::`vftable'
0x693119: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x69311E: test    byte ptr [esp+4+arg_0], 1
0x693123: jz      short loc_69312E
0x693125: push    esi
0x693126: call    FormHeapFree
0x69312B: add     esp, 4
0x69312E: mov     eax, esi
0x693130: pop     esi
0x693131: retn    4
