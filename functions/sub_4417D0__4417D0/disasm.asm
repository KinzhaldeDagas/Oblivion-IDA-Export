0x4417D0: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x4417D5: test    eax, eax
0x4417D7: jz      short loc_4417F4
0x4417D9: movzx   edx, word ptr [eax+0B6h]
0x4417E0: mov     ecx, [esp+arg_0]
0x4417E4: cmp     edx, ecx
0x4417E6: jbe     short loc_4417F4
0x4417E8: mov     eax, [eax+0B0h]
0x4417EE: mov     eax, [eax+ecx*4]
0x4417F1: retn    4
0x4417F4: xor     eax, eax
0x4417F6: retn    4
