0x7F30B0: push    0FFFFFFFFh
0x7F30B2: push    offset SEH_8C8970
0x7F30B7: mov     eax, large fs:0
0x7F30BD: push    eax
0x7F30BE: push    ecx
0x7F30BF: push    esi
0x7F30C0: push    edi
0x7F30C1: mov     eax, ds:0B30AACh
0x7F30C6: xor     eax, esp
0x7F30C8: push    eax
0x7F30C9: lea     eax, [esp+1Ch+var_C]
0x7F30CD: mov     large fs:0, eax
0x7F30D3: mov     edi, ecx
0x7F30D5: push    19Ch; Size
0x7F30DA: call    FormHeapAlloc
0x7F30DF: add     esp, 4
0x7F30E2: mov     [esp+1Ch+var_10], eax
0x7F30E6: xor     esi, esi
0x7F30E8: cmp     eax, esi
0x7F30EA: mov     [esp+1Ch+var_4], esi
0x7F30EE: jz      short loc_7F30F9
0x7F30F0: mov     ecx, eax; this
0x7F30F2: call    ??0BoltShaderProperty@@QAE@XZ; BoltShaderProperty::BoltShaderProperty(void)
0x7F30F7: mov     esi, eax
0x7F30F9: mov     eax, [esp+1Ch+cloneProcess]
0x7F30FD: push    eax; cloneProcess
0x7F30FE: push    esi; clone
0x7F30FF: mov     ecx, edi; this
0x7F3101: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F3109: call    BSShaderProperty_CopyCloneMembers; [Verified] Shared BSShaderProperty clone-field copier: delegates to the common property copier, copies source +0x1C and +0x20 into the clone, and clears clone +0x24. Directly used by BSShaderProperty_CreateClone and the inherited path used by GeometryDecalShaderProperty. It does not touch BSShaderLightingProperty's +0x80 DECAL_DATA* list.
0x7F310E: mov     eax, esi
0x7F3110: mov     ecx, [esp+1Ch+var_C]
0x7F3114: mov     large fs:0, ecx
0x7F311B: pop     ecx
0x7F311C: pop     edi
0x7F311D: pop     esi
0x7F311E: add     esp, 10h
0x7F3121: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
