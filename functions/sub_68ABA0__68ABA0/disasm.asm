0x68ABA0: push    0FFFFFFFFh
0x68ABA2: push    offset SEH_68ABA0
0x68ABA7: mov     eax, large fs:0
0x68ABAD: push    eax
0x68ABAE: sub     esp, 114h
0x68ABB4: mov     eax, ds:0B30AACh
0x68ABB9: xor     eax, esp
0x68ABBB: mov     [esp+120h+var_10], eax
0x68ABC2: push    ebx
0x68ABC3: push    ebp
0x68ABC4: push    esi
0x68ABC5: push    edi
0x68ABC6: mov     eax, ds:0B30AACh
0x68ABCB: xor     eax, esp
0x68ABCD: push    eax
0x68ABCE: lea     eax, [esp+134h+var_C]
0x68ABD5: mov     large fs:0, eax
0x68ABDB: mov     esi, [esp+134h+arg_0]
0x68ABE2: xor     ebx, ebx
0x68ABE4: cmp     esi, ebx
0x68ABE6: mov     edi, ecx
0x68ABE8: mov     [esp+134h+var_11D], 0
0x68ABED: jz      loc_68ADA8
0x68ABF3: mov     ecx, [edi+4]
0x68ABF6: cmp     ecx, ebx
0x68ABF8: lea     ebp, [edi+4]
0x68ABFB: jz      loc_68AD46
0x68AC01: call    sub_68B0F0
0x68AC06: cmp     eax, ebx
0x68AC08: mov     [esp+134h+var_11C], eax
0x68AC0C: jz      loc_68AD46
0x68AC12: mov     ecx, eax; this
0x68AC14: call    GetTeleportExtraData
0x68AC19: test    eax, eax
0x68AC1B: jz      loc_68AD46
0x68AC21: mov     eax, [edi]
0x68AC23: mov     edx, [eax+10h]
0x68AC26: mov     ecx, edi
0x68AC28: call    edx
0x68AC2A: mov     eax, [esi]
0x68AC2C: mov     edx, [eax+380h]
0x68AC32: mov     ecx, esi
0x68AC34: call    edx
0x68AC36: test    eax, eax
0x68AC38: jz      short loc_68AC41
0x68AC3A: mov     ecx, esi
0x68AC3C: call    sub_5F0410
0x68AC41: push    8; Size
0x68AC43: call    FormHeapAlloc
0x68AC48: add     esp, 4
0x68AC4B: mov     [esp+134h+var_118], eax
0x68AC4F: cmp     eax, ebx
0x68AC51: mov     [esp+134h+var_4], ebx
0x68AC58: jz      short loc_68AC63
0x68AC5A: mov     ecx, eax
0x68AC5C: call    sub_68B0C0
0x68AC61: mov     ebx, eax
0x68AC63: mov     eax, [ebp+0]
0x68AC66: push    eax
0x68AC67: mov     ecx, ebx
0x68AC69: mov     [esp+138h+var_4], 0FFFFFFFFh
0x68AC74: call    sub_68B240
0x68AC79: mov     ecx, edi
0x68AC7B: call    sub_689C10
0x68AC80: mov     ecx, esi
0x68AC82: call    sub_4D8AF0
0x68AC87: mov     ecx, [esp+134h+var_11C]
0x68AC8B: push    1
0x68AC8D: push    0
0x68AC8F: push    0
0x68AC91: push    esi
0x68AC92: mov     edi, eax
0x68AC94: call    ActivateRef
0x68AC99: test    al, al
0x68AC9B: jz      short loc_68ACA8
0x68AC9D: mov     ecx, esi
0x68AC9F: call    sub_4D8AF0
0x68ACA4: cmp     eax, edi
0x68ACA6: jnz     short loc_68ACD7
0x68ACA8: mov     eax, [esi+58h]
0x68ACAB: push    0; int
0x68ACAD: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x68ACB2: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x68ACB7: push    0; int
0x68ACB9: push    eax; void *
0x68ACBA: call    OblivionDynamicCast
0x68ACBF: add     esp, 14h
0x68ACC2: test    eax, eax
0x68ACC4: jz      short loc_68AD2E
0x68ACC6: mov     edx, [eax]
0x68ACC8: mov     ecx, eax
0x68ACCA: mov     eax, [edx+47Ch]
0x68ACD0: call    eax
0x68ACD2: cmp     eax, 4
0x68ACD5: jnz     short loc_68AD2E
0x68ACD7: mov     edx, [esi]
0x68ACD9: mov     eax, [edx+380h]
0x68ACDF: mov     ecx, esi
0x68ACE1: mov     [esp+134h+var_11D], 1
0x68ACE6: call    eax
0x68ACE8: test    eax, eax
0x68ACEA: jz      short loc_68AD14
0x68ACEC: mov     edx, [esi]
0x68ACEE: mov     eax, [edx+380h]
0x68ACF4: mov     ecx, esi
0x68ACF6: call    eax
0x68ACF8: mov     edx, [eax]
0x68ACFA: mov     ecx, eax
0x68ACFC: mov     eax, [edx+38Ch]
0x68AD02: push    0
0x68AD04: call    eax
0x68AD06: mov     edx, [esi]
0x68AD08: mov     eax, [edx+384h]
0x68AD0E: push    0
0x68AD10: mov     ecx, esi
0x68AD12: call    eax
0x68AD14: test    ebx, ebx
0x68AD16: jz      loc_68ADA8
0x68AD1C: mov     ecx, ebx
0x68AD1E: call    sub_68B1C0
0x68AD23: push    ebx
0x68AD24: call    FormHeapFree
0x68AD29: add     esp, 4
0x68AD2C: jmp     short loc_68ADA8
0x68AD2E: push    ebx
0x68AD2F: mov     ecx, ebp
0x68AD31: call    BSSimpleList_PushFront
0x68AD36: mov     ecx, [esp+134h+var_11C]
0x68AD3A: push    0; int
0x68AD3C: push    ecx; int
0x68AD3D: mov     ecx, esi; int
0x68AD3F: call    sub_5F7CF0
0x68AD44: jmp     short loc_68ADA8
0x68AD46: mov     ecx, edi
0x68AD48: call    sub_689C10
0x68AD4D: cmp     [ebp+4], ebx
0x68AD50: jnz     short loc_68AD57
0x68AD52: cmp     [ebp+0], ebx
0x68AD55: jz      short loc_68ADA3
0x68AD57: mov     ecx, [esi+58h]
0x68AD5A: mov     edx, [ecx]
0x68AD5C: mov     eax, [edx+2C0h]
0x68AD62: call    eax
0x68AD64: mov     ecx, [ebp+0]
0x68AD67: test    ecx, ecx
0x68AD69: movzx   ebx, ax
0x68AD6C: jz      short loc_68AD75
0x68AD6E: call    sub_68B110
0x68AD73: jmp     short loc_68AD7A
0x68AD75: mov     eax, offset Vector3_InitValue?
0x68AD7A: mov     edx, [edi]
0x68AD7C: push    0
0x68AD7E: push    eax
0x68AD7F: mov     eax, [edx+14h]
0x68AD82: push    esi
0x68AD83: mov     ecx, edi
0x68AD85: call    eax
0x68AD87: mov     edx, [esi]
0x68AD89: mov     eax, [edx+180h]
0x68AD8F: push    0
0x68AD91: mov     ecx, esi
0x68AD93: call    eax
0x68AD95: mov     ecx, [esi+58h]
0x68AD98: mov     edx, [ecx]
0x68AD9A: mov     eax, [edx+2C8h]
0x68ADA0: push    ebx
0x68ADA1: call    eax
0x68ADA3: mov     [esp+134h+var_11D], 1
0x68ADA8: cmp     ds:0B333B4h, esi
0x68ADAE: jnz     short loc_68ADEB
0x68ADB0: cmp     [esp+134h+var_11D], 0
0x68ADB5: mov     eax, offset aSuccess_0; "SUCCESS"
0x68ADBA: jnz     short loc_68ADC1
0x68ADBC: mov     eax, offset aFailed; "FAILED"
0x68ADC1: mov     edx, [esi]
0x68ADC3: push    eax
0x68ADC4: mov     eax, [edx+0D4h]
0x68ADCA: mov     ecx, esi
0x68ADCC: call    eax
0x68ADCE: push    eax
0x68ADCF: lea     ecx, [esp+13Ch+Format]
0x68ADD3: push    offset aActorSMovetone; "Actor '%s' MoveToNextLowPathStep: %s."
0x68ADD8: push    ecx
0x68ADD9: call    __sprintf
0x68ADDE: lea     edx, [esp+144h+Format]
0x68ADE2: push    edx; Format
0x68ADE3: call    Interface_ConsolePrint
0x68ADE8: add     esp, 14h
0x68ADEB: mov     al, [esp+134h+var_11D]
0x68ADEF: mov     ecx, dword ptr [esp+134h+var_C]
0x68ADF6: mov     large fs:0, ecx
0x68ADFD: pop     ecx
0x68ADFE: pop     edi
0x68ADFF: pop     esi
0x68AE00: pop     ebp
0x68AE01: pop     ebx
0x68AE02: mov     ecx, [esp+120h+var_10]
0x68AE09: xor     ecx, esp
0x68AE0B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x68AE10: add     esp, 120h
0x68AE16: retn    4
