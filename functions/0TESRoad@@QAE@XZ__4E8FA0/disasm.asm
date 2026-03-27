0x4E8FA0: push    0FFFFFFFFh
0x4E8FA2: push    offset ??0TESRoad@@QAE@XZ_SEH
0x4E8FA7: mov     eax, large fs:0
0x4E8FAD: push    eax
0x4E8FAE: push    ecx
0x4E8FAF: push    esi
0x4E8FB0: push    edi
0x4E8FB1: mov     eax, ds:0B30AACh
0x4E8FB6: xor     eax, esp
0x4E8FB8: push    eax
0x4E8FB9: lea     eax, [esp+1Ch+var_C]
0x4E8FBD: mov     large fs:0, eax
0x4E8FC3: mov     esi, ecx
0x4E8FC5: mov     [esp+1Ch+var_10], esi
0x4E8FC9: call    TESForm_constr
0x4E8FCE: mov     dword ptr [esi], offset ??_7TESRoad@@6B@; const TESRoad::`vftable'
0x4E8FD4: xor     ecx, ecx
0x4E8FD6: mov     eax, 25h ; '%'
0x4E8FDB: xor     edi, edi
0x4E8FDD: mov     [esi+20h], eax
0x4E8FE0: mov     edx, 4
0x4E8FE5: mul     edx
0x4E8FE7: seto    cl
0x4E8FEA: mov     [esp+1Ch+var_4], edi
0x4E8FEE: mov     dword ptr [esi+1Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E8FF5: mov     [esi+28h], edi
0x4E8FF8: neg     ecx
0x4E8FFA: or      ecx, eax
0x4E8FFC: push    ecx; Size
0x4E8FFD: call    FormHeapAlloc
0x4E9002: mov     ecx, [esi+20h]
0x4E9005: add     ecx, ecx
0x4E9007: add     ecx, ecx
0x4E9009: push    ecx
0x4E900A: push    edi
0x4E900B: push    eax
0x4E900C: mov     [esi+24h], eax
0x4E900F: call    __memset
0x4E9014: add     esp, 10h
0x4E9017: mov     dword ptr [esi+1Ch], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESConnectedPoint@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESConnectedPoint *> *>::`vftable'
0x4E901E: mov     ecx, esi; this
0x4E9020: mov     byte ptr [esp+1Ch+var_4], 1
0x4E9025: mov     byte ptr [esi+4], 38h ; '8'
0x4E9029: mov     [esi+2Ch], edi
0x4E902C: mov     [esi+18h], edi
0x4E902F: call    j_TESForm_InitializeComponents
0x4E9034: mov     eax, esi
0x4E9036: mov     ecx, [esp+1Ch+var_C]
0x4E903A: mov     large fs:0, ecx
0x4E9041: pop     ecx
0x4E9042: pop     edi
0x4E9043: pop     esi
0x4E9044: add     esp, 10h
0x4E9047: retn
