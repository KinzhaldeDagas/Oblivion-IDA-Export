0x8895C0: test    ecx, ecx
0x8895C2: jz      short loc_8895C9
0x8895C4: lea     eax, [ecx+10h]
0x8895C7: jmp     short loc_8895CB
0x8895C9: xor     eax, eax
0x8895CB: test    ecx, ecx
0x8895CD: mov     dword ptr [eax], offset ??_7hkRayShapeCollectionFilter@@6B@; const hkRayShapeCollectionFilter::`vftable'
0x8895D3: jz      short loc_8895E3
0x8895D5: mov     dword ptr [ecx+0Ch], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x8895DC: mov     dword ptr [ecx], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8895E2: retn
0x8895E3: xor     eax, eax
0x8895E5: mov     dword ptr [eax], offset ??_7hkShapeCollectionFilter@@6B@; const hkShapeCollectionFilter::`vftable'
0x8895EB: mov     dword ptr [ecx], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8895F1: retn
