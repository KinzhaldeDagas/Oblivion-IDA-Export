0x9DDF60: push    0FFFFFFFFh
0x9DDF62: push    offset SEH_9DDF60
0x9DDF67: mov     eax, large fs:0
0x9DDF6D: push    eax
0x9DDF6E: mov     eax, ___security_cookie
0x9DDF73: xor     eax, esp
0x9DDF75: push    eax
0x9DDF76: lea     eax, [esp+10h+var_C]
0x9DDF7A: mov     large fs:0, eax
0x9DDF80: push    offset flt_B06E0C
0x9DDF85: mov     ecx, offset INISettingCollection
0x9DDF8A: mov     [esp+14h+var_4], 0
0x9DDF92: call    SettingCollectionList_AddSetting
0x9DDF97: push    offset sub_A19560; void (__cdecl *)()
0x9DDF9C: call    _atexit
0x9DDFA1: add     esp, 4
0x9DDFA4: mov     ecx, [esp+10h+var_C]
0x9DDFA8: mov     large fs:0, ecx
0x9DDFAF: pop     ecx
0x9DDFB0: add     esp, 0Ch
0x9DDFB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0EB0: mov     ecx, offset flt_B06E0C
0x9B0EB5: jmp     loc_403BC0
0x9B0EBA: mov     edx, [esp+arg_4]
0x9B0EBE: lea     eax, [edx]
0x9B0EC0: mov     ecx, [edx-4]
0x9B0EC3: xor     ecx, eax
0x9B0EC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0ECA: mov     eax, offset stru_ADD104
0x9B0ECF: jmp     ___CxxFrameHandler3
