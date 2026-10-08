0x9D8AD0: push    0FFFFFFFFh
0x9D8AD2: push    offset SEH_9D8AD0
0x9D8AD7: mov     eax, large fs:0
0x9D8ADD: push    eax
0x9D8ADE: mov     eax, ___security_cookie
0x9D8AE3: xor     eax, esp
0x9D8AE5: push    eax
0x9D8AE6: lea     eax, [esp+10h+var_C]
0x9D8AEA: mov     large fs:0, eax
0x9D8AF0: push    offset off_B02D40; "Test\\CameraPath.nif"
0x9D8AF5: mov     ecx, offset INISettingCollection
0x9D8AFA: mov     [esp+14h+var_4], 0
0x9D8B02: call    SettingCollectionList_AddSetting
0x9D8B07: push    offset sub_A16B20; void (__cdecl *)()
0x9D8B0C: call    _atexit
0x9D8B11: add     esp, 4
0x9D8B14: mov     ecx, [esp+10h+var_C]
0x9D8B18: mov     large fs:0, ecx
0x9D8B1F: pop     ecx
0x9D8B20: add     esp, 0Ch
0x9D8B23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA5A0: mov     ecx, offset off_B02D40; "Test\\CameraPath.nif"
0x9AA5A5: jmp     loc_403BC0
0x9AA5AA: mov     edx, [esp+arg_4]
0x9AA5AE: lea     eax, [edx]
0x9AA5B0: mov     ecx, [edx-4]
0x9AA5B3: xor     ecx, eax
0x9AA5B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA5BA: mov     eax, offset stru_AD756C
0x9AA5BF: jmp     ___CxxFrameHandler3
