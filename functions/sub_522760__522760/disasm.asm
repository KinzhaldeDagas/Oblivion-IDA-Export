0x522760: push    esi
0x522761: mov     esi, ecx
0x522763: call    TESActorBase_IsFemale
0x522768: cmp     eax, 1
0x52276B: mov     eax, [esi+0E8h]
0x522771: push    6
0x522773: lea     ecx, [eax+80h]
0x522779: jz      short loc_52277E
0x52277B: lea     ecx, [eax+74h]
0x52277E: call    TESAttributes_GetAVi
0x522783: movzx   eax, al
0x522786: push    eax; char
0x522787: push    6; int
0x522789: lea     ecx, [esi+88h]; int
0x52278F: call    TESAttributes_SetAVi
0x522794: pop     esi
0x522795: retn
