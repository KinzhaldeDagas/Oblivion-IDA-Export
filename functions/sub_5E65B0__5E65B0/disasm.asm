0x5E65B0: push    ecx; Authoritative actor movement speed selector: process flags +0x2C0 choose run (0x200), swim (0x800), fly-speed (0x2000); when those are absent it falls through to ordinary walk speed. AI callers may supply a movement vector without direction bits.
0x5E65B1: push    esi
0x5E65B2: mov     esi, ecx
0x5E65B4: mov     ecx, [esi+58h]
0x5E65B7: mov     eax, [ecx]
0x5E65B9: mov     edx, [eax+8]
0x5E65BC: call    edx
0x5E65BE: test    eax, eax
0x5E65C0: jnz     loc_5E6662
0x5E65C6: mov     ecx, [esi+58h]
0x5E65C9: mov     eax, [ecx]
0x5E65CB: mov     edx, [eax+2C0h]
0x5E65D1: call    edx
0x5E65D3: mov     ecx, [esi+58h]
0x5E65D6: test    ax, 200h
0x5E65DA: mov     eax, [ecx]
0x5E65DC: mov     edx, [eax+2C0h]
0x5E65E2: jz      short loc_5E6623
0x5E65E4: call    edx
0x5E65E6: test    ax, 800h
0x5E65EA: jz      short loc_5E65FE
0x5E65EC: mov     ecx, esi
0x5E65EE: call    sub_5E3AD0; Swim run-speed branch used by sub_5E65B0 when run 0x200 and swim 0x800 are set. Calls Calc_SwimRunSpeed and applies same package-target limiting pattern.
0x5E65F3: fstp    [esp+8+var_4]
0x5E65F7: fld     [esp+8+var_4]
0x5E65FB: pop     esi
0x5E65FC: pop     ecx
0x5E65FD: retn
0x5E65FE: mov     ecx, [esi+58h]
0x5E6601: mov     eax, [ecx]
0x5E6603: mov     edx, [eax+2C0h]
0x5E6609: call    edx
0x5E660B: test    ax, 2000h
0x5E660F: mov     ecx, esi
0x5E6611: jnz     short loc_5E6652
0x5E6613: call    Actor_CalcFastTravelSpeed; Run-speed branch used by sub_5E65B0 when process flag 0x200 is set and swim/fly are absent. Calls Calc_RunSpeed, then may clamp to package target actor's run speed minus close-distance margin.
0x5E6618: fstp    [esp+8+var_4]
0x5E661C: fld     [esp+8+var_4]
0x5E6620: pop     esi
0x5E6621: pop     ecx
0x5E6622: retn
0x5E6623: call    edx
0x5E6625: test    ax, 800h
0x5E6629: jz      short loc_5E663D
0x5E662B: mov     ecx, esi
0x5E662D: call    sub_5E3920; Swim walk-speed branch used by sub_5E65B0 when swim 0x800 is set without run 0x200. Calls Calc_SwimSpeed and applies same package-target limiting pattern.
0x5E6632: fstp    [esp+8+var_4]
0x5E6636: fld     [esp+8+var_4]
0x5E663A: pop     esi
0x5E663B: pop     ecx
0x5E663C: retn
0x5E663D: mov     ecx, [esi+58h]
0x5E6640: mov     eax, [ecx]
0x5E6642: mov     edx, [eax+2C0h]
0x5E6648: call    edx
0x5E664A: test    ax, 2000h
0x5E664E: mov     ecx, esi
0x5E6650: jz      short loc_5E6664
0x5E6652: call    sub_5E3C80; Fly-speed branch used by sub_5E65B0 when fly-speed flag 0x2000 is set. Uses Speed actor value and encumbrance, then applies package-target limiting pattern.
0x5E6657: fstp    [esp+8+var_4]
0x5E665B: fld     [esp+8+var_4]
0x5E665F: pop     esi
0x5E6660: pop     ecx
0x5E6661: retn
0x5E6662: mov     ecx, esi
0x5E6664: call    sub_5E3590; Walk-speed branch used by sub_5E65B0 when run/swim/fly flags are absent. Calls Calc_WalkSpeed, then may clamp to package target actor's walk speed minus close-distance margin.
0x5E6669: fstp    [esp+8+var_4]
0x5E666D: fld     [esp+8+var_4]
0x5E6671: pop     esi
0x5E6672: pop     ecx
0x5E6673: retn
