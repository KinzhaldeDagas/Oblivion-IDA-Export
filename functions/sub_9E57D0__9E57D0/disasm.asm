0x9E57D0: push    0FFFFFFFFh
0x9E57D2: push    offset SEH_9E57D0
0x9E57D7: mov     eax, large fs:0
0x9E57DD: push    eax
0x9E57DE: mov     eax, ___security_cookie
0x9E57E3: xor     eax, esp
0x9E57E5: push    eax
0x9E57E6: lea     eax, [esp+10h+var_C]
0x9E57EA: mov     large fs:0, eax
0x9E57F0: push    offset off_B11BBC; "1.0, 1.0"
0x9E57F5: mov     ecx, offset BlendSettingCollection
0x9E57FA: mov     [esp+14h+var_4], 0
0x9E5802: call    SettingCollectionList_AddSetting
0x9E5807: push    offset sub_A1D030; void (__cdecl *)()
0x9E580C: call    _atexit
0x9E5811: add     esp, 4
0x9E5814: mov     ecx, [esp+10h+var_C]
0x9E5818: mov     large fs:0, ecx
0x9E581F: pop     ecx
0x9E5820: add     esp, 0Ch
0x9E5823: retn
