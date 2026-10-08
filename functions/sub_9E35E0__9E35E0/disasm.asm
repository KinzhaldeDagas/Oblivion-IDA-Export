0x9E35E0: push    0FFFFFFFFh
0x9E35E2: push    offset SEH_9E35E0
0x9E35E7: mov     eax, large fs:0
0x9E35ED: push    eax
0x9E35EE: mov     eax, ___security_cookie
0x9E35F3: xor     eax, esp
0x9E35F5: push    eax
0x9E35F6: lea     eax, [esp+10h+var_C]
0x9E35FA: mov     large fs:0, eax
0x9E3600: push    offset SettingGrassEndDistance
0x9E3605: mov     ecx, offset INISettingCollection
0x9E360A: mov     [esp+14h+var_4], 0
0x9E3612: call    SettingCollectionList_AddSetting
0x9E3617: push    offset sub_A1BE80; void (__cdecl *)()
0x9E361C: call    _atexit
0x9E3621: add     esp, 4
0x9E3624: mov     ecx, [esp+10h+var_C]
0x9E3628: mov     large fs:0, ecx
0x9E362F: pop     ecx
0x9E3630: add     esp, 0Ch
0x9E3633: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6310: mov     ecx, offset SettingGrassEndDistance
0x9B6315: jmp     loc_403BC0
0x9B631A: mov     edx, [esp+arg_4]
0x9B631E: lea     eax, [edx]
0x9B6320: mov     ecx, [edx-4]
0x9B6323: xor     ecx, eax
0x9B6325: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B632A: mov     eax, offset stru_AE122C
0x9B632F: jmp     ___CxxFrameHandler3
