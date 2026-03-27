0x410310: mov     eax, OSGlobals
0x410315: cmp     dword ptr [eax+24h], 0
0x410319: jz      short locret_410333
0x41031B: cmp     bSoundEnabled_Audio, 0
0x410322: jz      short locret_410333
0x410324: mov     ecx, ds:_BinkOpenDirectSound@4; BinkOpenDirectSound(x)
0x41032A: push    0
0x41032C: push    ecx
0x41032D: call    ds:_BinkSetSoundSystem@8; BinkSetSoundSystem(x,x)
0x410333: retn
