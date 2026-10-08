0x7F2A30: push    0FFFFFFFFh
0x7F2A32: push    offset ??1BoltShaderProperty@@UAE@XZ_SEH
0x7F2A37: mov     eax, large fs:0
0x7F2A3D: push    eax
0x7F2A3E: push    ecx
0x7F2A3F: push    esi
0x7F2A40: mov     eax, ds:0B30AACh
0x7F2A45: xor     eax, esp
0x7F2A47: push    eax
0x7F2A48: lea     eax, [esp+18h+var_C]
0x7F2A4C: mov     large fs:0, eax
0x7F2A52: mov     esi, ecx
0x7F2A54: mov     [esp+18h+var_10], esi
0x7F2A58: mov     dword ptr [esi], offset ??_7BoltShaderProperty@@6B@; const BoltShaderProperty::`vftable'
0x7F2A5E: mov     eax, [esi+6Ch]
0x7F2A61: push    eax
0x7F2A62: mov     [esp+1Ch+var_4], 0
0x7F2A6A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F2A6F: add     esp, 4
0x7F2A72: sub     dword ptr ds:0B468E8h, 1
0x7F2A79: jnz     short loc_7F2A80
0x7F2A7B: call    sub_7F3870
0x7F2A80: mov     ecx, esi; this
0x7F2A82: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7F2A8A: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7F2A8F: mov     ecx, [esp+18h+var_C]
0x7F2A93: mov     large fs:0, ecx
0x7F2A9A: pop     ecx
0x7F2A9B: pop     esi
0x7F2A9C: add     esp, 10h
0x7F2A9F: retn
0x9CFF30: mov     ecx, [ebp-10h]; this
0x9CFF33: jmp     ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x9CFF38: mov     edx, [esp+arg_4]
0x9CFF3C: lea     eax, [edx-8]
0x9CFF3F: mov     ecx, [edx-0Ch]
0x9CFF42: xor     ecx, eax
0x9CFF44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFF49: mov     eax, offset stru_AF8A04
0x9CFF4E: jmp     ___CxxFrameHandler3
