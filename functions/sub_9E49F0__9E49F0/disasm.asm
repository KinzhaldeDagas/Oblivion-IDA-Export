0x9E49F0: push    0FFFFFFFFh
0x9E49F2: push    offset SEH_9E49F0
0x9E49F7: mov     eax, large fs:0
0x9E49FD: push    eax
0x9E49FE: mov     eax, ___security_cookie
0x9E4A03: xor     eax, esp
0x9E4A05: push    eax
0x9E4A06: lea     eax, [esp+10h+var_C]
0x9E4A0A: mov     large fs:0, eax
0x9E4A10: push    offset off_B11A94; "1.0, 1.0"
0x9E4A15: mov     ecx, offset BlendSettingCollection
0x9E4A1A: mov     [esp+14h+var_4], 0
0x9E4A22: call    SettingCollectionList_AddSetting
0x9E4A27: push    offset sub_A1C940; void (__cdecl *)()
0x9E4A2C: call    _atexit
0x9E4A31: add     esp, 4
0x9E4A34: mov     ecx, [esp+10h+var_C]
0x9E4A38: mov     large fs:0, ecx
0x9E4A3F: pop     ecx
0x9E4A40: add     esp, 0Ch
0x9E4A43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B98F0: mov     ecx, offset off_B11A94; "1.0, 1.0"
0x9B98F5: jmp     loc_403BC0
0x9B98FA: mov     edx, [esp+arg_4]
0x9B98FE: lea     eax, [edx]
0x9B9900: mov     ecx, [edx-4]
0x9B9903: xor     ecx, eax
0x9B9905: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B990A: mov     eax, offset stru_AE3BD0
0x9B990F: jmp     ___CxxFrameHandler3
