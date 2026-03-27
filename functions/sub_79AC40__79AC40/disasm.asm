0x79AC40: push    0FFFFFFFFh
0x79AC42: push    offset SEH_79B7D0
0x79AC47: mov     eax, large fs:0
0x79AC4D: push    eax
0x79AC4E: push    ecx
0x79AC4F: push    esi
0x79AC50: push    edi
0x79AC51: mov     eax, ds:0B30AACh
0x79AC56: xor     eax, esp
0x79AC58: push    eax
0x79AC59: lea     eax, [esp+1Ch+var_C]
0x79AC5D: mov     large fs:0, eax
0x79AC63: mov     esi, [esp+1Ch+arg_0]
0x79AC67: mov     [esp+1Ch+arg_0], esi
0x79AC6B: mov     [esp+1Ch+var_10], esi
0x79AC6F: xor     eax, eax
0x79AC71: cmp     esi, eax
0x79AC73: mov     [esp+1Ch+var_4], eax
0x79AC77: jz      short loc_79ACAD
0x79AC79: mov     edi, [esp+1Ch+arg_4]
0x79AC7D: push    0FFFFFFFFh
0x79AC7F: push    eax
0x79AC80: mov     dword ptr [esi+18h], 0Fh
0x79AC87: mov     [esi+14h], eax
0x79AC8A: push    edi
0x79AC8B: mov     ecx, esi
0x79AC8D: mov     [esi+4], al
0x79AC90: call    sub_414420
0x79AC95: fld     dword ptr [edi+1Ch]
0x79AC98: fstp    dword ptr [esi+1Ch]
0x79AC9B: fld     dword ptr [edi+20h]
0x79AC9E: fstp    dword ptr [esi+20h]
0x79ACA1: fld     dword ptr [edi+24h]
0x79ACA4: fstp    dword ptr [esi+24h]
0x79ACA7: fld     dword ptr [edi+28h]
0x79ACAA: fstp    dword ptr [esi+28h]
0x79ACAD: mov     ecx, [esp+1Ch+var_C]
0x79ACB1: mov     large fs:0, ecx
0x79ACB8: pop     ecx
0x79ACB9: pop     edi
0x79ACBA: pop     esi
0x79ACBB: add     esp, 10h
0x79ACBE: retn
