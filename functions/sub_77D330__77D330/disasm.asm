0x77D330: push    esi
0x77D331: mov     esi, ecx
0x77D333: mov     eax, [esi+4]
0x77D336: push    eax
0x77D337: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiVBChip@@@@6B@; const NiTArray<NiVBChip *>::`vftable'
0x77D33D: call    FormHeapFree
0x77D342: add     esp, 4
0x77D345: test    [esp+4+arg_0], 1
0x77D34A: jz      short loc_77D355
0x77D34C: push    esi
0x77D34D: call    FormHeapFree
0x77D352: add     esp, 4
0x77D355: mov     eax, esi
0x77D357: pop     esi
0x77D358: retn    4
