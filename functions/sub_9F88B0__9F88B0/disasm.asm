0x9F88B0: push    0FFFFFFFFh
0x9F88B2: push    offset SEH_9F88B0
0x9F88B7: mov     eax, large fs:0
0x9F88BD: push    eax
0x9F88BE: mov     eax, ___security_cookie
0x9F88C3: xor     eax, esp
0x9F88C5: push    eax
0x9F88C6: lea     eax, [esp+10h+var_C]
0x9F88CA: mov     large fs:0, eax
0x9F88D0: push    offset bFaceMipmaps
0x9F88D5: mov     ecx, offset INISettingCollection
0x9F88DA: mov     [esp+14h+var_4], 0
0x9F88E2: call    SettingCollectionList_AddSetting
0x9F88E7: push    offset sub_A232A0; void (__cdecl *)()
0x9F88EC: call    _atexit
0x9F88F1: add     esp, 4
0x9F88F4: mov     ecx, [esp+10h+var_C]
0x9F88F8: mov     large fs:0, ecx
0x9F88FF: pop     ecx
0x9F8900: add     esp, 0Ch
0x9F8903: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BBAF0: mov     ecx, offset bFaceMipmaps
0x9BBAF5: jmp     loc_403BC0
0x9BBAFA: mov     edx, [esp+arg_4]
0x9BBAFE: lea     eax, [edx]
0x9BBB00: mov     ecx, [edx-4]
0x9BBB03: xor     ecx, eax
0x9BBB05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBB0A: mov     eax, offset stru_AE5840
0x9BBB0F: jmp     ___CxxFrameHandler3
