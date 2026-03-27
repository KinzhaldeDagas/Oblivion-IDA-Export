0x41EDF0: push    0FFFFFFFFh
0x41EDF2: push    offset SEH_8C62B0
0x41EDF7: mov     eax, large fs:0
0x41EDFD: push    eax
0x41EDFE: push    ecx
0x41EDFF: push    esi
0x41EE00: mov     eax, ___security_cookie
0x41EE05: xor     eax, esp
0x41EE07: push    eax
0x41EE08: lea     eax, [esp+18h+var_C]
0x41EE0C: mov     large fs:0, eax
0x41EE12: mov     esi, ecx
0x41EE14: push    2Dh ; '-'; a2
0x41EE16: call    BaseExtraList_GetExtraData
0x41EE1B: test    eax, eax
0x41EE1D: jz      short loc_41EE39
0x41EE1F: fld     [esp+18h+arg_0]
0x41EE23: fstp    dword ptr [eax+0Ch]
0x41EE26: mov     ecx, [esp+18h+var_C]
0x41EE2A: mov     large fs:0, ecx
0x41EE31: pop     ecx
0x41EE32: pop     esi
0x41EE33: add     esp, 10h
0x41EE36: retn    4
0x41EE39: push    10h; Size
0x41EE3B: call    FormHeapAlloc
0x41EE40: add     esp, 4
0x41EE43: mov     [esp+18h+var_10], eax
0x41EE47: test    eax, eax
0x41EE49: mov     [esp+18h+var_4], 0
0x41EE51: jz      short loc_41EE64
0x41EE53: fld     [esp+18h+arg_0]
0x41EE57: push    ecx
0x41EE58: mov     ecx, eax
0x41EE5A: fstp    [esp+1Ch+var_1C]; float
0x41EE5D: call    sub_429EC0
0x41EE62: jmp     short loc_41EE66
0x41EE64: xor     eax, eax
0x41EE66: push    eax; BSExtraData *
0x41EE67: mov     ecx, esi; ExtraDataList *
0x41EE69: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41EE71: call    BaseExtraList_AddExtra
0x41EE76: mov     ecx, [esp+18h+var_C]
0x41EE7A: mov     large fs:0, ecx
0x41EE81: pop     ecx
0x41EE82: pop     esi
0x41EE83: add     esp, 10h
0x41EE86: retn    4
