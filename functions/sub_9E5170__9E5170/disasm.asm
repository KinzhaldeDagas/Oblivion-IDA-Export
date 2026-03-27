0x9E5170: push    0FFFFFFFFh
0x9E5172: push    offset SEH_9E5170
0x9E5177: mov     eax, large fs:0
0x9E517D: push    eax
0x9E517E: mov     eax, ___security_cookie
0x9E5183: xor     eax, esp
0x9E5185: push    eax
0x9E5186: lea     eax, [esp+10h+var_C]
0x9E518A: mov     large fs:0, eax
0x9E5190: push    offset off_B11B34; "1.0, 1.0"
0x9E5195: mov     ecx, offset BlendSettingCollection
0x9E519A: mov     [esp+14h+var_4], 0
0x9E51A2: call    SettingCollectionList_AddSetting
0x9E51A7: push    offset sub_A1CD00; void (__cdecl *)()
0x9E51AC: call    _atexit
0x9E51B1: add     esp, 4
0x9E51B4: mov     ecx, [esp+10h+var_C]
0x9E51B8: mov     large fs:0, ecx
0x9E51BF: pop     ecx
0x9E51C0: add     esp, 0Ch
0x9E51C3: retn
