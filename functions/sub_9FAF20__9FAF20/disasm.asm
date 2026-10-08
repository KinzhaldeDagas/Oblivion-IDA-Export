0x9FAF20: push    0FFFFFFFFh
0x9FAF22: push    offset SEH_9FAF20
0x9FAF27: mov     eax, large fs:0
0x9FAF2D: push    eax
0x9FAF2E: mov     eax, ___security_cookie
0x9FAF33: xor     eax, esp
0x9FAF35: push    eax
0x9FAF36: lea     eax, [esp+10h+var_C]
0x9FAF3A: mov     large fs:0, eax
0x9FAF40: push    offset byte_B13200
0x9FAF45: mov     ecx, offset INISettingCollection
0x9FAF4A: mov     [esp+14h+var_4], 0
0x9FAF52: call    SettingCollectionList_AddSetting
0x9FAF57: push    offset sub_A243D0; void (__cdecl *)()
0x9FAF5C: call    _atexit
0x9FAF61: add     esp, 4
0x9FAF64: mov     ecx, [esp+10h+var_C]
0x9FAF68: mov     large fs:0, ecx
0x9FAF6F: pop     ecx
0x9FAF70: add     esp, 0Ch
0x9FAF73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE820: mov     ecx, offset byte_B13200
0x9BE825: jmp     loc_403BC0
0x9BE82A: mov     edx, [esp+arg_4]
0x9BE82E: lea     eax, [edx]
0x9BE830: mov     ecx, [edx-4]
0x9BE833: xor     ecx, eax
0x9BE835: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE83A: mov     eax, offset stru_AE7F1C
0x9BE83F: jmp     ___CxxFrameHandler3
