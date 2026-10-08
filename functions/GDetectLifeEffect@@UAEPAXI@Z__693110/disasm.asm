0x693110: push    esi
0x693111: mov     esi, ecx
0x693113: mov     dword ptr [esi], offset ??_7DetectLifeEffect@@6B@; const DetectLifeEffect::`vftable'
0x693119: call    ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x69311E: test    byte ptr [esp+4+arg_0], 1
0x693123: jz      short loc_69312E
0x693125: push    esi
0x693126: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x69312B: add     esp, 4
0x69312E: mov     eax, esi
0x693130: pop     esi
0x693131: retn    4
