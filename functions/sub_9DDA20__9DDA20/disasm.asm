0x9DDA20: push    0FFFFFFFFh
0x9DDA22: push    offset SEH_9DDA20
0x9DDA27: mov     eax, large fs:0
0x9DDA2D: push    eax
0x9DDA2E: mov     eax, ___security_cookie
0x9DDA33: xor     eax, esp
0x9DDA35: push    eax
0x9DDA36: lea     eax, [esp+10h+var_C]
0x9DDA3A: mov     large fs:0, eax
0x9DDA40: push    offset flt_B06D9C
0x9DDA45: mov     ecx, offset INISettingCollection
0x9DDA4A: mov     [esp+14h+var_4], 0
0x9DDA52: call    SettingCollectionList_AddSetting
0x9DDA57: push    offset sub_A192C0; void (__cdecl *)()
0x9DDA5C: call    _atexit
0x9DDA61: add     esp, 4
0x9DDA64: mov     ecx, [esp+10h+var_C]
0x9DDA68: mov     large fs:0, ecx
0x9DDA6F: pop     ecx
0x9DDA70: add     esp, 0Ch
0x9DDA73: retn
