0x9E4240: push    0FFFFFFFFh
0x9E4242: push    offset SEH_9E4240
0x9E4247: mov     eax, large fs:0
0x9E424D: push    eax
0x9E424E: mov     eax, ___security_cookie
0x9E4253: xor     eax, esp
0x9E4255: push    eax
0x9E4256: lea     eax, [esp+10h+var_C]
0x9E425A: mov     large fs:0, eax
0x9E4260: push    offset flt_B114A4
0x9E4265: mov     ecx, offset INISettingCollection
0x9E426A: mov     [esp+14h+var_4], 0
0x9E4272: call    SettingCollectionList_AddSetting
0x9E4277: push    offset sub_A1C580; void (__cdecl *)()
0x9E427C: call    _atexit
0x9E4281: add     esp, 4
0x9E4284: mov     ecx, [esp+10h+var_C]
0x9E4288: mov     large fs:0, ecx
0x9E428F: pop     ecx
0x9E4290: add     esp, 0Ch
0x9E4293: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9010: mov     ecx, offset flt_B114A4
0x9B9015: jmp     loc_403BC0
0x9B901A: mov     edx, [esp+arg_4]
0x9B901E: lea     eax, [edx]
0x9B9020: mov     ecx, [edx-4]
0x9B9023: xor     ecx, eax
0x9B9025: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B902A: mov     eax, offset stru_AE3410
0x9B902F: jmp     ___CxxFrameHandler3
