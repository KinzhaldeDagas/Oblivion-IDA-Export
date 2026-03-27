0x521590: push    esi
0x521591: mov     esi, ecx
0x521593: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@PAUIDLE_ANIM_ROOT@@@@6B@; const BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable'
0x521599: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@PAUIDLE_ANIM_ROOT@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(void)
0x52159E: test    [esp+4+arg_0], 1
0x5215A3: jz      short loc_5215AE
0x5215A5: push    esi
0x5215A6: call    FormHeapFree
0x5215AB: add     esp, 4
0x5215AE: mov     eax, esi
0x5215B0: pop     esi
0x5215B1: retn    4
