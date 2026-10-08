0x473D00: push    0FFFFFFFFh
0x473D02: push    offset ??1?$NiTPointerMap@GPAVAnimSequenceBase@@@@UAE@XZ_SEH
0x473D07: mov     eax, large fs:0
0x473D0D: push    eax
0x473D0E: push    ecx
0x473D0F: push    esi
0x473D10: mov     eax, ds:0B30AACh
0x473D15: xor     eax, esp
0x473D17: push    eax
0x473D18: lea     eax, [esp+18h+var_C]
0x473D1C: mov     large fs:0, eax
0x473D22: mov     esi, ecx
0x473D24: mov     [esp+18h+var_10], esi
0x473D28: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@GPAVAnimSequenceBase@@@@6B@; const NiTPointerMap<ushort,AnimSequenceBase *>::`vftable'
0x473D2E: mov     [esp+18h+var_4], 0
0x473D36: call    NiTMap_Clear
0x473D3B: mov     ecx, esi
0x473D3D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x473D45: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@GPAVAnimSequenceBase@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ushort,AnimSequenceBase *>::`vftable'
0x473D4B: call    NiTMap_Clear
0x473D50: mov     eax, [esi+8]
0x473D53: push    eax
0x473D54: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x473D59: add     esp, 4
0x473D5C: mov     ecx, [esp+18h+var_C]
0x473D60: mov     large fs:0, ecx
0x473D67: pop     ecx
0x473D68: pop     esi
0x473D69: add     esp, 10h
0x473D6C: retn
0x9AECF0: mov     ecx, [ebp-10h]
0x9AECF3: jmp     AnimKeyMap_Destroy; Destroys the UInt16-to-AnimSequenceBase map contents, then frees its bucket array. Does not free the map object itself.
0x9AECF8: mov     edx, [esp+arg_4]
0x9AECFC: lea     eax, [edx-8]
0x9AECFF: mov     ecx, [edx-0Ch]
0x9AED02: xor     ecx, eax
0x9AED04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AED09: mov     eax, offset stru_ADB3E4
0x9AED0E: jmp     ___CxxFrameHandler3
