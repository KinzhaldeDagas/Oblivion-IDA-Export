0x9E5B30: push    0FFFFFFFFh
0x9E5B32: push    offset SEH_9E5B30
0x9E5B37: mov     eax, large fs:0
0x9E5B3D: push    eax
0x9E5B3E: mov     eax, ___security_cookie
0x9E5B43: xor     eax, esp
0x9E5B45: push    eax
0x9E5B46: lea     eax, [esp+10h+var_C]
0x9E5B4A: mov     large fs:0, eax
0x9E5B50: push    offset flt_B11C04
0x9E5B55: mov     ecx, offset BlendSettingCollection
0x9E5B5A: mov     [esp+14h+var_4], 0
0x9E5B62: call    SettingCollectionList_AddSetting
0x9E5B67: push    offset sub_A1D1E0; void (__cdecl *)()
0x9E5B6C: call    _atexit
0x9E5B71: add     esp, 4
0x9E5B74: mov     ecx, [esp+10h+var_C]
0x9E5B78: mov     large fs:0, ecx
0x9E5B7F: pop     ecx
0x9E5B80: add     esp, 0Ch
0x9E5B83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA190: mov     ecx, offset flt_B11C04
0x9BA195: jmp     loc_403BC0
0x9BA19A: mov     edx, [esp+arg_4]
0x9BA19E: lea     eax, [edx]
0x9BA1A0: mov     ecx, [edx-4]
0x9BA1A3: xor     ecx, eax
0x9BA1A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA1AA: mov     eax, offset stru_AE43B8
0x9BA1AF: jmp     ___CxxFrameHandler3
