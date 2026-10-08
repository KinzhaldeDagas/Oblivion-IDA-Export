0x6E8F40: push    0FFFFFFFFh
0x6E8F42: push    offset SEH_8C8970
0x6E8F47: mov     eax, large fs:0
0x6E8F4D: push    eax
0x6E8F4E: push    ecx
0x6E8F4F: push    esi
0x6E8F50: push    edi
0x6E8F51: mov     eax, ds:0B30AACh
0x6E8F56: xor     eax, esp
0x6E8F58: push    eax
0x6E8F59: lea     eax, [esp+1Ch+var_C]
0x6E8F5D: mov     large fs:0, eax
0x6E8F63: mov     edi, ecx
0x6E8F65: push    70h ; 'p'; Size
0x6E8F67: call    FormHeapAlloc
0x6E8F6C: add     esp, 4
0x6E8F6F: mov     [esp+1Ch+var_10], eax
0x6E8F73: xor     esi, esi
0x6E8F75: cmp     eax, esi
0x6E8F77: mov     [esp+1Ch+var_4], esi
0x6E8F7B: jz      short loc_6E8F86
0x6E8F7D: mov     ecx, eax; this
0x6E8F7F: call    ??0NiBoneLODController@@QAE@XZ; NiBoneLODController::NiBoneLODController(void)
0x6E8F84: mov     esi, eax
0x6E8F86: mov     eax, [esp+1Ch+arg_0]
0x6E8F8A: push    eax
0x6E8F8B: push    esi
0x6E8F8C: mov     ecx, edi
0x6E8F8E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E8F96: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x6E8F9B: mov     ecx, [edi+3Ch]
0x6E8F9E: mov     [esi+3Ch], ecx
0x6E8FA1: mov     edx, [edi+40h]
0x6E8FA4: mov     [esi+40h], edx
0x6E8FA7: mov     eax, esi
0x6E8FA9: mov     ecx, [esp+1Ch+var_C]
0x6E8FAD: mov     large fs:0, ecx
0x6E8FB4: pop     ecx
0x6E8FB5: pop     edi
0x6E8FB6: pop     esi
0x6E8FB7: add     esp, 10h
0x6E8FBA: retn    4
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
