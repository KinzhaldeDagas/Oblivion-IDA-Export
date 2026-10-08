0x474510: mov     eax, [esp+a2]; Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
0x474514: push    esi
0x474515: push    eax; a2
0x474516: mov     esi, ecx
0x474518: call    sub_471C00
0x47451D: mov     ecx, esi; this
0x47451F: call    ActorAnimData__ApplyActorAnimData; ActorAnimData apply/setup path. Binds animation data to actor/node state and installs the initial model/sequence mapping used by runtime playback.
0x474524: pop     esi
0x474525: retn    4
