0x6F6BF0: push    0FFFFFFFFh
0x6F6BF2: push    offset SEH_6F6BF0
0x6F6BF7: mov     eax, large fs:0
0x6F6BFD: push    eax
0x6F6BFE: push    esi
0x6F6BFF: mov     eax, ds:0B30AACh
0x6F6C04: xor     eax, esp
0x6F6C06: push    eax
0x6F6C07: lea     eax, [esp+14h+var_C]
0x6F6C0B: mov     large fs:0, eax
0x6F6C11: cmp     dword ptr ds:0B3F068h, 0
0x6F6C18: mov     [esp+14h+var_4], 0
0x6F6C20: jnz     short loc_6F6C70
0x6F6C22: mov     esi, [esp+14h+Size]
0x6F6C26: cmp     esi, 100h
0x6F6C2C: mov     eax, [esp+14h+arg_0]
0x6F6C30: mov     ds:0B3F068h, eax
0x6F6C35: jb      short loc_6F6C4B
0x6F6C37: push    41h ; 'A'; sourceLine
0x6F6C39: push    offset a_Lasterror_cpp; ".\\lastError.cpp"
0x6F6C3E: call    FaceGen_ReportAssertionViolation; FaceGen assertion reporter: PrintError("FR2 ASSERT violation in %s line %i. Code may crash.", sourceFile, sourceLine); returns normally. NOT noreturn and NOT a validation barrier.
0x6F6C43: add     esp, 8
0x6F6C46: mov     esi, 0FFh
0x6F6C4B: cmp     [esp+14h+arg_1C], 10h
0x6F6C50: mov     eax, [esp+14h+Src]
0x6F6C54: jnb     short loc_6F6C5A
0x6F6C56: lea     eax, [esp+14h+Src]
0x6F6C5A: push    esi; byteCount
0x6F6C5B: push    eax; source
0x6F6C5C: push    offset destination; destination
0x6F6C61: call    _memcpy;
0x6F6C66: add     esp, 0Ch
0x6F6C69: mov     ds:destination[esi], 0
0x6F6C70: cmp     [esp+14h+arg_1C], 10h
0x6F6C75: jb      short loc_6F6C84
0x6F6C77: mov     ecx, [esp+14h+Src]
0x6F6C7B: push    ecx
0x6F6C7C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F6C81: add     esp, 4
0x6F6C84: mov     ecx, [esp+14h+var_C]
0x6F6C88: mov     large fs:0, ecx
0x6F6C8F: pop     ecx
0x6F6C90: pop     esi
0x6F6C91: add     esp, 0Ch
0x6F6C94: retn
0x9C8D40: lea     ecx, [ebp+8]; this
0x9C8D43: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8D48: mov     edx, [esp+arg_4]
0x9C8D4C: lea     eax, [edx-4]
0x9C8D4F: mov     ecx, [edx-8]
0x9C8D52: xor     ecx, eax
0x9C8D54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8D59: mov     eax, offset stru_AF1644
0x9C8D5E: jmp     ___CxxFrameHandler3
