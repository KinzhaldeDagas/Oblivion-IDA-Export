0x9DE920: push    0FFFFFFFFh
0x9DE922: push    offset SEH_9DE920
0x9DE927: mov     eax, large fs:0
0x9DE92D: push    eax
0x9DE92E: mov     eax, ___security_cookie
0x9DE933: xor     eax, esp
0x9DE935: push    eax
0x9DE936: lea     eax, [esp+10h+var_C]
0x9DE93A: mov     large fs:0, eax
0x9DE940: push    offset flt_B06EDC
0x9DE945: mov     ecx, offset INISettingCollection
0x9DE94A: mov     [esp+14h+var_4], 0
0x9DE952: call    SettingCollectionList_AddSetting
0x9DE957: push    offset sub_A19A40; void (__cdecl *)()
0x9DE95C: call    _atexit
0x9DE961: add     esp, 4
0x9DE964: mov     ecx, [esp+10h+var_C]
0x9DE968: mov     large fs:0, ecx
0x9DE96F: pop     ecx
0x9DE970: add     esp, 0Ch
0x9DE973: retn
