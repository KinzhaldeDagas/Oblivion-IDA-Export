0x6A23B0: push    ebx
0x6A23B1: push    edi
0x6A23B2: mov     edi, ecx
0x6A23B4: mov     eax, [edi]
0x6A23B6: mov     edx, [eax+8]
0x6A23B9: call    edx
0x6A23BB: mov     ebx, eax
0x6A23BD: mov     eax, [edi]
0x6A23BF: mov     edx, [eax+0Ch]
0x6A23C2: mov     ecx, edi
0x6A23C4: call    edx
0x6A23C6: test    al, al
0x6A23C8: jz      short loc_6A242B
0x6A23CA: lea     eax, [edi-68h]
0x6A23CD: test    eax, eax
0x6A23CF: jz      short loc_6A23DB
0x6A23D1: cmp     dword ptr [eax+58h], 0
0x6A23D5: jz      MagicTarget_ProcessEffectsFromItem___Done_
0x6A23DB: mov     eax, [edi]
0x6A23DD: mov     edx, [eax+4]
0x6A23E0: mov     ecx, edi
0x6A23E2: call    edx
0x6A23E4: mov     edx, [eax]
0x6A23E6: mov     ecx, eax
0x6A23E8: mov     eax, [edx+154h]
0x6A23EE: call    eax
0x6A23F0: test    eax, eax
0x6A23F2: jz      MagicTarget_ProcessEffectsFromItem___Done_
0x6A23F8: mov     edx, [edi]
0x6A23FA: mov     eax, [edx+4]
0x6A23FD: mov     ecx, edi
0x6A23FF: call    eax
0x6A2401: mov     ecx, eax; this
0x6A2403: call    TESObjectREFR_GetParentCell
0x6A2408: test    eax, eax
0x6A240A: jz      MagicTarget_ProcessEffectsFromItem___Done_
0x6A2410: mov     edx, [edi]
0x6A2412: mov     eax, [edx+4]
0x6A2415: mov     ecx, edi
0x6A2417: call    eax
0x6A2419: mov     ecx, eax; this
0x6A241B: call    TESObjectREFR_GetParentCell
0x6A2420: mov     ecx, eax; this
0x6A2422: call    TESObjectCELL_GetNiNode?
0x6A2427: test    eax, eax
0x6A2429: jz      short MagicTarget_ProcessEffectsFromItem___Done_
0x6A242B: test    ebx, ebx
0x6A242D: jz      short MagicTarget_ProcessEffectsFromItem___Done_
0x6A242F: push    ebp
0x6A2430: push    esi
