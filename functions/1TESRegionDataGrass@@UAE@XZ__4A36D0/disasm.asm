0x4A36D0: push    0FFFFFFFFh
0x4A36D2: push    offset SEH_4A5610
0x4A36D7: mov     eax, large fs:0
0x4A36DD: push    eax
0x4A36DE: push    ecx
0x4A36DF: push    esi
0x4A36E0: mov     eax, ds:0B30AACh
0x4A36E5: xor     eax, esp
0x4A36E7: push    eax
0x4A36E8: lea     eax, [esp+18h+var_C]
0x4A36EC: mov     large fs:0, eax
0x4A36F2: mov     esi, ecx
0x4A36F4: mov     [esp+18h+var_10], esi
0x4A36F8: mov     dword ptr [esi], offset ??_7TESRegionDataGrass@@6B@; const TESRegionDataGrass::`vftable'
0x4A36FE: mov     ecx, [esi+8]
0x4A3701: test    ecx, ecx
0x4A3703: mov     [esp+18h+var_4], 0
0x4A370B: jz      short loc_4A3715
0x4A370D: mov     eax, [ecx]
0x4A370F: mov     edx, [eax]
0x4A3711: push    1
0x4A3713: call    edx
0x4A3715: mov     ecx, esi
0x4A3717: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A371F: call    sub_4A3510
0x4A3724: mov     ecx, dword ptr [esp+18h+var_C]
0x4A3728: mov     large fs:0, ecx
0x4A372F: pop     ecx
0x4A3730: pop     esi
0x4A3731: add     esp, 10h
0x4A3734: retn
