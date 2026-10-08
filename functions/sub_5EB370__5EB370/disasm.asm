0x5EB370: sub     esp, 0Ch
0x5EB373: push    esi
0x5EB374: push    edi
0x5EB375: mov     esi, ecx
0x5EB377: call    IsWeaponReady
0x5EB37C: test    al, al
0x5EB37E: jz      short loc_5EB3EC
0x5EB380: mov     eax, [esi]
0x5EB382: mov     edx, [eax+174h]
0x5EB388: push    1
0x5EB38A: mov     ecx, esi
0x5EB38C: call    edx
0x5EB38E: push    eax
0x5EB38F: mov     ecx, esi
0x5EB391: call    sub_5EB150
0x5EB396: test    al, al
0x5EB398: jz      short loc_5EB3EC
0x5EB39A: mov     ecx, esi; this
0x5EB39C: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5EB3A1: mov     edi, eax
0x5EB3A3: test    edi, edi
0x5EB3A5: jz      short loc_5EB3EC
0x5EB3A7: mov     eax, [esi]
0x5EB3A9: mov     edx, [eax+174h]
0x5EB3AF: mov     ecx, esi
0x5EB3B1: call    edx
0x5EB3B3: mov     edx, [eax]
0x5EB3B5: push    0; int
0x5EB3B7: push    0; float
0x5EB3B9: push    0; float
0x5EB3BB: push    edi; int
0x5EB3BC: sub     esp, 0Ch
0x5EB3BF: mov     ecx, esp
0x5EB3C1: mov     [ecx], edx
0x5EB3C3: mov     edx, [eax+4]
0x5EB3C6: mov     eax, [eax+8]
0x5EB3C9: mov     [ecx+4], edx
0x5EB3CC: mov     [ecx+8], eax
0x5EB3CF: lea     ecx, [esp+30h+var_C]
0x5EB3D3: push    ecx; int
0x5EB3D4: mov     ecx, esi
0x5EB3D6: call    Actor_ChoosePathGridSteeringPosition; Verified actor package movement helper. Finds a reachable PathGrid point for the requested destination; if it has outgoing connections, selects the first linked node and chooses a randomized intermediate position along that edge. Handles empty/unavailable PathGrids by falling back to terrain height or the actor's current position. Multiple HighProcess package-action callers establish the steering-position role.
0x5EB3DB: mov     edx, [esi]
0x5EB3DD: mov     edx, [edx+1CCh]
0x5EB3E3: lea     eax, [esp+14h+var_C]
0x5EB3E7: push    eax
0x5EB3E8: mov     ecx, esi
0x5EB3EA: call    edx
0x5EB3EC: pop     edi
0x5EB3ED: pop     esi
0x5EB3EE: add     esp, 0Ch
0x5EB3F1: retn
