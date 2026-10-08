0x9F9250: push    0FFFFFFFFh
0x9F9252: push    offset SEH_9F9250
0x9F9257: mov     eax, large fs:0
0x9F925D: push    eax
0x9F925E: mov     eax, ___security_cookie
0x9F9263: xor     eax, esp
0x9F9265: push    eax
0x9F9266: lea     eax, [esp+10h+var_C]
0x9F926A: mov     large fs:0, eax
0x9F9270: push    offset flt_B12608
0x9F9275: mov     ecx, offset INISettingCollection
0x9F927A: mov     [esp+14h+var_4], 0
0x9F9282: call    SettingCollectionList_AddSetting
0x9F9287: push    offset sub_A236C0; void (__cdecl *)()
0x9F928C: call    _atexit
0x9F9291: add     esp, 4
0x9F9294: mov     ecx, [esp+10h+var_C]
0x9F9298: mov     large fs:0, ecx
0x9F929F: pop     ecx
0x9F92A0: add     esp, 0Ch
0x9F92A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCE30: mov     ecx, offset flt_B12608
0x9BCE35: jmp     loc_403BC0
0x9BCE3A: mov     edx, [esp+arg_4]
0x9BCE3E: lea     eax, [edx]
0x9BCE40: mov     ecx, [edx-4]
0x9BCE43: xor     ecx, eax
0x9BCE45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCE4A: mov     eax, offset stru_AE6940
0x9BCE4F: jmp     ___CxxFrameHandler3
