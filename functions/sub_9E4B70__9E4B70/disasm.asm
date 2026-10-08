0x9E4B70: push    0FFFFFFFFh
0x9E4B72: push    offset SEH_9E4B70
0x9E4B77: mov     eax, large fs:0
0x9E4B7D: push    eax
0x9E4B7E: mov     eax, ___security_cookie
0x9E4B83: xor     eax, esp
0x9E4B85: push    eax
0x9E4B86: lea     eax, [esp+10h+var_C]
0x9E4B8A: mov     large fs:0, eax
0x9E4B90: push    offset off_B11AB4; "1.0, 1.0"
0x9E4B95: mov     ecx, offset BlendSettingCollection
0x9E4B9A: mov     [esp+14h+var_4], 0
0x9E4BA2: call    SettingCollectionList_AddSetting
0x9E4BA7: push    offset sub_A1CA00; void (__cdecl *)()
0x9E4BAC: call    _atexit
0x9E4BB1: add     esp, 4
0x9E4BB4: mov     ecx, [esp+10h+var_C]
0x9E4BB8: mov     large fs:0, ecx
0x9E4BBF: pop     ecx
0x9E4BC0: add     esp, 0Ch
0x9E4BC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B99B0: mov     ecx, offset off_B11AB4; "1.0, 1.0"
0x9B99B5: jmp     loc_403BC0
0x9B99BA: mov     edx, [esp+arg_4]
0x9B99BE: lea     eax, [edx]
0x9B99C0: mov     ecx, [edx-4]
0x9B99C3: xor     ecx, eax
0x9B99C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B99CA: mov     eax, offset stru_AE3C80
0x9B99CF: jmp     ___CxxFrameHandler3
