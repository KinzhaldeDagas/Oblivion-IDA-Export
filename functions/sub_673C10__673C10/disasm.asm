0x673C10: sub     esp, 0Ch
0x673C13: push    ebx
0x673C14: push    ebp
0x673C15: push    esi
0x673C16: lea     ebp, [ecx+18h]
0x673C19: push    edi
0x673C1A: mov     ecx, ebp; this
0x673C1C: call    sub_7616D0
0x673C21: mov     edi, eax
0x673C23: mov     esi, [edi]
0x673C25: push    8; Size
0x673C27: call    FormHeapAlloc
0x673C2C: add     esp, 4
0x673C2F: test    eax, eax
0x673C31: jz      short loc_673C44
0x673C33: mov     dword ptr [eax], 0
0x673C39: mov     dword ptr [eax+4], 0
0x673C40: mov     ebx, eax
0x673C42: jmp     short loc_673C46
0x673C44: xor     ebx, ebx
0x673C46: test    esi, esi
0x673C48: jz      loc_673E7D
0x673C4E: mov     [esp+1Ch+var_9], 1
0x673C53: mov     eax, [edi+4]
0x673C56: test    eax, eax
0x673C58: jnz     short loc_673C62
0x673C5A: cmp     [edi], eax
0x673C5C: jz      loc_673E49
0x673C62: mov     esi, [edi]
0x673C64: test    esi, esi
0x673C66: mov     edi, eax
0x673C68: jz      loc_673E41
0x673C6E: mov     eax, [esi+8]
0x673C71: mov     ecx, eax
0x673C73: shr     ecx, 15h
0x673C76: test    cl, 1
0x673C79: jnz     loc_673E41
0x673C7F: mov     edx, eax
0x673C81: shr     edx, 0Bh
0x673C84: test    dl, 1
0x673C87: jnz     loc_673DC9
0x673C8D: shr     eax, 5
0x673C90: test    al, 1
0x673C92: jnz     loc_673DC9
0x673C98: mov     ecx, esi; this
0x673C9A: call    Actor__GetProcessLevel
0x673C9F: cmp     eax, 3
0x673CA2: jnz     loc_673DC9
0x673CA8: mov     eax, [esi]
0x673CAA: mov     edx, [eax+1F0h]
0x673CB0: mov     ecx, esi
0x673CB2: call    edx
0x673CB4: test    al, al
0x673CB6: jnz     short loc_673CE9
0x673CB8: mov     eax, [esi]
0x673CBA: mov     edx, [eax+190h]
0x673CC0: mov     ecx, esi
0x673CC2: call    edx
0x673CC4: test    al, al
0x673CC6: jz      short loc_673CDA
0x673CC8: mov     eax, [esi]
0x673CCA: mov     edx, [eax+334h]
0x673CD0: push    1
0x673CD2: mov     ecx, esi
0x673CD4: call    edx
0x673CD6: test    al, al
0x673CD8: jnz     short loc_673CE9
0x673CDA: mov     ecx, [esi+58h]
0x673CDD: mov     eax, [ecx]
0x673CDF: mov     edx, [eax+20h]
0x673CE2: call    edx
0x673CE4: jmp     loc_673DF6
0x673CE9: mov     ecx, esi; this
0x673CEB: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x673CF0: fstp    [esp+1Ch+var_8]
0x673CF4: mov     ecx, offset TimeGlobals
0x673CF9: call    TimeGlobals_GetGameHour
0x673CFE: fstp    [esp+1Ch+var_4]
0x673D02: fld     dword ptr ds:0A30634h
0x673D08: fld     [esp+1Ch+var_8]
0x673D0C: fucom   st(1)
0x673D0E: fnstsw  ax
0x673D10: fstp    st(1)
0x673D12: test    ah, 44h
0x673D15: jp      short loc_673D25
0x673D17: mov     ecx, esi
0x673D19: fstp    st
0x673D1B: call    sub_659A20
0x673D20: jmp     loc_673DF6
0x673D25: fld     [esp+1Ch+var_4]
0x673D29: fld     st
0x673D2B: fsub    st, st(2)
0x673D2D: fcomp   qword ptr ds:0A2F928h
0x673D33: fnstsw  ax
0x673D35: test    ah, 1
0x673D38: jz      short loc_673D56
0x673D3A: fcompp
0x673D3C: fnstsw  ax
0x673D3E: test    ah, 5
0x673D41: jnp     short loc_673D5A
0x673D43: fldz
0x673D45: fcomp   [esp+1Ch+arg_0]
0x673D49: fnstsw  ax
0x673D4B: test    ah, 44h
0x673D4E: jnp     loc_673DF6
0x673D54: jmp     short loc_673D5A
0x673D56: fstp    st(1)
0x673D58: fstp    st
0x673D5A: mov     eax, [esi]
0x673D5C: fld     [esp+1Ch+arg_0]
0x673D60: mov     edx, [eax+1C0h]
0x673D66: push    ecx
0x673D67: mov     ecx, esi
0x673D69: fstp    [esp+20h+var_20]
0x673D6C: call    edx
0x673D6E: call    sub_4F9FA0
0x673D73: test    al, al
0x673D75: jz      short loc_673D7E
0x673D77: mov     ecx, esi
0x673D79: call    RunScripts
0x673D7E: mov     eax, [esi]
0x673D80: mov     edx, [eax+190h]
0x673D86: mov     ecx, esi
0x673D88: call    edx
0x673D8A: test    al, al
0x673D8C: jz      short loc_673DB9
0x673D8E: mov     ecx, esi; this
0x673D90: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x673D95: cmp     eax, 1
0x673D98: jnz     short loc_673DB9
0x673D9A: push    0
0x673D9C: push    esi
0x673D9D: mov     ecx, ebp
0x673D9F: call    sub_67B320
0x673DA4: push    0
0x673DA6: push    0
0x673DA8: push    1
0x673DAA: push    esi
0x673DAB: mov     ecx, ebp
0x673DAD: call    sub_67B260
0x673DB2: xor     edi, edi
0x673DB4: mov     [esp+1Ch+var_9], 0
0x673DB9: mov     ecx, esi; this
0x673DBB: call    Actor__GetProcessLevel
0x673DC0: cmp     eax, 3
0x673DC3: jz      short loc_673DF6
0x673DC5: xor     edi, edi
0x673DC7: jmp     short loc_673DF6
0x673DC9: cmp     dword ptr [ebx], 0
0x673DCC: jz      short loc_673DF4
0x673DCE: push    8; Size
0x673DD0: call    FormHeapAlloc
0x673DD5: add     esp, 4
0x673DD8: test    eax, eax
0x673DDA: jz      short loc_673DE9
0x673DDC: mov     ecx, [ebx]
0x673DDE: mov     [eax], ecx
0x673DE0: mov     dword ptr [eax+4], 0
0x673DE7: jmp     short loc_673DEB
0x673DE9: xor     eax, eax
0x673DEB: mov     edx, [ebx+4]
0x673DEE: mov     [eax+4], edx
0x673DF1: mov     [ebx+4], eax
0x673DF4: mov     [ebx], esi
0x673DF6: cmp     [esp+1Ch+var_9], 0
0x673DFB: jz      short loc_673E41
0x673DFD: mov     ecx, ebp; this
0x673DFF: call    sub_7616D0
0x673E04: test    eax, eax
0x673E06: jz      short loc_673E3C
0x673E08: mov     ecx, ebp; this
0x673E0A: call    sub_7616D0
0x673E0F: cmp     dword ptr [eax+4], 0
0x673E13: jnz     short loc_673E1A
0x673E15: cmp     dword ptr [eax], 0
0x673E18: jz      short loc_673E31
0x673E1A: mov     ecx, ebp; this
0x673E1C: call    sub_7616D0
0x673E21: cmp     [eax], esi
0x673E23: jnz     short loc_673E31
0x673E25: mov     ecx, ebp; this
0x673E27: call    sub_7616D0
0x673E2C: cmp     [eax+4], edi
0x673E2F: jz      short loc_673E3C
0x673E31: mov     ecx, ebp; this
0x673E33: call    sub_7616D0
0x673E38: mov     edi, eax
0x673E3A: jmp     short loc_673E41
0x673E3C: mov     [esp+1Ch+var_9], 0
0x673E41: test    edi, edi
0x673E43: jnz     loc_673C53
0x673E49: mov     ecx, ebp; this
0x673E4B: call    sub_7616D0
0x673E50: test    ebx, ebx
0x673E52: mov     esi, ebx
0x673E54: jz      short loc_673E6D
0x673E56: mov     eax, [esi]
0x673E58: test    eax, eax
0x673E5A: jz      short loc_673E6D
0x673E5C: push    0
0x673E5E: push    eax
0x673E5F: mov     ecx, ebp
0x673E61: call    sub_67B320
0x673E66: mov     esi, [esi+4]
0x673E69: test    esi, esi
0x673E6B: jnz     short loc_673E56
0x673E6D: mov     ecx, ebx
0x673E6F: call    BSSimpleList_Clear
0x673E74: push    ebx
0x673E75: call    FormHeapFree
0x673E7A: add     esp, 4
0x673E7D: pop     edi
0x673E7E: pop     esi
0x673E7F: pop     ebp
0x673E80: pop     ebx
0x673E81: add     esp, 0Ch
0x673E84: retn    8
