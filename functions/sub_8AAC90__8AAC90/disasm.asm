0x8AAC90: push    esi
0x8AAC91: mov     esi, ecx
0x8AAC93: mov     dword ptr [esi], offset ??_7bhkBlendController@@6B@; const bhkBlendController::`vftable'
0x8AAC99: mov     eax, [esi+44h]
0x8AAC9C: push    eax
0x8AAC9D: mov     dword ptr [esi+40h], offset ??_7?$NiTLargeArray@UBLENDKEY@@@@6B@; const NiTLargeArray<BLENDKEY>::`vftable'
0x8AACA4: call    FormHeapFree
0x8AACA9: add     esp, 4
0x8AACAC: mov     ecx, esi; this
0x8AACAE: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x8AACB3: test    [esp+4+arg_0], 1
0x8AACB8: jz      short loc_8AACC3
0x8AACBA: push    esi
0x8AACBB: call    FormHeapFree
0x8AACC0: add     esp, 4
0x8AACC3: mov     eax, esi
0x8AACC5: pop     esi
0x8AACC6: retn    4
