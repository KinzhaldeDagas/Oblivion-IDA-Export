0x521320: push    esi
0x521321: mov     esi, ecx
0x521323: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@PAUIDLE_ANIM_ROOT@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(void)
0x521328: test    [esp+4+arg_0], 1
0x52132D: jz      short loc_521338
0x52132F: push    esi
0x521330: call    FormHeapFree
0x521335: add     esp, 4
0x521338: mov     eax, esi
0x52133A: pop     esi
0x52133B: retn    4
