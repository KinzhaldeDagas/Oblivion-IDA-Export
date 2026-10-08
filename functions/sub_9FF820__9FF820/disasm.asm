0x9FF820: push    0FFFFFFFFh
0x9FF822: push    offset SEH_9FF820
0x9FF827: mov     eax, large fs:0
0x9FF82D: push    eax
0x9FF82E: mov     eax, ___security_cookie
0x9FF833: xor     eax, esp
0x9FF835: push    eax
0x9FF836: lea     eax, [esp+10h+var_C]
0x9FF83A: mov     large fs:0, eax
0x9FF840: push    offset dword_B162AC
0x9FF845: mov     ecx, offset INISettingCollection
0x9FF84A: mov     [esp+14h+var_4], 0
0x9FF852: call    SettingCollectionList_AddSetting
0x9FF857: push    offset sub_A264F0; void (__cdecl *)()
0x9FF85C: call    _atexit
0x9FF861: add     esp, 4
0x9FF864: mov     ecx, [esp+10h+var_C]
0x9FF868: mov     large fs:0, ecx
0x9FF86F: pop     ecx
0x9FF870: add     esp, 0Ch
0x9FF873: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6B90: mov     ecx, offset dword_B162AC
0x9C6B95: jmp     loc_403BC0
0x9C6B9A: mov     edx, [esp+arg_4]
0x9C6B9E: lea     eax, [edx]
0x9C6BA0: mov     ecx, [edx-4]
0x9C6BA3: xor     ecx, eax
0x9C6BA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6BAA: mov     eax, offset stru_AEF05C
0x9C6BAF: jmp     ___CxxFrameHandler3
