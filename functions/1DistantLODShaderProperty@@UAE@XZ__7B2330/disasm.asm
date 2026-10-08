0x7B2330: push    0FFFFFFFFh
0x7B2332: push    offset ??1DistantLODShaderProperty@@UAE@XZ_SEH
0x7B2337: mov     eax, large fs:0
0x7B233D: push    eax
0x7B233E: push    ecx
0x7B233F: push    esi
0x7B2340: push    edi
0x7B2341: mov     eax, ds:0B30AACh
0x7B2346: xor     eax, esp
0x7B2348: push    eax
0x7B2349: lea     eax, [esp+1Ch+var_C]
0x7B234D: mov     large fs:0, eax
0x7B2353: mov     esi, ecx
0x7B2355: mov     [esp+1Ch+var_10], esi
0x7B2359: mov     dword ptr [esi], offset ??_7DistantLODShaderProperty@@6B@; const DistantLODShaderProperty::`vftable'
0x7B235F: mov     dword ptr [esi+9Ch], 0
0x7B2369: mov     edi, [esi+0A0h]
0x7B236F: test    edi, edi
0x7B2371: mov     [esp+1Ch+var_4], 0
0x7B2379: jz      short loc_7B2397
0x7B237B: lea     eax, [edi+4]
0x7B237E: push    eax; lpAddend
0x7B237F: call    dword ptr ds:0A2807Ch
0x7B2385: test    eax, eax
0x7B2387: jnz     short loc_7B2397
0x7B2389: test    edi, edi
0x7B238B: jz      short loc_7B2397
0x7B238D: mov     edx, [edi]
0x7B238F: mov     eax, [edx]
0x7B2391: push    1
0x7B2393: mov     ecx, edi
0x7B2395: call    eax
0x7B2397: mov     ecx, esi; this
0x7B2399: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7B23A1: call    ??1BSShaderLightingProperty@@UAE@XZ; [Verified] On property destruction, this owner drains its +0x80 NiTPointerList<DECAL_DATA*>; each node stores links at +0/+4 and payload at +8. The destructor removes nodes, releases payload smart pointers through DECAL_DATA_ReleaseOwnedReferences, and frees each 0x4C payload. Normal effect teardown instead removes one node through BSShaderLightingProperty_RemoveDecalData before freeing the payload.
0x7B23A6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7B23AA: mov     large fs:0, ecx
0x7B23B1: pop     ecx
0x7B23B2: pop     edi
0x7B23B3: pop     esi
0x7B23B4: add     esp, 10h
0x7B23B7: retn
0x9CD880: mov     ecx, [ebp-10h]; this
0x9CD883: jmp     ??1BSShaderLightingProperty@@UAE@XZ; [Verified] On property destruction, this owner drains its +0x80 NiTPointerList<DECAL_DATA*>; each node stores links at +0/+4 and payload at +8. The destructor removes nodes, releases payload smart pointers through DECAL_DATA_ReleaseOwnedReferences, and frees each 0x4C payload. Normal effect teardown instead removes one node through BSShaderLightingProperty_RemoveDecalData before freeing the payload.
0x9CD888: mov     edx, [esp+arg_4]
0x9CD88C: lea     eax, [edx-0Ch]
0x9CD88F: mov     ecx, [edx-10h]
0x9CD892: xor     ecx, eax
0x9CD894: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD899: mov     eax, offset stru_AF6AC0
0x9CD89E: jmp     ___CxxFrameHandler3
