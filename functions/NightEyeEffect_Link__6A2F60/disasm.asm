0x6A2F60: push    esi; Verified NightEyeEffect_Link takes PlayerCharacter* linkContext, calls ActiveEffect_Base_Link, then compares the context with the player reference before restoring the player shader. Supports the Probable TESObjectREFR/Actor context type used by the common link dispatcher.
0x6A2F61: mov     esi, [esp+4+linkContext]
0x6A2F65: push    esi; linkContext
0x6A2F66: call    ActiveEffect_Base_Link; Verified ActiveEffect link stage resolves saved caster (+0x24), target (+0x20), bound object (+0x30), and hit-effect references (+0x34). The explicit linkContext is Probable TESObjectREFR*/Actor context: Player_LinkModifiedForm passes PlayerCharacter*, NightEyeEffect_Link requires PlayerCharacter*, and VampirismEffect_Link RTTI-casts it to Actor; modified-extra loading passes null.
0x6A2F6B: cmp     esi, ds:0B333C4h
0x6A2F71: pop     esi
0x6A2F72: jnz     short locret_6A2F79
0x6A2F74: call    NightEyeEffect_SetPlayerShader?; MoonSugarEffect decode: NightEye player shader path sets NightEye active state from player actor value kActorVal_NightEyeBonus; do not hijack for Moon Sugar.
0x6A2F79: retn    4
