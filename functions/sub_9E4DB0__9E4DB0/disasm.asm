0x9E4DB0: push    0FFFFFFFFh
0x9E4DB2: push    offset SEH_9E4DB0
0x9E4DB7: mov     eax, large fs:0
0x9E4DBD: push    eax
0x9E4DBE: mov     eax, ___security_cookie
0x9E4DC3: xor     eax, esp
0x9E4DC5: push    eax
0x9E4DC6: lea     eax, [esp+10h+var_C]
0x9E4DCA: mov     large fs:0, eax
0x9E4DD0: push    offset off_B11AE4; "1.0, 1.0"
0x9E4DD5: mov     ecx, offset BlendSettingCollection
0x9E4DDA: mov     [esp+14h+var_4], 0
0x9E4DE2: call    SettingCollectionList_AddSetting
0x9E4DE7: push    offset sub_A1CB20; void (__cdecl *)()
0x9E4DEC: call    _atexit
0x9E4DF1: add     esp, 4
0x9E4DF4: mov     ecx, [esp+10h+var_C]
0x9E4DF8: mov     large fs:0, ecx
0x9E4DFF: pop     ecx
0x9E4E00: add     esp, 0Ch
0x9E4E03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9AD0: mov     ecx, offset off_B11AE4; "1.0, 1.0"
0x9B9AD5: jmp     loc_403BC0
0x9B9ADA: mov     edx, [esp+arg_4]
0x9B9ADE: lea     eax, [edx]
0x9B9AE0: mov     ecx, [edx-4]
0x9B9AE3: xor     ecx, eax
0x9B9AE5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9AEA: mov     eax, offset stru_AE3D88
0x9B9AEF: jmp     ___CxxFrameHandler3
