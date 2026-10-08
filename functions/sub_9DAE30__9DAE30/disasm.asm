0x9DAE30: push    0FFFFFFFFh
0x9DAE32: push    offset SEH_9DAE30
0x9DAE37: mov     eax, large fs:0
0x9DAE3D: push    eax
0x9DAE3E: mov     eax, ___security_cookie
0x9DAE43: xor     eax, esp
0x9DAE45: push    eax
0x9DAE46: lea     eax, [esp+10h+var_C]
0x9DAE4A: mov     large fs:0, eax
0x9DAE50: push    offset flt_B05150
0x9DAE55: mov     ecx, offset INISettingCollection
0x9DAE5A: mov     [esp+14h+var_4], 0
0x9DAE62: call    SettingCollectionList_AddSetting
0x9DAE67: push    offset sub_A17C90; void (__cdecl *)()
0x9DAE6C: call    _atexit
0x9DAE71: add     esp, 4
0x9DAE74: mov     ecx, [esp+10h+var_C]
0x9DAE78: mov     large fs:0, ecx
0x9DAE7F: pop     ecx
0x9DAE80: add     esp, 0Ch
0x9DAE83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD010: mov     ecx, offset flt_B05150
0x9AD015: jmp     loc_403BC0
0x9AD01A: mov     edx, [esp+arg_4]
0x9AD01E: lea     eax, [edx]
0x9AD020: mov     ecx, [edx-4]
0x9AD023: xor     ecx, eax
0x9AD025: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD02A: mov     eax, offset stru_AD9C40
0x9AD02F: jmp     ___CxxFrameHandler3
