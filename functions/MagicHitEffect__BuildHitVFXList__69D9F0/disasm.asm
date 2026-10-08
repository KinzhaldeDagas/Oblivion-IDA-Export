0x69D9F0: push    0FFFFFFFFh; Verified (Oblivion): build-list dispatcher invoked by ActiveEffect_Base_ProcessEffect when creating a fresh hit-effect list and when applying queued hit VFX. Its outlined path tries model-hit creation first, then chains shader-hit creation with the resulting BSSimpleList.
0x69D9F2: push    offset SEH_6ACAB0
0x69D9F7: mov     eax, large fs:0
0x69D9FD: push    eax
0x69D9FE: push    ebp
0x69D9FF: push    esi
0x69DA00: push    edi
0x69DA01: mov     eax, ds:0B30AACh
0x69DA06: xor     eax, esp
0x69DA08: push    eax
0x69DA09: lea     eax, [esp+1Ch+var_C]
0x69DA0D: mov     large fs:0, eax
0x9B3B90: mov     eax, [ebp+4]
0x9B3B93: push    eax
0x9B3B94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3B99: pop     ecx
0x9B3B9A: retn
0x9B3B9B: mov     eax, [ebp+4]
0x9B3B9E: push    eax
0x9B3B9F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3BA4: pop     ecx
0x9B3BA5: retn
0x9B3BA6: mov     edx, [esp+arg_4]
0x9B3BAA: lea     eax, [edx-0Ch]
0x9B3BAD: mov     ecx, [edx-10h]
0x9B3BB0: xor     ecx, eax
0x9B3BB2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3BB7: mov     eax, offset stru_ADF520
0x9B3BBC: jmp     ___CxxFrameHandler3
