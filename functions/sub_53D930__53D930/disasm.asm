0x53D930: push    0FFFFFFFFh
0x53D932: push    offset SEH_53D930
0x53D937: mov     eax, large fs:0
0x53D93D: push    eax
0x53D93E: push    ecx
0x53D93F: push    ebx
0x53D940: push    ebp
0x53D941: push    esi
0x53D942: push    edi
0x53D943: mov     eax, ds:0B30AACh
0x53D948: xor     eax, esp
0x53D94A: push    eax
0x53D94B: lea     eax, [esp+24h+var_C]
0x53D94F: mov     large fs:0, eax
0x53D955: mov     esi, ecx
0x53D957: mov     [esp+24h+var_10], esi
0x53D95B: call    NiObject_constr
0x53D960: xor     ebp, ebp
0x53D962: mov     dword ptr [esi], offset ??_7NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::`vftable'
0x53D968: mov     [esp+24h+var_4], ebp
0x53D96C: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x53D973: mov     [esi+24h], bp
0x53D977: mov     word ptr [esi+2Ah], 1
0x53D97D: mov     [esi+26h], bp
0x53D981: mov     [esi+28h], bp
0x53D985: mov     [esi+20h], ebp
0x53D988: mov     ax, word ptr [esp+24h+arg_0]
0x53D98D: mov     ebx, [esp+24h+arg_4]
0x53D991: mov     [esi+0Ch], ax
0x53D995: xor     ecx, ecx
0x53D997: mov     eax, ebx
0x53D999: mov     edx, 1Ch
0x53D99E: mul     edx
0x53D9A0: seto    cl
0x53D9A3: mov     byte ptr [esp+24h+var_4], 1
0x53D9A8: mov     [esi+8], ebp
0x53D9AB: mov     [esi+10h], ebx
0x53D9AE: neg     ecx
0x53D9B0: or      ecx, eax
0x53D9B2: push    ecx; Size
0x53D9B3: call    FormHeapAlloc
0x53D9B8: mov     edi, eax
0x53D9BA: add     esp, 4
0x53D9BD: mov     [esp+24h+arg_0], edi
0x53D9C1: cmp     edi, ebp
0x53D9C3: mov     byte ptr [esp+24h+var_4], 2
0x53D9C8: jz      short loc_53D9DA
0x53D9CA: push    offset sub_53D910
0x53D9CF: push    ebx
0x53D9D0: push    1Ch
0x53D9D2: push    edi
0x53D9D3: call    sub_401080
0x53D9D8: jmp     short loc_53D9DC
0x53D9DA: xor     edi, edi
0x53D9DC: mov     [esi+14h], edi
0x53D9DF: xor     eax, eax
0x53D9E1: cmp     [esi+26h], bp
0x53D9E5: jbe     short loc_53D9F9
0x53D9E7: mov     edx, [esi+20h]
0x53D9EA: movzx   ecx, ax
0x53D9ED: add     eax, 1
0x53D9F0: mov     [edx+ecx*4], ebp
0x53D9F3: cmp     ax, [esi+26h]
0x53D9F7: jb      short loc_53D9E7
0x53D9F9: mov     eax, [esp+24h+arg_8]
0x53D9FD: mov     [esi+26h], bp
0x53DA01: mov     [esi+28h], bp
0x53DA05: mov     [esi+18h], eax
0x53DA08: mov     eax, esi
0x53DA0A: mov     ecx, [esp+24h+var_C]
0x53DA0E: mov     large fs:0, ecx
0x53DA15: pop     ecx
0x53DA16: pop     edi
0x53DA17: pop     esi
0x53DA18: pop     ebp
0x53DA19: pop     ebx
0x53DA1A: add     esp, 10h
0x53DA1D: retn    0Ch
0x4BFCA0: mov     eax, [ecx+4]
0x4BFCA3: push    eax
0x4BFCA4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x4BFCAA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BFCAF: pop     ecx
0x4BFCB0: retn
0x9CF6B0: mov     ecx, [ebp-10h]
0x9CF6B3: jmp     NiRefObject_destr
0x9CF6B8: mov     ecx, [ebp-10h]
0x9CF6BB: add     ecx, 1Ch
0x9CF6BE: jmp     loc_4BFCA0
0x9CF6C3: mov     eax, [ebp+4]
0x9CF6C6: push    eax
0x9CF6C7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CF6CC: pop     ecx
0x9CF6CD: retn
0x9CF6CE: mov     edx, [esp+arg_4]
0x9CF6D2: lea     eax, [edx-14h]
0x9CF6D5: mov     ecx, [edx-18h]
0x9CF6D8: xor     ecx, eax
0x9CF6DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF6DF: mov     eax, offset stru_AF82F0
0x9CF6E4: jmp     ___CxxFrameHandler3
