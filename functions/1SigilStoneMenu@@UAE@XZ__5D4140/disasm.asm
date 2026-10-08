0x5D4140: push    0FFFFFFFFh
0x5D4142: push    offset ??1SigilStoneMenu@@UAE@XZ_SEH
0x5D4147: mov     eax, large fs:0
0x5D414D: push    eax
0x5D414E: push    ecx
0x5D414F: push    esi
0x5D4150: push    edi
0x5D4151: mov     eax, ds:0B30AACh
0x5D4156: xor     eax, esp
0x5D4158: push    eax
0x5D4159: lea     eax, [esp+1Ch+var_C]
0x5D415D: mov     large fs:0, eax
0x5D4163: mov     esi, ecx
0x5D4165: mov     [esp+1Ch+var_10], esi
0x5D4169: mov     dword ptr [esi], offset ??_7SigilStoneMenu@@6B@; const SigilStoneMenu::`vftable'
0x5D416F: mov     edi, [esi+2Ch]
0x5D4172: test    edi, edi
0x5D4174: mov     [esp+1Ch+var_4], 0
0x5D417C: jz      short loc_5D418E
0x5D417E: mov     ecx, edi
0x5D4180: call    ContainerEntryExtraData_DestroyDataTable
0x5D4185: push    edi
0x5D4186: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D418B: add     esp, 4
0x5D418E: mov     ecx, [esi+6Ch]
0x5D4191: test    ecx, ecx
0x5D4193: jz      short loc_5D41A6
0x5D4195: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5D419A: mov     eax, [esi+6Ch]
0x5D419D: push    eax
0x5D419E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D41A3: add     esp, 4
0x5D41A6: mov     edi, [esi+74h]
0x5D41A9: test    edi, edi
0x5D41AB: jz      short loc_5D41BD
0x5D41AD: mov     ecx, edi
0x5D41AF: call    sub_57FEB0
0x5D41B4: push    edi
0x5D41B5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D41BA: add     esp, 4
0x5D41BD: mov     ecx, esi; this
0x5D41BF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5D41C7: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D41CC: mov     ecx, [esp+1Ch+var_C]
0x5D41D0: mov     large fs:0, ecx
0x5D41D7: pop     ecx
0x5D41D8: pop     edi
0x5D41D9: pop     esi
0x5D41DA: add     esp, 10h
0x5D41DD: retn
0x9C1FB0: mov     ecx, [ebp-10h]; this
0x9C1FB3: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C1FB8: mov     edx, [esp+arg_4]
0x9C1FBC: lea     eax, [edx-0Ch]
0x9C1FBF: mov     ecx, [edx-10h]
0x9C1FC2: xor     ecx, eax
0x9C1FC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1FC9: mov     eax, offset stru_AEAF30
0x9C1FCE: jmp     ___CxxFrameHandler3
