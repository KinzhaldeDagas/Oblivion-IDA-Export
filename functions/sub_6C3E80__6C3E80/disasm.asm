0x6C3E80: push    0FFFFFFFFh; Oblivion NiTransformController clone factory. Allocates a 0x40-byte controller through NiSingleInterpController construction, installs the NiTransformController vtable, then copies base/controller members including a cloned smart interpolator through the native clone helper.
0x6C3E82: push    offset SEH_8C8970
0x6C3E87: mov     eax, large fs:0
0x6C3E8D: push    eax
0x6C3E8E: push    ecx
0x6C3E8F: push    esi
0x6C3E90: push    edi
0x6C3E91: mov     eax, ds:0B30AACh
0x6C3E96: xor     eax, esp
0x6C3E98: push    eax
0x6C3E99: lea     eax, [esp+1Ch+var_C]
0x6C3E9D: mov     large fs:0, eax
0x6C3EA3: mov     edi, ecx
0x6C3EA5: push    40h ; '@'; Size
0x6C3EA7: call    FormHeapAlloc
0x6C3EAC: mov     esi, eax
0x6C3EAE: add     esp, 4
0x6C3EB1: mov     [esp+1Ch+var_10], esi
0x6C3EB5: test    esi, esi
0x6C3EB7: mov     [esp+1Ch+var_4], 0
0x6C3EBF: jz      short loc_6C3ED0
0x6C3EC1: mov     ecx, esi
0x6C3EC3: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6C3EC8: mov     dword ptr [esi], offset ??_7NiTransformController@@6B@; const NiTransformController::`vftable'
0x6C3ECE: jmp     short loc_6C3ED2
0x6C3ED0: xor     esi, esi
0x6C3ED2: mov     eax, [esp+1Ch+arg_0]
0x6C3ED6: push    eax
0x6C3ED7: push    esi
0x6C3ED8: mov     ecx, edi
0x6C3EDA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C3EE2: call    NiSingleInterpController_CopyMembers; Copies NiTimeController members, clones the source interpolator at +0x3C through the stream clone map, and assigns the clone through the destination smart pointer.
0x6C3EE7: mov     eax, esi
0x6C3EE9: mov     ecx, [esp+1Ch+var_C]
0x6C3EED: mov     large fs:0, ecx
0x6C3EF4: pop     ecx
0x6C3EF5: pop     edi
0x6C3EF6: pop     esi
0x6C3EF7: add     esp, 10h
0x6C3EFA: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
