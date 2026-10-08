0x4A4AF0: push    0FFFFFFFFh
0x4A4AF2: push    offset SEH_4A5610
0x4A4AF7: mov     eax, large fs:0
0x4A4AFD: push    eax
0x4A4AFE: push    ecx
0x4A4AFF: push    esi
0x4A4B00: mov     eax, ds:0B30AACh
0x4A4B05: xor     eax, esp
0x4A4B07: push    eax
0x4A4B08: lea     eax, [esp+18h+var_C]
0x4A4B0C: mov     large fs:0, eax
0x4A4B12: mov     esi, ecx
0x4A4B14: mov     dword ptr [esi], offset ??_7TESRegionDataMap@@6B@; const TESRegionDataMap::`vftable'
0x4A4B1A: mov     eax, [esi+8]
0x4A4B1D: push    eax
0x4A4B1E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A4B23: xor     eax, eax
0x4A4B25: add     esp, 4
0x4A4B28: mov     ecx, esi
0x4A4B2A: mov     [esi+8], eax
0x4A4B2D: mov     [esi+0Eh], ax
0x4A4B31: mov     [esi+0Ch], ax
0x4A4B35: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A4B3D: call    TESRegionData_SetBaseVTable
0x4A4B42: mov     ecx, [esp+18h+var_C]
0x4A4B46: mov     large fs:0, ecx
0x4A4B4D: pop     ecx
0x4A4B4E: pop     esi
0x4A4B4F: add     esp, 10h
0x4A4B52: retn
0x9B27E0: mov     ecx, [ebp-10h]
0x9B27E3: jmp     TESRegionData_SetBaseVTable
0x9B27E8: mov     edx, [esp+arg_4]
0x9B27EC: lea     eax, [edx-8]
0x9B27EF: mov     ecx, [edx-0Ch]
0x9B27F2: xor     ecx, eax
0x9B27F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B27F9: mov     eax, offset stru_ADE774
0x9B27FE: jmp     ___CxxFrameHandler3
