0x589EB0: push    0FFFFFFFFh
0x589EB2: push    offset SEH_589FA0
0x589EB7: mov     eax, large fs:0
0x589EBD: push    eax
0x589EBE: push    ecx
0x589EBF: push    esi
0x589EC0: mov     eax, ds:0B30AACh
0x589EC5: xor     eax, esp
0x589EC7: push    eax
0x589EC8: lea     eax, [esp+18h+var_C]
0x589ECC: mov     large fs:0, eax
0x589ED2: mov     esi, ecx
0x589ED4: mov     [esp+18h+var_10], esi
0x589ED8: lea     ecx, [esi+8]; this
0x589EDB: xor     eax, eax
0x589EDD: mov     [ecx], eax
0x589EDF: mov     [ecx+4], ax
0x589EE3: mov     [ecx+6], ax
0x589EE7: mov     edx, [esp+18h+arg_0]
0x589EEB: push    eax; a3
0x589EEC: mov     [esp+1Ch+var_4], eax
0x589EF0: mov     eax, [esp+1Ch+a2]
0x589EF4: push    eax; a2
0x589EF5: mov     [esi], edx
0x589EF7: call    BSStringT_Set
0x589EFC: mov     eax, esi
0x589EFE: mov     ecx, [esp+18h+var_C]
0x589F02: mov     large fs:0, ecx
0x589F09: pop     ecx
0x589F0A: pop     esi
0x589F0B: add     esp, 10h
0x589F0E: retn    8
0x9BF7A0: mov     ecx, [ebp-10h]
0x9BF7A3: add     ecx, 8; void *
0x9BF7A6: jmp     BSStringT_Clear
0x9BF7AB: mov     edx, [esp+a2]
0x9BF7AF: lea     eax, [edx-8]
0x9BF7B2: mov     ecx, [edx-0Ch]
0x9BF7B5: xor     ecx, eax
0x9BF7B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF7BC: mov     eax, offset stru_AE8CA4
0x9BF7C1: jmp     ___CxxFrameHandler3
