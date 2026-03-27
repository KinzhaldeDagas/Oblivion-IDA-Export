0x4DB6B0: push    ebx
0x4DB6B1: push    esi
0x4DB6B2: mov     esi, ecx
0x4DB6B4: push    edi
0x4DB6B5: lea     edi, [esi+44h]
0x4DB6B8: mov     ecx, edi
0x4DB6BA: call    ExtraDataList_GetOwner
0x4DB6BF: mov     ebx, eax
0x4DB6C1: mov     eax, [esi]
0x4DB6C3: mov     edx, [eax+190h]
0x4DB6C9: mov     ecx, esi
0x4DB6CB: call    edx
0x4DB6CD: test    al, al
0x4DB6CF: jnz     short TESObjectREFR_GetOwner___Return
0x4DB6D1: test    ebx, ebx
0x4DB6D3: jnz     short TESObjectREFR_GetOwner___Return
0x4DB6D5: mov     ecx, edi; this
0x4DB6D7: call    ExtraDataList_GetTeleport
0x4DB6DC: mov     edi, eax
0x4DB6DE: test    edi, edi
0x4DB6E0: jz      short TESObjectREFR_GetOwner___GetParentCellOwner
0x4DB6E2: mov     ecx, edi
0x4DB6E4: call    sub_42B410
0x4DB6E9: test    eax, eax
0x4DB6EB: jz      short TESObjectREFR_GetOwner___GetParentCellOwner
0x4DB6ED: mov     ecx, edi
0x4DB6EF: call    sub_42B410
0x4DB6F4: lea     ecx, [eax+44h]
0x4DB6F7: call    ExtraDataList_GetOwner
0x4DB6FC: mov     ebx, eax
0x4DB6FE: test    ebx, ebx
0x4DB700: jnz     short TESObjectREFR_GetOwner___Return
0x4DB702: cmp     dword ptr [esi+1Ch], 0
0x4DB706: jz      short loc_4DB71A
0x4DB708: mov     eax, [esi]
0x4DB70A: mov     edx, [eax+170h]
0x4DB710: mov     ecx, esi
0x4DB712: call    edx
0x4DB714: cmp     byte ptr [eax+4], 20h ; ' '
0x4DB718: jz      short TESObjectREFR_GetOwner___Return
0x4DB71A: mov     eax, [esi]
0x4DB71C: mov     edx, [eax+170h]
0x4DB722: mov     ecx, esi
0x4DB724: call    edx
0x4DB726: cmp     byte ptr [eax+4], 18h
0x4DB72A: jz      short TESObjectREFR_GetOwner___Return
0x4DB72C: mov     eax, [esi]
0x4DB72E: mov     edx, [eax+170h]
0x4DB734: mov     ecx, esi
0x4DB736: call    edx
0x4DB738: cmp     byte ptr [eax+4], 12h
0x4DB73C: jz      short TESObjectREFR_GetOwner___Return
0x4DB73E: mov     ecx, [esi+40h]
0x4DB741: test    ecx, ecx
0x4DB743: jz      short TESObjectREFR_GetOwner___Return
0x4DB745: call    TESObjectCELL_GetOwner
0x4DB74A: mov     ebx, eax
0x4DB74C: pop     edi
0x4DB74D: pop     esi
0x4DB74E: mov     eax, ebx
0x4DB750: pop     ebx
0x4DB751: retn
