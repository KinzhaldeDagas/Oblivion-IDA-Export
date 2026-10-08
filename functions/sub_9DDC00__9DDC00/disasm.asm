0x9DDC00: push    0FFFFFFFFh
0x9DDC02: push    offset SEH_9DDC00
0x9DDC07: mov     eax, large fs:0
0x9DDC0D: push    eax
0x9DDC0E: mov     eax, ___security_cookie
0x9DDC13: xor     eax, esp
0x9DDC15: push    eax
0x9DDC16: lea     eax, [esp+10h+var_C]
0x9DDC1A: mov     large fs:0, eax
0x9DDC20: push    offset byte_B06DC4
0x9DDC25: mov     ecx, offset INISettingCollection
0x9DDC2A: mov     [esp+14h+var_4], 0
0x9DDC32: call    SettingCollectionList_AddSetting
0x9DDC37: push    offset sub_A193B0; void (__cdecl *)()
0x9DDC3C: call    _atexit
0x9DDC41: add     esp, 4
0x9DDC44: mov     ecx, [esp+10h+var_C]
0x9DDC48: mov     large fs:0, ecx
0x9DDC4F: pop     ecx
0x9DDC50: add     esp, 0Ch
0x9DDC53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0D00: mov     ecx, offset byte_B06DC4
0x9B0D05: jmp     loc_403BC0
0x9B0D0A: mov     edx, [esp+arg_4]
0x9B0D0E: lea     eax, [edx]
0x9B0D10: mov     ecx, [edx-4]
0x9B0D13: xor     ecx, eax
0x9B0D15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0D1A: mov     eax, offset stru_ADCF78
0x9B0D1F: jmp     ___CxxFrameHandler3
