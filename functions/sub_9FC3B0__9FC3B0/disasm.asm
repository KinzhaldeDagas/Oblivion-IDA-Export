0x9FC3B0: push    0FFFFFFFFh
0x9FC3B2: push    offset SEH_9FC3B0
0x9FC3B7: mov     eax, large fs:0
0x9FC3BD: push    eax
0x9FC3BE: mov     eax, ___security_cookie
0x9FC3C3: xor     eax, esp
0x9FC3C5: push    eax
0x9FC3C6: lea     eax, [esp+10h+var_C]
0x9FC3CA: mov     large fs:0, eax
0x9FC3D0: push    offset dword_B14160
0x9FC3D5: mov     ecx, offset INISettingCollection
0x9FC3DA: mov     [esp+14h+var_4], 0
0x9FC3E2: call    SettingCollectionList_AddSetting
0x9FC3E7: push    offset sub_A24CB0; void (__cdecl *)()
0x9FC3EC: call    _atexit
0x9FC3F1: add     esp, 4
0x9FC3F4: mov     ecx, [esp+10h+var_C]
0x9FC3F8: mov     large fs:0, ecx
0x9FC3FF: pop     ecx
0x9FC400: add     esp, 0Ch
0x9FC403: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0770: mov     ecx, offset dword_B14160
0x9C0775: jmp     loc_403BC0
0x9C077A: mov     edx, [esp+arg_4]
0x9C077E: lea     eax, [edx]
0x9C0780: mov     ecx, [edx-4]
0x9C0783: xor     ecx, eax
0x9C0785: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C078A: mov     eax, offset stru_AE99DC
0x9C078F: jmp     ___CxxFrameHandler3
