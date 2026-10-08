0x9DBCB0: push    0FFFFFFFFh
0x9DBCB2: push    offset SEH_9DBCB0
0x9DBCB7: mov     eax, large fs:0
0x9DBCBD: push    eax
0x9DBCBE: mov     eax, ___security_cookie
0x9DBCC3: xor     eax, esp
0x9DBCC5: push    eax
0x9DBCC6: lea     eax, [esp+10h+var_C]
0x9DBCCA: mov     large fs:0, eax
0x9DBCD0: push    offset byte_B05BA4
0x9DBCD5: mov     ecx, offset INISettingCollection
0x9DBCDA: mov     [esp+14h+var_4], 0
0x9DBCE2: call    SettingCollectionList_AddSetting
0x9DBCE7: push    offset sub_A183B0; void (__cdecl *)()
0x9DBCEC: call    _atexit
0x9DBCF1: add     esp, 4
0x9DBCF4: mov     ecx, [esp+10h+var_C]
0x9DBCF8: mov     large fs:0, ecx
0x9DBCFF: pop     ecx
0x9DBD00: add     esp, 0Ch
0x9DBD03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE800: mov     ecx, offset byte_B05BA4
0x9AE805: jmp     loc_403BC0
0x9AE80A: mov     edx, [esp+arg_4]
0x9AE80E: lea     eax, [edx]
0x9AE810: mov     ecx, [edx-4]
0x9AE813: xor     ecx, eax
0x9AE815: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE81A: mov     eax, offset stru_ADAFA0
0x9AE81F: jmp     ___CxxFrameHandler3
