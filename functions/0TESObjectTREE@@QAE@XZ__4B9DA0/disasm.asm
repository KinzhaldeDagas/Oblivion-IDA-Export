0x4B9DA0: push    0FFFFFFFFh
0x4B9DA2: push    offset ??0TESObjectTREE@@QAE@XZ_SEH
0x4B9DA7: mov     eax, large fs:0
0x4B9DAD: push    eax
0x4B9DAE: push    ecx
0x4B9DAF: push    ebx
0x4B9DB0: push    ebp
0x4B9DB1: push    esi
0x4B9DB2: push    edi
0x4B9DB3: mov     eax, ds:0B30AACh
0x4B9DB8: xor     eax, esp
0x4B9DBA: push    eax
0x4B9DBB: lea     eax, [esp+24h+var_C]
0x4B9DBF: mov     large fs:0, eax
0x4B9DC5: mov     esi, ecx
0x4B9DC7: mov     [esp+24h+var_10], esi
0x4B9DCB: call    sub_4B31F0
0x4B9DD0: lea     edi, [esi+24h]
0x4B9DD3: xor     ebx, ebx
0x4B9DD5: mov     ecx, edi; this
0x4B9DD7: mov     [esp+24h+var_4], ebx
0x4B9DDB: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B9DE0: mov     dword ptr [edi], offset ??_7TESModelTree@@6B@; const TESModelTree::`vftable'
0x4B9DE6: lea     ebp, [esi+3Ch]
0x4B9DE9: mov     ecx, ebp
0x4B9DEB: mov     byte ptr [esp+24h+var_4], 1
0x4B9DF0: call    TESTexture_constr
0x4B9DF5: mov     dword ptr [ebp+0], offset ??_7TESIconTree@@6B@; const TESIconTree::`vftable'
0x4B9DFC: fld     dword ptr ds:0A45128h
0x4B9E02: mov     dword ptr [esi], offset ??_7TESObjectTREE@@6BTESObjectTREE@@@; const TESObjectTREE::`vftable'{for `TESObjectTREE'}
0x4B9E08: mov     dword ptr [edi], offset ??_7TESObjectTREE@@6BTESModelTree@@@; const TESObjectTREE::`vftable'{for `TESModelTree'}
0x4B9E0E: mov     dword ptr [ebp+0], offset ??_7TESObjectTREE@@6BTESIconTree@@@; const TESObjectTREE::`vftable'{for `TESIconTree'}
0x4B9E15: mov     dword ptr [esi+48h], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x4B9E1C: mov     [esi+50h], bx
0x4B9E20: mov     word ptr [esi+56h], 1
0x4B9E26: mov     [esi+52h], bx
0x4B9E2A: mov     [esi+54h], bx
0x4B9E2E: mov     [esi+4Ch], ebx
0x4B9E31: fstp    dword ptr [esi+58h]
0x4B9E34: fld     dword ptr ds:0A31E2Ch
0x4B9E3A: mov     byte ptr [esi+4], 1Eh
0x4B9E3E: fstp    dword ptr [esi+5Ch]
0x4B9E41: fld     dword ptr ds:0A44F70h
0x4B9E47: fstp    dword ptr [esi+60h]
0x4B9E4A: fld     dword ptr ds:0A3D65Ch
0x4B9E50: fstp    dword ptr [esi+64h]
0x4B9E53: fld     dword ptr ds:0A41724h
0x4B9E59: fstp    dword ptr [esi+68h]
0x4B9E5C: fld1
0x4B9E5E: fst     dword ptr [esi+70h]
0x4B9E61: fstp    dword ptr [esi+74h]
0x4B9E64: mov     eax, ds:0B3FC80h
0x4B9E69: mov     [esi+78h], eax
0x4B9E6C: mov     ecx, ds:0B3FC84h
0x4B9E72: mov     [esi+7Ch], ecx
0x4B9E75: mov     eax, esi
0x4B9E77: mov     ecx, [esp+24h+var_C]
0x4B9E7B: mov     large fs:0, ecx
0x4B9E82: pop     ecx
0x4B9E83: pop     edi
0x4B9E84: pop     esi
0x4B9E85: pop     ebp
0x4B9E86: pop     ebx
0x4B9E87: add     esp, 10h
0x4B9E8A: retn
