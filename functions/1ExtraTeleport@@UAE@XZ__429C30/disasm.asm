0x429C30: push    0FFFFFFFFh
0x429C32: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x429C37: mov     eax, large fs:0
0x429C3D: push    eax
0x429C3E: push    ecx
0x429C3F: push    esi
0x429C40: push    edi
0x429C41: mov     eax, ___security_cookie
0x429C46: xor     eax, esp
0x429C48: push    eax
0x429C49: lea     eax, [esp+1Ch+var_C]
0x429C4D: mov     large fs:0, eax
0x429C53: mov     esi, ecx
0x429C55: mov     [esp+1Ch+var_10], esi
0x429C59: mov     dword ptr [esi], offset ??_7ExtraTeleport@@6B@; const ExtraTeleport::`vftable'
0x429C5F: mov     edi, [esi+0Ch]
0x429C62: test    edi, edi
0x429C64: mov     [esp+1Ch+var_4], 0
0x429C6C: jz      short loc_429C7E
0x429C6E: mov     ecx, edi; this
0x429C70: call    ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Pass222: NiPropertyState slot constructor callback; zeroes one dword smart-pointer slot.
0x429C75: push    edi
0x429C76: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x429C7B: add     esp, 4
0x429C7E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429C84: mov     ecx, [esp+1Ch+var_C]
0x429C88: mov     large fs:0, ecx
0x429C8F: pop     ecx
0x429C90: pop     edi
0x429C91: pop     esi
0x429C92: add     esp, 10h
0x429C95: retn
0x9ABA20: mov     ecx, [ebp-10h]; this
0x9ABA23: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9ABA28: mov     edx, [esp+arg_4]
0x9ABA2C: lea     eax, [edx-0Ch]
0x9ABA2F: mov     ecx, [edx-10h]
0x9ABA32: xor     ecx, eax
0x9ABA34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABA39: mov     eax, offset stru_AD881C
0x9ABA3E: jmp     ___CxxFrameHandler3
