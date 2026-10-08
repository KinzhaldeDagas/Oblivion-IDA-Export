0x470D00: mov     edx, [esp+encodedKey]; Returns whether ActorAnimData +0x9C contains an entry for the encoded animation key. Presence test only; it does not select or play a sequence.
0x470D04: mov     ecx, [ecx+9Ch]
0x470D0A: lea     eax, [esp+encodedKey]
0x470D0E: push    eax
0x470D0F: push    edx
0x470D10: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x470D15: retn    4
