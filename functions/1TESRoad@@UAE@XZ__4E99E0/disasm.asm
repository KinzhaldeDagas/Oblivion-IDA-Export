0x4E99E0: push    0FFFFFFFFh
0x4E99E2: push    offset ??1TESRoad@@UAE@XZ_SEH
0x4E99E7: mov     eax, large fs:0
0x4E99ED: push    eax
0x4E99EE: push    ecx
0x4E99EF: push    esi
0x4E99F0: mov     eax, ds:0B30AACh
0x4E99F5: xor     eax, esp
0x4E99F7: push    eax
0x4E99F8: lea     eax, [esp+18h+var_C]
0x4E99FC: mov     large fs:0, eax
0x4E9A02: mov     esi, ecx
0x4E9A04: mov     [esp+18h+var_10], esi
0x4E9A08: mov     dword ptr [esi], offset ??_7TESRoad@@6B@; const TESRoad::`vftable'
0x4E9A0E: mov     [esp+18h+var_4], 1
0x4E9A16: call    sub_4E8C20
0x4E9A1B: lea     ecx, [esi+1Ch]
0x4E9A1E: mov     byte ptr [esp+18h+var_4], 0
0x4E9A23: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>(void)
0x4E9A28: mov     ecx, esi; this
0x4E9A2A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4E9A32: call    TESForm_destr
0x4E9A37: mov     ecx, [esp+18h+var_C]
0x4E9A3B: mov     large fs:0, ecx
0x4E9A42: pop     ecx
0x4E9A43: pop     esi
0x4E9A44: add     esp, 10h
0x4E9A47: retn
