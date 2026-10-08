0x9E2DC0: push    0FFFFFFFFh
0x9E2DC2: push    offset SEH_9E2DC0
0x9E2DC7: mov     eax, large fs:0
0x9E2DCD: push    eax
0x9E2DCE: mov     eax, ___security_cookie
0x9E2DD3: xor     eax, esp
0x9E2DD5: push    eax
0x9E2DD6: lea     eax, [esp+10h+var_C]
0x9E2DDA: mov     large fs:0, eax
0x9E2DE0: push    offset dword_B08B84
0x9E2DE5: mov     ecx, offset INISettingCollection
0x9E2DEA: mov     [esp+14h+var_4], 0
0x9E2DF2: call    SettingCollectionList_AddSetting
0x9E2DF7: push    offset sub_A1B9C0; void (__cdecl *)()
0x9E2DFC: call    _atexit
0x9E2E01: add     esp, 4
0x9E2E04: mov     ecx, [esp+10h+var_C]
0x9E2E08: mov     large fs:0, ecx
0x9E2E0F: pop     ecx
0x9E2E10: add     esp, 0Ch
0x9E2E13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4F60: mov     ecx, offset dword_B08B84
0x9B4F65: jmp     loc_403BC0
0x9B4F6A: mov     edx, [esp+arg_4]
0x9B4F6E: lea     eax, [edx]
0x9B4F70: mov     ecx, [edx-4]
0x9B4F73: xor     ecx, eax
0x9B4F75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4F7A: mov     eax, offset stru_AE018C
0x9B4F7F: jmp     ___CxxFrameHandler3
