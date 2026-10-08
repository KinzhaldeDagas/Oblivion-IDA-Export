0x9FB6A0: push    0FFFFFFFFh
0x9FB6A2: push    offset SEH_9FB6A0
0x9FB6A7: mov     eax, large fs:0
0x9FB6AD: push    eax
0x9FB6AE: mov     eax, ___security_cookie
0x9FB6B3: xor     eax, esp
0x9FB6B5: push    eax
0x9FB6B6: lea     eax, [esp+10h+var_C]
0x9FB6BA: mov     large fs:0, eax
0x9FB6C0: push    offset flt_B135E0
0x9FB6C5: mov     ecx, offset INISettingCollection
0x9FB6CA: mov     [esp+14h+var_4], 0
0x9FB6D2: call    SettingCollectionList_AddSetting
0x9FB6D7: push    offset sub_A24790; void (__cdecl *)()
0x9FB6DC: call    _atexit
0x9FB6E1: add     esp, 4
0x9FB6E4: mov     ecx, [esp+10h+var_C]
0x9FB6E8: mov     large fs:0, ecx
0x9FB6EF: pop     ecx
0x9FB6F0: add     esp, 0Ch
0x9FB6F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEFA0: mov     ecx, offset flt_B135E0
0x9BEFA5: jmp     loc_403BC0
0x9BEFAA: mov     edx, [esp+arg_4]
0x9BEFAE: lea     eax, [edx]
0x9BEFB0: mov     ecx, [edx-4]
0x9BEFB3: xor     ecx, eax
0x9BEFB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEFBA: mov     eax, offset stru_AE85E8
0x9BEFBF: jmp     ___CxxFrameHandler3
