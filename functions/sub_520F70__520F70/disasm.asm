0x520F70: push    esi
0x520F71: mov     esi, ecx
0x520F73: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAUIDLE_ANIM_ROOT@@@@PBDPAUIDLE_ANIM_ROOT@@@@6B@; const NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'
0x520F79: call    NiTMap_Clear
0x520F7E: mov     eax, [esi+8]
0x520F81: push    eax
0x520F82: call    FormHeapFree
0x520F87: add     esp, 4
0x520F8A: test    [esp+4+arg_0], 1
0x520F8F: jz      short loc_520F9A
0x520F91: push    esi
0x520F92: call    FormHeapFree
0x520F97: add     esp, 4
0x520F9A: mov     eax, esi
0x520F9C: pop     esi
0x520F9D: retn    4
