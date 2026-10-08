0x9D9FA0: push    0FFFFFFFFh
0x9D9FA2: push    offset SEH_9D9FA0
0x9D9FA7: mov     eax, large fs:0
0x9D9FAD: push    eax
0x9D9FAE: mov     eax, ___security_cookie
0x9D9FB3: xor     eax, esp
0x9D9FB5: push    eax
0x9D9FB6: lea     eax, [esp+10h+var_C]
0x9D9FBA: mov     large fs:0, eax
0x9D9FC0: push    offset unk_B0340C
0x9D9FC5: mov     ecx, offset INISettingCollection
0x9D9FCA: mov     [esp+14h+var_4], 0
0x9D9FD2: call    SettingCollectionList_AddSetting
0x9D9FD7: push    offset sub_A17570; void (__cdecl *)()
0x9D9FDC: call    _atexit
0x9D9FE1: add     esp, 4
0x9D9FE4: mov     ecx, [esp+10h+var_C]
0x9D9FE8: mov     large fs:0, ecx
0x9D9FEF: pop     ecx
0x9D9FF0: add     esp, 0Ch
0x9D9FF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AB1C0: mov     ecx, offset unk_B0340C
0x9AB1C5: jmp     loc_403BC0
0x9AB1CA: mov     edx, [esp+arg_4]
0x9AB1CE: lea     eax, [edx]
0x9AB1D0: mov     ecx, [edx-4]
0x9AB1D3: xor     ecx, eax
0x9AB1D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB1DA: mov     eax, offset stru_AD813C
0x9AB1DF: jmp     ___CxxFrameHandler3
