0x4B4B70: push    0FFFFFFFFh
0x4B4B72: push    offset TESBipedModelForm_destr_SEH
0x4B4B77: mov     eax, large fs:0
0x4B4B7D: push    eax
0x4B4B7E: push    ecx
0x4B4B7F: push    esi
0x4B4B80: mov     eax, ds:0B30AACh
0x4B4B85: xor     eax, esp
0x4B4B87: push    eax
0x4B4B88: lea     eax, [esp+18h+var_C]
0x4B4B8C: mov     large fs:0, eax
0x4B4B92: mov     esi, ecx
0x4B4B94: mov     [esp+18h+var_10], esi
0x4B4B98: push    offset j_TESTexture_destr; void (__thiscall *)(void *)
0x4B4B9D: push    2; int
0x4B4B9F: push    0Ch; unsigned int
0x4B4BA1: lea     eax, [esi+68h]
0x4B4BA4: push    eax; void *
0x4B4BA5: mov     [esp+28h+var_4], 1
0x4B4BAD: call    $LN21
0x4B4BB2: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x4B4BB7: push    2; int
0x4B4BB9: push    18h; unsigned int
0x4B4BBB: lea     ecx, [esi+38h]
0x4B4BBE: push    ecx; void *
0x4B4BBF: mov     byte ptr [esp+28h+var_4], 0
0x4B4BC4: call    $LN21
0x4B4BC9: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x4B4BCE: push    2; int
0x4B4BD0: push    18h; unsigned int
0x4B4BD2: add     esi, 8
0x4B4BD5: push    esi; void *
0x4B4BD6: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4B4BDE: call    $LN21
0x4B4BE3: mov     ecx, [esp+18h+var_C]
0x4B4BE7: mov     large fs:0, ecx
0x4B4BEE: pop     ecx
0x4B4BEF: pop     esi
0x4B4BF0: add     esp, 10h
0x4B4BF3: retn
0x9B3680: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B3685: push    2; int
0x9B3687: push    18h; unsigned int
0x9B3689: mov     eax, [ebp-10h]
0x9B368C: add     eax, 8
0x9B368F: push    eax; void *
0x9B3690: call    $LN21
0x9B3695: retn
0x9B3696: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B369B: push    2; int
0x9B369D: push    18h; unsigned int
0x9B369F: mov     eax, [ebp-10h]
0x9B36A2: add     eax, 38h ; '8'
0x9B36A5: push    eax; void *
0x9B36A6: call    $LN21
0x9B36AB: retn
0x9B36AC: mov     edx, [esp+arg_4]
0x9B36B0: lea     eax, [edx-8]
0x9B36B3: mov     ecx, [edx-0Ch]
0x9B36B6: xor     ecx, eax
0x9B36B8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B36BD: mov     eax, offset stru_ADF26C
0x9B36C2: jmp     ___CxxFrameHandler3
