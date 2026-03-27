0x4990A0: push    0FFFFFFFFh
0x4990A2: push    offset SEH_4990A0
0x4990A7: mov     eax, large fs:0
0x4990AD: push    eax
0x4990AE: push    ecx
0x4990AF: push    esi
0x4990B0: mov     eax, ds:0B30AACh
0x4990B5: xor     eax, esp
0x4990B7: push    eax
0x4990B8: lea     eax, [esp+18h+var_C]
0x4990BC: mov     large fs:0, eax
0x4990C2: mov     esi, ecx
0x4990C4: mov     [esp+18h+var_10], esi
0x4990C8: mov     eax, [esp+18h+a2]
0x4990CC: push    eax; a2
0x4990CD: call    NiCullingProcess_NiCullingProcess
0x4990D2: lea     ecx, [esi+90h]; this
0x4990D8: mov     [esp+18h+var_4], 0
0x4990E0: mov     dword ptr [esi], offset ??_7TESWaterCullingProcess@@6B@; const TESWaterCullingProcess::`vftable'
0x4990E6: call    sub_716DB0
0x4990EB: mov     eax, esi
0x4990ED: mov     ecx, [esp+18h+var_C]
0x4990F1: mov     large fs:0, ecx
0x4990F8: pop     ecx
0x4990F9: pop     esi
0x4990FA: add     esp, 10h
0x4990FD: retn    4
