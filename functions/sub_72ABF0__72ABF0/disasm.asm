0x72ABF0: push    0FFFFFFFFh
0x72ABF2: push    offset SEH_8C62B0
0x72ABF7: mov     eax, large fs:0
0x72ABFD: push    eax
0x72ABFE: push    ecx
0x72ABFF: push    esi
0x72AC00: mov     eax, ds:0B30AACh
0x72AC05: xor     eax, esp
0x72AC07: push    eax
0x72AC08: lea     eax, [esp+18h+var_C]
0x72AC0C: mov     large fs:0, eax
0x72AC12: push    5Ch ; '\'; Size
0x72AC14: call    FormHeapAlloc
0x72AC19: mov     esi, eax
0x72AC1B: add     esp, 4
0x72AC1E: mov     [esp+18h+var_10], esi
0x72AC22: test    esi, esi
0x72AC24: mov     [esp+18h+var_4], 0
0x72AC2C: jz      short loc_72AC5A
0x72AC2E: mov     ecx, esi
0x72AC30: call    NiTriShapeData_Construct; Default-construct NiTriShapeData with empty triangle and shared-normal storage.
0x72AC35: mov     dword ptr [esi], offset ??_7NiTriShapeDynamicData@@6B@; const NiTriShapeDynamicData::`vftable'
0x72AC3B: mov     word ptr [esi+58h], 0
0x72AC41: mov     word ptr [esi+5Ah], 0
0x72AC47: mov     eax, esi
0x72AC49: mov     ecx, [esp+18h+var_C]
0x72AC4D: mov     large fs:0, ecx
0x72AC54: pop     ecx
0x72AC55: pop     esi
0x72AC56: add     esp, 10h
0x72AC59: retn
0x72AC5A: xor     eax, eax
0x72AC5C: mov     ecx, [esp+18h+var_C]
0x72AC60: mov     large fs:0, ecx
0x72AC67: pop     ecx
0x72AC68: pop     esi
0x72AC69: add     esp, 10h
0x72AC6C: retn
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
