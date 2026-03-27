0x51A120: sub     esp, 0Ch
0x51A123: fldz
0x51A125: mov     eax, [esp+0Ch+arg_0]
0x51A129: test    eax, eax
0x51A12B: fstp    [esp+0Ch+var_C]
0x51A12E: push    ebx
0x51A12F: push    esi
0x51A130: push    edi
0x51A131: mov     esi, ecx
0x51A133: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A139: movzx   ecx, byte ptr [eax+4]
0x51A13D: add     ecx, 0FFFFFFECh; switch 15 cases
0x51A140: cmp     ecx, 0Eh
0x51A143: ja      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A149: movzx   ecx, ds:byte_51A394[ecx]
0x51A150: jmp     ds:jpt_51A150[ecx*4]; switch jump
0x51A157: push    0; jumptable 0051A150 case 34
0x51A159: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x51A15E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51A163: push    0; int
0x51A165: push    eax; void *
0x51A166: call    OblivionDynamicCast
0x51A16B: add     esp, 14h
0x51A16E: test    eax, eax
0x51A170: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A176: mov     edx, [eax+74h]
0x51A179: lea     ecx, [eax+74h]
0x51A17C: mov     eax, [edx+10h]
0x51A17F: call    eax
0x51A181: push    eax
0x51A182: call    Calc_AmmoRatingFromDamage?
0x51A187: fstp    [esp+1Ch+var_C]
0x51A18B: fld     [esp+1Ch+var_C]
0x51A18F: add     esp, 4
0x51A192: pop     edi
0x51A193: pop     esi
0x51A194: pop     ebx
0x51A195: add     esp, 0Ch
0x51A198: retn    4
0x51A19B: push    0; jumptable 0051A150 case 33
0x51A19D: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x51A1A2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51A1A7: push    0; int
0x51A1A9: push    eax; void *
0x51A1AA: call    OblivionDynamicCast
0x51A1AF: mov     edi, eax
0x51A1B1: add     esp, 14h
0x51A1B4: test    edi, edi
0x51A1B6: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A1BC: push    edi
0x51A1BD: call    TESHealthForm_GetHealthForForm
0x51A1C2: add     esp, 4
0x51A1C5: test    eax, eax
0x51A1C7: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A1CD: mov     ebx, [esi]
0x51A1CF: mov     ecx, edi
0x51A1D1: call    TESObjectWEAP_GetWeaponSkillAV
0x51A1D6: mov     edx, [ebx+12Ch]
0x51A1DC: push    eax
0x51A1DD: mov     ecx, esi
0x51A1DF: call    edx
0x51A1E1: fstp    dword ptr [esp+18h+var_4]
0x51A1E5: mov     eax, [esi]
0x51A1E7: mov     edx, [eax+12Ch]
0x51A1ED: push    7
0x51A1EF: mov     ecx, esi
0x51A1F1: call    edx
0x51A1F3: fstp    [esp+18h+var_8]
0x51A1F7: mov     eax, [esi]
0x51A1F9: mov     edx, [eax+128h]
0x51A1FF: push    0
0x51A201: mov     ecx, esi
0x51A203: call    edx
0x51A205: mov     [esp+18h+arg_0], eax
0x51A209: fild    [esp+18h+arg_0]
0x51A20D: mov     eax, [esi]
0x51A20F: mov     edx, [eax+12Ch]
0x51A215: push    0Ah
0x51A217: mov     ecx, esi
0x51A219: fstp    [esp+1Ch+var_C]
0x51A21D: call    edx
0x51A21F: fstp    [esp+18h+arg_0]
0x51A223: mov     eax, [edi+88h]
0x51A229: mov     edx, [eax+10h]
0x51A22C: lea     ecx, [edi+88h]
0x51A232: call    edx
0x51A234: fld1
0x51A236: push    0; float
0x51A238: sub     esp, 8
0x51A23B: fst     [esp+24h+var_20]; float
0x51A23F: movzx   eax, ax
0x51A242: fstp    [esp+24h+var_24]; float
0x51A245: push    eax; int
0x51A246: fld     [esp+28h+arg_0]
0x51A24A: push    ecx
0x51A24B: fstp    [esp+2Ch+var_2C]; float
0x51A24E: fld     [esp+2Ch+var_C]
0x51A252: call    Double_To_SInt32
0x51A257: fld     [esp+2Ch+var_8]
0x51A25B: push    eax; int
0x51A25C: call    Double_To_SInt32
0x51A261: fld     dword ptr [esp+30h+var_4]
0x51A265: push    eax; int
0x51A266: call    Double_To_SInt32
0x51A26B: push    eax; int
0x51A26C: call    Calc_WeaponDamage
0x51A271: fstp    [esp+38h+var_C]
0x51A275: fld     [esp+38h+var_C]
0x51A279: add     esp, 20h
0x51A27C: pop     edi
0x51A27D: pop     esi
0x51A27E: pop     ebx
0x51A27F: add     esp, 0Ch
0x51A282: retn    4
0x51A285: push    0; jumptable 0051A150 case 22
0x51A287: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x51A28C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51A291: push    0; int
0x51A293: push    eax; void *
0x51A294: call    OblivionDynamicCast
0x51A299: add     esp, 14h
0x51A29C: test    eax, eax
0x51A29E: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A2A4: mov     eax, [eax+50h]
0x51A2A7: push    eax
0x51A2A8: call    Calc_ClothingRatingFromValue?
0x51A2AD: fstp    [esp+1Ch+var_C]
0x51A2B1: fld     [esp+1Ch+var_C]
0x51A2B5: add     esp, 4
0x51A2B8: pop     edi
0x51A2B9: pop     esi
0x51A2BA: pop     ebx
0x51A2BB: add     esp, 0Ch
0x51A2BE: retn    4
0x51A2C1: push    0; jumptable 0051A150 case 20
0x51A2C3: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x51A2C8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51A2CD: push    0; int
0x51A2CF: push    eax; void *
0x51A2D0: call    OblivionDynamicCast
0x51A2D5: mov     edi, eax
0x51A2D7: add     esp, 14h
0x51A2DA: test    edi, edi
0x51A2DC: jz      TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A2E2: push    edi
0x51A2E3: call    TESHealthForm_GetHealthForForm
0x51A2E8: add     esp, 4
0x51A2EB: test    eax, eax
0x51A2ED: jz      short TESActorBase_GetEquippableItemRating___Return; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A2EF: fld1
0x51A2F1: mov     eax, [esi]
0x51A2F3: mov     edx, [eax+12Ch]
0x51A2F9: push    ecx
0x51A2FA: fstp    [esp+1Ch+var_1C]
0x51A2FD: push    7
0x51A2FF: mov     ecx, esi
0x51A301: call    edx
0x51A303: mov     ebx, [esi]
0x51A305: push    ecx
0x51A306: mov     ecx, edi
0x51A308: fstp    [esp+1Ch+var_1C]; float
0x51A30B: call    TESObjectARMO_GetArmorSkillAV
0x51A310: push    eax; float
0x51A311: mov     eax, [ebx+12Ch]
0x51A317: mov     ecx, esi
0x51A319: call    eax
0x51A31B: push    ecx
0x51A31C: mov     ecx, edi
0x51A31E: fstp    [esp+24h+var_24]; float
0x51A321: call    TESObjectARMO_GetArmorRating
0x51A326: fnstcw  word ptr [esp+24h+arg_0]
0x51A32A: movzx   eax, word ptr [esp+24h+arg_0]
0x51A32F: or      eax, 0C00h
0x51A334: mov     dword ptr [esp+24h+var_4], eax
0x51A338: fldcw   [esp+24h+var_4]
0x51A33C: fistp   dword ptr [esp+24h+var_4]
0x51A340: movzx   ecx, [esp+24h+var_4]
0x51A345: push    ecx; int
0x51A346: fldcw   word ptr [esp+28h+arg_0]
0x51A34A: call    Calc_ArmorRating
0x51A34F: fstp    [esp+28h+var_C]
0x51A353: fld     [esp+28h+var_C]
0x51A357: add     esp, 10h
0x51A35A: pop     edi
0x51A35B: pop     esi
0x51A35C: pop     ebx
0x51A35D: add     esp, 0Ch
0x51A360: retn    4
0x51A363: fld     dword ptr ds:0A2FE7Ch; jumptable 0051A150 case 26
0x51A369: fstp    [esp+18h+var_C]
0x51A36D: fld     [esp+18h+var_C]; jumptable 0051A150 default case, cases 21,23-25,27-32
0x51A371: pop     edi
0x51A372: pop     esi
0x51A373: pop     ebx
0x51A374: add     esp, 0Ch
0x51A377: retn    4
