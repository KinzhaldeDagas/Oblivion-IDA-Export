0x568E10: push    0FFFFFFFFh
0x568E12: push    offset ??0TESPackage@@QAE@XZ_SEH
0x568E17: mov     eax, large fs:0
0x568E1D: push    eax
0x568E1E: push    ecx
0x568E1F: push    esi
0x568E20: mov     eax, ds:0B30AACh
0x568E25: xor     eax, esp
0x568E27: push    eax
0x568E28: lea     eax, [esp+18h+var_C]
0x568E2C: mov     large fs:0, eax
0x568E32: mov     esi, ecx
0x568E34: mov     [esp+18h+var_10], esi
0x568E38: call    TESForm_constr
0x568E3D: lea     ecx, [esi+2Ch]
0x568E40: mov     [esp+18h+var_4], 0
0x568E48: mov     dword ptr [esi], offset ??_7TESPackage@@6B@; const TESPackage::`vftable'
0x568E4E: call    sub_569D60
0x568E53: lea     ecx, [esi+34h]; this
0x568E56: mov     byte ptr [esp+18h+var_4], 1
0x568E5B: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x568E60: mov     ecx, esi
0x568E62: mov     byte ptr [esp+18h+var_4], 2
0x568E67: mov     byte ptr [esi+4], 3Dh ; '='
0x568E6B: call    sub_568730
0x568E70: mov     eax, esi
0x568E72: mov     ecx, [esp+18h+var_C]
0x568E76: mov     large fs:0, ecx
0x568E7D: pop     ecx
0x568E7E: pop     esi
0x568E7F: add     esp, 10h
0x568E82: retn
