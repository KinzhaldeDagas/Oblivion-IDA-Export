0x9FEF20: push    0FFFFFFFFh
0x9FEF22: push    offset SEH_9FEF20
0x9FEF27: mov     eax, large fs:0
0x9FEF2D: push    eax
0x9FEF2E: mov     eax, ___security_cookie
0x9FEF33: xor     eax, esp
0x9FEF35: push    eax
0x9FEF36: lea     eax, [esp+10h+var_C]
0x9FEF3A: mov     large fs:0, eax
0x9FEF40: push    offset flt_B16190
0x9FEF45: mov     ecx, offset INISettingCollection
0x9FEF4A: mov     [esp+14h+var_4], 0
0x9FEF52: call    SettingCollectionList_AddSetting
0x9FEF57: push    offset sub_A26060; void (__cdecl *)()
0x9FEF5C: call    _atexit
0x9FEF61: add     esp, 4
0x9FEF64: mov     ecx, [esp+10h+var_C]
0x9FEF68: mov     large fs:0, ecx
0x9FEF6F: pop     ecx
0x9FEF70: add     esp, 0Ch
0x9FEF73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C66B0: mov     ecx, offset flt_B16190
0x9C66B5: jmp     loc_403BC0
0x9C66BA: mov     edx, [esp+arg_4]
0x9C66BE: lea     eax, [edx]
0x9C66C0: mov     ecx, [edx-4]
0x9C66C3: xor     ecx, eax
0x9C66C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C66CA: mov     eax, offset stru_AEEBE4
0x9C66CF: jmp     ___CxxFrameHandler3
