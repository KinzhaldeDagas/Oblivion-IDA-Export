0x4EC590: push    0FFFFFFFFh
0x4EC592: push    offset SEH_4EC590
0x4EC597: mov     eax, large fs:0
0x4EC59D: push    eax
0x4EC59E: push    ecx
0x4EC59F: push    edi
0x4EC5A0: mov     eax, ds:0B30AACh
0x4EC5A5: xor     eax, esp
0x4EC5A7: push    eax
0x4EC5A8: lea     eax, [esp+18h+var_C]
0x4EC5AC: mov     large fs:0, eax
0x4EC5B2: mov     edi, ecx
0x4EC5B4: mov     [esp+18h+var_10], edi
0x4EC5B8: sub     dword ptr ds:0B360A0h, 1
0x4EC5BF: mov     [esp+18h+var_4], 0
0x4EC5C7: jnz     short loc_4EC601
0x4EC5C9: mov     eax, ds:0B36098h
0x4EC5CE: test    eax, eax
0x4EC5D0: jz      short loc_4EC5E5
0x4EC5D2: push    eax
0x4EC5D3: call    FormHeapFree
0x4EC5D8: add     esp, 4
0x4EC5DB: mov     dword ptr ds:0B36098h, 0
0x4EC5E5: mov     eax, ds:0B3609Ch
0x4EC5EA: test    eax, eax
0x4EC5EC: jz      short loc_4EC601
0x4EC5EE: push    eax
0x4EC5EF: call    FormHeapFree
0x4EC5F4: add     esp, 4
0x4EC5F7: mov     dword ptr ds:0B3609Ch, 0
0x4EC601: mov     ecx, edi
0x4EC603: call    sub_4EBD00
0x4EC608: mov     ecx, edi
0x4EC60A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4EC612: call    ??1?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@UAE@XZ; NiTPointerMap<int,TESTerrainLODQuadRoot *>::~NiTPointerMap<int,TESTerrainLODQuadRoot *>(void)
0x4EC617: mov     ecx, [esp+18h+var_C]
0x4EC61B: mov     large fs:0, ecx
0x4EC622: pop     ecx
0x4EC623: pop     edi
0x4EC624: add     esp, 10h
0x4EC627: retn
