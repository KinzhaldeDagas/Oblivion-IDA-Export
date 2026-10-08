0x565EC0: push    0FFFFFFFFh; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x565EC2: push    offset ExtraDataList_SetReferencePointer_SEH
0x565EC7: mov     eax, large fs:0
0x565ECD: push    eax
0x565ECE: push    esi
0x565ECF: push    edi
0x565ED0: mov     eax, ds:0B30AACh
0x565ED5: xor     eax, esp
0x565ED7: push    eax
0x565ED8: lea     eax, [esp+18h+var_C]
0x565EDC: mov     large fs:0, eax
0x565EE2: mov     esi, ecx
0x565EE4: mov     edi, [esp+18h+arg_0]
0x565EE8: test    edi, edi
0x565EEA: jz      short TESPackage_SetTarget___ClearTargetData
0x565EEC: cmp     dword ptr [esi+28h], 0
0x565EF0: jnz     short loc_565F22
0x565EF2: push    0Ch; Size
0x565EF4: call    FormHeapAlloc
0x565EF9: add     esp, 4
0x565EFC: mov     [esp+18h+arg_0], eax
0x565F00: test    eax, eax
0x565F02: mov     [esp+18h+var_4], 0
0x565F0A: jz      short loc_565F15
0x565F0C: mov     ecx, eax
0x565F0E: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x565F13: jmp     short loc_565F17
0x565F15: xor     eax, eax
0x565F17: mov     [esp+18h+var_4], 0FFFFFFFFh
0x565F1F: mov     [esi+28h], eax
0x565F22: mov     ecx, [esi+28h]
0x565F25: push    edi
0x565F26: call    TESPackage_TargetData_CopyFrom; 3DTheft decode 2026-05-16: TESPackage_SetTarget copies from the caller's 0x0C TargetData into package-owned target data. Caller does not transfer ownership of the source buffer.
0x565F2B: mov     ecx, [esp+18h+var_C]
0x565F2F: mov     large fs:0, ecx
0x565F36: pop     ecx
0x565F37: pop     edi
0x565F38: pop     esi
0x565F39: add     esp, 0Ch
0x565F3C: retn    4
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
