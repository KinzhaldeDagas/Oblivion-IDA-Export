0x9DB690: push    0FFFFFFFFh
0x9DB692: push    offset SEH_9DB690
0x9DB697: mov     eax, large fs:0
0x9DB69D: push    eax
0x9DB69E: mov     eax, ___security_cookie
0x9DB6A3: xor     eax, esp
0x9DB6A5: push    eax
0x9DB6A6: lea     eax, [esp+10h+var_C]
0x9DB6AA: mov     large fs:0, eax
0x9DB6B0: push    offset unk_B05554
0x9DB6B5: mov     ecx, offset INISettingCollection
0x9DB6BA: mov     [esp+14h+var_4], 0
0x9DB6C2: call    SettingCollectionList_AddSetting
0x9DB6C7: push    offset sub_A18090; void (__cdecl *)()
0x9DB6CC: call    _atexit
0x9DB6D1: add     esp, 4
0x9DB6D4: mov     ecx, [esp+10h+var_C]
0x9DB6D8: mov     large fs:0, ecx
0x9DB6DF: pop     ecx
0x9DB6E0: add     esp, 0Ch
0x9DB6E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADDB0: mov     ecx, offset unk_B05554
0x9ADDB5: jmp     loc_403BC0
0x9ADDBA: mov     edx, [esp+arg_4]
0x9ADDBE: lea     eax, [edx]
0x9ADDC0: mov     ecx, [edx-4]
0x9ADDC3: xor     ecx, eax
0x9ADDC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADDCA: mov     eax, offset stru_ADA6E0
0x9ADDCF: jmp     ___CxxFrameHandler3
