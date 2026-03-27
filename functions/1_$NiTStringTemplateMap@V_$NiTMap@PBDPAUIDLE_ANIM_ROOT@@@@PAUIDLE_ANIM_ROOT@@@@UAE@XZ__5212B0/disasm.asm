0x5212B0: push    edi
0x5212B1: mov     edi, ecx
0x5212B3: cmp     byte ptr [edi+10h], 0
0x5212B7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@PAUIDLE_ANIM_ROOT@@@@6B@; const NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::`vftable'
0x5212BD: jz      short loc_5212F0
0x5212BF: push    ebx
0x5212C0: xor     ebx, ebx
0x5212C2: cmp     [edi+4], ebx
0x5212C5: jbe     short loc_5212EF
0x5212C7: push    esi
0x5212C8: mov     eax, [edi+8]
0x5212CB: mov     esi, [eax+ebx*4]
0x5212CE: test    esi, esi
0x5212D0: jz      short loc_5212E6
0x5212D2: mov     eax, esi
0x5212D4: mov     ecx, [eax+4]
0x5212D7: mov     esi, [esi]
0x5212D9: push    ecx
0x5212DA: call    FormHeapFree
0x5212DF: add     esp, 4
0x5212E2: test    esi, esi
0x5212E4: jnz     short loc_5212D2
0x5212E6: add     ebx, 1
0x5212E9: cmp     ebx, [edi+4]
0x5212EC: jb      short loc_5212C8
0x5212EE: pop     esi
0x5212EF: pop     ebx
0x5212F0: mov     ecx, edi
0x5212F2: pop     edi
0x5212F3: jmp     ??1?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@UAE@XZ; NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(void)
