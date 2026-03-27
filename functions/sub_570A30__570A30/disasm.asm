0x570A30: push    0FFFFFFFFh
0x570A32: push    offset SEH_570A30
0x570A37: mov     eax, large fs:0
0x570A3D: push    eax
0x570A3E: sub     esp, 5Ch
0x570A41: push    ebx
0x570A42: push    ebp
0x570A43: push    esi
0x570A44: push    edi
0x570A45: mov     eax, ds:0B30AACh
0x570A4A: xor     eax, esp
0x570A4C: push    eax
0x570A4D: lea     eax, [esp+7Ch+var_C]
0x570A51: mov     large fs:0, eax
0x570A57: mov     esi, ecx
0x570A59: xor     ecx, ecx
0x570A5B: mov     eax, 0Ah
0x570A60: xor     ebp, ebp
0x570A62: mov     [esp+7Ch+var_5C], ax
0x570A67: mov     edx, 4
0x570A6C: mul     edx
0x570A6E: seto    cl
0x570A71: mov     [esp+7Ch+var_64], offset ??_7?$NiTArray@PAVNiAVObject@@@@6B@; const NiTArray<NiAVObject *>::`vftable'
0x570A79: mov     [esp+7Ch+var_56], 1
0x570A80: mov     [esp+7Ch+var_5A], bp
0x570A85: mov     [esp+7Ch+var_58], bp
0x570A8A: neg     ecx
0x570A8C: or      ecx, eax
0x570A8E: push    ecx; Size
0x570A8F: call    FormHeapAlloc
0x570A94: add     esp, 4
0x570A97: mov     [esp+7Ch+var_60], eax
0x570A9B: mov     edx, [esp+7Ch+arg_0]
0x570AA2: lea     eax, [esp+7Ch+var_68]
0x570AA6: push    eax
0x570AA7: lea     ecx, [esp+80h+var_64]
0x570AAB: push    ecx
0x570AAC: push    edx
0x570AAD: mov     ecx, esi
0x570AAF: mov     [esp+88h+var_4], ebp
0x570AB6: mov     [esp+88h+var_68], ebp
0x570ABA: call    sub_5708F0
0x570ABF: xor     ebx, ebx
0x570AC1: cmp     [esp+7Ch+var_5A], bp
0x570AC6: jbe     short loc_570B12
0x570AC8: jmp     short loc_570AD0
0x570ACA: align 10h
0x570AD0: mov     eax, [esp+7Ch+var_60]
0x570AD4: mov     esi, [eax+ebx*4]
0x570AD7: cmp     esi, ebp
0x570AD9: jz      short loc_570B06
0x570ADB: lea     ecx, [esp+7Ch+var_54]
0x570ADF: push    ecx
0x570AE0: mov     ecx, [esi+1Ch]
0x570AE3: add     ecx, 64h ; 'd'
0x570AE6: call    sub_7103C0
0x570AEB: lea     edi, [esi+30h]
0x570AEE: push    edi
0x570AEF: lea     edx, [esp+80h+var_30]
0x570AF3: push    edx
0x570AF4: lea     ecx, [esp+84h+var_54]
0x570AF8: call    NiMAtrix33_Multiply
0x570AFD: mov     ecx, 9
0x570B02: mov     esi, eax
0x570B04: rep movsd
0x570B06: movzx   eax, [esp+7Ch+var_5A]
0x570B0B: add     ebx, 1
0x570B0E: cmp     ebx, eax
0x570B10: jb      short loc_570AD0
0x570B12: mov     ecx, [esp+7Ch+var_60]
0x570B16: push    ecx
0x570B17: mov     [esp+80h+var_64], offset ??_7?$NiTArray@PAVNiAVObject@@@@6B@; const NiTArray<NiAVObject *>::`vftable'
0x570B1F: call    FormHeapFree
0x570B24: add     esp, 4
0x570B27: mov     ecx, [esp+7Ch+var_C]
0x570B2B: mov     large fs:0, ecx
0x570B32: pop     ecx
0x570B33: pop     edi
0x570B34: pop     esi
0x570B35: pop     ebp
0x570B36: pop     ebx
0x570B37: add     esp, 68h
0x570B3A: retn    4
