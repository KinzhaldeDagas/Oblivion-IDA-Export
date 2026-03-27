0x699571: mov     ecx, ds:0B333C4h
0x699577: fld     dword ptr ds:0A32048h
0x69957D: mov     edx, [esp+a2]
0x699581: fstp    [esp+arg_C]
0x699585: push    0; a4
0x699587: push    ecx; a3
0x699588: push    edx; a2
0x699589: mov     [esp+0Ch+arg_10], 0
0x699591: call    TESObjectREFR_GetDistanceBetween?
0x699596: fld     [esp+0Ch+arg_18]
0x69959A: fcompp
0x69959C: add     esp, 0Ch
0x69959F: fnstsw  ax
0x6995A1: test    ah, 1
0x6995A4: jnz     short loc_6995F0
0x6995A6: test    ebp, ebp
0x6995A8: fld     dword ptr ds:0A32048h
0x6995AE: fstp    [esp+arg_14]
0x6995B2: jz      short loc_6995CD
0x6995B4: mov     ecx, ds:0B333C4h
0x6995BA: lea     eax, [esp+arg_14]
0x6995BE: push    eax
0x6995BF: push    ecx
0x6995C0: push    ebp
0x6995C1: call    sub_6131D0
0x6995C6: add     esp, 0Ch
0x6995C9: test    al, al
0x6995CB: jz      short loc_6995F0
0x6995CD: fld     [esp+arg_14]
0x6995D1: fcom    qword ptr ds:0A3A5B0h
0x6995D7: fnstsw  ax
0x6995D9: test    ah, 41h
0x6995DC: jp      short loc_6995EE
0x6995DE: mov     edx, ds:0B333C4h
0x6995E4: fstp    [esp+arg_C]
0x6995E8: mov     [esp+arg_10], edx
0x6995EC: jmp     short loc_6995F0
0x6995EE: fstp    st
0x6995F0: push    0; a2
0x6995F2: mov     ecx, offset ActorProcessManager_ptr; this
0x6995F7: call    sub_673A50
0x6995FC: mov     ecx, eax; this
0x6995FE: call    sub_7616D0
0x699603: mov     ebx, eax
0x699605: test    ebx, ebx
0x699607: jz      loc_69973A
0x69960D: push    edi
0x69960E: mov     edi, edi
0x699610: cmp     dword ptr [ebx+4], 0
0x699614: jnz     short loc_69961F
0x699616: cmp     dword ptr [ebx], 0
0x699619: jz      loc_699739
0x69961F: mov     esi, [ebx]
0x699621: test    esi, esi
0x699623: jz      short loc_699635
0x699625: mov     eax, [esi]
0x699627: mov     edx, [eax+190h]
0x69962D: mov     ecx, esi
0x69962F: call    edx
0x699631: test    al, al
0x699633: jnz     short loc_699637
0x699635: xor     esi, esi
0x699637: mov     ebx, [ebx+4]
0x69963A: xor     edi, edi; a1
0x69963C: test    esi, esi
0x69963E: jz      loc_699731
0x699644: cmp     esi, [esp+4+a2]
0x699648: jz      loc_6996CB
0x69964E: mov     eax, [esi]
0x699650: mov     edx, [eax+198h]
0x699656: push    0; a5
0x699658: mov     ecx, esi
0x69965A: call    edx
0x69965C: test    al, al
0x69965E: jnz     short loc_6996CB
0x699660: mov     eax, [esi]
0x699662: mov     edx, [eax+154h]
0x699668: mov     ecx, esi
0x69966A: call    edx
0x69966C: test    eax, eax
0x69966E: jz      short loc_6996CB
0x699670: mov     eax, [esp+8+arg_4]
0x699674: push    0; a4
0x699676: push    esi; a3
0x699677: push    eax; a2
0x699678: call    TESObjectREFR_GetDistanceBetween?
0x69967D: fld     [esp+14h+arg_14]
0x699681: fcompp
0x699683: add     esp, 0Ch
0x699686: fnstsw  ax
0x699688: test    ah, 1
0x69968B: jnz     short loc_6996CB
0x69968D: test    ebp, ebp
0x69968F: fld     dword ptr ds:0A32048h
0x699695: fstp    [esp+8+arg_10]
0x699699: jz      short loc_6996AE
0x69969B: lea     ecx, [esp+8+arg_10]
0x69969F: push    ecx
0x6996A0: push    esi
0x6996A1: push    ebp
0x6996A2: call    sub_6131D0
0x6996A7: add     esp, 0Ch
0x6996AA: test    al, al
0x6996AC: jz      short loc_6996CB
0x6996AE: fld     [esp+8+arg_10]
0x6996B2: fld     [esp+8+a2]
0x6996B6: fcomp   st(1)
0x6996B8: fnstsw  ax
0x6996BA: test    ah, 1
0x6996BD: jnz     short loc_6996C9
0x6996BF: fstp    [esp+8+a2]
0x6996C3: mov     [esp+8+arg_C], esi
0x6996C7: jmp     short loc_6996CB
0x6996C9: fstp    st
0x6996CB: test    edi, edi
0x6996CD: jz      short loc_699731
0x6996CF: mov     eax, [edi]
0x6996D1: test    eax, eax
0x6996D3: jz      short loc_699731
0x6996D5: push    0; int
0x6996D7: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x6996DC: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x6996E1: push    0; int
0x6996E3: push    eax; void *
0x6996E4: call    OblivionDynamicCast
0x6996E9: mov     edi, [edi+4]
0x6996EC: mov     esi, eax
0x6996EE: add     esp, 14h
0x6996F1: test    esi, esi
0x6996F3: jz      short loc_699731
0x6996F5: mov     ecx, [esi+58h]
0x6996F8: test    ecx, ecx
0x6996FA: jz      short loc_69970B
0x6996FC: mov     edx, [ecx]
0x6996FE: mov     eax, [edx+8]
0x699701: call    eax
0x699703: test    eax, eax
0x699705: jz      loc_699644
0x69970B: test    edi, edi
0x69970D: jz      short loc_699731
0x69970F: mov     eax, [edi]
0x699711: push    0; int
0x699713: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x699718: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x69971D: push    0; int
0x69971F: push    eax; void *
0x699720: call    OblivionDynamicCast
0x699725: mov     edi, [edi+4]
0x699728: mov     esi, eax
0x69972A: add     esp, 14h
0x69972D: test    esi, esi
0x69972F: jnz     short loc_6996F5
0x699731: test    ebx, ebx
0x699733: jnz     loc_699610
0x699739: pop     edi
0x69973A: mov     eax, [esp+4+arg_C]
0x69973E: test    eax, eax
0x699740: pop     esi
0x699741: pop     ebp
0x699742: pop     ebx
0x699743: jz      short loc_69974C
0x699745: add     eax, 68h ; 'h'
0x699748: add     esp, 18h
0x69974B: retn
0x69974C: xor     eax, eax
0x69974E: add     esp, 18h
0x699751: retn
