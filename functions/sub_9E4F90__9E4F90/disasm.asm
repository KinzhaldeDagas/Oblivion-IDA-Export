0x9E4F90: push    0FFFFFFFFh
0x9E4F92: push    offset SEH_9E4F90
0x9E4F97: mov     eax, large fs:0
0x9E4F9D: push    eax
0x9E4F9E: mov     eax, ___security_cookie
0x9E4FA3: xor     eax, esp
0x9E4FA5: push    eax
0x9E4FA6: lea     eax, [esp+10h+var_C]
0x9E4FAA: mov     large fs:0, eax
0x9E4FB0: push    offset off_B11B0C; "1.0, 1.0"
0x9E4FB5: mov     ecx, offset BlendSettingCollection
0x9E4FBA: mov     [esp+14h+var_4], 0
0x9E4FC2: call    SettingCollectionList_AddSetting
0x9E4FC7: push    offset sub_A1CC10; void (__cdecl *)()
0x9E4FCC: call    _atexit
0x9E4FD1: add     esp, 4
0x9E4FD4: mov     ecx, [esp+10h+var_C]
0x9E4FD8: mov     large fs:0, ecx
0x9E4FDF: pop     ecx
0x9E4FE0: add     esp, 0Ch
0x9E4FE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9BC0: mov     ecx, offset off_B11B0C; "1.0, 1.0"
0x9B9BC5: jmp     loc_403BC0
0x9B9BCA: mov     edx, [esp+arg_4]
0x9B9BCE: lea     eax, [edx]
0x9B9BD0: mov     ecx, [edx-4]
0x9B9BD3: xor     ecx, eax
0x9B9BD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9BDA: mov     eax, offset stru_AE3E64
0x9B9BDF: jmp     ___CxxFrameHandler3
