0x6171F0: sub     esp, 110h
0x6171F6: mov     eax, ds:0B30AACh
0x6171FB: xor     eax, esp
0x6171FD: mov     [esp+110h+var_4], eax
0x617204: push    esi
0x617205: mov     esi, [esp+114h+arg_0]
0x61720C: push    edi
0x61720D: mov     edi, ecx
0x61720F: cmp     dword ptr [edi+0A0h], 0
0x617216: jz      CombatController_TransmitDisease?___Done
0x61721C: test    esi, esi
0x61721E: jz      CombatController_TransmitDisease?___Done
0x617224: mov     ecx, esi
0x617226: call    Actor_IsPlayer
0x61722B: test    al, al
0x61722D: jz      CombatController_TransmitDisease?___Done
0x617233: mov     eax, [esi]
0x617235: mov     edx, [eax+284h]
0x61723B: push    3Fh ; '?'
0x61723D: mov     ecx, esi
0x61723F: call    edx
0x617241: push    eax
0x617242: call    Calc_DiseaseTransferPercent
0x617247: fstp    [esp+120h+var_114]
0x61724B: fld     [esp+120h+var_114]
0x61724F: push    0; Seed
0x617251: fstp    qword ptr [esp+124h+string]
0x617255: call    GetRandomLargeInteger?
0x61725A: cdq
0x61725B: mov     ecx, 64h ; 'd'
0x617260: idiv    ecx
0x617262: add     esp, 8
0x617265: mov     [esp+11Ch+var_114], edx
0x617269: fild    [esp+11Ch+var_114]
0x61726D: fcomp   qword ptr [esp+11Ch+string]
0x617271: fnstsw  ax
0x617273: test    ah, 41h
0x617276: jz      CombatController_TransmitDisease?___Done
0x61727C: mov     edx, [edi+0A0h]
0x617282: mov     eax, [edx]
0x617284: push    eax
0x617285: lea     ecx, [esi+68h]
0x617288: call    MagicTarget_HasMagicItem
0x61728D: test    al, al
0x61728F: jnz     CombatController_TransmitDisease?___Done
0x617295: mov     ecx, [edi+0A0h]
0x61729B: mov     edx, [ecx]
0x61729D: push    ebx
0x61729E: mov     ebx, [esi]
0x6172A0: push    0; int
0x6172A2: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x6172A7: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x6172AC: push    0; int
0x6172AE: push    edx; void *
0x6172AF: call    OblivionDynamicCast
0x6172B4: add     esp, 14h
0x6172B7: push    eax
0x6172B8: mov     eax, [ebx+2DCh]
0x6172BE: mov     ecx, esi
0x6172C0: call    eax
0x6172C2: test    al, al
0x6172C4: pop     ebx
0x6172C5: jz      short CombatController_TransmitDisease?___Done
0x6172C7: mov     ecx, esi
0x6172C9: call    Actor_IsPlayer
0x6172CE: test    al, al
0x6172D0: jz      short CombatController_TransmitDisease?___Done
0x6172D2: mov     eax, ds:0B333C4h
0x6172D7: add     dword ptr [eax+6C0h], 1
0x6172DE: mov     ecx, [edi+0A0h]
0x6172E4: mov     eax, [ecx]
0x6172E6: mov     eax, [eax+4]
0x6172E9: test    eax, eax
0x6172EB: jnz     short loc_6172F2
0x6172ED: mov     eax, offset EmptyString
0x6172F2: mov     edx, ds:0B38DF8h
0x6172F8: push    eax
0x6172F9: push    edx
0x6172FA: lea     eax, [esp+12Ch+string]
0x6172FE: push    offset aSS; "%s %s"
0x617303: push    eax
0x617304: call    __sprintf
0x617309: fld     dword ptr ds:0A46C30h
0x61730F: add     esp, 0Ch
0x617312: fstp    [esp+128h+duration]; duration
0x617315: push    1; unk2
0x617317: lea     ecx, [esp+12Ch+string]
0x61731B: push    0; unk1
0x61731D: push    ecx; string
0x61731E: call    GameUI_QueueMessage
0x617323: add     esp, 10h
