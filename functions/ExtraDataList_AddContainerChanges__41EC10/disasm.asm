0x41EC10: push    0FFFFFFFFh
0x41EC12: push    offset SEH_6E3250
0x41EC17: mov     eax, large fs:0
0x41EC1D: push    eax
0x41EC1E: push    esi
0x41EC1F: push    edi
0x41EC20: mov     eax, ___security_cookie
0x41EC25: xor     eax, esp
0x41EC27: push    eax
0x41EC28: lea     eax, [esp+18h+var_C]
0x41EC2C: mov     large fs:0, eax
0x41EC32: mov     edi, ecx
0x41EC34: mov     esi, [esp+18h+arg_0]
0x41EC38: test    esi, esi
0x41EC3A: jz      short loc_41EC94
0x41EC3C: push    1Ah; a2
0x41EC3E: call    BaseExtraList_GetExtraData
0x41EC43: test    eax, eax
0x41EC45: jz      short loc_41EC5E
0x41EC47: mov     [eax+0Ch], esi
0x41EC4A: mov     ecx, [esp+18h+var_C]
0x41EC4E: mov     large fs:0, ecx
0x41EC55: pop     ecx
0x41EC56: pop     edi
0x41EC57: pop     esi
0x41EC58: add     esp, 0Ch
0x41EC5B: retn    4
0x41EC5E: push    10h; Size
0x41EC60: call    FormHeapAlloc
0x41EC65: add     esp, 4
0x41EC68: mov     [esp+18h+arg_0], eax
0x41EC6C: test    eax, eax
0x41EC6E: mov     [esp+18h+var_4], 0
0x41EC76: jz      short loc_41EC82
0x41EC78: push    esi
0x41EC79: mov     ecx, eax; this
0x41EC7B: call    ??0ExtraContainerChanges@@QAE@XZ; ExtraContainerChanges::ExtraContainerChanges(void)
0x41EC80: jmp     short loc_41EC84
0x41EC82: xor     eax, eax
0x41EC84: push    eax; BSExtraData *
0x41EC85: mov     ecx, edi; ExtraDataList *
0x41EC87: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41EC8F: call    BaseExtraList_AddExtra
0x41EC94: mov     ecx, [esp+18h+var_C]
0x41EC98: mov     large fs:0, ecx
0x41EC9F: pop     ecx
0x41ECA0: pop     edi
0x41ECA1: pop     esi
0x41ECA2: add     esp, 0Ch
0x41ECA5: retn    4
