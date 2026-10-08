0x5A1680: push    0FFFFFFFFh
0x5A1682: push    offset ??1SigilStoneMenu@@UAE@XZ_SEH
0x5A1687: mov     eax, large fs:0
0x5A168D: push    eax
0x5A168E: push    ecx
0x5A168F: push    esi
0x5A1690: push    edi
0x5A1691: mov     eax, ds:0B30AACh
0x5A1696: xor     eax, esp
0x5A1698: push    eax
0x5A1699: lea     eax, [esp+1Ch+var_C]
0x5A169D: mov     large fs:0, eax
0x5A16A3: mov     esi, ecx
0x5A16A5: mov     [esp+1Ch+var_10], esi
0x5A16A9: mov     dword ptr [esi], offset ??_7EnchantmentMenu@@6B@; const EnchantmentMenu::`vftable'
0x5A16AF: mov     edi, [esi+30h]
0x5A16B2: test    edi, edi
0x5A16B4: mov     [esp+1Ch+var_4], 0
0x5A16BC: jz      short loc_5A16CE
0x5A16BE: mov     ecx, edi
0x5A16C0: call    ContainerEntryExtraData_DestroyDataTable
0x5A16C5: push    edi
0x5A16C6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A16CB: add     esp, 4
0x5A16CE: mov     edi, [esi+2Ch]
0x5A16D1: test    edi, edi
0x5A16D3: jz      short loc_5A16E5
0x5A16D5: mov     ecx, edi
0x5A16D7: call    ContainerEntryExtraData_DestroyDataTable
0x5A16DC: push    edi
0x5A16DD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A16E2: add     esp, 4
0x5A16E5: mov     ecx, [esi+90h]
0x5A16EB: test    ecx, ecx
0x5A16ED: jz      short loc_5A1703
0x5A16EF: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5A16F4: mov     eax, [esi+90h]
0x5A16FA: push    eax
0x5A16FB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A1700: add     esp, 4
0x5A1703: mov     edi, [esi+98h]
0x5A1709: test    edi, edi
0x5A170B: jz      short loc_5A171D
0x5A170D: mov     ecx, edi
0x5A170F: call    sub_57FEB0
0x5A1714: push    edi
0x5A1715: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A171A: add     esp, 4
0x5A171D: mov     ecx, esi; this
0x5A171F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5A1727: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5A172C: mov     ecx, [esp+1Ch+var_C]
0x5A1730: mov     large fs:0, ecx
0x5A1737: pop     ecx
0x5A1738: pop     edi
0x5A1739: pop     esi
0x5A173A: add     esp, 10h
0x5A173D: retn
0x9C1FB0: mov     ecx, [ebp-10h]; this
0x9C1FB3: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C1FB8: mov     edx, [esp+arg_4]
0x9C1FBC: lea     eax, [edx-0Ch]
0x9C1FBF: mov     ecx, [edx-10h]
0x9C1FC2: xor     ecx, eax
0x9C1FC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1FC9: mov     eax, offset stru_AEAF30
0x9C1FCE: jmp     ___CxxFrameHandler3
