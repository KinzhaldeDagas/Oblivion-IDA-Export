0x5BC4A0: push    0FFFFFFFFh
0x5BC4A2: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5BC4A7: mov     eax, large fs:0
0x5BC4AD: push    eax
0x5BC4AE: push    ecx
0x5BC4AF: push    esi
0x5BC4B0: mov     eax, ds:0B30AACh
0x5BC4B5: xor     eax, esp
0x5BC4B7: push    eax
0x5BC4B8: lea     eax, [esp+18h+var_C]
0x5BC4BC: mov     large fs:0, eax
0x5BC4C2: mov     esi, ecx
0x5BC4C4: mov     [esp+18h+var_10], esi
0x5BC4C8: mov     dword ptr [esi], offset ??_7MessageMenu@@6B@; const MessageMenu::`vftable'
0x5BC4CE: push    1; arg1
0x5BC4D0: push    0; canCreate
0x5BC4D2: mov     [esp+20h+var_4], 0
0x5BC4DA: call    InterfaceManager_GetSingleton
0x5BC4DF: mov     ecx, [esi+5Ch]
0x5BC4E2: mov     [eax+0B4h], ecx
0x5BC4E8: add     esp, 8
0x5BC4EB: mov     ecx, esi; this
0x5BC4ED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5BC4F5: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5BC4FA: mov     ecx, [esp+18h+var_C]
0x5BC4FE: mov     large fs:0, ecx
0x5BC505: pop     ecx
0x5BC506: pop     esi
0x5BC507: add     esp, 10h
0x5BC50A: retn
