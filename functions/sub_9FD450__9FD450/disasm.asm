0x9FD450: push    0FFFFFFFFh
0x9FD452: push    offset SEH_9FD450
0x9FD457: mov     eax, large fs:0
0x9FD45D: push    eax
0x9FD45E: mov     eax, ___security_cookie
0x9FD463: xor     eax, esp
0x9FD465: push    eax
0x9FD466: lea     eax, [esp+10h+var_C]
0x9FD46A: mov     large fs:0, eax
0x9FD470: push    offset unk_B14B9C
0x9FD475: mov     ecx, offset INISettingCollection
0x9FD47A: mov     [esp+14h+var_4], 0
0x9FD482: call    SettingCollectionList_AddSetting
0x9FD487: push    offset sub_A25520; void (__cdecl *)()
0x9FD48C: call    _atexit
0x9FD491: add     esp, 4
0x9FD494: mov     ecx, [esp+10h+var_C]
0x9FD498: mov     large fs:0, ecx
0x9FD49F: pop     ecx
0x9FD4A0: add     esp, 0Ch
0x9FD4A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3480: mov     ecx, offset unk_B14B9C
0x9C3485: jmp     loc_403BC0
0x9C348A: mov     edx, [esp+arg_4]
0x9C348E: lea     eax, [edx]
0x9C3490: mov     ecx, [edx-4]
0x9C3493: xor     ecx, eax
0x9C3495: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C349A: mov     eax, offset stru_AEC084
0x9C349F: jmp     ___CxxFrameHandler3
