0x9E4E70: push    0FFFFFFFFh
0x9E4E72: push    offset SEH_9E4E70
0x9E4E77: mov     eax, large fs:0
0x9E4E7D: push    eax
0x9E4E7E: mov     eax, ___security_cookie
0x9E4E83: xor     eax, esp
0x9E4E85: push    eax
0x9E4E86: lea     eax, [esp+10h+var_C]
0x9E4E8A: mov     large fs:0, eax
0x9E4E90: push    offset off_B11AF4; "1.0, 1.0"
0x9E4E95: mov     ecx, offset BlendSettingCollection
0x9E4E9A: mov     [esp+14h+var_4], 0
0x9E4EA2: call    SettingCollectionList_AddSetting
0x9E4EA7: push    offset sub_A1CB80; void (__cdecl *)()
0x9E4EAC: call    _atexit
0x9E4EB1: add     esp, 4
0x9E4EB4: mov     ecx, [esp+10h+var_C]
0x9E4EB8: mov     large fs:0, ecx
0x9E4EBF: pop     ecx
0x9E4EC0: add     esp, 0Ch
0x9E4EC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9B30: mov     ecx, offset off_B11AF4; "1.0, 1.0"
0x9B9B35: jmp     loc_403BC0
0x9B9B3A: mov     edx, [esp+arg_4]
0x9B9B3E: lea     eax, [edx]
0x9B9B40: mov     ecx, [edx-4]
0x9B9B43: xor     ecx, eax
0x9B9B45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9B4A: mov     eax, offset stru_AE3DE0
0x9B9B4F: jmp     ___CxxFrameHandler3
