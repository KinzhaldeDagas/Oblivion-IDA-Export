0x726C30: push    0FFFFFFFFh
0x726C32: push    offset SEH_726C30
0x726C37: mov     eax, large fs:0
0x726C3D: push    eax
0x726C3E: sub     esp, 10h
0x726C41: push    ebx
0x726C42: push    ebp
0x726C43: push    esi
0x726C44: push    edi
0x726C45: mov     eax, ds:0B30AACh
0x726C4A: xor     eax, esp
0x726C4C: push    eax
0x726C4D: lea     eax, [esp+30h+var_C]
0x726C51: mov     large fs:0, eax
0x726C57: mov     ebp, ecx
0x726C59: mov     ebx, [esp+30h+a2]
0x726C5D: push    ebx; a2
0x726C5E: call    sub_7008A0
0x9CA510: mov     eax, [ebp-14h]
0x9CA513: push    eax
0x9CA514: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA519: pop     ecx
0x9CA51A: retn
0x9CA51B: mov     edx, [esp+arg_4]
0x9CA51F: lea     eax, [edx-20h]
0x9CA522: mov     ecx, [edx-24h]
0x9CA525: xor     ecx, eax
0x9CA527: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA52C: mov     eax, offset stru_AF2C08
0x9CA531: jmp     ___CxxFrameHandler3
