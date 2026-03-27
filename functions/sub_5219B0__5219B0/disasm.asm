0x5219B0: push    0FFFFFFFFh
0x5219B2: push    offset SEH_5219B0
0x5219B7: mov     eax, large fs:0
0x5219BD: push    eax
0x5219BE: push    ecx
0x5219BF: push    esi
0x5219C0: mov     eax, ds:0B30AACh
0x5219C5: xor     eax, esp
0x5219C7: push    eax
0x5219C8: lea     eax, [esp+18h+var_C]
0x5219CC: mov     large fs:0, eax
0x5219D2: mov     esi, ecx
0x5219D4: mov     [esp+18h+var_10], esi
0x5219D8: mov     [esp+18h+var_4], 0
0x5219E0: call    sub_5217E0
0x5219E5: mov     ecx, esi
0x5219E7: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5219EF: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@PAUIDLE_ANIM_ROOT@@@@6B@; const BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable'
0x5219F5: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@PAUIDLE_ANIM_ROOT@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(void)
0x5219FA: mov     ecx, [esp+18h+var_C]
0x5219FE: mov     large fs:0, ecx
0x521A05: pop     ecx
0x521A06: pop     esi
0x521A07: add     esp, 10h
0x521A0A: retn
