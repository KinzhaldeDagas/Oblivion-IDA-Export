0x4A4A80: push    0FFFFFFFFh; Verified: Map region data constructor initializes base and assigns Map vtable; mapName defaults to 'Default Region Name'.
0x4A4A82: push    offset SEH_4A4A80
0x4A4A87: mov     eax, large fs:0
0x4A4A8D: push    eax
0x4A4A8E: push    ecx
0x4A4A8F: push    esi
0x4A4A90: mov     eax, ds:0B30AACh
0x4A4A95: xor     eax, esp
0x4A4A97: push    eax
0x4A4A98: lea     eax, [esp+18h+var_C]
0x4A4A9C: mov     large fs:0, eax
0x4A4AA2: mov     esi, ecx
0x4A4AA4: mov     [esp+18h+var_10], esi
0x4A4AA8: call    TESRegionData_InitializeBase
0x4A4AAD: xor     eax, eax
0x4A4AAF: lea     ecx, [esi+8]; this
0x4A4AB2: mov     dword ptr [esi], offset ??_7TESRegionDataMap@@6B@; const TESRegionDataMap::`vftable'
0x4A4AB8: mov     [esp+18h+var_4], eax
0x4A4ABC: mov     [ecx], eax
0x4A4ABE: mov     [ecx+4], ax
0x4A4AC2: mov     [ecx+6], ax
0x4A4AC6: push    eax; a3
0x4A4AC7: push    offset aDefaultRegionN; "Default Region Name"
0x4A4ACC: mov     byte ptr [esp+20h+var_4], 1
0x4A4AD1: call    BSStringT_Set
0x4A4AD6: mov     eax, esi
0x4A4AD8: mov     ecx, [esp+18h+var_C]
0x4A4ADC: mov     large fs:0, ecx
0x4A4AE3: pop     ecx
0x4A4AE4: pop     esi
0x4A4AE5: add     esp, 10h
0x4A4AE8: retn
0x9B27B0: mov     ecx, [ebp-10h]
0x9B27B3: jmp     TESRegionData_SetBaseVTable
0x9B27B8: mov     ecx, [ebp-10h]
0x9B27BB: add     ecx, 8; void *
0x9B27BE: jmp     BSStringT_Clear
0x9B27C3: mov     edx, [esp+arg_4]
0x9B27C7: lea     eax, [edx-8]
0x9B27CA: mov     ecx, [edx-0Ch]
0x9B27CD: xor     ecx, eax
0x9B27CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B27D4: mov     eax, offset stru_ADE748
0x9B27D9: jmp     ___CxxFrameHandler3
