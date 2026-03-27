0x6A5D7D: push    0; a4
0x6A5D7F: mov     ecx, ebp; this
0x6A5D81: lea     edi, [esi+48h]
0x6A5D84: call    TESObjectREFR_GetWorldSpace
0x6A5D89: push    eax; a3
0x6A5D8A: mov     ecx, ebp; this
0x6A5D8C: call    TESObjectREFR_GetParentCell
0x6A5D91: push    eax; a2
0x6A5D92: lea     ecx, [esi+54h]
0x6A5D95: push    ecx
0x6A5D96: mov     ecx, ds:0B33A98h
0x6A5D9C: push    edi
0x6A5D9D: push    ebx
0x6A5D9E: call    TESDataHandler_PlaceObjectRef
0x6A5DA3: mov     ebx, eax
0x6A5DA5: test    ebx, ebx
0x6A5DA7: jz      SummonCreatureEffect_PlaceSummon___Done
0x6A5DAD: mov     edx, [ebx]
0x6A5DAF: mov     eax, [edx+190h]
0x6A5DB5: mov     ecx, ebx
0x6A5DB7: call    eax
0x6A5DB9: test    al, al
0x6A5DBB: jz      short SummonCreatureEffect_PlaceSummon___Error_BadPlacedRef
0x6A5DBD: mov     ecx, [edi]
0x6A5DBF: mov     edx, [edi+4]
0x6A5DC2: sub     esp, 0Ch
0x6A5DC5: mov     eax, esp
0x6A5DC7: mov     [eax], ecx
0x6A5DC9: mov     ecx, [edi+8]
0x6A5DCC: mov     [eax+4], edx
0x6A5DCF: mov     [eax+8], ecx
0x6A5DD2: mov     ecx, ebx; this
0x6A5DD4: mov     [esi+3Ch], ebx
0x6A5DD7: call    TESObjectREFR_SetPosition
0x6A5DDC: mov     ecx, [esi+3Ch]
0x6A5DDF: mov     edx, [ecx]
0x6A5DE1: mov     eax, [edx+178h]
0x6A5DE7: push    0
0x6A5DE9: call    eax
0x6A5DEB: mov     ecx, [esi+3Ch]
0x6A5DEE: mov     edx, [ecx]
0x6A5DF0: mov     eax, [edx+1C4h]
0x6A5DF6: call    eax
0x6A5DF8: mov     ecx, [esi+3Ch]
0x6A5DFB: push    ebp
0x6A5DFC: push    ecx
0x6A5DFD: call    CommandEffect_MakeActorLoyal??
0x6A5E02: mov     edx, [esi+3Ch]
0x6A5E05: mov     ecx, [edx+58h]
0x6A5E08: mov     eax, [ecx]
0x6A5E0A: mov     edx, [eax+4E8h]
0x6A5E10: add     esp, 8
0x6A5E13: push    1
0x6A5E15: call    edx
0x6A5E17: jmp     short SummonCreatureEffect_PlaceSummon___Done
