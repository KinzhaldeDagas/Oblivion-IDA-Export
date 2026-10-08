0x4B7F70: push    0FFFFFFFFh
0x4B7F72: push    offset SEH_6ACAB0
0x4B7F77: mov     eax, large fs:0
0x4B7F7D: push    eax
0x4B7F7E: push    ebp
0x4B7F7F: push    esi
0x4B7F80: push    edi
0x4B7F81: mov     eax, ds:0B30AACh
0x4B7F86: xor     eax, esp
0x4B7F88: push    eax
0x4B7F89: lea     eax, [esp+1Ch+var_C]
0x4B7F8D: mov     large fs:0, eax
0x4B7F93: mov     edi, ecx
0x4B7F95: mov     ebp, [esp+1Ch+reference]
0x4B7F99: push    ebp; reference
0x4B7F9A: call    TESBoundObject_Create3D; Generic TESBoundObject Create3D wrapper: dispatches virtual +0xEC with the reference and a zero mode argument.
0x4B7F9F: mov     esi, eax
0x4B7FA1: test    esi, esi
0x4B7FA3: jz      loc_4B8083
0x4B7FA9: push    offset stru_B3B900
0x4B7FAE: mov     ecx, esi
0x4B7FB0: call    sub_700010
0x4B7FB5: test    byte ptr [edi+64h], 2
0x4B7FB9: jz      loc_4B8075
0x4B7FBF: test    ebp, ebp
0x4B7FC1: jz      short loc_4B7FD2
0x4B7FC3: mov     ecx, [ebp+8]
0x4B7FC6: shr     ecx, 0Dh
0x4B7FC9: test    cl, 1
0x4B7FCC: jnz     loc_4B8075
0x4B7FD2: xor     edi, edi
0x4B7FD4: or      ebp, 0FFFFFFFFh
0x4B7FD7: cmp     eax, edi
0x4B7FD9: jnz     short loc_4B8025
0x4B7FDB: push    44h ; 'D'; Size
0x4B7FDD: call    FormHeapAlloc
0x4B7FE2: add     esp, 4
0x4B7FE5: mov     [esp+1Ch+reference], eax
0x4B7FE9: cmp     eax, edi
0x4B7FEB: mov     [esp+1Ch+var_4], edi
0x4B7FEF: jz      short loc_4B7FFA
0x4B7FF1: mov     ecx, eax
0x4B7FF3: call    sub_60E0A0
0x4B7FF8: mov     edi, eax
0x4B7FFA: fld     dword ptr ds:0B35B2Ch
0x4B8000: push    ecx
0x4B8001: mov     ecx, edi
0x4B8003: fstp    [esp+20h+var_20]; float
0x4B8006: mov     [esp+20h+var_4], ebp
0x4B800A: call    sub_60E0C0
0x4B800F: push    offset sub_4B76A0; value
0x4B8014: mov     ecx, edi; this
0x4B8016: call    Shared_SetDwordAtOffset40; In this call context, Shared_SetDwordAtOffset40 initializes the BSPlayerDistanceCheckController field at +0x40; it is not operating on TESClass.
0x4B801B: mov     edx, [edi]
0x4B801D: mov     eax, [edx+58h]
0x4B8020: push    esi
0x4B8021: mov     ecx, edi
0x4B8023: call    eax
0x4B8025: push    offset dword_A7D0EC
0x4B802A: mov     ecx, esi
0x4B802C: call    NiObjectNET_GetExtraData; NiObjectNET::GetExtraData(name), native RET 4 behavior. Player shadow BBX lookups remain native after Pass247 rollback.
0x4B8031: mov     edi, eax
0x4B8033: test    edi, edi
0x4B8035: jnz     short loc_4B806F
0x4B8037: push    10h; Size
0x4B8039: call    FormHeapAlloc
0x4B803E: add     esp, 4
0x4B8041: mov     [esp+1Ch+reference], eax
0x4B8045: test    eax, eax
0x4B8047: mov     [esp+1Ch+var_4], 1
0x4B804F: jz      short loc_4B805A
0x4B8051: mov     ecx, eax
0x4B8053: call    BSXFlags_constr
0x4B8058: jmp     short loc_4B805C
0x4B805A: xor     eax, eax
0x4B805C: push    eax
0x4B805D: push    offset dword_A7D0EC
0x4B8062: mov     ecx, esi
0x4B8064: mov     [esp+24h+var_4], ebp
0x4B8068: mov     edi, eax
0x4B806A: call    sub_6FF820
0x4B806F: or      dword ptr [edi+0Ch], 1
0x4B8073: jmp     short loc_4B8081
0x4B8075: test    eax, eax
0x4B8077: jz      short loc_4B8081
0x4B8079: push    eax
0x4B807A: mov     ecx, esi
0x4B807C: call    NiObjectNET_RemoveController; Removes a specific NiTimeController from NiObjectNET's refcounted controller chain, relinking predecessor/head and clearing the removed controller's next link with balanced temporary references.
0x4B8081: mov     eax, esi
0x4B8083: mov     ecx, [esp+1Ch+var_C]
0x4B8087: mov     large fs:0, ecx
0x4B808E: pop     ecx
0x4B808F: pop     edi
0x4B8090: pop     esi
0x4B8091: pop     ebp
0x4B8092: add     esp, 0Ch
0x4B8095: retn    4
0x9B3B90: mov     eax, [ebp+4]
0x9B3B93: push    eax
0x9B3B94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3B99: pop     ecx
0x9B3B9A: retn
0x9B3B9B: mov     eax, [ebp+4]
0x9B3B9E: push    eax
0x9B3B9F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3BA4: pop     ecx
0x9B3BA5: retn
0x9B3BA6: mov     edx, [esp+arg_4]
0x9B3BAA: lea     eax, [edx-0Ch]
0x9B3BAD: mov     ecx, [edx-10h]
0x9B3BB0: xor     ecx, eax
0x9B3BB2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3BB7: mov     eax, offset stru_ADF520
0x9B3BBC: jmp     ___CxxFrameHandler3
