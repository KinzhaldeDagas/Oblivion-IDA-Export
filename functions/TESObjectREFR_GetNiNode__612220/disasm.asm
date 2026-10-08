0x612220: cmp     ecx, ds:0B333C4h; ODismemberment: TESObjectREFR::GetNiNode; runtime primitive starts from actor 3D and toggles prepared ODISMEMBER_* nodes.
0x612226: mov     eax, [ecx+3Ch]
0x612229: jz      short locret_612237
0x61222B: test    eax, eax
0x61222D: jz      short locret_612237
0x61222F: test    byte ptr [eax+18h], 1
0x612233: jz      short locret_612237; ODismemberment: GetNiNode returns null for non-player refs whose root has AppCulled set; runtime limb suppression must never app-cull actor root.
0x612235: xor     eax, eax
0x612237: retn
