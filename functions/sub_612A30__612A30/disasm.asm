0x612A30: mov     eax, [esp+actionOrIdle]
0x612A34: push    ebx
0x612A35: xor     bl, bl
0x612A37: test    eax, eax
0x612A39: setz    cl
0x612A3C: push    esi
0x612A3D: push    edi
0x612A3E: mov     edi, [esp+0Ch+arg_0]
0x612A42: push    ecx; forceWeaponPrefix
0x612A43: push    eax; weaponEntryDataArg
0x612A44: push    11h; groupID
0x612A46: mov     ecx, edi; this
0x612A48: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x612A4D: movzx   esi, ax
0x612A50: test    si, si
0x612A53: jz      short loc_612A7E
0x612A55: mov     edx, [edi]
0x612A57: mov     eax, [edx+164h]
0x612A5D: mov     ecx, edi
0x612A5F: call    eax
0x612A61: test    eax, eax
0x612A63: jz      short loc_612A7E
0x612A65: mov     eax, [eax+9Ch]
0x612A6B: lea     ecx, [esp+0Ch+actionOrIdle]
0x612A6F: push    ecx
0x612A70: push    esi
0x612A71: mov     ecx, eax
0x612A73: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x612A78: test    al, al
0x612A7A: mov     al, 1
0x612A7C: jnz     short loc_612A80
0x612A7E: mov     al, bl
0x612A80: pop     edi
0x612A81: pop     esi
0x612A82: pop     ebx
0x612A83: retn
