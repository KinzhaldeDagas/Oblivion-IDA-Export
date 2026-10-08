0x726AE0: push    0FFFFFFFFh;
0x726AE2: push    offset ??1NiAdditionalGeometryData@@UAE@XZ_SEH
0x726AE7: mov     eax, large fs:0
0x726AED: push    eax
0x726AEE: push    ecx
0x726AEF: push    esi
0x726AF0: push    edi
0x726AF1: mov     eax, ds:0B30AACh
0x726AF6: xor     eax, esp
0x726AF8: push    eax
0x726AF9: lea     eax, [esp+1Ch+var_C]
0x726AFD: mov     large fs:0, eax
0x726B03: mov     esi, ecx
0x726B05: mov     [esp+1Ch+var_10], esi
0x726B09: mov     dword ptr [esi], offset ??_7NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::`vftable'
0x726B0F: xor     edi, edi
0x726B11: cmp     [esi+26h], di
0x726B15: mov     [esp+1Ch+var_4], 1
0x726B1D: jbe     short loc_726B35
0x726B1F: nop
0x726B20: push    1; clearStreams
0x726B22: push    edi; blockIndex
0x726B23: mov     ecx, esi; this
0x726B25: call    OB_NiAdditionalGeometryData_RemoveDataBlock
0x726B2A: movzx   eax, word ptr [esi+26h]
0x726B2E: add     edi, 1
0x726B31: cmp     edi, eax
0x726B33: jb      short loc_726B20
0x726B35: mov     eax, [esi+14h]
0x726B38: test    eax, eax
0x726B3A: jz      short loc_726B45
0x726B3C: push    eax
0x726B3D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x726B42: add     esp, 4
0x726B45: mov     eax, [esi+20h]
0x726B48: push    eax
0x726B49: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x726B50: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x726B55: add     esp, 4
0x726B58: mov     ecx, esi
0x726B5A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x726B62: call    NiRefObject_destr
0x726B67: mov     ecx, [esp+1Ch+var_C]
0x726B6B: mov     large fs:0, ecx
0x726B72: pop     ecx
0x726B73: pop     edi
0x726B74: pop     esi
0x726B75: add     esp, 10h
0x726B78: retn
0x4BFCA0: mov     eax, [ecx+4]
0x4BFCA3: push    eax
0x4BFCA4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x4BFCAA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BFCAF: pop     ecx
0x4BFCB0: retn
0x9CA4E0: mov     ecx, [ebp-10h]
0x9CA4E3: jmp     NiRefObject_destr
0x9CA4E8: mov     ecx, [ebp-10h]
0x9CA4EB: add     ecx, 1Ch
0x9CA4EE: jmp     loc_4BFCA0
0x9CA4F3: mov     edx, [esp+arg_4]
0x9CA4F7: lea     eax, [edx-0Ch]
0x9CA4FA: mov     ecx, [edx-10h]
0x9CA4FD: xor     ecx, eax
0x9CA4FF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA504: mov     eax, offset stru_AF2BDC
0x9CA509: jmp     ___CxxFrameHandler3
