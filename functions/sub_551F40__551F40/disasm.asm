0x551F40: push    0FFFFFFFFh
0x551F42: push    offset SEH_5527D0
0x551F47: mov     eax, large fs:0
0x551F4D: push    eax
0x551F4E: push    ecx
0x551F4F: push    esi
0x551F50: mov     eax, ds:0B30AACh
0x551F55: xor     eax, esp
0x551F57: push    eax
0x551F58: lea     eax, [esp+18h+var_C]
0x551F5C: mov     large fs:0, eax
0x551F62: mov     esi, ecx
0x551F64: mov     [esp+18h+var_10], esi
0x551F68: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x551F6D: push    2; int
0x551F6F: push    18h; unsigned int
0x551F71: lea     eax, [esi+48h]
0x551F74: push    eax; void *
0x551F75: mov     [esp+28h+var_4], 1
0x551F7D: call    $LN21
0x551F82: mov     eax, [esi+3Ch]
0x551F85: test    eax, eax
0x551F87: jz      short loc_551F92
0x551F89: push    eax
0x551F8A: call    FormHeapFree
0x551F8F: add     esp, 4
0x551F92: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x551F97: push    2; int
0x551F99: push    18h; unsigned int
0x551F9B: push    esi; void *
0x551F9C: mov     dword ptr [esi+3Ch], 0
0x551FA3: mov     dword ptr [esi+40h], 0
0x551FAA: mov     dword ptr [esi+44h], 0
0x551FB1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x551FB9: call    $LN21
0x551FBE: mov     ecx, [esp+18h+var_C]
0x551FC2: mov     large fs:0, ecx
0x551FC9: pop     ecx
0x551FCA: pop     esi
0x551FCB: add     esp, 10h
0x551FCE: retn
