0x9FB160: push    0FFFFFFFFh
0x9FB162: push    offset SEH_9FB160
0x9FB167: mov     eax, large fs:0
0x9FB16D: push    eax
0x9FB16E: mov     eax, ___security_cookie
0x9FB173: xor     eax, esp
0x9FB175: push    eax
0x9FB176: lea     eax, [esp+10h+var_C]
0x9FB17A: mov     large fs:0, eax
0x9FB180: push    offset byte_B13230
0x9FB185: mov     ecx, offset INISettingCollection
0x9FB18A: mov     [esp+14h+var_4], 0
0x9FB192: call    SettingCollectionList_AddSetting
0x9FB197: push    offset sub_A244F0; void (__cdecl *)()
0x9FB19C: call    _atexit
0x9FB1A1: add     esp, 4
0x9FB1A4: mov     ecx, [esp+10h+var_C]
0x9FB1A8: mov     large fs:0, ecx
0x9FB1AF: pop     ecx
0x9FB1B0: add     esp, 0Ch
0x9FB1B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE940: mov     ecx, offset byte_B13230
0x9BE945: jmp     loc_403BC0
0x9BE94A: mov     edx, [esp+arg_4]
0x9BE94E: lea     eax, [edx]
0x9BE950: mov     ecx, [edx-4]
0x9BE953: xor     ecx, eax
0x9BE955: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE95A: mov     eax, offset stru_AE8024
0x9BE95F: jmp     ___CxxFrameHandler3
