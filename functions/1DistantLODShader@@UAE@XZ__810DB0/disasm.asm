0x810DB0: push    0FFFFFFFFh
0x810DB2: push    offset ??0DistantLODShader@@QAE@XZ_SEH
0x810DB7: mov     eax, large fs:0
0x810DBD: push    eax
0x810DBE: sub     esp, 8
0x810DC1: push    ebx
0x810DC2: push    ebp
0x810DC3: push    esi
0x810DC4: push    edi
0x810DC5: mov     eax, ds:0B30AACh
0x810DCA: xor     eax, esp
0x810DCC: push    eax
0x810DCD: lea     eax, [esp+28h+var_C]
0x810DD1: mov     large fs:0, eax
0x810DD7: mov     edi, ecx
0x810DD9: mov     [esp+28h+var_10], edi
0x810DDD: mov     dword ptr [edi], offset ??_7DistantLODShader@@6B@; const DistantLODShader::`vftable'
0x810DE3: mov     [esp+28h+var_4], 3
0x810DEB: lea     ebp, [edi+8Ch]
0x810DF1: mov     ebx, 4
0x810DF6: mov     esi, [ebp+0]
0x810DF9: test    esi, esi
0x810DFB: jz      short loc_810E20
0x810DFD: lea     eax, [esi+4]
0x810E00: push    eax; lpAddend
0x810E01: call    dword ptr ds:0A2807Ch
0x810E07: test    eax, eax
0x810E09: jnz     short loc_810E19
0x810E0B: test    esi, esi
0x810E0D: jz      short loc_810E19
0x810E0F: mov     edx, [esi]
0x810E11: mov     eax, [edx]
0x810E13: push    1
0x810E15: mov     ecx, esi
0x810E17: call    eax
0x810E19: mov     dword ptr [ebp+0], 0
0x810E20: add     ebp, 4
0x810E23: sub     ebx, 1
0x810E26: jnz     short loc_810DF6
0x810E28: lea     ebx, [edi+9Ch]
0x810E2E: mov     ebp, ebx
0x810E30: mov     [esp+28h+var_14], 2
0x810E38: mov     esi, [ebp+0]
0x810E3B: test    esi, esi
0x810E3D: jz      short loc_810E62
0x810E3F: lea     ecx, [esi+4]
0x810E42: push    ecx; lpAddend
0x810E43: call    dword ptr ds:0A2807Ch
0x810E49: test    eax, eax
0x810E4B: jnz     short loc_810E5B
0x810E4D: test    esi, esi
0x810E4F: jz      short loc_810E5B
0x810E51: mov     edx, [esi]
0x810E53: mov     eax, [edx]
0x810E55: push    1
0x810E57: mov     ecx, esi
0x810E59: call    eax
0x810E5B: mov     dword ptr [ebp+0], 0
0x810E62: add     ebp, 4
0x810E65: sub     [esp+28h+var_14], 1
0x810E6A: jnz     short loc_810E38
0x810E6C: mov     eax, [edi+0A4h]
0x810E72: push    eax
0x810E73: mov     dword ptr [edi+0A8h], 0
0x810E7D: call    FormHeapFree
0x810E82: add     esp, 4
0x810E85: push    offset sub_7016A0; void (__thiscall *)(void *)
0x810E8A: push    2; int
0x810E8C: push    4; unsigned int
0x810E8E: push    ebx; void *
0x810E8F: mov     byte ptr [esp+38h+var_4], 2
0x810E94: call    $LN21
0x810E99: push    offset sub_7016A0; void (__thiscall *)(void *)
0x810E9E: push    4; int
0x810EA0: push    4; unsigned int
0x810EA2: lea     eax, [edi+8Ch]
0x810EA8: push    eax; void *
0x810EA9: mov     byte ptr [esp+38h+var_4], 1
0x810EAE: call    $LN21
0x810EB3: push    offset sub_4027D0; void (__thiscall *)(void *)
0x810EB8: push    1; int
0x810EBA: push    4; unsigned int
0x810EBC: lea     ecx, [edi+7Ch]
0x810EBF: push    ecx; void *
0x810EC0: mov     byte ptr [esp+38h+var_4], 0
0x810EC5: call    $LN21
0x810ECA: mov     ecx, edi; this
0x810ECC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x810ED4: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x810ED9: mov     ecx, [esp+28h+var_C]
0x810EDD: mov     large fs:0, ecx
0x810EE4: pop     ecx
0x810EE5: pop     edi
0x810EE6: pop     esi
0x810EE7: pop     ebp
0x810EE8: pop     ebx
0x810EE9: add     esp, 14h
0x810EEC: retn
