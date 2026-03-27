0x5A57E0: push    esi
0x5A57E1: mov     esi, ecx
0x5A57E3: mov     eax, [esi+4]
0x5A57E6: push    eax
0x5A57E7: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAUHUDEffectIcon@@@@6B@; const NiTLargeArray<HUDEffectIcon *>::`vftable'
0x5A57ED: call    FormHeapFree
0x5A57F2: add     esp, 4
0x5A57F5: test    [esp+4+arg_0], 1
0x5A57FA: jz      short loc_5A5805
0x5A57FC: push    esi
0x5A57FD: call    FormHeapFree
0x5A5802: add     esp, 4
0x5A5805: mov     eax, esi
0x5A5807: pop     esi
0x5A5808: retn    4
