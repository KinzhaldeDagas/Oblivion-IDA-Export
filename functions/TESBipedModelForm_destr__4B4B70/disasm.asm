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
