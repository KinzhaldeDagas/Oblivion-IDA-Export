0x416A20: push    0FFFFFFFFh
0x416A22: push    offset ??0EffectSettingCollection@@QAE@XZ_SEH
0x416A27: mov     eax, large fs:0
0x416A2D: push    eax
0x416A2E: push    ecx
0x416A2F: push    esi
0x416A30: mov     eax, ___security_cookie
0x416A35: xor     eax, esp
0x416A37: push    eax
0x416A38: lea     eax, [esp+18h+var_C]
0x416A3C: mov     large fs:0, eax
0x416A42: mov     esi, ecx
0x416A44: mov     [esp+18h+var_10], esi
0x416A48: mov     dword ptr [esi], offset ??_7EffectSettingCollection@@6B@; const EffectSettingCollection::`vftable'
0x416A4E: mov     [esp+18h+var_4], 0
0x416A56: call    EffectSettingCollection_Clear
0x416A5B: mov     ecx, esi
0x416A5D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x416A65: call    ??1?$NiTMap@W4EffectID@MagicSystem@@PAVEffectSetting@@@@UAE@XZ; NiTMap<MagicSystem::EffectID,EffectSetting *>::~NiTMap<MagicSystem::EffectID,EffectSetting *>(void)
0x416A6A: mov     ecx, [esp+18h+var_C]
0x416A6E: mov     large fs:0, ecx
0x416A75: pop     ecx
0x416A76: pop     esi
0x416A77: add     esp, 10h
0x416A7A: retn
