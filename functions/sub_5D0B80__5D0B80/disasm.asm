0x5D0B80: mov     ecx, ds:0B33A98h
0x5D0B86: push    offset aUiarmorweapo_0; "UIArmorWeaponRepair"
0x5D0B8B: call    SoundMap_ResolveAnimSoundNote; Animation Sound: note resolver. Looks up the note token in global sound map off_B06164 and accepts only entries whose form/type byte is 0x0A; returns the sound entry or 0.
0x5D0B90: test    eax, eax
0x5D0B92: jz      short locret_5D0BD6
0x5D0B94: mov     eax, [eax+0Ch]
0x5D0B97: mov     ecx, ds:0B33398h
0x5D0B9D: mov     ecx, [ecx+24h]
0x5D0BA0: push    esi
0x5D0BA1: push    0
0x5D0BA3: push    21h ; '!'
0x5D0BA5: push    eax
0x5D0BA6: call    OSGLobals_PlaySound
0x5D0BAB: mov     esi, eax
0x5D0BAD: test    esi, esi
0x5D0BAF: jz      short loc_5D0BD5
0x5D0BB1: mov     ecx, esi; this
0x5D0BB3: call    SoundHandle__IsPlaying; Tests whether the engine sound handle stored in *this is still active in the Oblivion audio manager. Dialogue menus and DialoguePackage HighProcess playback use it as the speech-completion gate.
0x5D0BB8: test    al, al
0x5D0BBA: jnz     short loc_5D0BC5
0x5D0BBC: push    0
0x5D0BBE: mov     ecx, esi
0x5D0BC0: call    sub_6B7190
0x5D0BC5: mov     ecx, esi; this
0x5D0BC7: call    sub_6B73E0
0x5D0BCC: push    esi
0x5D0BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D0BD2: add     esp, 4
0x5D0BD5: pop     esi
0x5D0BD6: retn
