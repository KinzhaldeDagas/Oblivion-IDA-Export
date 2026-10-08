0x9FBB30: push    0FFFFFFFFh
0x9FBB32: push    offset SEH_9FBB30
0x9FBB37: mov     eax, large fs:0
0x9FBB3D: push    eax
0x9FBB3E: mov     eax, ___security_cookie
0x9FBB43: xor     eax, esp
0x9FBB45: push    eax
0x9FBB46: lea     eax, [esp+10h+var_C]
0x9FBB4A: mov     large fs:0, eax
0x9FBB50: push    offset dword_B13994
0x9FBB55: mov     ecx, offset INISettingCollection
0x9FBB5A: mov     [esp+14h+var_4], 0
0x9FBB62: call    SettingCollectionList_AddSetting
0x9FBB67: push    offset sub_A249B0; void (__cdecl *)()
0x9FBB6C: call    _atexit
0x9FBB71: add     esp, 4
0x9FBB74: mov     ecx, [esp+10h+var_C]
0x9FBB78: mov     large fs:0, ecx
0x9FBB7F: pop     ecx
0x9FBB80: add     esp, 0Ch
0x9FBB83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF400: mov     ecx, offset dword_B13994
0x9BF405: jmp     loc_403BC0
0x9BF40A: mov     edx, [esp+arg_4]
0x9BF40E: lea     eax, [edx]
0x9BF410: mov     ecx, [edx-4]
0x9BF413: xor     ecx, eax
0x9BF415: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF41A: mov     eax, offset stru_AE89A0
0x9BF41F: jmp     ___CxxFrameHandler3
