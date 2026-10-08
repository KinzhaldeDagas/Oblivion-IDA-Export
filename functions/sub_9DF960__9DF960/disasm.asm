0x9DF960: push    0FFFFFFFFh
0x9DF962: push    offset SEH_9DF960
0x9DF967: mov     eax, large fs:0
0x9DF96D: push    eax
0x9DF96E: mov     eax, ___security_cookie
0x9DF973: xor     eax, esp
0x9DF975: push    eax
0x9DF976: lea     eax, [esp+10h+var_C]
0x9DF97A: mov     large fs:0, eax
0x9DF980: push    offset UseWaterReflectionActors
0x9DF985: mov     ecx, offset INISettingCollection
0x9DF98A: mov     [esp+14h+var_4], 0
0x9DF992: call    SettingCollectionList_AddSetting
0x9DF997: push    offset sub_A1A2D0; void (__cdecl *)()
0x9DF99C: call    _atexit
0x9DF9A1: add     esp, 4
0x9DF9A4: mov     ecx, [esp+10h+var_C]
0x9DF9A8: mov     large fs:0, ecx
0x9DF9AF: pop     ecx
0x9DF9B0: add     esp, 0Ch
0x9DF9B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1DC0: mov     ecx, offset UseWaterReflectionActors
0x9B1DC5: jmp     loc_403BC0
0x9B1DCA: mov     edx, [esp+arg_4]
0x9B1DCE: lea     eax, [edx]
0x9B1DD0: mov     ecx, [edx-4]
0x9B1DD3: xor     ecx, eax
0x9B1DD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1DDA: mov     eax, offset stru_ADDE54
0x9B1DDF: jmp     ___CxxFrameHandler3
