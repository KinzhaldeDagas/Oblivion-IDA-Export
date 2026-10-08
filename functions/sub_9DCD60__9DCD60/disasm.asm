0x9DCD60: push    0FFFFFFFFh
0x9DCD62: push    offset SEH_9DCD60
0x9DCD67: mov     eax, large fs:0
0x9DCD6D: push    eax
0x9DCD6E: mov     eax, ___security_cookie
0x9DCD73: xor     eax, esp
0x9DCD75: push    eax
0x9DCD76: lea     eax, [esp+10h+var_C]
0x9DCD7A: mov     large fs:0, eax
0x9DCD80: push    offset dword_B06C8C
0x9DCD85: mov     ecx, offset INISettingCollection
0x9DCD8A: mov     [esp+14h+var_4], 0
0x9DCD92: call    SettingCollectionList_AddSetting
0x9DCD97: push    offset sub_A18C60; void (__cdecl *)()
0x9DCD9C: call    _atexit
0x9DCDA1: add     esp, 4
0x9DCDA4: mov     ecx, [esp+10h+var_C]
0x9DCDA8: mov     large fs:0, ecx
0x9DCDAF: pop     ecx
0x9DCDB0: add     esp, 0Ch
0x9DCDB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B05B0: mov     ecx, offset dword_B06C8C
0x9B05B5: jmp     loc_403BC0
0x9B05BA: mov     edx, [esp+arg_4]
0x9B05BE: lea     eax, [edx]
0x9B05C0: mov     ecx, [edx-4]
0x9B05C3: xor     ecx, eax
0x9B05C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B05CA: mov     eax, offset stru_ADC8C4
0x9B05CF: jmp     ___CxxFrameHandler3
