0x41EE90: push    0FFFFFFFFh; Updates or creates ExtraCharge type 0x2E with the supplied float.
0x41EE92: push    offset SEH_8C62B0
0x41EE97: mov     eax, large fs:0
0x41EE9D: push    eax
0x41EE9E: push    ecx
0x41EE9F: push    esi
0x41EEA0: mov     eax, ___security_cookie
0x41EEA5: xor     eax, esp
0x41EEA7: push    eax
0x41EEA8: lea     eax, [esp+18h+var_C]
0x41EEAC: mov     large fs:0, eax
0x41EEB2: mov     esi, ecx
0x41EEB4: push    2Eh ; '.'; a2
0x41EEB6: call    BaseExtraList_GetExtraData
0x41EEBB: test    eax, eax
0x41EEBD: jz      short loc_41EED9
0x41EEBF: fld     [esp+18h+arg_0]
0x41EEC3: fstp    dword ptr [eax+0Ch]
0x41EEC6: mov     ecx, [esp+18h+var_C]
0x41EECA: mov     large fs:0, ecx
0x41EED1: pop     ecx
0x41EED2: pop     esi
0x41EED3: add     esp, 10h
0x41EED6: retn    4
0x41EED9: push    10h; Size
0x41EEDB: call    FormHeapAlloc
0x41EEE0: add     esp, 4
0x41EEE3: mov     [esp+18h+var_10], eax
0x41EEE7: test    eax, eax
0x41EEE9: mov     [esp+18h+var_4], 0
0x41EEF1: jz      short loc_41EF04
0x41EEF3: fld     [esp+18h+arg_0]
0x41EEF7: push    ecx
0x41EEF8: mov     ecx, eax
0x41EEFA: fstp    [esp+1Ch+var_1C]; float
0x41EEFD: call    ExtraCharge_ctor; Constructs ExtraCharge: type 0x2E and supplied float value.
0x41EF02: jmp     short loc_41EF06
0x41EF04: xor     eax, eax
0x41EF06: push    eax; BSExtraData *
0x41EF07: mov     ecx, esi; ExtraDataList *
0x41EF09: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41EF11: call    BaseExtraList_AddExtra
0x41EF16: mov     ecx, [esp+18h+var_C]
0x41EF1A: mov     large fs:0, ecx
0x41EF21: pop     ecx
0x41EF22: pop     esi
0x41EF23: add     esp, 10h
0x41EF26: retn    4
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
