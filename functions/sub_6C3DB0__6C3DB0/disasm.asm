0x6C3DB0: push    0FFFFFFFFh; Oblivion NiTransformController link phase. Runs generic controller linking; for stream versions below 0x0A010068 resolves the legacy NiTransformData link, constructs a 0x38-byte NiTransformInterpolator around it, assigns smart pointer +0x3C, then invokes interpolator virtual +0x7C to collapse constant tracks.
0x6C3DB2: push    offset ExtraDataList_SetReferencePointer_SEH
0x6C3DB7: mov     eax, large fs:0
0x6C3DBD: push    eax
0x6C3DBE: push    esi
0x6C3DBF: push    edi
0x6C3DC0: mov     eax, ds:0B30AACh
0x6C3DC5: xor     eax, esp
0x6C3DC7: push    eax
0x6C3DC8: lea     eax, [esp+18h+var_C]
0x6C3DCC: mov     large fs:0, eax
0x6C3DD2: mov     edi, ecx
0x6C3DD4: mov     esi, [esp+18h+arg_0]
0x6C3DD8: push    esi
0x6C3DD9: call    NiSingleInterpController_LinkObject; NiSingleInterpController link slot delegates to NiTimeController link processing. Concrete legacy controllers may perform additional versioned link migration after this returns.
0x6C3DDE: cmp     dword ptr [esi+0D8h], 0A010068h
0x6C3DE8: jnb     short loc_6C3E35
0x6C3DEA: mov     ecx, esi
0x6C3DEC: call    sub_7124A0
0x6C3DF1: push    38h ; '8'; Size
0x6C3DF3: mov     esi, eax
0x6C3DF5: call    FormHeapAlloc
0x6C3DFA: add     esp, 4
0x6C3DFD: mov     [esp+18h+arg_0], eax
0x6C3E01: test    eax, eax
0x6C3E03: mov     [esp+18h+var_4], 0
0x6C3E0B: jz      short loc_6C3E17
0x6C3E0D: push    esi
0x6C3E0E: mov     ecx, eax
0x6C3E10: call    NiTransformInterpolator_ConstructWithData; Oblivion NiTransformInterpolator construction with NiTransformData. Initializes the cached 0x20-byte transform at +0x0C to native defaults, stores data at +0x2C with an added reference, and zeroes rotation/translation/scale cursors +0x30/+0x32/+0x34. Object size is 0x38.
0x6C3E15: jmp     short loc_6C3E19
0x6C3E17: xor     eax, eax
0x6C3E19: lea     esi, [edi+3Ch]
0x6C3E1C: push    eax; a2
0x6C3E1D: mov     ecx, esi; this
0x6C3E1F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6C3E27: call    NiSmartPointer_Set??
0x6C3E2C: mov     ecx, [esi]
0x6C3E2E: mov     eax, [ecx]
0x6C3E30: mov     edx, [eax+7Ch]
0x6C3E33: call    edx
0x6C3E35: mov     ecx, [esp+18h+var_C]
0x6C3E39: mov     large fs:0, ecx
0x6C3E40: pop     ecx
0x6C3E41: pop     edi
0x6C3E42: pop     esi
0x6C3E43: add     esp, 0Ch
0x6C3E46: retn    4
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
