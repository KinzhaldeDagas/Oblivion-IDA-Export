0x5A6850: push    0FFFFFFFFh
0x5A6852: push    offset ??1HUDMainMenu@@UAE@XZ_SEH
0x5A6857: mov     eax, large fs:0
0x5A685D: push    eax
0x5A685E: push    ecx
0x5A685F: push    esi
0x5A6860: mov     eax, ds:0B30AACh
0x5A6865: xor     eax, esp
0x5A6867: push    eax
0x5A6868: lea     eax, [esp+18h+var_C]
0x5A686C: mov     large fs:0, eax
0x5A6872: mov     esi, ecx
0x5A6874: mov     [esp+18h+var_10], esi
0x5A6878: mov     dword ptr [esi], offset ??_7HUDMainMenu@@6B@; const HUDMainMenu::`vftable'
0x5A687E: mov     [esp+18h+var_4], 1
0x5A6886: call    sub_5A66A0
0x5A688B: lea     ecx, [esi+78h]; this
0x5A688E: mov     byte ptr [esp+18h+var_4], 0
0x5A6893: call    ??1IconArray@@UAE@XZ; IconArray::~IconArray(void)
0x5A6898: mov     ecx, esi; this
0x5A689A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5A68A2: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A68A7: mov     ecx, [esp+18h+var_C]
0x5A68AB: mov     large fs:0, ecx
0x5A68B2: pop     ecx
0x5A68B3: pop     esi
0x5A68B4: add     esp, 10h
0x5A68B7: retn
