0x4B22E0: mov     eax, [esp+optionalContext]
0x4B22E4: push    esi
0x4B22E5: push    eax; optionalContext
0x4B22E6: mov     eax, [esp+8+payload]
0x4B22EA: mov     esi, ecx
0x4B22EC: lea     ecx, [eax+4]
0x4B22EF: mov     eax, [eax]
0x4B22F1: test    eax, eax
0x4B22F3: push    ecx; targetDimmer
0x4B22F4: push    ecx; light
0x4B22F5: mov     ecx, esp
0x4B22F7: mov     [esp+10h+optionalContext], esp
0x4B22FB: mov     [ecx], eax
0x4B22FD: jz      short loc_4B2309
0x4B22FF: add     eax, 4
0x4B2302: push    eax; lpAddend
0x4B2303: call    dword ptr ds:0A28078h
0x4B2309: mov     ecx, esi; self
0x4B230B: call    TESObjectLIGH_UpdateAttachedLightState; Oblivion native attached-point-light animation. lightFlags_7C bits 0x08/0x40 select Flicker/Flicker Slow and bits 0x80/0x100 select Pulse/Pulse Slow; the slow variants reduce the update step. It updates NiLight position and m_fDimmer using AttachedLightPayload_Decoded::targetDimmer_04 and TESObjectLIGH::fade_88. This is source-light state animation, not shadow-caster admission.
0x4B2310: pop     esi; Forward payload->backingLight_00 and &payload->targetDimmer_04; optionalContext is supplied by the caller and is null at every direct retail call site.
0x4B2311: retn    8
