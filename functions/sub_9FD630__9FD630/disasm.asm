0x9FD630: push    0FFFFFFFFh
0x9FD632: push    offset SEH_9FD630
0x9FD637: mov     eax, large fs:0
0x9FD63D: push    eax
0x9FD63E: mov     eax, ___security_cookie
0x9FD643: xor     eax, esp
0x9FD645: push    eax
0x9FD646: lea     eax, [esp+10h+var_C]
0x9FD64A: mov     large fs:0, eax
0x9FD650: push    offset unk_B14BC4
0x9FD655: mov     ecx, offset INISettingCollection
0x9FD65A: mov     [esp+14h+var_4], 0
0x9FD662: call    SettingCollectionList_AddSetting
0x9FD667: push    offset sub_A25610; void (__cdecl *)()
0x9FD66C: call    _atexit
0x9FD671: add     esp, 4
0x9FD674: mov     ecx, [esp+10h+var_C]
0x9FD678: mov     large fs:0, ecx
0x9FD67F: pop     ecx
0x9FD680: add     esp, 0Ch
0x9FD683: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3570: mov     ecx, offset unk_B14BC4
0x9C3575: jmp     loc_403BC0
0x9C357A: mov     edx, [esp+arg_4]
0x9C357E: lea     eax, [edx]
0x9C3580: mov     ecx, [edx-4]
0x9C3583: xor     ecx, eax
0x9C3585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C358A: mov     eax, offset stru_AEC160
0x9C358F: jmp     ___CxxFrameHandler3
