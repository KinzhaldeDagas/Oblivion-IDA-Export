0x9DAEA0: push    0FFFFFFFFh
0x9DAEA2: push    offset SEH_9DAEA0
0x9DAEA7: mov     eax, large fs:0
0x9DAEAD: push    eax
0x9DAEAE: mov     eax, ___security_cookie
0x9DAEB3: xor     eax, esp
0x9DAEB5: push    eax
0x9DAEB6: lea     eax, [esp+10h+var_C]
0x9DAEBA: mov     large fs:0, eax
0x9DAEC0: push    offset bPreemptivelyUnloadCells
0x9DAEC5: mov     ecx, offset INISettingCollection
0x9DAECA: mov     [esp+14h+var_4], 0
0x9DAED2: call    SettingCollectionList_AddSetting
0x9DAED7: push    offset sub_A17CC0; void (__cdecl *)()
0x9DAEDC: call    _atexit
0x9DAEE1: add     esp, 4
0x9DAEE4: mov     ecx, [esp+10h+var_C]
0x9DAEE8: mov     large fs:0, ecx
0x9DAEEF: pop     ecx
0x9DAEF0: add     esp, 0Ch
0x9DAEF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD270: mov     ecx, offset bPreemptivelyUnloadCells
0x9AD275: jmp     loc_403BC0
0x9AD27A: mov     edx, [esp+arg_4]
0x9AD27E: lea     eax, [edx]
0x9AD280: mov     ecx, [edx-4]
0x9AD283: xor     ecx, eax
0x9AD285: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD28A: mov     eax, offset stru_AD9E30
0x9AD28F: jmp     ___CxxFrameHandler3
