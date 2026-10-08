0x418DB0: push    0FFFFFFFFh
0x418DB2: push    offset ??0EffectSettingCollection@@QAE@XZ_SEH
0x418DB7: mov     eax, large fs:0
0x418DBD: push    eax
0x418DBE: push    ecx
0x418DBF: push    esi
0x418DC0: mov     eax, ___security_cookie
0x418DC5: xor     eax, esp
0x418DC7: push    eax
0x418DC8: lea     eax, [esp+18h+var_C]
0x418DCC: mov     large fs:0, eax
0x418DD2: mov     esi, ecx
0x418DD4: mov     [esp+18h+var_10], esi
0x418DD8: xor     ecx, ecx
0x418DDA: mov     eax, 25h ; '%'
0x418DDF: mov     [esi+4], eax
0x418DE2: mov     edx, 4
0x418DE7: mul     edx
0x418DE9: seto    cl
0x418DEC: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVEffectSetting@@@@W4EffectID@MagicSystem@@PAVEffectSetting@@@@6B@; const NiTMapBase<DFALL<EffectSetting *>,MagicSystem::EffectID,EffectSetting *>::`vftable'
0x418DF2: mov     dword ptr [esi+0Ch], 0
0x418DF9: neg     ecx
0x418DFB: or      ecx, eax
0x418DFD: push    ecx; Size
0x418DFE: call    FormHeapAlloc
0x418E03: mov     ecx, [esi+4]
0x418E06: add     ecx, ecx
0x418E08: add     ecx, ecx
0x418E0A: push    ecx
0x418E0B: push    0
0x418E0D: push    eax
0x418E0E: mov     [esi+8], eax
0x418E11: call    __memset
0x418E16: add     esp, 10h
0x418E19: mov     ecx, esi
0x418E1B: mov     [esp+18h+var_4], 0
0x418E23: mov     dword ptr [esi], offset ??_7EffectSettingCollection@@6B@; const EffectSettingCollection::`vftable'
0x418E29: call    EffectSettingCollection_InitAllEffects; TES4 effect table initialization has Water Breathing/Walking and many magic effects, but no observed Slowfall or Climbing effect in this table. Movement discipline implementation must add behavior outside the vanilla effect state table.
0x418E2E: mov     eax, esi
0x418E30: mov     ecx, [esp+18h+var_C]
0x418E34: mov     large fs:0, ecx
0x418E3B: pop     ecx
0x418E3C: pop     esi
0x418E3D: add     esp, 10h
0x418E40: retn
0x9AB3D0: mov     ecx, [ebp-10h]
0x9AB3D3: jmp     ??1?$NiTMap@W4EffectID@MagicSystem@@PAVEffectSetting@@@@UAE@XZ; NiTMap<MagicSystem::EffectID,EffectSetting *>::~NiTMap<MagicSystem::EffectID,EffectSetting *>(void)
0x9AB3D8: mov     edx, [esp+arg_4]
0x9AB3DC: lea     eax, [edx-8]
0x9AB3DF: mov     ecx, [edx-0Ch]
0x9AB3E2: xor     ecx, eax
0x9AB3E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB3E9: mov     eax, offset stru_AD82A8
0x9AB3EE: jmp     ___CxxFrameHandler3
