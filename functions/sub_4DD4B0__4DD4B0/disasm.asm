0x4DD4B0: sub     esp, 10h
0x4DD4B3: push    ebp
0x4DD4B4: mov     ebp, [esp+14h+a1]
0x4DD4B8: test    ebp, ebp
0x4DD4BA: push    esi
0x4DD4BB: jz      short loc_4DD4CA
0x4DD4BD: mov     ecx, ebp; this
0x4DD4BF: call    TESObjectCELL_IsInterior
0x4DD4C4: test    al, al
0x4DD4C6: jnz     short loc_4DD4CA
0x4DD4C8: xor     ebp, ebp
0x4DD4CA: mov     esi, [esp+18h+arg_0]
0x4DD4CE: test    esi, esi
0x4DD4D0: jz      loc_4DD841
0x4DD4D6: test    ebp, ebp
0x4DD4D8: push    ebx
0x4DD4D9: mov     ebx, [esp+1Ch+arg_8]
0x4DD4DD: jnz     short loc_4DD4E7
0x4DD4DF: test    ebx, ebx
0x4DD4E1: jz      loc_4DD840
0x4DD4E7: mov     eax, [esi]
0x4DD4E9: mov     edx, [eax+190h]
0x4DD4EF: mov     ecx, esi
0x4DD4F1: mov     byte ptr [esp+1Ch+arg_0], 0
0x4DD4F6: mov     byte ptr [esp+1Ch+a1], 0
0x4DD4FB: call    edx
0x4DD4FD: test    al, al
0x4DD4FF: jz      short loc_4DD53E
0x4DD501: mov     eax, [esi]
0x4DD503: mov     edx, [eax+380h]
0x4DD509: mov     ecx, esi
0x4DD50B: call    edx
0x4DD50D: test    eax, eax
0x4DD50F: jz      short loc_4DD53E
0x4DD511: mov     eax, [esi]
0x4DD513: mov     edx, [eax+380h]
0x4DD519: mov     ecx, esi
0x4DD51B: call    edx
0x4DD51D: cmp     dword ptr [eax+58h], 0
0x4DD521: jz      short loc_4DD53E
0x4DD523: mov     eax, [esi]
0x4DD525: mov     edx, [eax+380h]
0x4DD52B: mov     ecx, esi
0x4DD52D: call    edx
0x4DD52F: mov     ecx, [eax+58h]
0x4DD532: mov     eax, [ecx]
0x4DD534: mov     edx, [eax+474h]
0x4DD53A: push    1
0x4DD53C: call    edx
0x4DD53E: mov     eax, [esi+40h]
0x4DD541: push    edi
0x4DD542: xor     edi, edi
0x4DD544: test    eax, eax
0x4DD546: jnz     short loc_4DD556
0x4DD548: mov     eax, [esi+18h]
0x4DD54B: mov     edx, [eax]
0x4DD54D: lea     ecx, [esi+18h]
0x4DD550: call    edx
0x4DD552: test    eax, eax
0x4DD554: jz      short loc_4DD55F
0x4DD556: mov     ecx, eax; this
0x4DD558: call    TESObjectCELL_GetWorldSpace
0x4DD55D: mov     edi, eax
0x4DD55F: mov     eax, [esi+40h]
0x4DD562: mov     edx, [esi]
0x4DD564: mov     dword ptr [esp+1Ch+var_C], eax
0x4DD568: mov     eax, [edx+198h]
0x4DD56E: push    0
0x4DD570: mov     ecx, esi
0x4DD572: call    eax
0x4DD574: test    al, al
0x4DD576: jz      short loc_4DD58E
0x4DD578: lea     ecx, [esi+44h]
0x4DD57B: call    sub_4212E0
0x4DD580: mov     edx, [esi]
0x4DD582: mov     eax, [edx+9Ch]
0x4DD588: push    0
0x4DD58A: mov     ecx, esi
0x4DD58C: call    eax
0x4DD58E: test    ebp, ebp
0x4DD590: jz      loc_4DD621
0x4DD596: cmp     [esp+20h+var_10], ebp
0x4DD59A: jz      short loc_4DD5C2
0x4DD59C: test    edi, edi
0x4DD59E: mov     byte ptr [esp+20h+a1], 1
0x4DD5A3: jz      short loc_4DD5B8
0x4DD5A5: mov     ecx, esi; this
0x4DD5A7: call    TESObjectREFR_IsPersistent?
0x4DD5AC: test    al, al
0x4DD5AE: jz      short loc_4DD5B8
0x4DD5B0: push    esi
0x4DD5B1: mov     ecx, edi
0x4DD5B3: call    sub_4F03D0
0x4DD5B8: push    esi; Concurrency::details::SchedulerBase *
0x4DD5B9: mov     ecx, ebp
0x4DD5BB: call    sub_4D35D0
0x4DD5C0: jmp     short loc_4DD601
0x4DD5C2: mov     edx, [esi]
0x4DD5C4: mov     eax, [edx+178h]
0x4DD5CA: push    0
0x4DD5CC: mov     ecx, esi
0x4DD5CE: call    eax
0x4DD5D0: mov     edx, [esi]
0x4DD5D2: mov     eax, [edx+188h]
0x4DD5D8: mov     ecx, esi
0x4DD5DA: call    eax
0x4DD5DC: test    al, al
0x4DD5DE: jz      short loc_4DD601
0x4DD5E0: mov     ecx, esi; this
0x4DD5E2: call    MobileObject_GetCharProxy
0x4DD5E7: mov     edi, eax
0x4DD5E9: test    edi, edi
0x4DD5EB: jz      short loc_4DD601
0x4DD5ED: mov     edx, [esi]
0x4DD5EF: mov     eax, [edx+174h]
0x4DD5F5: mov     ecx, esi
0x4DD5F7: call    eax
0x4DD5F9: push    eax; a2
0x4DD5FA: mov     ecx, edi; this
0x4DD5FC: call    sub_452A10
0x4DD601: mov     ecx, ds:0B333A0h
0x4DD607: push    1; a2
0x4DD609: push    ebp; a1
0x4DD60A: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4DD60F: test    al, al
0x4DD611: jz      loc_4DD7B0
0x4DD617: mov     byte ptr [esp+20h+arg_0], 1
0x4DD61C: jmp     loc_4DD7B0
0x4DD621: mov     ecx, [esp+20h+var_10]; this
0x4DD625: test    ecx, ecx
0x4DD627: jz      short loc_4DD637
0x4DD629: call    TESObjectCELL_IsInterior
0x4DD62E: test    al, al
0x4DD630: jz      short loc_4DD637
0x4DD632: mov     byte ptr [esp+20h+a1], 1
0x4DD637: mov     ecx, esi; this
0x4DD639: call    TESObjectREFR_IsPersistent?
0x4DD63E: test    al, al
0x4DD640: jz      short loc_4DD65A
0x4DD642: cmp     edi, ebx
0x4DD644: jz      short loc_4DD65A
0x4DD646: test    edi, edi
0x4DD648: jz      short loc_4DD652
0x4DD64A: push    esi
0x4DD64B: mov     ecx, edi
0x4DD64D: call    sub_4F03D0
0x4DD652: push    esi; Concurrency::details::SchedulerBase *
0x4DD653: mov     ecx, ebx
0x4DD655: call    TESWorldspace_Boh?
0x4DD65A: mov     edx, [esi]
0x4DD65C: mov     eax, [edx+174h]
0x4DD662: mov     ecx, esi
0x4DD664: call    eax
0x4DD666: fld     dword ptr [eax]
0x4DD668: fstp    dword ptr [esp+20h+var_C]
0x4DD66C: fld     dword ptr [esp+20h+var_C]
0x4DD670: fistp   [esp+20h+var_8]
0x4DD674: mov     edx, [esi]
0x4DD676: mov     eax, [edx+174h]
0x4DD67C: mov     ecx, esi
0x4DD67E: call    eax
0x4DD680: fld     dword ptr [eax+4]
0x4DD683: fstp    dword ptr [esp+20h+var_4]
0x4DD687: fld     dword ptr [esp+20h+var_4]
0x4DD68B: fistp   dword ptr [esp+20h+var_C]
0x4DD68F: mov     ecx, dword ptr [esp+20h+var_C]
0x4DD693: mov     edx, [esp+20h+var_8]
0x4DD697: sar     ecx, 0Ch
0x4DD69A: push    ecx; signed int
0x4DD69B: sar     edx, 0Ch
0x4DD69E: push    edx; signed int
0x4DD69F: mov     ecx, ebx; this
0x4DD6A1: call    TESWorldSpace__GetCellAtCellCoord
0x4DD6A6: mov     ebp, eax
0x4DD6A8: test    ebp, ebp
0x4DD6AA: jz      loc_4DD765
0x4DD6B0: push    esi; Concurrency::details::SchedulerBase *
0x4DD6B1: mov     ecx, ebp
0x4DD6B3: call    sub_4D35D0
0x4DD6B8: mov     ecx, ds:0B333A0h
0x4DD6BE: push    1; a2
0x4DD6C0: push    ebp; a1
0x4DD6C1: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4DD6C6: test    al, al
0x4DD6C8: jz      loc_4DD7B0
0x4DD6CE: cmp     edi, ebx
0x4DD6D0: jz      short loc_4DD707
0x4DD6D2: mov     eax, [esi]
0x4DD6D4: mov     edx, [eax+190h]
0x4DD6DA: mov     ecx, esi
0x4DD6DC: mov     byte ptr [esp+20h+arg_0], 1
0x4DD6E1: mov     byte ptr [esp+20h+a1], 1
0x4DD6E6: call    edx
0x4DD6E8: test    al, al
0x4DD6EA: jz      loc_4DD7B0
0x4DD6F0: mov     ecx, [esi+58h]
0x4DD6F3: test    ecx, ecx
0x4DD6F5: jz      loc_4DD7B0
0x4DD6FB: mov     eax, [ecx]
0x4DD6FD: mov     edx, [eax+20h]
0x4DD700: call    edx
0x4DD702: jmp     loc_4DD7B0
0x4DD707: cmp     byte ptr [esp+20h+a1], 0
0x4DD70C: mov     edi, [esp+20h+var_10]
0x4DD710: jz      short loc_4DD738
0x4DD712: test    edi, edi
0x4DD714: jz      short loc_4DD74E
0x4DD716: mov     ecx, ds:0B333A0h
0x4DD71C: push    1; a2
0x4DD71E: push    edi; a1
0x4DD71F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4DD724: test    al, al
0x4DD726: jz      short loc_4DD738
0x4DD728: mov     eax, [esi]
0x4DD72A: mov     edx, [eax+178h]
0x4DD730: push    0
0x4DD732: mov     ecx, esi
0x4DD734: call    edx
0x4DD736: jmp     short loc_4DD7B0
0x4DD738: test    edi, edi
0x4DD73A: jz      short loc_4DD74E
0x4DD73C: mov     ecx, ds:0B333A0h
0x4DD742: push    1; a2
0x4DD744: push    edi; a1
0x4DD745: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4DD74A: test    al, al
0x4DD74C: jnz     short loc_4DD7B0
0x4DD74E: mov     eax, [esi]
0x4DD750: mov     edx, [eax+154h]
0x4DD756: mov     ecx, esi
0x4DD758: call    edx
0x4DD75A: test    eax, eax
0x4DD75C: jz      short loc_4DD7B0
0x4DD75E: mov     byte ptr [esp+20h+arg_0], 1
0x4DD763: jmp     short loc_4DD7B0
0x4DD765: mov     ecx, [esp+20h+var_10]
0x4DD769: test    ecx, ecx
0x4DD76B: jz      short loc_4DD773
0x4DD76D: push    esi
0x4DD76E: call    sub_4CECD0
0x4DD773: mov     eax, [esi]
0x4DD775: mov     edx, [eax+190h]
0x4DD77B: mov     ecx, esi
0x4DD77D: call    edx
0x4DD77F: test    al, al
0x4DD781: jz      short loc_4DD7B0
0x4DD783: mov     ecx, ds:0B333C4h; this
0x4DD789: call    PlayerCharacter__IsSleeping?
0x4DD78E: test    al, al
0x4DD790: jnz     short loc_4DD7B0
0x4DD792: mov     eax, ds:0B33B00h
0x4DD797: mov     ecx, [eax+18h]
0x4DD79A: shr     ecx, 5
0x4DD79D: test    cl, 1
0x4DD7A0: jnz     short loc_4DD7B0
0x4DD7A2: mov     edx, [esi]
0x4DD7A4: mov     eax, [edx+150h]
0x4DD7AA: push    0
0x4DD7AC: mov     ecx, esi
0x4DD7AE: call    eax
0x4DD7B0: mov     edx, [esi]
0x4DD7B2: mov     eax, [edx+188h]
0x4DD7B8: mov     ecx, esi
0x4DD7BA: call    eax
0x4DD7BC: test    al, al
0x4DD7BE: pop     edi
0x4DD7BF: jz      short loc_4DD818
0x4DD7C1: cmp     byte ptr [esp+1Ch+arg_0], 0
0x4DD7C6: jnz     short loc_4DD818
0x4DD7C8: push    esi
0x4DD7C9: mov     ecx, offset ActorProcessManager_ptr
0x4DD7CE: call    sub_6748B0
0x4DD7D3: test    ebp, ebp
0x4DD7D5: jnz     short loc_4DD818
0x4DD7D7: mov     ecx, esi
0x4DD7D9: call    MobileObject_GetProcessLevel
0x4DD7DE: cmp     eax, 3
0x4DD7E1: jnz     short loc_4DD818
0x4DD7E3: mov     ecx, esi; this
0x4DD7E5: call    TESObjectREFR_IsPersistent?
0x4DD7EA: test    al, al
0x4DD7EC: jnz     short loc_4DD818
0x4DD7EE: mov     edx, [esi]
0x4DD7F0: mov     eax, [esp+1Ch+var_10]
0x4DD7F4: mov     edx, [edx+194h]
0x4DD7FA: push    eax
0x4DD7FB: mov     ecx, esi
0x4DD7FD: call    edx
0x4DD7FF: mov     ecx, ds:0B33B00h
0x4DD805: push    esi
0x4DD806: call    sub_463A90
0x4DD80B: mov     eax, [esi]
0x4DD80D: mov     edx, [eax+194h]
0x4DD813: push    ebp
0x4DD814: mov     ecx, esi
0x4DD816: call    edx
0x4DD818: cmp     byte ptr [esp+1Ch+a1], 0
0x4DD81D: jz      short loc_4DD82B
0x4DD81F: mov     eax, [esi]
0x4DD821: mov     edx, [eax+144h]
0x4DD827: mov     ecx, esi
0x4DD829: call    edx
0x4DD82B: cmp     byte ptr [esp+1Ch+arg_0], 0
0x4DD830: jz      short loc_4DD840
0x4DD832: mov     eax, [esi]
0x4DD834: mov     edx, [eax+178h]
0x4DD83A: push    0
0x4DD83C: mov     ecx, esi
0x4DD83E: call    edx
0x4DD840: pop     ebx
0x4DD841: pop     esi
0x4DD842: pop     ebp
0x4DD843: add     esp, 10h
0x4DD846: retn
