0x72F210: push    0FFFFFFFFh
0x72F212: push    offset SEH_8C62B0
0x72F217: mov     eax, large fs:0
0x72F21D: push    eax
0x72F21E: push    ecx
0x72F21F: push    esi
0x72F220: mov     eax, ds:0B30AACh
0x72F225: xor     eax, esp
0x72F227: push    eax
0x72F228: lea     eax, [esp+18h+var_C]
0x72F22C: mov     large fs:0, eax
0x72F232: push    48h ; 'H'; Size
0x72F234: call    FormHeapAlloc
0x72F239: mov     esi, eax
0x72F23B: add     esp, 4
0x72F23E: mov     [esp+18h+var_10], esi
0x72F242: test    esi, esi
0x72F244: mov     [esp+18h+var_4], 0
0x72F24C: jz      short loc_72F27C
0x72F24E: mov     ecx, esi
0x72F250: call    NiObject_constr
0x72F255: mov     dword ptr [esi], offset ??_7NiSkinData@@6B@; const NiSkinData::`vftable'
0x72F25B: mov     dword ptr [esi+8], 0
0x72F262: mov     dword ptr [esi+44h], 0
0x72F269: mov     eax, esi
0x72F26B: mov     ecx, [esp+18h+var_C]
0x72F26F: mov     large fs:0, ecx
0x72F276: pop     ecx
0x72F277: pop     esi
0x72F278: add     esp, 10h
0x72F27B: retn
0x72F27C: xor     eax, eax
0x72F27E: mov     ecx, [esp+18h+var_C]
0x72F282: mov     large fs:0, ecx
0x72F289: pop     ecx
0x72F28A: pop     esi
0x72F28B: add     esp, 10h
0x72F28E: retn
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
