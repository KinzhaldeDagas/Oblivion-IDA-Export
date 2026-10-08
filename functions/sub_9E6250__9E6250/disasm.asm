0x9E6250: push    0FFFFFFFFh
0x9E6252: push    offset SEH_9E6250
0x9E6257: mov     eax, large fs:0
0x9E625D: push    eax
0x9E625E: mov     eax, ___security_cookie
0x9E6263: xor     eax, esp
0x9E6265: push    eax
0x9E6266: lea     eax, [esp+10h+var_C]
0x9E626A: mov     large fs:0, eax
0x9E6270: push    offset flt_B11E2C
0x9E6275: mov     ecx, offset INISettingCollection
0x9E627A: mov     [esp+14h+var_4], 0
0x9E6282: call    SettingCollectionList_AddSetting
0x9E6287: push    offset sub_A1D480; void (__cdecl *)()
0x9E628C: call    _atexit
0x9E6291: add     esp, 4
0x9E6294: mov     ecx, [esp+10h+var_C]
0x9E6298: mov     large fs:0, ecx
0x9E629F: pop     ecx
0x9E62A0: add     esp, 0Ch
0x9E62A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA930: mov     ecx, offset flt_B11E2C
0x9BA935: jmp     loc_403BC0
0x9BA93A: mov     edx, [esp+arg_4]
0x9BA93E: lea     eax, [edx]
0x9BA940: mov     ecx, [edx-4]
0x9BA943: xor     ecx, eax
0x9BA945: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA94A: mov     eax, offset stru_AE4A04
0x9BA94F: jmp     ___CxxFrameHandler3
