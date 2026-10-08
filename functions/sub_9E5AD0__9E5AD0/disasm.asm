0x9E5AD0: push    0FFFFFFFFh
0x9E5AD2: push    offset SEH_9E5AD0
0x9E5AD7: mov     eax, large fs:0
0x9E5ADD: push    eax
0x9E5ADE: mov     eax, ___security_cookie
0x9E5AE3: xor     eax, esp
0x9E5AE5: push    eax
0x9E5AE6: lea     eax, [esp+10h+var_C]
0x9E5AEA: mov     large fs:0, eax
0x9E5AF0: push    offset flt_B11BFC
0x9E5AF5: mov     ecx, offset BlendSettingCollection
0x9E5AFA: mov     [esp+14h+var_4], 0
0x9E5B02: call    SettingCollectionList_AddSetting
0x9E5B07: push    offset sub_A1D1B0; void (__cdecl *)()
0x9E5B0C: call    _atexit
0x9E5B11: add     esp, 4
0x9E5B14: mov     ecx, [esp+10h+var_C]
0x9E5B18: mov     large fs:0, ecx
0x9E5B1F: pop     ecx
0x9E5B20: add     esp, 0Ch
0x9E5B23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA160: mov     ecx, offset flt_B11BFC
0x9BA165: jmp     loc_403BC0
0x9BA16A: mov     edx, [esp+arg_4]
0x9BA16E: lea     eax, [edx]
0x9BA170: mov     ecx, [edx-4]
0x9BA173: xor     ecx, eax
0x9BA175: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA17A: mov     eax, offset stru_AE438C
0x9BA17F: jmp     ___CxxFrameHandler3
