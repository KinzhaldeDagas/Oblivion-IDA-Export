0x9FD690: push    0FFFFFFFFh
0x9FD692: push    offset SEH_9FD690
0x9FD697: mov     eax, large fs:0
0x9FD69D: push    eax
0x9FD69E: mov     eax, ___security_cookie
0x9FD6A3: xor     eax, esp
0x9FD6A5: push    eax
0x9FD6A6: lea     eax, [esp+10h+var_C]
0x9FD6AA: mov     large fs:0, eax
0x9FD6B0: push    offset unk_B14BCC
0x9FD6B5: mov     ecx, offset INISettingCollection
0x9FD6BA: mov     [esp+14h+var_4], 0
0x9FD6C2: call    SettingCollectionList_AddSetting
0x9FD6C7: push    offset sub_A25640; void (__cdecl *)()
0x9FD6CC: call    _atexit
0x9FD6D1: add     esp, 4
0x9FD6D4: mov     ecx, [esp+10h+var_C]
0x9FD6D8: mov     large fs:0, ecx
0x9FD6DF: pop     ecx
0x9FD6E0: add     esp, 0Ch
0x9FD6E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C35A0: mov     ecx, offset unk_B14BCC
0x9C35A5: jmp     loc_403BC0
0x9C35AA: mov     edx, [esp+arg_4]
0x9C35AE: lea     eax, [edx]
0x9C35B0: mov     ecx, [edx-4]
0x9C35B3: xor     ecx, eax
0x9C35B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C35BA: mov     eax, offset stru_AEC18C
0x9C35BF: jmp     ___CxxFrameHandler3
