0x9DE0E0: push    0FFFFFFFFh
0x9DE0E2: push    offset SEH_9DE0E0
0x9DE0E7: mov     eax, large fs:0
0x9DE0ED: push    eax
0x9DE0EE: mov     eax, ___security_cookie
0x9DE0F3: xor     eax, esp
0x9DE0F5: push    eax
0x9DE0F6: lea     eax, [esp+10h+var_C]
0x9DE0FA: mov     large fs:0, eax
0x9DE100: push    offset flt_B06E2C
0x9DE105: mov     ecx, offset INISettingCollection
0x9DE10A: mov     [esp+14h+var_4], 0
0x9DE112: call    SettingCollectionList_AddSetting
0x9DE117: push    offset sub_A19620; void (__cdecl *)()
0x9DE11C: call    _atexit
0x9DE121: add     esp, 4
0x9DE124: mov     ecx, [esp+10h+var_C]
0x9DE128: mov     large fs:0, ecx
0x9DE12F: pop     ecx
0x9DE130: add     esp, 0Ch
0x9DE133: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0F70: mov     ecx, offset flt_B06E2C
0x9B0F75: jmp     loc_403BC0
0x9B0F7A: mov     edx, [esp+arg_4]
0x9B0F7E: lea     eax, [edx]
0x9B0F80: mov     ecx, [edx-4]
0x9B0F83: xor     ecx, eax
0x9B0F85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0F8A: mov     eax, offset stru_ADD1B4
0x9B0F8F: jmp     ___CxxFrameHandler3
