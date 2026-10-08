0x9E3A20: push    0FFFFFFFFh
0x9E3A22: push    offset SEH_9E3A20
0x9E3A27: mov     eax, large fs:0
0x9E3A2D: push    eax
0x9E3A2E: mov     eax, ___security_cookie
0x9E3A33: xor     eax, esp
0x9E3A35: push    eax
0x9E3A36: lea     eax, [esp+10h+var_C]
0x9E3A3A: mov     large fs:0, eax
0x9E3A40: push    offset off_B09EF0
0x9E3A45: mov     ecx, offset INISettingCollection
0x9E3A4A: mov     [esp+14h+var_4], 0
0x9E3A52: call    SettingCollectionList_AddSetting
0x9E3A57: push    offset sub_A1C0D0; void (__cdecl *)()
0x9E3A5C: call    _atexit
0x9E3A61: add     esp, 4
0x9E3A64: mov     ecx, [esp+10h+var_C]
0x9E3A68: mov     large fs:0, ecx
0x9E3A6F: pop     ecx
0x9E3A70: add     esp, 0Ch
0x9E3A73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6D90: mov     ecx, offset off_B09EF0
0x9B6D95: jmp     loc_403BC0
0x9B6D9A: mov     edx, [esp+arg_4]
0x9B6D9E: lea     eax, [edx]
0x9B6DA0: mov     ecx, [edx-4]
0x9B6DA3: xor     ecx, eax
0x9B6DA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6DAA: mov     eax, offset stru_AE1AB8
0x9B6DAF: jmp     ___CxxFrameHandler3
