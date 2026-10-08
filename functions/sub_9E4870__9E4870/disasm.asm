0x9E4870: push    0FFFFFFFFh
0x9E4872: push    offset SEH_9E4870
0x9E4877: mov     eax, large fs:0
0x9E487D: push    eax
0x9E487E: mov     eax, ___security_cookie
0x9E4883: xor     eax, esp
0x9E4885: push    eax
0x9E4886: lea     eax, [esp+10h+var_C]
0x9E488A: mov     large fs:0, eax
0x9E4890: push    offset off_B11A74; "1.0, 1.0"
0x9E4895: mov     ecx, offset BlendSettingCollection
0x9E489A: mov     [esp+14h+var_4], 0
0x9E48A2: call    SettingCollectionList_AddSetting
0x9E48A7: push    offset sub_A1C880; void (__cdecl *)()
0x9E48AC: call    _atexit
0x9E48B1: add     esp, 4
0x9E48B4: mov     ecx, [esp+10h+var_C]
0x9E48B8: mov     large fs:0, ecx
0x9E48BF: pop     ecx
0x9E48C0: add     esp, 0Ch
0x9E48C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9830: mov     ecx, offset off_B11A74; "1.0, 1.0"
0x9B9835: jmp     loc_403BC0
0x9B983A: mov     edx, [esp+arg_4]
0x9B983E: lea     eax, [edx]
0x9B9840: mov     ecx, [edx-4]
0x9B9843: xor     ecx, eax
0x9B9845: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B984A: mov     eax, offset stru_AE3B20
0x9B984F: jmp     ___CxxFrameHandler3
