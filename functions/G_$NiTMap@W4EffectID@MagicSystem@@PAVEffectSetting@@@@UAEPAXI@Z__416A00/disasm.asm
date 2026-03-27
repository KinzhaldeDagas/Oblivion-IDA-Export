0x416A00: push    esi
0x416A01: mov     esi, ecx
0x416A03: call    ??1?$NiTMap@W4EffectID@MagicSystem@@PAVEffectSetting@@@@UAE@XZ; NiTMap<MagicSystem::EffectID,EffectSetting *>::~NiTMap<MagicSystem::EffectID,EffectSetting *>(void)
0x416A08: test    [esp+4+arg_0], 1
0x416A0D: jz      short loc_416A18
0x416A0F: push    esi
0x416A10: call    FormHeapFree
0x416A15: add     esp, 4
0x416A18: mov     eax, esi
0x416A1A: pop     esi
0x416A1B: retn    4
