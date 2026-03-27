0x441800: push    esi
0x441801: mov     esi, [esp+4+arg_0]
0x441805: add     esi, 2
0x441808: call    TESObjectCELL_GetNiNode?
0x44180D: test    eax, eax
0x44180F: jz      short loc_441845
0x441811: movzx   ecx, word ptr [eax+0B6h]
0x441818: cmp     ecx, esi
0x44181A: jbe     short loc_441845
0x44181C: mov     edx, [eax+0B0h]
0x441822: mov     eax, [edx+esi*4]
0x441825: test    eax, eax
0x441827: jz      short loc_441845
0x441829: movzx   edx, word ptr [eax+0B6h]
0x441830: mov     ecx, [esp+4+arg_4]
0x441834: cmp     edx, ecx
0x441836: jbe     short loc_441845
0x441838: mov     eax, [eax+0B0h]
0x44183E: mov     eax, [eax+ecx*4]
0x441841: pop     esi
0x441842: retn    8
0x441845: xor     eax, eax
0x441847: pop     esi
0x441848: retn    8
