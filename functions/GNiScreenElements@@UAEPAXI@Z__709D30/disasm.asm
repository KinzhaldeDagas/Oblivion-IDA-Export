0x709D30: push    esi
0x709D31: mov     esi, ecx
0x709D33: mov     dword ptr [esi], offset ??_7NiScreenElements@@6B@; const NiScreenElements::`vftable'
0x709D39: call    ??1TallGrassTriShape@@UAE@XZ; TallGrassTriShape::~TallGrassTriShape(void)
0x709D3E: test    byte ptr [esp+4+arg_0], 1
0x709D43: jz      short loc_709D4E
0x709D45: push    esi
0x709D46: call    FormHeapFree
0x709D4B: add     esp, 4
0x709D4E: mov     eax, esi
0x709D50: pop     esi
0x709D51: retn    4
