0x488420: push    0FFFFFFFFh
0x488422: push    offset ContainerExtraData_EvaluateOwnerLeveledItems_SEH
0x488427: mov     eax, large fs:0
0x48842D: push    eax
0x48842E: sub     esp, 18h
0x488431: push    ebx
0x488432: push    ebp
0x488433: push    esi
0x488434: push    edi
0x488435: mov     eax, ds:0B30AACh
0x48843A: xor     eax, esp
0x48843C: push    eax
0x48843D: lea     eax, [esp+38h+var_C]
0x488441: mov     large fs:0, eax
0x488447: mov     esi, ecx
0x488449: mov     [esp+38h+var_20], esi
0x9AFBB0: lea     ecx, [ebp-1Ch]
0x9AFBB3: jmp     TESContainer_destr
0x9AFBB8: mov     edx, [esp+arg_4]
0x9AFBBC: lea     eax, [edx-28h]
0x9AFBBF: mov     ecx, [edx-2Ch]
0x9AFBC2: xor     ecx, eax
0x9AFBC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFBC9: mov     eax, offset stru_ADC0A4
0x9AFBCE: jmp     ___CxxFrameHandler3
