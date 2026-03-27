0x41BAE0: push    0FFFFFFFFh
0x41BAE2: push    offset SEH_404850
0x41BAE7: mov     eax, large fs:0
0x41BAED: push    eax
0x41BAEE: push    ecx
0x41BAEF: push    esi
0x41BAF0: mov     eax, ___security_cookie
0x41BAF5: xor     eax, esp
0x41BAF7: push    eax
0x41BAF8: lea     eax, [esp+18h+var_C]
0x41BAFC: mov     large fs:0, eax
0x41BB02: mov     esi, ecx
0x41BB04: mov     [esp+18h+var_10], esi
0x41BB08: mov     eax, [esp+18h+arg_0]
0x41BB0C: fld     [esp+18h+arg_4]
0x41BB10: fstp    dword ptr [esi]
0x41BB12: mov     [esi+4], eax
0x41BB15: test    eax, eax
0x41BB17: mov     [esp+18h+var_4], 0
0x41BB1F: jz      short loc_41BB6A
0x41BB21: lea     ecx, [esp+18h+arg_0]
0x41BB25: push    ecx
0x41BB26: push    eax
0x41BB27: mov     ecx, offset dword_B35574
0x41BB2C: call    NiTMap_GetAt
0x41BB31: test    al, al
0x41BB33: jz      short loc_41BB5B
0x41BB35: mov     edx, [esi+4]
0x41BB38: push    edx; ArgList
0x41BB39: push    offset aSettingKeySA_0; "Setting key '%s' already used in map.\n"...
0x41BB3E: call    PrintError
0x41BB43: add     esp, 8
0x41BB46: mov     eax, esi
0x41BB48: mov     ecx, [esp+18h+var_C]
0x41BB4C: mov     large fs:0, ecx
0x41BB53: pop     ecx
0x41BB54: pop     esi
0x41BB55: add     esp, 10h
0x41BB58: retn    8
0x41BB5B: mov     eax, [esi+4]
0x41BB5E: push    esi
0x41BB5F: push    eax
0x41BB60: mov     ecx, offset dword_B35574
0x41BB65: call    sub_412D30
0x41BB6A: mov     eax, esi
0x41BB6C: mov     ecx, [esp+18h+var_C]
0x41BB70: mov     large fs:0, ecx
0x41BB77: pop     ecx
0x41BB78: pop     esi
0x41BB79: add     esp, 10h
0x41BB7C: retn    8
