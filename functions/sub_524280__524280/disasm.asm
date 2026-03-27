0x524280: sub     esp, 10h
0x524283: push    esi
0x524284: push    edi
0x524285: mov     eax, ecx
0x524287: xor     edi, edi
0x524289: cmp     eax, edi
0x52428B: mov     [esp+18h+var_10], eax
0x52428F: jz      short loc_524296
0x524291: add     eax, 44h ; 'D'
0x524294: jmp     short loc_524298
0x524296: xor     eax, eax
0x524298: mov     esi, [esp+18h+a1]
0x52429C: push    eax
0x52429D: push    esi; a1
0x52429E: call    ContainerExtraData_GetContainerExtraDataForRef
0x5242A3: push    edi; int
0x5242A4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5242A9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5242AE: push    edi; int
0x5242AF: push    esi; void *
0x5242B0: mov     [esp+34h+var_4], eax
0x5242B4: mov     [esp+34h+a1], edi
0x5242B8: mov     [esp+34h+var_8], edi
0x5242BC: call    OblivionDynamicCast
0x5242C1: add     esp, 1Ch
0x5242C4: cmp     esi, edi
0x5242C6: mov     [esp+18h+var_C], eax
0x5242CA: jz      loc_5244CF
0x5242D0: push    ebp
0x5242D1: mov     ebp, [esp+1Ch+arg_4]
0x5242D5: cmp     ebp, edi
0x5242D7: jz      loc_5244CE
0x5242DD: xor     esi, esi
0x5242DF: mov     [esp+1Ch+arg_4], esi
0x5242E3: push    ebx
0x5242E4: mov     ecx, [esp+20h+var_4]
0x5242E8: push    0
0x5242EA: push    esi
0x5242EB: call    ContainerExtraData_GetEquippedInstance
0x5242F0: mov     ebx, eax
0x5242F2: test    ebx, ebx
0x5242F4: jz      loc_5244BD
0x5242FA: mov     edi, [ebx+8]
0x5242FD: test    edi, edi
0x5242FF: jnz     short loc_524313
0x524301: mov     ecx, ebx
0x524303: call    ContainerEntryExtraData_DestroyDataTable
0x524308: push    ebx
0x524309: call    FormHeapFree
0x52430E: jmp     loc_5244BA
0x524313: cmp     esi, 0Fh; switch 16 cases
0x524316: ja      def_524323; jumptable 00524323 default case, cases 10,11
0x52431C: movzx   eax, ds:byte_5244F4[esi]
0x524323: jmp     ds:jpt_524323[eax*4]; switch jump
0x52432A: push    edi; jumptable 00524323 case 9
0x52432B: mov     ecx, ebp
0x52432D: call    sub_478CA0
0x524332: jmp     loc_5244A9
0x524337: mov     esi, [esp+20h+var_C]; jumptable 00524323 case 14
0x52433B: test    esi, esi
0x52433D: jz      short loc_524363
0x52433F: mov     ecx, [esi+58h]
0x524342: mov     edx, [ecx]
0x524344: mov     eax, [edx+8]
0x524347: call    eax
0x524349: cmp     eax, 2
0x52434C: jge     short loc_524363
0x52434E: mov     ecx, [esi+58h]
0x524351: mov     edx, [ecx]
0x524353: mov     eax, [edx+0F0h]
0x524359: push    0
0x52435B: call    eax
0x52435D: mov     [esp+20h+a1], eax
0x524361: jmp     short loc_524367
0x524363: mov     eax, [esp+20h+a1]
0x524367: test    eax, eax
0x524369: jz      short loc_52437C
0x52436B: push    0
0x52436D: mov     ecx, eax
0x52436F: call    ContainerEntryExtraData_HasWorn
0x524374: test    al, al
0x524376: jz      loc_5244A9
0x52437C: push    edi
0x52437D: mov     ecx, ebp
0x52437F: call    sub_478DF0
0x524384: jmp     loc_5244A9
0x524389: push    edi; jumptable 00524323 case 12
0x52438A: mov     ecx, ebp
0x52438C: call    sub_478D70
0x524391: jmp     loc_5244A9
0x524396: push    0; jumptable 00524323 cases 0,1
0x524398: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x52439D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5243A2: push    0; int
0x5243A4: push    edi; void *
0x5243A5: call    OblivionDynamicCast
0x5243AA: add     esp, 14h
0x5243AD: test    eax, eax
0x5243AF: jz      loc_5244A9
0x5243B5: mov     ecx, [esp+20h+var_10]
0x5243B9: mov     edx, [ecx+28h]
0x5243BC: push    0FFFFFFFFh; int
0x5243BE: and     edx, 1
0x5243C1: push    edx; int
0x5243C2: push    ebp; int
0x5243C3: mov     ecx, eax; int
0x5243C5: call    sub_4691D0
0x5243CA: jmp     loc_5244A9
0x5243CF: mov     esi, [esp+20h+var_C]; jumptable 00524323 case 13
0x5243D3: test    esi, esi
0x5243D5: jz      short loc_5243FF
0x5243D7: mov     ecx, [esi+58h]
0x5243DA: test    ecx, ecx
0x5243DC: jz      short loc_5243FF
0x5243DE: mov     eax, [ecx]
0x5243E0: mov     edx, [eax+8]
0x5243E3: call    edx
0x5243E5: cmp     eax, 2
0x5243E8: jge     short loc_5243FF
0x5243EA: mov     ecx, [esi+58h]
0x5243ED: mov     eax, [ecx]
0x5243EF: mov     edx, [eax+0F8h]
0x5243F5: push    0
0x5243F7: call    edx
0x5243F9: mov     [esp+20h+var_8], eax
0x5243FD: jmp     short loc_524403
0x5243FF: mov     eax, [esp+20h+var_8]
0x524403: test    eax, eax
0x524405: jz      short loc_524418; jumptable 00524323 cases 2-8,15
0x524407: push    0
0x524409: mov     ecx, eax
0x52440B: call    ContainerEntryExtraData_HasWorn
0x524410: test    al, al
0x524412: jz      loc_5244A9
0x524418: push    0; jumptable 00524323 cases 2-8,15
0x52441A: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x52441F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x524424: push    0; int
0x524426: push    edi; void *
0x524427: call    OblivionDynamicCast
0x52442C: add     esp, 14h
0x52442F: push    1
0x524431: mov     ecx, ebx
0x524433: mov     esi, eax
0x524435: call    ContainerEntryExtraData_HasWorn
0x52443A: test    esi, esi
0x52443C: jz      short loc_52445E
0x52443E: mov     edx, [esp+20h+var_10]
0x524442: xor     ecx, ecx
0x524444: test    al, al
0x524446: mov     eax, [edx+28h]
0x524449: setnz   cl
0x52444C: and     eax, 1
0x52444F: add     ecx, 6
0x524452: push    ecx; int
0x524453: push    eax; int
0x524454: push    ebp; int
0x524455: mov     ecx, esi; int
0x524457: call    sub_4691D0
0x52445C: jmp     short loc_5244A9
0x52445E: push    edi; a1
0x52445F: call    TESFullName_GetNameForForm
0x524464: push    eax
0x524465: push    offset aBadPartSInTesn; "Bad part '%s' in TESNPC::InitWorn."
0x52446A: jmp     short loc_5244A1
0x52446C: push    0; jumptable 00524323 default case, cases 10,11
0x52446E: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x524473: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x524478: push    0; int
0x52447A: push    edi; void *
0x52447B: call    OblivionDynamicCast
0x524480: add     esp, 14h
0x524483: test    eax, eax
0x524485: jz      short loc_52448E
0x524487: mov     eax, [eax+4]
0x52448A: test    eax, eax
0x52448C: jnz     short loc_524493
0x52448E: mov     eax, offset EmptyString
0x524493: mov     ecx, ds:0B06588h[esi*4]
0x52449A: push    eax
0x52449B: push    ecx; ArgList
0x52449C: push    offset aNeedToAddSuppo; "Need to add support for BipedObject '%s"...
0x5244A1: call    PrintError
0x5244A6: add     esp, 0Ch
0x5244A9: mov     ecx, ebx
0x5244AB: call    ContainerEntryExtraData_DestroyDataTable
0x5244B0: push    ebx
0x5244B1: call    FormHeapFree
0x5244B6: mov     esi, [esp+24h+arg_4]
0x5244BA: add     esp, 4
0x5244BD: add     esi, 1
0x5244C0: cmp     esi, 10h
0x5244C3: mov     [esp+20h+arg_4], esi
0x5244C7: jl      loc_5242E4
0x5244CD: pop     ebx
0x5244CE: pop     ebp
0x5244CF: pop     edi
0x5244D0: pop     esi
0x5244D1: add     esp, 10h
0x5244D4: retn    8
