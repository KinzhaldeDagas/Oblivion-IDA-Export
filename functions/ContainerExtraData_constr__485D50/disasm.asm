0x485D50: push    0FFFFFFFFh
0x485D52: push    offset SEH_6F8920
0x485D57: mov     eax, large fs:0
0x485D5D: push    eax
0x485D5E: push    esi
0x485D5F: mov     eax, ds:0B30AACh
0x485D64: xor     eax, esp
0x485D66: push    eax
0x485D67: lea     eax, [esp+14h+var_C]
0x485D6B: mov     large fs:0, eax
0x485D71: mov     esi, ecx
0x485D73: mov     eax, [esp+14h+arg_0]
0x485D77: push    8; Size
0x485D79: mov     [esi+4], eax
0x485D7C: call    FormHeapAlloc
0x485D81: add     esp, 4
0x485D84: test    eax, eax
0x485D86: jz      short loc_485D97
0x485D88: mov     dword ptr [eax], 0
0x485D8E: mov     dword ptr [eax+4], 0
0x485D95: jmp     short loc_485D99
0x485D97: xor     eax, eax
0x485D99: mov     [esi], eax
0x485D9B: cmp     dword ptr ds:0B34428h, 0
0x485DA2: jnz     short ContainerExtraData_constr___InitCachedWeights_Return
0x485DA4: push    58h ; 'X'; Size
0x485DA6: call    FormHeapAlloc
0x485DAB: add     esp, 4
0x485DAE: mov     [esp+14h+arg_0], eax
0x485DB2: test    eax, eax
0x485DB4: mov     [esp+14h+var_4], 0
0x485DBC: jz      short loc_485DC7
0x485DBE: mov     ecx, eax
0x485DC0: call    TESObjectREFR_constr
0x485DC5: jmp     short loc_485DC9
0x485DC7: xor     eax, eax
0x485DC9: mov     ecx, eax; this
0x485DCB: mov     [esp+14h+var_4], 0FFFFFFFFh
0x485DD3: mov     ds:0B34428h, eax
0x485DD8: call    TESForm_MakeTemporary
0x9AFAD0: mov     eax, [ebp+4]
0x9AFAD3: push    eax
0x9AFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFAD9: pop     ecx
0x9AFADA: retn
0x9AFADB: mov     edx, [esp+arg_4]
0x9AFADF: lea     eax, [edx-4]
0x9AFAE2: mov     ecx, [edx-8]
0x9AFAE5: xor     ecx, eax
0x9AFAE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFAEC: mov     eax, offset stru_ADBFDC
0x9AFAF1: jmp     ___CxxFrameHandler3
