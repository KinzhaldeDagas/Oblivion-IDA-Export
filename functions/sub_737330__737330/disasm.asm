0x737330: push    0FFFFFFFFh
0x737332: push    offset SEH_737330
0x737337: mov     eax, large fs:0
0x73733D: push    eax
0x73733E: sub     esp, 64h
0x737341: push    ebx
0x737342: push    ebp
0x737343: push    esi
0x737344: push    edi
0x737345: mov     eax, ds:0B30AACh
0x73734A: xor     eax, esp
0x73734C: push    eax
0x73734D: lea     eax, [esp+84h+var_C]
0x737351: mov     large fs:0, eax
0x737357: mov     ebp, ecx
0x737359: lea     ecx, [esp+84h+var_50]
0x73735D: call    InitSurfacEData
0x737362: lea     esi, [ebp+80h]
0x737368: push    esi; lpCriticalSection
0x737369: mov     [esp+88h+var_64], esi
0x73736D: call    dword ptr ds:0A2806Ch
0x9AE3C0: mov     eax, [ebp+8]
0x9AE3C3: push    eax
0x9AE3C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AE3C9: pop     ecx
0x9AE3CA: retn
0x9AE3CB: mov     edx, [esp+arg_4]
0x9AE3CF: lea     eax, [edx-74h]
0x9AE3D2: mov     ecx, [edx-78h]
0x9AE3D5: xor     ecx, eax
0x9AE3D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE3DC: mov     eax, offset stru_ADAC34
0x9AE3E1: jmp     ___CxxFrameHandler3
