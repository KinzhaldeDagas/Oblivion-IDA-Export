0x5D0DD0: push    0FFFFFFFFh
0x5D0DD2: push    offset ??1RepairMenu@@UAE@XZ_SEH
0x5D0DD7: mov     eax, large fs:0
0x5D0DDD: push    eax
0x5D0DDE: push    ecx
0x5D0DDF: push    esi
0x5D0DE0: push    edi
0x5D0DE1: mov     eax, ds:0B30AACh
0x5D0DE6: xor     eax, esp
0x5D0DE8: push    eax
0x5D0DE9: lea     eax, [esp+1Ch+var_C]
0x5D0DED: mov     large fs:0, eax
0x5D0DF3: mov     esi, ecx
0x5D0DF5: mov     [esp+1Ch+var_10], esi
0x5D0DF9: mov     dword ptr [esi], offset ??_7RepairMenu@@6B@; const RepairMenu::`vftable'
0x5D0DFF: lea     edi, [esi+68h]
0x5D0E02: mov     ecx, edi
0x5D0E04: mov     [esp+1Ch+var_4], 1
0x5D0E0C: call    sub_5D0D50
0x5D0E11: mov     ecx, edi; this
0x5D0E13: mov     byte ptr [esp+1Ch+var_4], 0
0x5D0E18: call    ??1RepairMenuList@RepairMenu@@UAE@XZ; RepairMenu::RepairMenuList::~RepairMenuList(void)
0x5D0E1D: mov     ecx, esi; this
0x5D0E1F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5D0E27: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D0E2C: mov     ecx, [esp+1Ch+var_C]
0x5D0E30: mov     large fs:0, ecx
0x5D0E37: pop     ecx
0x5D0E38: pop     edi
0x5D0E39: pop     esi
0x5D0E3A: add     esp, 10h
0x5D0E3D: retn
