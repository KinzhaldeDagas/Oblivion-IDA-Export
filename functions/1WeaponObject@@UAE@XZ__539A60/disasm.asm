0x539A60: push    0FFFFFFFFh
0x539A62: push    offset ??0WeaponObject@@QAE@XZ_SEH
0x539A67: mov     eax, large fs:0
0x539A6D: push    eax
0x539A6E: push    ecx
0x539A6F: push    esi
0x539A70: push    edi
0x539A71: mov     eax, ds:0B30AACh
0x539A76: xor     eax, esp
0x539A78: push    eax
0x539A79: lea     eax, [esp+1Ch+var_C]
0x539A7D: mov     large fs:0, eax
0x539A83: mov     edi, ecx
0x539A85: mov     [esp+1Ch+var_10], edi
0x539A89: mov     dword ptr [edi], offset ??_7WeaponObject@@6B@; const WeaponObject::`vftable'
0x539A8F: mov     [esp+1Ch+var_4], 0
0x539A97: call    sub_452A60
0x539A9C: mov     esi, eax
0x539A9E: test    esi, esi
0x539AA0: jz      short loc_539ABA
0x539AA2: push    offset dword_BA7F3C
0x539AA7: mov     ecx, esi
0x539AA9: call    sub_700010
0x539AAE: test    eax, eax
0x539AB0: jz      short loc_539ABA
0x539AB2: push    eax
0x539AB3: mov     ecx, esi
0x539AB5: call    sub_6FFE90
0x539ABA: mov     ecx, edi
0x539ABC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x539AC4: call    sub_88EA60
0x539AC9: mov     ecx, [esp+1Ch+var_C]
0x539ACD: mov     large fs:0, ecx
0x539AD4: pop     ecx
0x539AD5: pop     edi
0x539AD6: pop     esi
0x539AD7: add     esp, 10h
0x539ADA: retn
