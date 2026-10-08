0x58A020: push    0FFFFFFFFh
0x58A022: push    offset ShowMessageBox??_SEH
0x58A027: mov     eax, large fs:0
0x58A02D: push    eax
0x58A02E: push    esi
0x58A02F: mov     eax, ds:0B30AACh
0x58A034: xor     eax, esp
0x58A036: push    eax
0x58A037: lea     eax, [esp+14h+var_C]
0x58A03B: mov     large fs:0, eax
0x58A041: mov     esi, [esp+14h+a2]
0x58A045: push    0; a3
0x58A047: add     ecx, 8; this
0x58A04A: push    esi; a2
0x58A04B: mov     [esp+1Ch+var_4], 0
0x58A053: call    BSStringT_Set
0x58A058: push    esi
0x58A059: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x58A05E: add     esp, 4
0x58A061: mov     ecx, [esp+14h+var_C]
0x58A065: mov     large fs:0, ecx
0x58A06C: pop     ecx
0x58A06D: pop     esi
0x58A06E: add     esp, 0Ch
0x58A071: retn    8
0x9BF800: lea     ecx, [ebp+4]; void *
0x9BF803: jmp     BSStringT_Clear
0x9BF808: mov     edx, [esp+arg_4]
0x9BF80C: lea     eax, [edx-4]
0x9BF80F: mov     ecx, [edx-8]
0x9BF812: xor     ecx, eax
0x9BF814: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF819: mov     eax, offset stru_AE8D04
0x9BF81E: jmp     ___CxxFrameHandler3
