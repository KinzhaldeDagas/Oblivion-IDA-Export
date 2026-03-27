0x6765F0: push    0FFFFFFFFh
0x6765F2: push    offset SEH_6765F0
0x6765F7: mov     eax, large fs:0
0x6765FD: push    eax
0x6765FE: sub     esp, 18h
0x676601: push    ebx
0x676602: push    ebp
0x676603: push    esi
0x676604: push    edi
0x676605: mov     eax, ds:0B30AACh
0x67660A: xor     eax, esp
0x67660C: push    eax; int
0x67660D: lea     eax, [esp+38h+var_C]
0x676611: mov     large fs:0, eax
0x676617: mov     [esp+38h+var_24], ecx
0x67661B: mov     ecx, ds:0B333C4h
0x676621: mov     al, [ecx+116h]
0x676627: test    al, al
0x676629: jnz     loc_67689B
0x67662F: mov     eax, [ecx]
0x676631: mov     edx, [eax+380h]
0x676637: call    edx
0x676639: test    eax, eax
0x67663B: mov     ecx, ds:0B333C4h; int
0x676641: jnz     short loc_676650
0x676643: cmp     dword ptr [ecx+1E0h], 0
0x67664A: jz      loc_67677D
0x676650: mov     edx, [esp+38h+arg_0]
0x676654: xor     esi, esi
0x676656: cmp     edx, esi
0x676658: jz      loc_676750
0x67665E: mov     edi, [esp+38h+var_18]
0x676662: fldz
0x676664: sub     esp, 0Ch
0x676667: fstp    [esp+44h+var_20]
0x67666B: mov     eax, esp
0x67666D: mov     [eax], edi
0x67666F: mov     edi, [esp+44h+var_14]
0x676673: mov     [eax+4], edi
0x676676: mov     edi, [esp+44h+var_10]
0x67667A: mov     [eax+8], edi
0x67667D: lea     eax, [esp+44h+var_20]
0x676681: push    eax; int
0x676682: push    edx; int
0x676683: call    sub_5F0810
0x676688: mov     ecx, ds:0B333C4h
0x67668E: cmp     [ecx+1E0h], esi
0x676694: jz      loc_67677D
0x67669A: push    3Ch ; '<'; Size
0x67669C: call    FormHeapAlloc
0x6766A1: add     esp, 4
0x6766A4: mov     [esp+38h+var_1C], eax
0x6766A8: cmp     eax, esi
0x6766AA: mov     [esp+38h+var_4], esi
0x6766AE: jz      short loc_6766B9
0x6766B0: mov     ecx, eax; this
0x6766B2: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6766B7: mov     esi, eax
0x6766B9: or      ebp, 0FFFFFFFFh
0x6766BC: push    5
0x6766BE: mov     ecx, esi
0x6766C0: mov     [esp+3Ch+var_4], ebp
0x6766C4: call    TESPackage_SetType?
0x6766C9: or      dword ptr [esi+1Ch], 6
0x6766CD: push    0Ch; Size
0x6766CF: call    FormHeapAlloc
0x6766D4: add     esp, 4
0x6766D7: mov     [esp+38h+var_1C], eax
0x6766DB: test    eax, eax
0x6766DD: mov     [esp+38h+var_4], 1
0x6766E5: jz      short loc_6766F2
0x6766E7: mov     ecx, eax
0x6766E9: call    TESPackage_LocationData_constr
0x6766EE: mov     edi, eax
0x6766F0: jmp     short loc_6766F4
0x6766F2: xor     edi, edi
0x6766F4: push    0
0x6766F6: mov     ecx, edi
0x6766F8: mov     [esp+3Ch+var_4], ebp
0x6766FC: call    TESPackage_LocationData_SetType
0x676701: mov     edx, ds:0B333C4h
0x676707: mov     eax, [edx+1E0h]
0x67670D: push    eax
0x67670E: mov     ecx, edi
0x676710: call    TESPackage_LocationData_SetReference
0x676715: push    edi
0x676716: mov     ecx, esi
0x676718: call    TESPackage_SetLocation
0x67671D: test    edi, edi
0x67671F: jz      short loc_676731
0x676721: mov     ecx, edi
0x676723: call    TESPackage_LocationData_destr
0x676728: push    edi
0x676729: call    FormHeapFree
0x67672E: add     esp, 4
0x676731: mov     ecx, esi
0x676733: call    sub_5672A0
0x676738: mov     ecx, ds:0B333C4h
0x67673E: mov     ecx, [ecx+1E0h]; this
0x676744: push    1; a4
0x676746: push    1; a3
0x676748: push    esi; a2
0x676749: call    Actor_AddPackage?
0x67674E: jmp     short loc_67677D
0x676750: cmp     [ecx+1E0h], esi
0x676756: jz      short loc_67677D
0x676758: mov     ecx, [ecx+1E0h]; int
0x67675E: call    sub_5EAE70
0x676763: mov     edx, ds:0B333C4h
0x676769: mov     eax, [edx+1E0h]
0x67676F: mov     ecx, [eax+58h]
0x676772: mov     edx, [ecx]
0x676774: mov     eax, [edx+17Ch]
0x67677A: push    esi
0x67677B: call    eax
0x67677D: mov     esi, [esp+38h+var_24]
0x676781: xor     ebx, ebx
0x676783: test    ebx, ebx
0x676785: jnz     short loc_67678A
0x676787: push    ebx
0x676788: jmp     short loc_67679C
0x67678A: cmp     ebx, 1
0x67678D: jnz     short loc_676792
0x67678F: push    ebx
0x676790: jmp     short loc_67679C
0x676792: cmp     ebx, 2
0x676795: jnz     short loc_67679A
0x676797: push    ebx
0x676798: jmp     short loc_67679C
0x67679A: push    3; a2
0x67679C: mov     ecx, esi; this
0x67679E: call    sub_673A50
0x6767A3: mov     ecx, eax; this
0x6767A5: call    sub_7616D0
0x6767AA: mov     edi, eax
0x6767AC: test    edi, edi
0x6767AE: mov     [esp+38h+var_1C], edi
0x6767B2: jz      loc_67688F
0x6767B8: jmp     short loc_6767C0
0x6767BA: align 10h
0x6767C0: mov     ecx, [edi]
0x6767C2: test    ecx, ecx
0x6767C4: jz      loc_67688F
0x6767CA: mov     edx, [ecx]
0x6767CC: mov     eax, [edx+190h]
0x6767D2: xor     esi, esi
0x6767D4: call    eax
0x6767D6: test    al, al
0x6767D8: jz      short loc_6767DC
0x6767DA: mov     esi, [edi]
0x6767DC: test    esi, esi
0x6767DE: mov     edi, [edi+4]
0x6767E1: jz      loc_676883
0x6767E7: mov     ecx, ds:0B333C4h
0x6767ED: push    1; char
0x6767EF: push    esi; Concurrency::details::SchedulerBase *
0x6767F0: call    sub_660F10
0x6767F5: test    al, al
0x6767F7: jz      short loc_67681F
0x6767F9: mov     eax, [esp+38h+arg_0]
0x6767FD: test    eax, eax
0x6767FF: jz      short loc_67681F
0x676801: mov     ecx, dword ptr [esp+38h+arg_8]
0x676805: push    ecx; char
0x676806: push    eax; int
0x676807: mov     ecx, esi; Concurrency::details::SchedulerBase *
0x676809: call    sub_5E7C30
0x67680E: mov     ecx, esi; this
0x676810: call    Actor__GetProcessLevel
0x676815: cmp     eax, ebx
0x676817: jz      short loc_676883
0x676819: mov     edi, [esp+38h+var_1C]
0x67681D: jmp     short loc_676883
0x67681F: mov     ecx, esi
0x676821: call    sub_5E6BC0
0x676826: test    al, al
0x676828: jz      short loc_676883
0x67682A: mov     ecx, [esi+58h]
0x67682D: mov     edx, [ecx]
0x67682F: mov     eax, [edx+184h]
0x676835: call    eax
0x676837: mov     ebp, eax
0x676839: test    byte ptr [ebp+1Eh], 1
0x67683D: jz      short loc_676883
0x67683F: mov     ecx, [esp+38h+arg_4]; this
0x676843: test    ecx, ecx
0x676845: jz      short loc_676883
0x676847: call    GetTeleportExtraData
0x67684C: mov     ecx, eax
0x67684E: call    sub_42B410
0x676853: mov     ecx, eax; this
0x676855: call    GetTeleportExtraData
0x67685A: test    eax, eax
0x67685C: jz      short loc_676883
0x67685E: mov     ecx, eax
0x676860: call    sub_6899C0
0x676865: push    eax
0x676866: mov     ecx, esi
0x676868: call    sub_4D7E30
0x67686D: fcomp   qword ptr ds:0A37478h
0x676873: fnstsw  ax
0x676875: test    ah, 5
0x676878: jp      short loc_676883
0x67687A: push    0
0x67687C: mov     ecx, ebp
0x67687E: call    sub_5668E0
0x676883: test    edi, edi
0x676885: mov     esi, [esp+38h+var_24]
0x676889: jnz     loc_6767C0
0x67688F: add     ebx, 1
0x676892: cmp     ebx, 4
0x676895: jl      loc_676783
0x67689B: mov     ecx, dword ptr [esp+38h+var_C]
0x67689F: mov     large fs:0, ecx
0x6768A6: pop     ecx
0x6768A7: pop     edi
0x6768A8: pop     esi
0x6768A9: pop     ebp
0x6768AA: pop     ebx
0x6768AB: add     esp, 24h
0x6768AE: retn    0Ch
