0x9D8890: push    0FFFFFFFFh
0x9D8892: push    offset SEH_9D8890
0x9D8897: mov     eax, large fs:0
0x9D889D: push    eax
0x9D889E: mov     eax, ___security_cookie
0x9D88A3: xor     eax, esp
0x9D88A5: push    eax
0x9D88A6: lea     eax, [esp+10h+var_C]
0x9D88AA: mov     large fs:0, eax
0x9D88B0: push    offset dword_B02D10
0x9D88B5: mov     ecx, offset INISettingCollection
0x9D88BA: mov     [esp+14h+var_4], 0
0x9D88C2: call    SettingCollectionList_AddSetting
0x9D88C7: push    offset sub_A16A00; void (__cdecl *)()
0x9D88CC: call    _atexit
0x9D88D1: add     esp, 4
0x9D88D4: mov     ecx, [esp+10h+var_C]
0x9D88D8: mov     large fs:0, ecx
0x9D88DF: pop     ecx
0x9D88E0: add     esp, 0Ch
0x9D88E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA480: mov     ecx, offset dword_B02D10
0x9AA485: jmp     loc_403BC0
0x9AA48A: mov     edx, [esp+arg_4]
0x9AA48E: lea     eax, [edx]
0x9AA490: mov     ecx, [edx-4]
0x9AA493: xor     ecx, eax
0x9AA495: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA49A: mov     eax, offset stru_AD7464
0x9AA49F: jmp     ___CxxFrameHandler3
