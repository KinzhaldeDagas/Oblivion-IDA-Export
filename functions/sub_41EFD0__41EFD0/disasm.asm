0x41EFD0: push    0FFFFFFFFh; ExtraPoison setter always creates/updates raw serialized FormID, including zero. Post-load resolution removes zero/unresolved/non-AlchemyItem targets.
0x41EFD2: push    offset SEH_8C62B0
0x41EFD7: mov     eax, large fs:0
0x41EFDD: push    eax
0x41EFDE: push    ecx
0x41EFDF: push    esi
0x41EFE0: mov     eax, ___security_cookie
0x41EFE5: xor     eax, esp
0x41EFE7: push    eax
0x41EFE8: lea     eax, [esp+18h+var_C]
0x41EFEC: mov     large fs:0, eax
0x41EFF2: mov     esi, ecx
0x41EFF4: push    48h ; 'H'; a2
0x41EFF6: call    BaseExtraList_GetExtraData
0x41EFFB: test    eax, eax
0x41EFFD: jz      short loc_41F019
0x41EFFF: mov     ecx, [esp+18h+arg_0]
0x41F003: mov     [eax+0Ch], ecx
0x41F006: mov     ecx, [esp+18h+var_C]
0x41F00A: mov     large fs:0, ecx
0x41F011: pop     ecx
0x41F012: pop     esi
0x41F013: add     esp, 10h
0x41F016: retn    4
0x41F019: push    10h; Size
0x41F01B: call    FormHeapAlloc
0x41F020: add     esp, 4
0x41F023: mov     [esp+18h+var_10], eax
0x41F027: test    eax, eax
0x41F029: mov     [esp+18h+var_4], 0
0x41F031: jz      short loc_41F041
0x41F033: mov     edx, [esp+18h+arg_0]
0x41F037: push    edx
0x41F038: mov     ecx, eax
0x41F03A: call    ExtraPoison_ctor; Constructs ExtraPoison, type 0x48 and supplied AlchemyItem pointer.
0x41F03F: jmp     short loc_41F043
0x41F041: xor     eax, eax
0x41F043: push    eax; BSExtraData *
0x41F044: mov     ecx, esi; ExtraDataList *
0x41F046: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41F04E: call    BaseExtraList_AddExtra
0x41F053: mov     ecx, [esp+18h+var_C]
0x41F057: mov     large fs:0, ecx
0x41F05E: pop     ecx
0x41F05F: pop     esi
0x41F060: add     esp, 10h
0x41F063: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
