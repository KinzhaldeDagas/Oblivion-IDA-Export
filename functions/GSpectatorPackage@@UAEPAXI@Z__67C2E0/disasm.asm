0x67C2E0: push    esi
0x67C2E1: mov     esi, ecx
0x67C2E3: mov     dword ptr [esi], offset ??_7SpectatorPackage@@6B@; const SpectatorPackage::`vftable'
0x67C2E9: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x67C2EE: test    byte ptr [esp+4+arg_0], 1
0x67C2F3: jz      short loc_67C2FE
0x67C2F5: push    esi
0x67C2F6: call    FormHeapFree
0x67C2FB: add     esp, 4
0x67C2FE: mov     eax, esi
0x67C300: pop     esi
0x67C301: retn    4
