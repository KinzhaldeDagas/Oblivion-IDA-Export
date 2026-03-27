0x9E4AB0: push    0FFFFFFFFh
0x9E4AB2: push    offset SEH_9E4AB0
0x9E4AB7: mov     eax, large fs:0
0x9E4ABD: push    eax
0x9E4ABE: mov     eax, ___security_cookie
0x9E4AC3: xor     eax, esp
0x9E4AC5: push    eax
0x9E4AC6: lea     eax, [esp+10h+var_C]
0x9E4ACA: mov     large fs:0, eax
0x9E4AD0: push    offset off_B11AA4; "0.5, 0.7"
0x9E4AD5: mov     ecx, offset BlendSettingCollection
0x9E4ADA: mov     [esp+14h+var_4], 0
0x9E4AE2: call    SettingCollectionList_AddSetting
0x9E4AE7: push    offset sub_A1C9A0; void (__cdecl *)()
0x9E4AEC: call    _atexit
0x9E4AF1: add     esp, 4
0x9E4AF4: mov     ecx, [esp+10h+var_C]
0x9E4AF8: mov     large fs:0, ecx
0x9E4AFF: pop     ecx
0x9E4B00: add     esp, 0Ch
0x9E4B03: retn
