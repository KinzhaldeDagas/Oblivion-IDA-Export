0x7246C0: push    esi
0x7246C1: mov     esi, ecx
0x7246C3: mov     eax, [esi+0F0h]
0x7246C9: push    eax
0x7246CA: mov     dword ptr [esi+0ECh], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x7246D4: call    FormHeapFree
0x7246D9: add     esp, 4
0x7246DC: mov     ecx, esi; this
0x7246DE: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x7246E3: test    [esp+4+arg_0], 1
0x7246E8: jz      short loc_7246F3
0x7246EA: push    esi
0x7246EB: call    FormHeapFree
0x7246F0: add     esp, 4
0x7246F3: mov     eax, esi
0x7246F5: pop     esi
0x7246F6: retn    4
