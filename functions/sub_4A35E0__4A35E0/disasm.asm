0x4A35E0: push    0FFFFFFFFh
0x4A35E2: push    offset SEH_4A3CD0
0x4A35E7: mov     eax, large fs:0
0x4A35ED: push    eax
0x4A35EE: sub     esp, 8
0x4A35F1: push    esi
0x4A35F2: mov     eax, ds:0B30AACh
0x4A35F7: xor     eax, esp
0x4A35F9: push    eax
0x4A35FA: lea     eax, [esp+1Ch+var_C]
0x4A35FE: mov     large fs:0, eax
0x4A3604: mov     esi, ecx
0x4A3606: mov     [esp+1Ch+var_14], esi
0x4A360A: call    TESRegionData_InitializeBase
0x4A360F: push    14h; Size
0x4A3611: mov     [esp+20h+var_4], 0
0x4A3619: mov     dword ptr [esi], offset ??_7TESRegionDataGrass@@6B@; const TESRegionDataGrass::`vftable'
0x4A361F: call    FormHeapAlloc
0x4A3624: add     esp, 4
0x4A3627: mov     [esp+1Ch+var_10], eax
0x4A362B: test    eax, eax
0x4A362D: mov     byte ptr [esp+1Ch+var_4], 1
0x4A3632: jz      short loc_4A363F
0x4A3634: push    1; ownsObjectMemory
0x4A3636: mov     ecx, eax; self
0x4A3638: call    TESRegionGrassObjectList_ctor
0x4A363D: jmp     short loc_4A3641
0x4A363F: xor     eax, eax
0x4A3641: mov     [esi+8], eax
0x4A3644: mov     eax, esi
0x4A3646: mov     ecx, [esp+1Ch+var_C]
0x4A364A: mov     large fs:0, ecx
0x4A3651: pop     ecx
0x4A3652: pop     esi
0x4A3653: add     esp, 14h
0x4A3656: retn
0x9B26B0: mov     ecx, [ebp-14h]
0x9B26B3: jmp     TESRegionData_SetBaseVTable
0x9B26B8: mov     eax, [ebp-10h]
0x9B26BB: push    eax
0x9B26BC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B26C1: pop     ecx
0x9B26C2: retn
0x9B26C3: mov     edx, [esp+arg_4]
0x9B26C7: lea     eax, [edx-0Ch]
0x9B26CA: mov     ecx, [edx-10h]
0x9B26CD: xor     ecx, eax
0x9B26CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B26D4: mov     eax, offset stru_ADE660
0x9B26D9: jmp     ___CxxFrameHandler3
