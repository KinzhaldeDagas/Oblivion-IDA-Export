0x8BE680: push    ebp
0x8BE681: mov     ebp, esp
0x8BE683: and     esp, 0FFFFFFF0h
0x8BE686: sub     esp, 44h
0x8BE689: push    ebx
0x8BE68A: push    esi
0x8BE68B: mov     esi, [ebp+arg_0]
0x8BE68E: push    edi
0x8BE68F: push    esi
0x8BE690: mov     ebx, ecx
0x8BE692: call    sub_8A0180
0x8BE697: mov     eax, ds:0BA8074h
0x8BE69C: push    eax; ArgList
0x8BE69D: call    TESOutput_PrintString
0x8BE6A2: movzx   edi, word ptr [esi+0Ah]
0x8BE6A6: movzx   ecx, word ptr [esi+8]
0x8BE6AA: add     esp, 4
0x8BE6AD: cmp     edi, ecx
0x8BE6AF: mov     [esp+50h+var_44], eax
0x8BE6B3: jb      short loc_8BE6C3
0x8BE6B5: movzx   edx, word ptr [esi+0Eh]
0x8BE6B9: add     edx, edi
0x8BE6BB: push    edx
0x8BE6BC: mov     ecx, esi
0x8BE6BE: call    NiTArray_SetSize
0x8BE6C3: lea     eax, [esp+50h+var_44]
0x8BE6C7: push    eax
0x8BE6C8: push    edi
0x8BE6C9: mov     ecx, esi
0x8BE6CB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BE6D0: fldz
0x8BE6D2: fst     [esp+50h+var_30]
0x8BE6D6: xor     eax, eax
0x8BE6D8: fst     [esp+50h+var_2C]
0x8BE6DC: lea     ecx, [esp+50h+var_40]
0x8BE6E0: fst     [esp+50h+var_28]
0x8BE6E4: push    ecx
0x8BE6E5: fst     [esp+54h+var_24]
0x8BE6E9: mov     ecx, ebx
0x8BE6EB: fst     [esp+54h+var_20]
0x8BE6EF: mov     [esp+54h+var_40], eax
0x8BE6F3: fst     [esp+54h+var_1C]
0x8BE6F7: mov     [esp+54h+var_3C], eax
0x8BE6FB: fst     [esp+54h+var_18]
0x8BE6FF: mov     [esp+54h+var_38], eax
0x8BE703: fstp    [esp+54h+var_14]
0x8BE707: fld     dword ptr ds:0A2FAACh
0x8BE70D: fstp    [esp+54h+var_10]
0x8BE711: fld     dword ptr ds:0A34BA0h
0x8BE717: fstp    [esp+54h+var_C]
0x8BE71B: call    sub_8BE190
0x8BE720: pop     edi
0x8BE721: pop     esi
0x8BE722: pop     ebx
0x8BE723: mov     esp, ebp
0x8BE725: pop     ebp
0x8BE726: retn    4
