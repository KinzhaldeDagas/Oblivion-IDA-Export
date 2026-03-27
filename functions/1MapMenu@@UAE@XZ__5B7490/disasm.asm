0x5B7490: push    0FFFFFFFFh
0x5B7492: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5B7497: mov     eax, large fs:0
0x5B749D: push    eax
0x5B749E: push    ecx
0x5B749F: push    esi
0x5B74A0: mov     eax, ds:0B30AACh
0x5B74A5: xor     eax, esp
0x5B74A7: push    eax
0x5B74A8: lea     eax, [esp+18h+var_C]
0x5B74AC: mov     large fs:0, eax
0x5B74B2: mov     esi, ecx
0x5B74B4: mov     dword ptr [esi], offset ??_7MapMenu@@6B@; const MapMenu::`vftable'
0x5B74BA: mov     ecx, [esi+0C4h]
0x5B74C0: test    ecx, ecx
0x5B74C2: jz      short loc_5B74D8
0x5B74C4: call    BSSimpleList_Clear
0x5B74C9: mov     eax, [esi+0C4h]
0x5B74CF: push    eax
0x5B74D0: call    FormHeapFree
0x5B74D5: add     esp, 4
0x5B74D8: mov     ecx, [esi+0C8h]
0x5B74DE: test    ecx, ecx
0x5B74E0: jz      short loc_5B74F6
0x5B74E2: call    BSSimpleList_Clear
0x5B74E7: mov     eax, [esi+0C8h]
0x5B74ED: push    eax
0x5B74EE: call    FormHeapFree
0x5B74F3: add     esp, 4
0x5B74F6: mov     eax, [esi+0B0h]
0x5B74FC: push    eax
0x5B74FD: call    FormHeapFree
0x5B7502: add     esp, 4
0x5B7505: mov     ecx, esi; this
0x5B7507: mov     dword ptr [esi+0B0h], 0
0x5B7511: mov     word ptr [esi+0B6h], 0
0x5B751A: mov     word ptr [esi+0B4h], 0
0x5B7523: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5B752B: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5B7530: mov     ecx, [esp+18h+var_C]
0x5B7534: mov     large fs:0, ecx
0x5B753B: pop     ecx
0x5B753C: pop     esi
0x5B753D: add     esp, 10h
0x5B7540: retn
