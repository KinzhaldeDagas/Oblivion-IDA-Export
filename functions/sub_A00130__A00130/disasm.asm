0xA00130: push    0FFFFFFFFh
0xA00132: push    offset SEH_A00130
0xA00137: mov     eax, large fs:0
0xA0013D: push    eax
0xA0013E: mov     eax, ___security_cookie
0xA00143: xor     eax, esp
0xA00145: push    eax
0xA00146: lea     eax, [esp+10h+var_C]
0xA0014A: mov     large fs:0, eax
0xA00150: push    offset flt_B23C58
0xA00155: mov     ecx, offset INISettingCollection
0xA0015A: mov     [esp+14h+var_4], 0
0xA00162: call    SettingCollectionList_AddSetting
0xA00167: push    offset sub_A26770; void (__cdecl *)()
0xA0016C: call    _atexit
0xA00171: add     esp, 4
0xA00174: mov     ecx, [esp+10h+var_C]
0xA00178: mov     large fs:0, ecx
0xA0017F: pop     ecx
0xA00180: add     esp, 0Ch
0xA00183: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6E40: mov     ecx, offset flt_B23C58
0x9C6E45: jmp     loc_403BC0
0x9C6E4A: mov     edx, [esp+arg_4]
0x9C6E4E: lea     eax, [edx]
0x9C6E50: mov     ecx, [edx-4]
0x9C6E53: xor     ecx, eax
0x9C6E55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6E5A: mov     eax, offset stru_AEF2D4
0x9C6E5F: jmp     ___CxxFrameHandler3
