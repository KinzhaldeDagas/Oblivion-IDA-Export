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
