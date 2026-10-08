0x9FB040: push    0FFFFFFFFh
0x9FB042: push    offset SEH_9FB040
0x9FB047: mov     eax, large fs:0
0x9FB04D: push    eax
0x9FB04E: mov     eax, ___security_cookie
0x9FB053: xor     eax, esp
0x9FB055: push    eax
0x9FB056: lea     eax, [esp+10h+var_C]
0x9FB05A: mov     large fs:0, eax
0x9FB060: push    offset byte_B13218
0x9FB065: mov     ecx, offset INISettingCollection
0x9FB06A: mov     [esp+14h+var_4], 0
0x9FB072: call    SettingCollectionList_AddSetting
0x9FB077: push    offset sub_A24460; void (__cdecl *)()
0x9FB07C: call    _atexit
0x9FB081: add     esp, 4
0x9FB084: mov     ecx, [esp+10h+var_C]
0x9FB088: mov     large fs:0, ecx
0x9FB08F: pop     ecx
0x9FB090: add     esp, 0Ch
0x9FB093: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE8B0: mov     ecx, offset byte_B13218
0x9BE8B5: jmp     loc_403BC0
0x9BE8BA: mov     edx, [esp+arg_4]
0x9BE8BE: lea     eax, [edx]
0x9BE8C0: mov     ecx, [edx-4]
0x9BE8C3: xor     ecx, eax
0x9BE8C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE8CA: mov     eax, offset stru_AE7FA0
0x9BE8CF: jmp     ___CxxFrameHandler3
