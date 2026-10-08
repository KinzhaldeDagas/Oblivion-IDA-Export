0x42A0B0: push    0FFFFFFFFh; ExtraInfoGeneralTopic destructor clears the cached MenuTopic's isInfoGeneralTopic ownership marker, destroys its responses/display name, then frees the MenuTopic allocation.
0x42A0B2: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42A0B7: mov     eax, large fs:0
0x42A0BD: push    eax
0x42A0BE: push    ecx
0x42A0BF: push    esi
0x42A0C0: push    edi
0x42A0C1: mov     eax, ___security_cookie
0x42A0C6: xor     eax, esp
0x42A0C8: push    eax
0x42A0C9: lea     eax, [esp+1Ch+var_C]
0x42A0CD: mov     large fs:0, eax
0x42A0D3: mov     esi, ecx
0x42A0D5: mov     [esp+1Ch+var_10], esi
0x42A0D9: mov     dword ptr [esi], offset ??_7ExtraInfoGeneralTopic@@6B@; const ExtraInfoGeneralTopic::`vftable'
0x42A0DF: mov     ecx, [esi+0Ch]
0x42A0E2: xor     eax, eax
0x42A0E4: mov     [ecx+20h], al
0x42A0E7: mov     edi, [esi+0Ch]
0x42A0EA: cmp     edi, eax
0x42A0EC: mov     [esp+1Ch+var_4], eax
0x42A0F0: jz      short loc_42A102
0x42A0F2: mov     ecx, edi; this
0x42A0F4: call    MenuTopic__Destroy; Ordinary MenuTopics destroy every DialogueResponse. INFOGENERAL skips response destruction here because ExtraInfoGeneralTopic owns the cached object; that owner's destructor clears isInfoGeneralTopic first, then calls this routine for full cleanup.
0x42A0F9: push    edi
0x42A0FA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x42A0FF: add     esp, 4
0x42A102: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A108: mov     ecx, [esp+1Ch+var_C]
0x42A10C: mov     large fs:0, ecx
0x42A113: pop     ecx
0x42A114: pop     edi
0x42A115: pop     esi
0x42A116: add     esp, 10h
0x42A119: retn
0x9ABA20: mov     ecx, [ebp-10h]; this
0x9ABA23: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9ABA28: mov     edx, [esp+arg_4]
0x9ABA2C: lea     eax, [edx-0Ch]
0x9ABA2F: mov     ecx, [edx-10h]
0x9ABA32: xor     ecx, eax
0x9ABA34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABA39: mov     eax, offset stru_AD881C
0x9ABA3E: jmp     ___CxxFrameHandler3
