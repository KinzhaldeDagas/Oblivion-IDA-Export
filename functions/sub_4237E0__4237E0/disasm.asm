0x4237E0: push    0FFFFFFFFh; Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
0x4237E2: push    offset ExtraDataList_SetReferencePointer_SEH
0x4237E7: mov     eax, large fs:0
0x4237ED: push    eax
0x4237EE: push    esi
0x4237EF: push    edi
0x4237F0: mov     eax, ___security_cookie
0x4237F5: xor     eax, esp
0x4237F7: push    eax
0x4237F8: lea     eax, [esp+18h+var_C]
0x4237FC: mov     large fs:0, eax
0x423802: mov     esi, ecx
0x423804: push    29h ; ')'; a2
0x423806: call    BaseExtraList_GetExtraData
0x42380B: test    eax, eax
0x42380D: jz      short loc_42384D
0x42380F: mov     ecx, [esp+18h+rank]
0x423813: cmp     ecx, 0FFFFFFFFh
0x423816: jnz     short loc_423836
0x423818: push    1
0x42381A: push    eax
0x42381B: mov     ecx, esi
0x42381D: call    BaseExtraList_RemoveExtraByPtr
0x423822: mov     ecx, [esp+18h+var_C]
0x423826: mov     large fs:0, ecx
0x42382D: pop     ecx
0x42382E: pop     edi
0x42382F: pop     esi
0x423830: add     esp, 0Ch
0x423833: retn    4
0x423836: mov     [eax+0Ch], ecx
0x423839: mov     ecx, [esp+18h+var_C]
0x42383D: mov     large fs:0, ecx
0x423844: pop     ecx
0x423845: pop     edi
0x423846: pop     esi
0x423847: add     esp, 0Ch
0x42384A: retn    4
0x42384D: mov     edi, [esp+18h+rank]
0x423851: cmp     edi, 0FFFFFFFFh
0x423854: jz      short loc_42388C
0x423856: push    10h; Size
0x423858: call    FormHeapAlloc
0x42385D: add     esp, 4
0x423860: mov     [esp+18h+rank], eax
0x423864: test    eax, eax
0x423866: mov     [esp+18h+var_4], 0
0x42386E: jz      short loc_42387A
0x423870: push    edi; rank
0x423871: mov     ecx, eax; this
0x423873: call    ExtraRank_ctor; Verified ExtraRank constructor: initializes inherited BSExtraData type to kExtraData_Rank (0x29), clears linkage, installs the ExtraRank vtable, and stores a signed 32-bit rank at +0x0C. Allocations request 0x10 bytes.
0x423878: jmp     short loc_42387C
0x42387A: xor     eax, eax
0x42387C: push    eax; BSExtraData *
0x42387D: mov     ecx, esi; ExtraDataList *
0x42387F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423887: call    BaseExtraList_AddExtra
0x42388C: mov     ecx, [esp+18h+var_C]
0x423890: mov     large fs:0, ecx
0x423897: pop     ecx
0x423898: pop     edi
0x423899: pop     esi
0x42389A: add     esp, 0Ch
0x42389D: retn    4
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
