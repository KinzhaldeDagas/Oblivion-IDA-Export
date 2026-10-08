0x68D820: push    0FFFFFFFFh
0x68D822: push    offset SEH_8C8970
0x68D827: mov     eax, large fs:0
0x68D82D: push    eax
0x68D82E: push    ecx
0x68D82F: push    esi
0x68D830: push    edi
0x68D831: mov     eax, ds:0B30AACh
0x68D836: xor     eax, esp
0x68D838: push    eax
0x68D839: lea     eax, [esp+1Ch+var_C]
0x68D83D: mov     large fs:0, eax
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
