0x559F50: push    0FFFFFFFFh
0x559F52: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x559F57: mov     eax, large fs:0
0x559F5D: push    eax
0x559F5E: push    ecx
0x559F5F: push    esi
0x559F60: push    edi
0x559F61: mov     eax, ds:0B30AACh
0x559F66: xor     eax, esp
0x559F68: push    eax
0x559F69: lea     eax, [esp+1Ch+var_C]
0x559F6D: mov     large fs:0, eax
0x559F73: mov     esi, ecx
0x559F75: mov     [esp+1Ch+var_10], esi
0x559F79: mov     dword ptr [esi], offset ??_7BSFaceGenModel@@6B@; const BSFaceGenModel::`vftable'
0x559F7F: mov     edi, [esi+8]
0x559F82: test    edi, edi
0x559F84: mov     [esp+1Ch+var_4], 0
0x559F8C: jz      short loc_559F9E
0x559F8E: mov     ecx, edi
0x559F90: call    sub_559CE0
0x559F95: push    edi
0x559F96: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x559F9B: add     esp, 4
0x559F9E: mov     edi, [esi+0Ch]
0x559FA1: test    edi, edi
0x559FA3: jz      short loc_559FB5
0x559FA5: mov     ecx, edi
0x559FA7: call    sub_559E90
0x559FAC: push    edi
0x559FAD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x559FB2: add     esp, 4
0x559FB5: push    0B3FD64h; lpAddend
0x559FBA: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x559FC0: call    dword ptr ds:0A2807Ch
0x559FC6: mov     ecx, [esp+1Ch+var_C]
0x559FCA: mov     large fs:0, ecx
0x559FD1: pop     ecx
0x559FD2: pop     edi
0x559FD3: pop     esi
0x559FD4: add     esp, 10h
0x559FD7: retn
0x9CA4B0: mov     ecx, [ebp-10h]
0x9CA4B3: jmp     NiRefObject_destr
0x9CA4B8: mov     edx, [esp+arg_4]
0x9CA4BC: lea     eax, [edx-0Ch]
0x9CA4BF: mov     ecx, [edx-10h]
0x9CA4C2: xor     ecx, eax
0x9CA4C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA4C9: mov     eax, offset stru_AF2BA8
0x9CA4CE: jmp     ___CxxFrameHandler3
