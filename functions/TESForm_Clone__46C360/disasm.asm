0x46C360: push    0FFFFFFFFh; Verified ordinary form-clone path: allocates via TESForm_CreateDynamic, invokes the destination CopyFrom virtual, restores EditorID and records the cloneMap entry. This does not dispatch CreateDuplicateForm; WorldSpace's deep cell/persistent-cell clone is a separate +0x38 virtual path.
0x46C362: push    offset SEH_5ACE20
0x46C367: mov     eax, large fs:0
0x46C36D: push    eax
0x46C36E: sub     esp, 8
0x46C371: push    ebx
0x46C372: push    ebp
0x46C373: push    esi
0x46C374: push    edi
0x46C375: mov     eax, ds:0B30AACh
0x46C37A: xor     eax, esp
0x46C37C: push    eax
0x46C37D: lea     eax, [esp+28h+var_C]
0x46C381: mov     large fs:0, eax
0x46C387: mov     esi, ecx
0x46C389: movzx   eax, byte ptr [esi+4]
0x46C38D: push    eax; formType
0x46C38E: call    TESForm_CreateDynamic; Verified runtime serialized-form factory dispatch: form type 0x29 constructs a 0x30-byte TESSubSpace; constructor sets default bounds and the TESSubSpace vtable.
0x46C393: mov     edi, eax
0x46C395: xor     ebp, ebp
0x46C397: add     esp, 4
0x46C39A: cmp     edi, ebp
0x46C39C: jz      short loc_46C414
0x46C39E: push    ebp; a3
0x46C39F: push    offset EmptyString; a2
0x46C3A4: lea     ecx, [esp+30h+var_14]; this
0x46C3A8: mov     [esp+30h+var_14.m_data], ebp
0x46C3AC: mov     [esp+30h+var_14.m_dataLen], bp
0x46C3B1: mov     [esp+30h+var_14.m_bufLen], bp
0x46C3B6: call    BSStringT_Set
0x46C3BB: mov     eax, [esi]
0x46C3BD: mov     edx, [eax+0D8h]
0x46C3C3: push    offset EmptyString
0x46C3C8: mov     ecx, esi
0x46C3CA: mov     [esp+2Ch+var_4], ebp
0x46C3CE: call    edx
0x46C3D0: mov     eax, [edi]
0x46C3D2: mov     edx, [eax+0B4h]
0x46C3D8: push    esi
0x46C3D9: mov     ecx, edi
0x46C3DB: call    edx
0x46C3DD: mov     ebx, [esp+28h+var_14.m_data]
0x46C3E1: cmp     ebx, ebp
0x46C3E3: jz      short loc_46C3F2
0x46C3E5: mov     eax, [esi]
0x46C3E7: mov     edx, [eax+0D8h]
0x46C3ED: push    ebx
0x46C3EE: mov     ecx, esi
0x46C3F0: call    edx
0x46C3F2: push    ebx
0x46C3F3: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x46C3FB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46C400: mov     ecx, [esp+2Ch+cloneMap]; this
0x46C404: add     esp, 4
0x46C407: cmp     ecx, ebp
0x46C409: jz      short loc_46C412
0x46C40B: push    edi; a3
0x46C40C: push    esi; a2
0x46C40D: call    NiTMap_SetAt
0x46C412: mov     eax, edi
0x46C414: mov     ecx, dword ptr [esp+28h+var_C]
0x46C418: mov     large fs:0, ecx
0x46C41F: pop     ecx
0x46C420: pop     edi
0x46C421: pop     esi
0x46C422: pop     ebp
0x46C423: pop     ebx
0x46C424: add     esp, 14h
0x46C427: retn    8
0x9B5BD0: lea     ecx, [ebp-14h]; void *
0x9B5BD3: jmp     BSStringT_Clear
0x9B5BD8: mov     edx, [esp+arg_4]
0x9B5BDC: lea     eax, [edx-18h]
0x9B5BDF: mov     ecx, [edx-1Ch]
0x9B5BE2: xor     ecx, eax
0x9B5BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5BE9: mov     eax, offset stru_AE0BB4
0x9B5BEE: jmp     ___CxxFrameHandler3
