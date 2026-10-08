0x9E5530: push    0FFFFFFFFh
0x9E5532: push    offset SEH_9E5530
0x9E5537: mov     eax, large fs:0
0x9E553D: push    eax
0x9E553E: mov     eax, ___security_cookie
0x9E5543: xor     eax, esp
0x9E5545: push    eax
0x9E5546: lea     eax, [esp+10h+var_C]
0x9E554A: mov     large fs:0, eax
0x9E5550: push    offset off_B11B84; "1.0, 1.0"
0x9E5555: mov     ecx, offset BlendSettingCollection
0x9E555A: mov     [esp+14h+var_4], 0
0x9E5562: call    SettingCollectionList_AddSetting
0x9E5567: push    offset sub_A1CEE0; void (__cdecl *)()
0x9E556C: call    _atexit
0x9E5571: add     esp, 4
0x9E5574: mov     ecx, [esp+10h+var_C]
0x9E5578: mov     large fs:0, ecx
0x9E557F: pop     ecx
0x9E5580: add     esp, 0Ch
0x9E5583: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9E90: mov     ecx, offset off_B11B84; "1.0, 1.0"
0x9B9E95: jmp     loc_403BC0
0x9B9E9A: mov     edx, [esp+arg_4]
0x9B9E9E: lea     eax, [edx]
0x9B9EA0: mov     ecx, [edx-4]
0x9B9EA3: xor     ecx, eax
0x9B9EA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9EAA: mov     eax, offset stru_AE40F8
0x9B9EAF: jmp     ___CxxFrameHandler3
