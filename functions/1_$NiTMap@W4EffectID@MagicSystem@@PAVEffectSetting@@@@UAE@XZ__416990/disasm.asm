0x416990: push    0FFFFFFFFh
0x416992: push    offset ??1?$NiTMap@W4EffectID@MagicSystem@@PAVEffectSetting@@@@UAE@XZ_SEH
0x416997: mov     eax, large fs:0
0x41699D: push    eax
0x41699E: push    ecx
0x41699F: push    esi
0x4169A0: mov     eax, ___security_cookie
0x4169A5: xor     eax, esp
0x4169A7: push    eax
0x4169A8: lea     eax, [esp+18h+var_C]
0x4169AC: mov     large fs:0, eax
0x4169B2: mov     esi, ecx
0x4169B4: mov     [esp+18h+var_10], esi
0x4169B8: mov     dword ptr [esi], offset ??_7?$NiTMap@W4EffectID@MagicSystem@@PAVEffectSetting@@@@6B@; const NiTMap<MagicSystem::EffectID,EffectSetting *>::`vftable'
0x4169BE: mov     [esp+18h+var_4], 0
0x4169C6: call    NiTMap_Clear
0x4169CB: mov     ecx, esi
0x4169CD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4169D5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVEffectSetting@@@@W4EffectID@MagicSystem@@PAVEffectSetting@@@@6B@; const NiTMapBase<DFALL<EffectSetting *>,MagicSystem::EffectID,EffectSetting *>::`vftable'
0x4169DB: call    NiTMap_Clear
0x4169E0: mov     eax, [esi+8]
0x4169E3: push    eax
0x4169E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4169E9: add     esp, 4
0x4169EC: mov     ecx, [esp+18h+var_C]
0x4169F0: mov     large fs:0, ecx
0x4169F7: pop     ecx
0x4169F8: pop     esi
0x4169F9: add     esp, 10h
0x4169FC: retn
0x9AB3A0: mov     ecx, [ebp-10h]
0x9AB3A3: jmp     NiTMapBase_EffectSettings_destr
0x9AB3A8: mov     edx, [esp+arg_4]
0x9AB3AC: lea     eax, [edx-8]
0x9AB3AF: mov     ecx, [edx-0Ch]
0x9AB3B2: xor     ecx, eax
0x9AB3B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB3B9: mov     eax, offset stru_AD827C
0x9AB3BE: jmp     ___CxxFrameHandler3
