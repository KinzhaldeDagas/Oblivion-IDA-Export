0x9DB150: push    0FFFFFFFFh
0x9DB152: push    offset SEH_9DB150
0x9DB157: mov     eax, large fs:0
0x9DB15D: push    eax
0x9DB15E: mov     eax, ___security_cookie
0x9DB163: xor     eax, esp
0x9DB165: push    eax
0x9DB166: lea     eax, [esp+10h+var_C]
0x9DB16A: mov     large fs:0, eax
0x9DB170: push    offset unk_B05204
0x9DB175: mov     ecx, offset INISettingCollection
0x9DB17A: mov     [esp+14h+var_4], 0
0x9DB182: call    SettingCollectionList_AddSetting
0x9DB187: push    offset sub_A17E10; void (__cdecl *)()
0x9DB18C: call    _atexit
0x9DB191: add     esp, 4
0x9DB194: mov     ecx, [esp+10h+var_C]
0x9DB198: mov     large fs:0, ecx
0x9DB19F: pop     ecx
0x9DB1A0: add     esp, 0Ch
0x9DB1A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD3C0: mov     ecx, offset unk_B05204
0x9AD3C5: jmp     loc_403BC0
0x9AD3CA: mov     edx, [esp+arg_4]
0x9AD3CE: lea     eax, [edx]
0x9AD3D0: mov     ecx, [edx-4]
0x9AD3D3: xor     ecx, eax
0x9AD3D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD3DA: mov     eax, offset stru_AD9F64
0x9AD3DF: jmp     ___CxxFrameHandler3
