0x9F89B0: push    0FFFFFFFFh; Register bFixFaceNormals:General with INISettingCollection and install its shutdown cleanup.
0x9F89B2: push    offset SEH_9F89B0
0x9F89B7: mov     eax, large fs:0
0x9F89BD: push    eax
0x9F89BE: mov     eax, ___security_cookie
0x9F89C3: xor     eax, esp
0x9F89C5: push    eax
0x9F89C6: lea     eax, [esp+10h+var_C]
0x9F89CA: mov     large fs:0, eax
0x9F89D0: push    offset bFixFaceNormals
0x9F89D5: mov     ecx, offset INISettingCollection
0x9F89DA: mov     [esp+14h+var_4], 0
0x9F89E2: call    SettingCollectionList_AddSetting
0x9F89E7: push    offset Destroy_bFixFaceNormalsSetting; void (__cdecl *)()
0x9F89EC: call    _atexit
0x9F89F1: add     esp, 4
0x9F89F4: mov     ecx, [esp+10h+var_C]
0x9F89F8: mov     large fs:0, ecx
0x9F89FF: pop     ecx
0x9F8A00: add     esp, 0Ch
0x9F8A03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC3A0: mov     ecx, offset bFixFaceNormals
0x9BC3A5: jmp     loc_403BC0
0x9BC3AA: mov     edx, [esp+arg_4]
0x9BC3AE: lea     eax, [edx]
0x9BC3B0: mov     ecx, [edx-4]
0x9BC3B3: xor     ecx, eax
0x9BC3B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC3BA: mov     eax, offset stru_AE5F8C
0x9BC3BF: jmp     ___CxxFrameHandler3
