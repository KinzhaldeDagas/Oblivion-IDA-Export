0x60E8D0: sub     esp, 14h
0x60E8D3: push    esi
0x60E8D4: push    0; int
0x60E8D6: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x60E8DB: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x60E8E0: push    0; int
0x60E8E2: mov     esi, ecx
0x60E8E4: call    sub_5E0380
0x60E8E9: push    eax; void *
0x60E8EA: call    OblivionDynamicCast
0x60E8EF: add     esp, 14h
0x60E8F2: test    eax, eax
0x60E8F4: jnz     loc_60EAE9
0x60E8FA: mov     eax, [esi]
0x60E8FC: mov     edx, [eax+334h]
0x60E902: push    1
0x60E904: mov     ecx, esi
0x60E906: call    edx
0x60E908: test    al, al
0x60E90A: jnz     loc_60EAE9
0x60E910: mov     ecx, esi
0x60E912: call    sub_5E6B40
0x60E917: test    al, al
0x60E919: jz      short loc_60E92E
0x60E91B: mov     ecx, esi
0x60E91D: call    sub_5EAE10
0x60E922: cmp     eax, ds:0B333C4h
0x60E928: jz      loc_60EAE9
0x60E92E: mov     eax, [esi]
0x60E930: mov     edx, [eax+18Ch]
0x60E936: mov     ecx, esi
0x60E938: call    edx
0x60E93A: test    eax, eax
0x60E93C: jz      short loc_60E964
0x60E93E: mov     eax, [esi]
0x60E940: mov     edx, [eax+18Ch]
0x60E946: mov     ecx, esi
0x60E948: call    edx
0x60E94A: cmp     eax, 4
0x60E94D: jz      short loc_60E964
0x60E94F: mov     eax, [esi]
0x60E951: mov     edx, [eax+18Ch]
0x60E957: mov     ecx, esi
0x60E959: call    edx
0x60E95B: cmp     eax, 9
0x60E95E: jnz     loc_60EAE9
0x60E964: mov     ecx, esi
0x60E966: call    sub_5E0380
0x60E96B: test    eax, eax
0x60E96D: jz      short loc_60E984
0x60E96F: mov     ecx, esi
0x60E971: call    sub_5E0380
0x60E976: mov     eax, [eax+1Ch]
0x60E979: shr     eax, 0Ch
0x60E97C: test    al, 1
0x60E97E: jnz     loc_60EAE9
0x60E984: mov     ecx, esi
0x60E986: call    sub_5E0F30
0x60E98B: test    al, al
0x60E98D: jz      short loc_60E99B
0x60E98F: mov     edx, [esi]
0x60E991: mov     eax, [edx+320h]
0x60E997: mov     ecx, esi
0x60E999: call    eax
0x60E99B: mov     ecx, [esi+58h]
0x60E99E: mov     edx, [ecx]
0x60E9A0: mov     eax, [edx+178h]
0x60E9A6: push    0
0x60E9A8: call    eax
0x60E9AA: mov     ecx, [esi+58h]
0x60E9AD: mov     edx, [ecx]
0x60E9AF: mov     eax, [edx+49Ch]
0x60E9B5: call    eax
0x60E9B7: mov     eax, [esp+18h+arg_0]
0x60E9BB: test    eax, eax
0x60E9BD: jz      loc_60EAE9
0x60E9C3: mov     ecx, [esi+58h]
0x60E9C6: mov     edx, [ecx]
0x60E9C8: push    edi; int
0x60E9C9: mov     edi, [eax+8]
0x60E9CC: mov     eax, [edx+20h]
0x60E9CF: mov     [esp+1Ch+var_10], edi
0x60E9D3: call    eax
0x60E9D5: lea     ecx, [esp+1Ch+var_C]
0x60E9D9: push    ecx
0x60E9DA: mov     ecx, edi
0x60E9DC: call    sub_67C830
0x60E9E1: lea     edx, [esp+1Ch+var_C]
0x60E9E5: push    edx
0x60E9E6: mov     ecx, esi
0x60E9E8: call    sub_4D7E30
0x60E9ED: fstp    dword ptr [esp+1Ch+var_14]
0x60E9F1: mov     ecx, esi; this
0x60E9F3: call    TESObjectREFR_GetParentCell
0x60E9F8: test    eax, eax
0x60E9FA: jz      short loc_60EA1F
0x60E9FC: mov     ecx, eax; this
0x60E9FE: call    TESObjectCELL_IsInterior
0x60EA03: test    al, al
0x60EA05: jz      short loc_60EA1F
0x60EA07: mov     ecx, offset flt_B36B20
0x60EA0C: call    GameSetting_GetSafeFloatPointer
0x60EA11: mov     ecx, offset unk_B36B18
0x60EA16: call    GameSetting_GetSafeFloatPointer
0x60EA1B: fld     dword ptr [eax]
0x60EA1D: jmp     short loc_60EA25
0x60EA1F: fld     dword ptr ds:0B36B08h
0x60EA25: fstp    [esp+1Ch+arg_0]
0x60EA29: fld     dword ptr [esp+1Ch+var_14]
0x60EA2D: fld     [esp+1Ch+arg_0]
0x60EA31: fadd    st, st
0x60EA33: fcompp
0x60EA35: fnstsw  ax
0x60EA37: test    ah, 41h
0x60EA3A: jp      short loc_60EA5A
0x60EA3C: mov     ecx, esi
0x60EA3E: call    sub_5E6BA0
0x60EA43: test    al, al
0x60EA45: jz      loc_60EAE8
0x60EA4B: mov     ecx, esi; int
0x60EA4D: call    sub_5EAE70
0x60EA52: pop     edi
0x60EA53: pop     esi
0x60EA54: add     esp, 14h
0x60EA57: retn    4
0x60EA5A: mov     ecx, [esi+58h]
0x60EA5D: test    ecx, ecx
0x60EA5F: jz      short loc_60EA8E
0x60EA61: mov     eax, [ecx]
0x60EA63: mov     edx, [eax+184h]
0x60EA69: call    edx
0x60EA6B: test    eax, eax
0x60EA6D: jz      short loc_60EA8E
0x60EA6F: mov     ecx, [esi+58h]
0x60EA72: mov     eax, [ecx]
0x60EA74: mov     edx, [eax+184h]
0x60EA7A: call    edx
0x60EA7C: mov     ecx, eax
0x60EA7E: call    sub_567770
0x60EA83: test    al, al
0x60EA85: jz      short loc_60EA8E
0x60EA87: mov     ecx, esi; int
0x60EA89: call    sub_5EAE70
0x60EA8E: mov     eax, [esi+58h]
0x60EA91: cmp     dword ptr [eax+8], 0
0x60EA95: jz      short loc_60EADC
0x60EA97: mov     ecx, eax
0x60EA99: mov     edx, [ecx]
0x60EA9B: mov     eax, [edx+390h]
0x60EAA1: push    ebx
0x60EAA2: push    ebp
0x60EAA3: mov     edi, ecx
0x60EAA5: mov     ebx, ecx
0x60EAA7: mov     ebp, ecx
0x60EAA9: call    eax
0x60EAAB: mov     edx, [edi]
0x60EAAD: mov     ecx, edi
0x60EAAF: push    eax
0x60EAB0: mov     eax, [edx+0C0h]
0x60EAB6: call    eax
0x60EAB8: mov     edx, [ebx]
0x60EABA: mov     ecx, ebx
0x60EABC: push    eax
0x60EABD: mov     eax, [edx+0CCh]
0x60EAC3: call    eax
0x60EAC5: mov     ecx, [ebp+4]
0x60EAC8: mov     edx, [ebp+8]
0x60EACB: push    eax
0x60EACC: push    ecx
0x60EACD: push    edx
0x60EACE: lea     ecx, [esi+44h]
0x60EAD1: call    sub_4268B0
0x60EAD6: mov     edi, [esp+24h+var_10]
0x60EADA: pop     ebp
0x60EADB: pop     ebx
0x60EADC: push    0; a4
0x60EADE: push    0; a3
0x60EAE0: push    edi; a2
0x60EAE1: mov     ecx, esi; this
0x60EAE3: call    Actor_AddPackage?
0x60EAE8: pop     edi
0x60EAE9: pop     esi
0x60EAEA: add     esp, 14h
0x60EAED: retn    4
