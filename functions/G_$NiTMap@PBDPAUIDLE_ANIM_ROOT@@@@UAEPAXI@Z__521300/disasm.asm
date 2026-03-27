0x521300: push    esi
0x521301: mov     esi, ecx
0x521303: call    ??1?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@UAE@XZ; NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(void)
0x521308: test    [esp+4+arg_0], 1
0x52130D: jz      short loc_521318
0x52130F: push    esi
0x521310: call    FormHeapFree
0x521315: add     esp, 4
0x521318: mov     eax, esi
0x52131A: pop     esi
0x52131B: retn    4
