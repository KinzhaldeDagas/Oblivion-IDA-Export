0x48F7C0: push    0FFFFFFFFh
0x48F7C2: push    offset ContainerExtraData_AddItem_SEH
0x48F7C7: mov     eax, large fs:0
0x48F7CD: push    eax
0x48F7CE: push    ecx
0x48F7CF: push    ebx
0x48F7D0: push    ebp
0x48F7D1: push    esi
0x48F7D2: push    edi
0x48F7D3: mov     eax, ds:0B30AACh
0x48F7D8: xor     eax, esp
0x48F7DA: push    eax
0x48F7DB: lea     eax, [esp+24h+var_C]
0x48F7DF: mov     large fs:0, eax
0x48F7E5: mov     edi, ecx
0x48F7E7: mov     [esp+24h+var_10], edi
0x48F7EB: mov     ebx, [esp+24h+arg_4]
0x48F7EF: fld     dword ptr ds:0A30634h
0x48F7F5: test    ebx, ebx
0x48F7F7: fstp    dword ptr [edi+8]
