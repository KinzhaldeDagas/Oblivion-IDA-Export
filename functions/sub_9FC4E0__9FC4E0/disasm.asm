0x9FC4E0: push    0FFFFFFFFh
0x9FC4E2: push    offset SEH_9FC4E0
0x9FC4E7: mov     eax, large fs:0
0x9FC4ED: push    eax
0x9FC4EE: mov     eax, ___security_cookie
0x9FC4F3: xor     eax, esp
0x9FC4F5: push    eax
0x9FC4F6: lea     eax, [esp+10h+var_C]
0x9FC4FA: mov     large fs:0, eax
0x9FC500: push    offset off_B1436C; "0002466E"
0x9FC505: mov     ecx, offset INISettingCollection
0x9FC50A: mov     [esp+14h+var_4], 0
0x9FC512: call    SettingCollectionList_AddSetting
0x9FC517: push    offset sub_A24D50; void (__cdecl *)()
0x9FC51C: call    _atexit
0x9FC521: add     esp, 4
0x9FC524: mov     ecx, [esp+10h+var_C]
0x9FC528: mov     large fs:0, ecx
0x9FC52F: pop     ecx
0x9FC530: add     esp, 0Ch
0x9FC533: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0B30: mov     ecx, offset off_B1436C; "0002466E"
0x9C0B35: jmp     loc_403BC0
0x9C0B3A: mov     edx, [esp+arg_4]
0x9C0B3E: lea     eax, [edx]
0x9C0B40: mov     ecx, [edx-4]
0x9C0B43: xor     ecx, eax
0x9C0B45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0B4A: mov     eax, offset stru_AE9CE8
0x9C0B4F: jmp     ___CxxFrameHandler3
