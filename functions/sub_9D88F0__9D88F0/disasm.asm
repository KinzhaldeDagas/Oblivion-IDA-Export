0x9D88F0: push    0FFFFFFFFh
0x9D88F2: push    offset SEH_9D88F0
0x9D88F7: mov     eax, large fs:0
0x9D88FD: push    eax
0x9D88FE: mov     eax, ___security_cookie
0x9D8903: xor     eax, esp
0x9D8905: push    eax
0x9D8906: lea     eax, [esp+10h+var_C]
0x9D890A: mov     large fs:0, eax
0x9D8910: push    offset dword_B02D18
0x9D8915: mov     ecx, offset INISettingCollection
0x9D891A: mov     [esp+14h+var_4], 0
0x9D8922: call    SettingCollectionList_AddSetting
0x9D8927: push    offset sub_A16A30; void (__cdecl *)()
0x9D892C: call    _atexit
0x9D8931: add     esp, 4
0x9D8934: mov     ecx, [esp+10h+var_C]
0x9D8938: mov     large fs:0, ecx
0x9D893F: pop     ecx
0x9D8940: add     esp, 0Ch
0x9D8943: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA4B0: mov     ecx, offset dword_B02D18
0x9AA4B5: jmp     loc_403BC0
0x9AA4BA: mov     edx, [esp+arg_4]
0x9AA4BE: lea     eax, [edx]
0x9AA4C0: mov     ecx, [edx-4]
0x9AA4C3: xor     ecx, eax
0x9AA4C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA4CA: mov     eax, offset stru_AD7490
0x9AA4CF: jmp     ___CxxFrameHandler3
