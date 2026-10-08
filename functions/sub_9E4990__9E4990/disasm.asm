0x9E4990: push    0FFFFFFFFh
0x9E4992: push    offset SEH_9E4990
0x9E4997: mov     eax, large fs:0
0x9E499D: push    eax
0x9E499E: mov     eax, ___security_cookie
0x9E49A3: xor     eax, esp
0x9E49A5: push    eax
0x9E49A6: lea     eax, [esp+10h+var_C]
0x9E49AA: mov     large fs:0, eax
0x9E49B0: push    offset off_B11A8C; "1.0, 1.0"
0x9E49B5: mov     ecx, offset BlendSettingCollection
0x9E49BA: mov     [esp+14h+var_4], 0
0x9E49C2: call    SettingCollectionList_AddSetting
0x9E49C7: push    offset sub_A1C910; void (__cdecl *)()
0x9E49CC: call    _atexit
0x9E49D1: add     esp, 4
0x9E49D4: mov     ecx, [esp+10h+var_C]
0x9E49D8: mov     large fs:0, ecx
0x9E49DF: pop     ecx
0x9E49E0: add     esp, 0Ch
0x9E49E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B98C0: mov     ecx, offset off_B11A8C; "1.0, 1.0"
0x9B98C5: jmp     loc_403BC0
0x9B98CA: mov     edx, [esp+arg_4]
0x9B98CE: lea     eax, [edx]
0x9B98D0: mov     ecx, [edx-4]
0x9B98D3: xor     ecx, eax
0x9B98D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B98DA: mov     eax, offset stru_AE3BA4
0x9B98DF: jmp     ___CxxFrameHandler3
