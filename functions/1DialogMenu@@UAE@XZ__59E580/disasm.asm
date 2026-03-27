0x59E580: push    0FFFFFFFFh
0x59E582: push    offset ??1DialogMenu@@UAE@XZ_SEH
0x59E587: mov     eax, large fs:0
0x59E58D: push    eax
0x59E58E: push    ecx
0x59E58F: push    esi
0x59E590: mov     eax, ds:0B30AACh
0x59E595: xor     eax, esp
0x59E597: push    eax
0x59E598: lea     eax, [esp+18h+var_C]
0x59E59C: mov     large fs:0, eax
0x59E5A2: mov     esi, ecx
0x59E5A4: mov     [esp+18h+var_10], esi
0x59E5A8: mov     dword ptr [esi], offset ??_7DialogMenu@@6B@; const DialogMenu::`vftable'
0x59E5AE: mov     eax, ds:0B33398h
0x59E5B3: test    eax, eax
0x59E5B5: mov     [esp+18h+var_4], 1
0x59E5BD: jz      short loc_59E5F8
0x59E5BF: cmp     byte ptr [eax], 0
0x59E5C2: jnz     short loc_59E5F8
0x59E5C4: cmp     byte ptr [eax+1], 0
0x59E5C8: jnz     short loc_59E5F8
0x59E5CA: fld     dword ptr ds:0B0313Ch
0x59E5D0: push    0; a3
0x59E5D2: push    ecx
0x59E5D3: mov     ecx, ds:0B333CCh; this
0x59E5D9: fstp    [esp+20h+a2]; a2
0x59E5DC: call    SetCameraFOV_0
0x59E5E1: mov     ecx, ds:0B333C4h; this
0x59E5E7: test    ecx, ecx
0x59E5E9: jz      short loc_59E5F8
0x59E5EB: cmp     byte ptr [esi+7Ch], 0
0x59E5EF: setz    al
0x59E5F2: push    eax; a1
0x59E5F3: call    TogglePOV
0x59E5F8: mov     eax, [esi+14h]
0x59E5FB: test    eax, eax
0x59E5FD: jz      short loc_59E615
0x59E5FF: push    0
0x59E601: push    eax
0x59E602: push    1; arg1
0x59E604: push    0; canCreate
0x59E606: call    InterfaceManager_GetSingleton
0x59E60B: add     esp, 8
0x59E60E: mov     ecx, eax
0x59E610: call    sub_57CFE0
0x59E615: mov     eax, [esi+8Ch]
0x59E61B: push    eax
0x59E61C: call    FormHeapFree
0x59E621: add     esp, 4
0x59E624: mov     ecx, esi; this
0x59E626: mov     dword ptr [esi+8Ch], 0
0x59E630: mov     word ptr [esi+92h], 0
0x59E639: mov     word ptr [esi+90h], 0
0x59E642: mov     [esp+18h+var_4], 0FFFFFFFFh
0x59E64A: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x59E64F: mov     ecx, [esp+18h+var_C]
0x59E653: mov     large fs:0, ecx
0x59E65A: pop     ecx
0x59E65B: pop     esi
0x59E65C: add     esp, 10h
0x59E65F: retn
