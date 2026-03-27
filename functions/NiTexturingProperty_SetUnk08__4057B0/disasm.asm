0x4057B0: push    0FFFFFFFFh
0x4057B2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4057B7: mov     eax, large fs:0
0x4057BD: push    eax
0x4057BE: push    ecx
0x4057BF: push    ebx
0x4057C0: push    esi
0x4057C1: push    edi
0x4057C2: mov     eax, ___security_cookie
0x4057C7: xor     eax, esp
0x4057C9: push    eax
0x4057CA: lea     eax, [esp+20h+var_C]
0x4057CE: mov     large fs:0, eax
0x4057D4: mov     esi, ecx
0x4057D6: mov     eax, [esi+20h]
0x4057D9: mov     edi, [eax]
0x4057DB: test    edi, edi
0x4057DD: jnz     short loc_40581D
0x4057DF: push    10h; Size
0x4057E1: call    FormHeapAlloc
0x4057E6: add     esp, 4
0x4057E9: mov     [esp+20h+var_10], eax
0x4057ED: test    eax, eax
0x4057EF: mov     [esp+20h+var_4], edi
0x4057F3: jz      short loc_4057FE
0x4057F5: mov     ecx, eax
0x4057F7: call    sub_704100
0x4057FC: jmp     short loc_405800
0x4057FE: xor     eax, eax
0x405800: lea     ecx, [esp+20h+var_10]
0x405804: push    ecx
0x405805: mov     edi, eax
0x405807: push    0
0x405809: lea     ecx, [esi+1Ch]
0x40580C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x405814: mov     [esp+28h+var_10], edi
0x405818: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x40581D: mov     esi, [edi+8]
0x405820: mov     ebx, [esp+20h+arg_0]
0x405824: cmp     esi, ebx
0x405826: jz      short loc_405859
0x405828: test    esi, esi
0x40582A: jz      short loc_405848
0x40582C: lea     edx, [esi+4]
0x40582F: push    edx; lpAddend
0x405830: call    ds:InterlockedDecrement
0x405836: test    eax, eax
0x405838: jnz     short loc_405848
0x40583A: test    esi, esi
0x40583C: jz      short loc_405848
0x40583E: mov     eax, [esi]
0x405840: mov     edx, [eax]
0x405842: push    1
0x405844: mov     ecx, esi
0x405846: call    edx
0x405848: test    ebx, ebx
0x40584A: mov     [edi+8], ebx
0x40584D: jz      short loc_405859
0x40584F: add     ebx, 4
0x405852: push    ebx; lpAddend
0x405853: call    ds:InterlockedIncrement
0x405859: mov     ecx, dword ptr [esp+20h+var_C]
0x40585D: mov     large fs:0, ecx
0x405864: pop     ecx
0x405865: pop     edi
0x405866: pop     esi
0x405867: pop     ebx
0x405868: add     esp, 10h
0x40586B: retn    4
