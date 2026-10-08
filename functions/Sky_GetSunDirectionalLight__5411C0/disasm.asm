0x5411C0: mov     eax, [ecx+28h]
0x5411C3: test    eax, eax
0x5411C5: jz      short loc_5411CB
0x5411C7: mov     eax, [eax+1Ch]; World sun owner chain: Sky+0x28 -> Sun; Sun+0x1C -> NiDirectionalLight. Data capture can seal these fields without invoking the getter. World initialization4063FA supplies this same directional light to ShadowSceneNode_RecreateLightLevelReference.
0x5411CA: retn
0x5411CB: xor     eax, eax
0x5411CD: retn
