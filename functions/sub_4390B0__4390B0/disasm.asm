0x4390B0: push    0FFFFFFFFh
0x4390B2: push    offset SEH_4390B0
0x4390B7: mov     eax, large fs:0
0x4390BD: push    eax
0x4390BE: push    ecx
0x4390BF: push    esi
0x4390C0: push    edi
0x4390C1: mov     eax, ___security_cookie
0x4390C6: xor     eax, esp
0x4390C8: push    eax
0x4390C9: lea     eax, [esp+1Ch+var_C]
0x4390CD: mov     large fs:0, eax
0x4390D3: mov     esi, ecx
0x4390D5: mov     [esp+1Ch+var_10], esi
0x4390D9: mov     dword ptr [esi+8], 0
0x4390E0: mov     edi, [esi+8]
0x4390E3: test    edi, edi
0x4390E5: mov     [esp+1Ch+var_4], 0
0x4390ED: jz      short loc_439112
0x4390EF: lea     eax, [edi+4]
0x4390F2: push    eax; lpAddend
0x4390F3: call    ds:InterlockedDecrement
0x4390F9: test    eax, eax
0x4390FB: jnz     short loc_43910B
0x4390FD: test    edi, edi
0x4390FF: jz      short loc_43910B
0x439101: mov     edx, [edi]
0x439103: mov     eax, [edx]
0x439105: push    1
0x439107: mov     ecx, edi
0x439109: call    eax
0x43910B: mov     dword ptr [esi+8], 0
0x439112: mov     ecx, [esp+1Ch+arg_8]
0x439116: mov     edx, [esp+1Ch+arg_4]
0x43911A: mov     eax, [esp+1Ch+arg_0]
0x43911E: push    ecx
0x43911F: push    edx
0x439120: push    eax
0x439121: mov     ecx, esi
0x439123: call    sub_436880
0x439128: mov     eax, esi
0x43912A: mov     ecx, dword ptr [esp+1Ch+var_C]
0x43912E: mov     large fs:0, ecx
0x439135: pop     ecx
0x439136: pop     edi
0x439137: pop     esi
0x439138: add     esp, 10h
0x43913B: retn    0Ch
