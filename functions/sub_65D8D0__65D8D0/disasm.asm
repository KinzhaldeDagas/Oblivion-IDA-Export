0x65D8D0: push    0FFFFFFFFh
0x65D8D2: push    offset SEH_65D8D0
0x65D8D7: mov     eax, large fs:0
0x65D8DD: push    eax
0x65D8DE: sub     esp, 18h
0x65D8E1: push    ebx
0x65D8E2: push    esi
0x65D8E3: push    edi
0x65D8E4: mov     eax, ds:0B30AACh
0x65D8E9: xor     eax, esp
0x65D8EB: push    eax
0x65D8EC: lea     eax, [esp+34h+var_C]
0x65D8F0: mov     large fs:0, eax
0x65D8F6: mov     edi, ecx
0x65D8F8: mov     esi, dword ptr [esp+34h+enabled]
0x65D8FC: xor     ebx, ebx
0x65D8FE: cmp     esi, ebx
0x65D900: jz      loc_65D9BC
0x65D906: push    1
0x65D908: mov     ecx, esi
0x65D90A: call    sub_52B440
0x65D90F: test    eax, eax
0x65D911: jz      loc_65D9BC
0x65D917: call    TravelPath_GetIgnoreLocks; Verified: reads policy byte 0 at qword_B3BB2C[0xBA]. CalcLowPathToPoint's first boolean argument is saved/restored through this accessor. TravelPath_ComputeDoorTransitionPenalty skips its lock/access penalty branch when this flag is true.
0x65D91C: mov     ecx, esi
0x65D91E: mov     [esp+34h+enabled], al
0x65D922: call    sub_68CA20
0x65D927: push    eax; enabled
0x65D928: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x65D92D: call    TravelPath_GetIgnoreMinUse; Verified: reads policy byte 1 at qword_B3BB2C[0xBA]. When false, TravelPath_ComputeDoorTransitionPenalty may add the extra cost for a door whose TESObjectDOOR_HasMinUseFlag is set.
0x65D932: push    ebx; enabled
0x65D933: mov     [esp+3Ch+var_24], al
0x65D937: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x65D93C: add     esp, 8
0x65D93F: lea     ecx, [esp+34h+var_20]; this
0x65D943: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x65D948: push    1
0x65D94A: mov     ecx, esi
0x65D94C: mov     [esp+38h+var_4], ebx
0x65D950: call    sub_52B440
0x65D955: mov     esi, eax
0x65D957: push    esi
0x65D958: lea     eax, [esp+38h+var_20]
0x65D95C: push    eax
0x65D95D: mov     ecx, edi
0x65D95F: call    sub_65D880
0x65D964: test    al, al
0x65D966: jz      short loc_65D97B
0x65D968: lea     ecx, [esp+34h+var_20]
0x65D96C: call    sub_68A1B0
0x65D971: mov     edi, eax
0x65D973: cmp     edi, ebx
0x65D975: jnz     short loc_65D97D
0x65D977: mov     edi, esi
0x65D979: jmp     short loc_65D97D
0x65D97B: xor     edi, edi
0x65D97D: mov     ecx, dword ptr [esp+34h+enabled]
0x65D981: push    ecx; enabled
0x65D982: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x65D987: mov     edx, dword ptr [esp+38h+var_24]
0x65D98B: push    edx; enabled
0x65D98C: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x65D991: add     esp, 8
0x65D994: lea     ecx, [esp+34h+var_20]; this
0x65D998: mov     [esp+34h+var_4], 0FFFFFFFFh
0x65D9A0: call    PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x65D9A5: mov     eax, edi
0x65D9A7: mov     ecx, [esp+34h+var_C]
0x65D9AB: mov     large fs:0, ecx
0x65D9B2: pop     ecx
0x65D9B3: pop     edi
0x65D9B4: pop     esi
0x65D9B5: pop     ebx
0x65D9B6: add     esp, 24h
0x65D9B9: retn    4
0x65D9BC: mov     eax, ebx
0x65D9BE: mov     ecx, [esp+34h+var_C]
0x65D9C2: mov     large fs:0, ecx
0x65D9C9: pop     ecx
0x65D9CA: pop     edi
0x65D9CB: pop     esi
0x65D9CC: pop     ebx
0x65D9CD: add     esp, 24h
0x65D9D0: retn    4
0x9C3D20: lea     ecx, [ebp-20h]; this
0x9C3D23: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9C3D28: mov     edx, [esp+arg_4]
0x9C3D2C: lea     eax, [edx-24h]
0x9C3D2F: mov     ecx, [edx-28h]
0x9C3D32: xor     ecx, eax
0x9C3D34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3D39: mov     eax, offset stru_AEC840
0x9C3D3E: jmp     ___CxxFrameHandler3
