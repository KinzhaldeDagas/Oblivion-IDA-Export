0x4E99E0: push    0FFFFFFFFh; Verified TESRoad destructor calls TESRoad_ClearConnectedPointMap, destroys the connected-point map at +0x1C, then runs TESForm destruction. TESWorldSpace owns/releases the TESRoad pointer at WorldSpace+0x54.
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
0x4E9A16: call    TESRoad_ClearConnectedPointMap; Verified: TESRoad destructor helper traverses its 37-bucket map of BSSimpleList<TESConnectedPoint*> values, calls the per-entry cleanup routine for each point, frees each list node and list header, clears the map, and zeros TESRoad+0x18. Exact TESConnectedPoint layout/cleanup semantics remain Unknown.
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
0x9B6030: mov     ecx, [ebp-10h]; this
0x9B6033: jmp     TESForm_destr
0x9B6038: mov     ecx, [ebp-10h]
0x9B603B: add     ecx, 1Ch
0x9B603E: jmp     ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>(void)
0x9B6043: mov     edx, [esp+arg_4]
0x9B6047: lea     eax, [edx-8]
0x9B604A: mov     ecx, [edx-0Ch]
0x9B604D: xor     ecx, eax
0x9B604F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6054: mov     eax, offset stru_AE0F88
0x9B6059: jmp     ___CxxFrameHandler3
