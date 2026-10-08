0x6943C0: mov     eax, [esp+linkContext]
0x6943C4: push    esi
0x6943C5: push    eax; linkContext
0x6943C6: mov     esi, ecx
0x6943C8: call    ActiveEffect_Base_PostLink; Verified ActiveEffect::PostLink takes a TESObjectREFR linkContext and, for save version >=0x2A, walks this->members.hitEffectList and dispatches each hit effect's +0x84 postLink callback. The callback creates/restores visual state; ActiveEffect_Base_PostLink then registers each object with ActorProcessManager.
0x6943CD: mov     edx, [esi]
0x6943CF: mov     eax, [edx+38h]
0x6943D2: mov     ecx, esi
0x6943D4: call    eax
0x6943D6: pop     esi
0x6943D7: retn    4
