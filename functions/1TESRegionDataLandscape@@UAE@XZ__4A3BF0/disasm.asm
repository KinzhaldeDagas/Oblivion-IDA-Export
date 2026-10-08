0x4A3BF0: push    0FFFFFFFFh
0x4A3BF2: push    offset ??1TESRegionDataLandscape@@UAE@XZ_SEH
0x4A3BF7: mov     eax, large fs:0
0x4A3BFD: push    eax
0x4A3BFE: push    ecx
0x4A3BFF: push    esi
0x4A3C00: push    edi
0x4A3C01: mov     eax, ds:0B30AACh
0x4A3C06: xor     eax, esp
0x4A3C08: push    eax
0x4A3C09: lea     eax, [esp+1Ch+var_C]
0x4A3C0D: mov     large fs:0, eax
0x4A3C13: mov     esi, ecx
0x4A3C15: mov     [esp+1Ch+var_10], esi
0x4A3C19: mov     dword ptr [esi], offset ??_7TESRegionDataLandscape@@6B@; const TESRegionDataLandscape::`vftable'
0x4A3C1F: mov     edi, [esi+8]
0x4A3C22: test    edi, edi
0x4A3C24: mov     [esp+1Ch+var_4], 0
0x4A3C2C: jz      short loc_4A3C3E
0x4A3C2E: mov     ecx, edi; void *
0x4A3C30: call    TESTexture_destr
0x4A3C35: push    edi
0x4A3C36: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A3C3B: add     esp, 4
0x4A3C3E: mov     ecx, esi
0x4A3C40: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4A3C48: call    TESRegionData_SetBaseVTable
0x4A3C4D: mov     ecx, [esp+1Ch+var_C]
0x4A3C51: mov     large fs:0, ecx
0x4A3C58: pop     ecx
0x4A3C59: pop     edi
0x4A3C5A: pop     esi
0x4A3C5B: add     esp, 10h
0x4A3C5E: retn
0x9B2890: mov     ecx, [ebp-10h]
0x9B2893: jmp     TESRegionData_SetBaseVTable
0x9B2898: mov     edx, [esp+arg_4]
0x9B289C: lea     eax, [edx-0Ch]
0x9B289F: mov     ecx, [edx-10h]
0x9B28A2: xor     ecx, eax
0x9B28A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B28A9: mov     eax, offset stru_ADE820
0x9B28AE: jmp     ___CxxFrameHandler3
