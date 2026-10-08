0x5D7610: push    0FFFFFFFFh
0x5D7612: push    offset ??1SigilStoneMenu@@UAE@XZ_SEH
0x5D7617: mov     eax, large fs:0
0x5D761D: push    eax
0x5D761E: push    ecx
0x5D761F: push    esi
0x5D7620: push    edi
0x5D7621: mov     eax, ds:0B30AACh
0x5D7626: xor     eax, esp
0x5D7628: push    eax
0x5D7629: lea     eax, [esp+1Ch+var_C]
0x5D762D: mov     large fs:0, eax
0x5D7633: mov     esi, ecx
0x5D7635: mov     [esp+1Ch+var_10], esi
0x5D7639: mov     dword ptr [esi], offset ??_7SpellMakingMenu@@6B@; const SpellMakingMenu::`vftable'
0x5D763F: mov     ecx, [esi+58h]
0x5D7642: test    ecx, ecx
0x5D7644: mov     [esp+1Ch+var_4], 0
0x5D764C: jz      short loc_5D765F
0x5D764E: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5D7653: mov     eax, [esi+58h]
0x5D7656: push    eax
0x5D7657: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D765C: add     esp, 4
0x5D765F: mov     edi, [esi+70h]
0x5D7662: test    edi, edi
0x5D7664: jz      short loc_5D7676
0x5D7666: mov     ecx, edi
0x5D7668: call    sub_57FEB0
0x5D766D: push    edi
0x5D766E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D7673: add     esp, 4
0x5D7676: mov     ecx, esi; this
0x5D7678: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5D7680: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5D7685: mov     ecx, [esp+1Ch+var_C]
0x5D7689: mov     large fs:0, ecx
0x5D7690: pop     ecx
0x5D7691: pop     edi
0x5D7692: pop     esi
0x5D7693: add     esp, 10h
0x5D7696: retn
0x9C1FB0: mov     ecx, [ebp-10h]; this
0x9C1FB3: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C1FB8: mov     edx, [esp+arg_4]
0x9C1FBC: lea     eax, [edx-0Ch]
0x9C1FBF: mov     ecx, [edx-10h]
0x9C1FC2: xor     ecx, eax
0x9C1FC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1FC9: mov     eax, offset stru_AEAF30
0x9C1FCE: jmp     ___CxxFrameHandler3
