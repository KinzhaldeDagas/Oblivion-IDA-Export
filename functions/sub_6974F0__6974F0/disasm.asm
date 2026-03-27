0x6974F0: mov     eax, [esp+arg_4]
0x6974F4: sub     esp, 0Ch
0x6974F7: push    esi
0x6974F8: mov     esi, ecx
0x6974FA: mov     ecx, [esp+10h+arg_0]
0x6974FE: push    eax
0x6974FF: push    ecx
0x697500: mov     ecx, esi
0x697502: call    sub_69F1E0
0x697507: mov     eax, [esi+98h]
0x69750D: test    eax, eax
0x69750F: jz      short loc_697565
0x697511: push    0; int
0x697513: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x697518: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x69751D: push    0; int
0x69751F: push    eax; a1
0x697520: call    TESForm_LookupByFormID
0x697525: add     esp, 4
0x697528: push    eax; void *
0x697529: call    OblivionDynamicCast
0x69752E: add     esp, 14h
0x697531: test    eax, eax
0x697533: mov     [esi+98h], eax
0x697539: jz      short loc_697565
0x69753B: mov     edx, [eax]
0x69753D: mov     ecx, eax
0x69753F: mov     eax, [edx+154h]
0x697545: call    eax
0x697547: test    eax, eax
0x697549: jz      short loc_697565
0x69754B: mov     edx, [eax]
0x69754D: mov     ecx, eax
0x69754F: mov     eax, [edx+58h]
0x697552: push    offset aBip01Spine2; "Bip01 Spine2"
0x697557: call    eax
0x697559: push    eax; a2
0x69755A: lea     ecx, [esi+90h]; this
0x697560: call    NiSmartPointer_Set??
0x697565: mov     ecx, esi
0x697567: call    sub_696CE0
0x69756C: mov     ecx, [esi+88h]
0x697572: push    ecx
0x697573: mov     ecx, esi
0x697575: call    sub_4D7D10
0x69757A: push    esi; Concurrency::details::SchedulerBase *
0x69757B: mov     ecx, esi; this
0x69757D: call    TESObjectREFR_GetParentCell
0x697582: mov     ecx, eax
0x697584: call    sub_4D35D0
0x697589: mov     edx, [esi+74h]
0x69758C: mov     eax, [edx+84h]
0x697592: test    eax, eax
0x697594: jz      loc_69766B
0x69759A: push    ebx
0x69759B: mov     ebx, [eax+0Ch]
0x69759E: push    edi
0x69759F: mov     edi, [esi+9Ch]
0x6975A5: test    edi, edi
0x6975A7: jz      short loc_6975C3
0x6975A9: mov     ecx, edi; this
0x6975AB: call    sub_6B73E0
0x6975B0: push    edi
0x6975B1: call    FormHeapFree
0x6975B6: add     esp, 4
0x6975B9: mov     dword ptr [esi+9Ch], 0
0x6975C3: mov     eax, ds:0B33398h
0x6975C8: mov     edi, [eax+24h]
0x6975CB: test    edi, edi
0x6975CD: jz      loc_697669
0x6975D3: mov     edx, [esi]
0x6975D5: mov     eax, [edx+154h]
0x6975DB: mov     ecx, esi
0x6975DD: call    eax
0x6975DF: test    eax, eax
0x6975E1: jz      loc_697669
0x6975E7: push    1
0x6975E9: push    102h
0x6975EE: push    ebx
0x6975EF: mov     ecx, edi
0x6975F1: call    OSGLobals_PlaySound
0x6975F6: test    eax, eax
0x6975F8: mov     [esi+9Ch], eax
0x6975FE: jz      short loc_697669
0x697600: mov     edx, [esi]
0x697602: mov     eax, [edx+174h]
0x697608: mov     ecx, esi
0x69760A: call    eax
0x69760C: mov     ecx, [eax]
0x69760E: mov     edx, [eax+4]
0x697611: mov     eax, [eax+8]
0x697614: sub     esp, 0Ch
0x697617: mov     [esp+24h+var_4], eax
0x69761B: fld     [esp+24h+var_4]
0x69761F: fstp    [esp+24h+var_1C]; float
0x697623: mov     [esp+24h+var_8], edx
0x697627: fld     [esp+24h+var_8]
0x69762B: mov     [esp+24h+var_C], ecx
0x69762F: mov     ecx, [esi+9Ch]
0x697635: fstp    [esp+24h+var_20]; float
0x697639: fld     [esp+24h+var_C]
0x69763D: fstp    [esp+24h+var_24]; float
0x697640: call    sub_6B7360
0x697645: mov     ecx, [esi+94h]
0x69764B: mov     edx, [esi+9Ch]
0x697651: mov     eax, [edx]
0x697653: push    ecx
0x697654: push    eax
0x697655: mov     ecx, edi
0x697657: call    sub_6AA980
0x69765C: mov     ecx, [esi+9Ch]
0x697662: push    1
0x697664: call    sub_6B7190
0x697669: pop     edi
0x69766A: pop     ebx
0x69766B: pop     esi
0x69766C: add     esp, 0Ch
0x69766F: retn    8
