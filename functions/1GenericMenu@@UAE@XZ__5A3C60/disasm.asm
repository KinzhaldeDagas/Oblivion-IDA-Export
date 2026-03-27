0x5A3C60: push    0FFFFFFFFh
0x5A3C62: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5A3C67: mov     eax, large fs:0
0x5A3C6D: push    eax
0x5A3C6E: push    ecx
0x5A3C6F: push    esi
0x5A3C70: mov     eax, ds:0B30AACh
0x5A3C75: xor     eax, esp
0x5A3C77: push    eax
0x5A3C78: lea     eax, [esp+18h+var_C]
0x5A3C7C: mov     large fs:0, eax
0x5A3C82: mov     esi, ecx
0x5A3C84: mov     [esp+18h+var_10], esi
0x5A3C88: mov     dword ptr [esi], offset ??_7GenericMenu@@6B@; const GenericMenu::`vftable'
0x5A3C8E: push    1; arg1
0x5A3C90: push    0; canCreate
0x5A3C92: mov     [esp+20h+var_4], 0
0x5A3C9A: call    InterfaceManager_GetSingleton
0x5A3C9F: mov     ecx, [esi+28h]
0x5A3CA2: mov     [eax+0B4h], ecx
0x5A3CA8: add     esp, 8
0x5A3CAB: mov     ecx, esi; this
0x5A3CAD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5A3CB5: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A3CBA: mov     ecx, [esp+18h+var_C]
0x5A3CBE: mov     large fs:0, ecx
0x5A3CC5: pop     ecx
0x5A3CC6: pop     esi
0x5A3CC7: add     esp, 10h
0x5A3CCA: retn
