0x6458A0: push    ebp
0x6458A1: push    edi
0x6458A2: push    0; int
0x6458A4: push    offset ??_R0?AVAlarmPackage@@@8; struct TypeDescriptor *
0x6458A9: mov     ebp, ecx
0x6458AB: mov     eax, [ebp+8]
0x6458AE: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x6458B3: push    0; int
0x6458B5: push    eax; void *
0x6458B6: call    OblivionDynamicCast
0x6458BB: mov     edi, eax
0x6458BD: add     esp, 14h
0x6458C0: test    edi, edi
0x6458C2: jz      loc_645993
0x6458C8: push    esi; int
0x6458C9: mov     esi, [esp+0Ch+arg_0]
0x6458CD: mov     ecx, esi
0x6458CF: call    Actor_GetBaseClass
0x6458D4: mov     ecx, eax
0x6458D6: call    TESClass__IsGuardClass
0x6458DB: test    al, al
0x6458DD: jnz     loc_6459AF
0x6458E3: push    ebx
0x6458E4: mov     ebx, [edi+3Ch]
0x6458E7: test    ebx, ebx
0x6458E9: mov     byte ptr [esp+10h+arg_0], al
0x6458ED: jz      loc_645998
0x6458F3: mov     eax, [ebx]
0x6458F5: test    eax, eax
0x6458F7: jz      short loc_645956
0x6458F9: cmp     byte ptr [esp+10h+arg_0], 0
0x6458FE: jnz     short loc_64595D
0x645900: cmp     dword ptr [eax+4], 2
0x645904: mov     edi, [eax+0Ch]
0x645907: jg      short loc_64594F
0x645909: push    64h ; 'd'; responsibility
0x64590B: push    0; a7
0x64590D: push    0; a6
0x64590F: push    0; a5
0x645911: push    0
0x645913: push    edi
0x645914: mov     ecx, esi
0x645916: call    TesObjectREF_GetDistance
0x64591B: mov     edx, [esi]
0x64591D: mov     eax, [edx+284h]
0x645923: push    ecx
0x645924: fstp    [esp+24h+var_24]
0x645927: push    21h ; '!'
0x645929: mov     ecx, esi
0x64592B: call    eax
0x64592D: mov     edx, [esi]
0x64592F: push    eax; distanceToTarget
0x645930: mov     eax, [edx+224h]
0x645936: push    0; aggressionStat
0x645938: push    edi; friendlyFight?
0x645939: mov     ecx, esi
0x64593B: call    eax
0x64593D: push    eax; disposition
0x64593E: call    shouldActorFight
0x645943: add     esp, 20h
0x645946: test    eax, eax
0x645948: jle     short loc_64594F
0x64594A: mov     byte ptr [esp+10h+arg_0], 1
0x64594F: mov     ebx, [ebx+4]
0x645952: test    ebx, ebx
0x645954: jnz     short loc_6458F3
0x645956: cmp     byte ptr [esp+10h+arg_0], 0
0x64595B: jz      short loc_645998
0x64595D: mov     edx, [ebp+0]
0x645960: mov     eax, [edx+198h]
0x645966: push    0
0x645968: push    0FFFFFFFFh
0x64596A: push    0
0x64596C: push    esi
0x64596D: mov     ecx, ebp
0x64596F: call    eax
0x645971: mov     edx, [ebp+0]
0x645974: mov     eax, [edx+228h]
0x64597A: push    1
0x64597C: push    0
0x64597E: push    0
0x645980: push    0
0x645982: push    0
0x645984: push    0
0x645986: push    0
0x645988: push    0
0x64598A: push    0
0x64598C: push    esi
0x64598D: mov     ecx, ebp
0x64598F: call    eax
0x645991: pop     ebx
0x645992: pop     esi
0x645993: pop     edi
0x645994: pop     ebp
0x645995: retn    4
0x645998: mov     edx, [ebp+0]
0x64599B: mov     eax, [edx+188h]
0x6459A1: push    3
0x6459A3: push    esi
0x6459A4: mov     ecx, ebp
0x6459A6: call    eax
0x6459A8: pop     ebx
0x6459A9: pop     esi
0x6459AA: pop     edi
0x6459AB: pop     ebp
0x6459AC: retn    4
0x6459AF: mov     edx, [ebp+0]
0x6459B2: mov     eax, [edx+188h]
0x6459B8: push    1
0x6459BA: push    esi
0x6459BB: mov     ecx, ebp
0x6459BD: call    eax
0x6459BF: mov     edx, [ebp+0]
0x6459C2: mov     eax, [edx+19Ch]
0x6459C8: push    0FFFFFFFFh
0x6459CA: push    1
0x6459CC: push    0
0x6459CE: push    esi
0x6459CF: mov     ecx, ebp
0x6459D1: call    eax
0x6459D3: mov     ecx, ds:0B333C4h
0x6459D9: push    0
0x6459DB: push    ecx
0x6459DC: mov     ecx, esi
0x6459DE: call    TesObjectREF_GetDistance
0x6459E3: fcomp   qword ptr ds:0A72610h
0x6459E9: fnstsw  ax
0x6459EB: test    ah, 41h
0x6459EE: jnz     short loc_645992
0x6459F0: mov     ecx, ds:0B333C4h; this
0x6459F6: call    TESObjectREFR_GetWorldSpace
0x6459FB: test    eax, eax
0x6459FD: jz      short loc_645992
0x6459FF: mov     ecx, ds:0B333C4h; this
0x645A05: call    TESObjectREFR_GetWorldSpace
0x645A0A: mov     ecx, esi; this
0x645A0C: mov     edi, eax
0x645A0E: call    TESObjectREFR_GetWorldSpace
0x645A13: cmp     edi, eax
0x645A15: jnz     loc_645992
0x645A1B: mov     ecx, esi; int
0x645A1D: call    sub_5EAE70
0x645A22: pop     esi
0x645A23: pop     edi
0x645A24: pop     ebp
0x645A25: retn    4
