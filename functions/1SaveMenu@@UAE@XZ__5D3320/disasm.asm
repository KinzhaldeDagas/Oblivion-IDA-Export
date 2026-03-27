0x5D3320: push    0FFFFFFFFh
0x5D3322: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5D3327: mov     eax, large fs:0
0x5D332D: push    eax
0x5D332E: push    ecx
0x5D332F: push    esi
0x5D3330: mov     eax, ds:0B30AACh
0x5D3335: xor     eax, esp
0x5D3337: push    eax
0x5D3338: lea     eax, [esp+18h+var_C]
0x5D333C: mov     large fs:0, eax
0x5D3342: mov     esi, ecx
0x5D3344: mov     dword ptr [esi], offset ??_7SaveMenu@@6B@; const SaveMenu::`vftable'
0x5D334A: mov     eax, [esi+50h]
0x5D334D: push    eax
0x5D334E: call    FormHeapFree
0x5D3353: xor     eax, eax
0x5D3355: add     esp, 4
0x5D3358: mov     ecx, esi; this
0x5D335A: mov     [esi+50h], eax
0x5D335D: mov     [esi+56h], ax
0x5D3361: mov     [esi+54h], ax
0x5D3365: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5D336D: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D3372: mov     ecx, [esp+18h+var_C]
0x5D3376: mov     large fs:0, ecx
0x5D337D: pop     ecx
0x5D337E: pop     esi
0x5D337F: add     esp, 10h
0x5D3382: retn
