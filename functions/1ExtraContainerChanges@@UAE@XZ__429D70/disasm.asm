0x429D70: push    0FFFFFFFFh
0x429D72: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x429D77: mov     eax, large fs:0
0x429D7D: push    eax
0x429D7E: push    ecx
0x429D7F: push    esi
0x429D80: push    edi
0x429D81: mov     eax, ___security_cookie
0x429D86: xor     eax, esp
0x429D88: push    eax
0x429D89: lea     eax, [esp+1Ch+var_C]
0x429D8D: mov     large fs:0, eax
0x429D93: mov     esi, ecx
0x429D95: mov     [esp+1Ch+var_10], esi
0x429D99: mov     dword ptr [esi], offset ??_7ExtraContainerChanges@@6B@; const ExtraContainerChanges::`vftable'
0x429D9F: mov     edi, [esi+0Ch]
0x429DA2: test    edi, edi
0x429DA4: mov     [esp+1Ch+var_4], 0
0x429DAC: jz      short loc_429DBE
0x429DAE: mov     ecx, edi
0x429DB0: call    ContainerExtraData_destr
0x429DB5: push    edi
0x429DB6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x429DBB: add     esp, 4
0x429DBE: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429DC4: mov     ecx, [esp+1Ch+var_C]
0x429DC8: mov     large fs:0, ecx
0x429DCF: pop     ecx
0x429DD0: pop     edi
0x429DD1: pop     esi
0x429DD2: add     esp, 10h
0x429DD5: retn
0x9ABA20: mov     ecx, [ebp-10h]; this
0x9ABA23: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9ABA28: mov     edx, [esp+arg_4]
0x9ABA2C: lea     eax, [edx-0Ch]
0x9ABA2F: mov     ecx, [edx-10h]
0x9ABA32: xor     ecx, eax
0x9ABA34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABA39: mov     eax, offset stru_AD881C
0x9ABA3E: jmp     ___CxxFrameHandler3
