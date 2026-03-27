0x7E4960: sub     esp, 50h
0x7E4963: mov     eax, ds:0B3F9A8h
0x7E4968: mov     edx, ds:0B3F9B0h
0x7E496E: push    ebx
0x7E496F: push    ebp
0x7E4970: mov     ebp, ecx
0x7E4972: cmp     word ptr [ebp+11Ah], 0
0x7E497A: mov     ecx, ds:0B3F9ACh
0x7E4980: push    esi
0x7E4981: push    edi
0x7E4982: mov     dword ptr [esp+60h+var_48], eax
0x7E4986: mov     dword ptr [esp+60h+var_48+4], ecx
0x7E498A: mov     [esp+60h+var_40], edx
0x7E498E: mov     dword ptr [esp+60h+var_3C], eax
0x7E4992: mov     dword ptr [esp+60h+var_3C+4], ecx
0x7E4996: mov     [esp+60h+var_34], edx
0x7E499A: jbe     loc_7E4C9A
0x7E49A0: call    _rand
0x7E49A5: movzx   ecx, word ptr [ebp+11Ah]
0x7E49AC: xor     edx, edx
0x7E49AE: div     ecx
0x7E49B0: mov     eax, [ebp+114h]
0x7E49B6: mov     edi, [eax+edx*4]
0x7E49B9: test    edi, edi
0x7E49BB: jz      short loc_7E49A0
0x7E49BD: cmp     dword ptr [edi+0B4h], 0
0x7E49C4: jz      short loc_7E49A0
0x7E49C6: mov     esi, [edi+0B8h]
0x7E49CC: test    esi, esi
0x7E49CE: jz      loc_7E4B2B
0x7E49D4: mov     ecx, [esi+8]
0x7E49D7: mov     ebx, [ecx+40h]
0x7E49DA: call    _rand
0x7E49DF: xor     edx, edx
0x7E49E1: div     ebx
0x7E49E3: mov     eax, [esi+14h]
0x7E49E6: mov     esi, [eax+edx*4]
0x7E49E9: mov     ebx, [esi+1Ch]
0x7E49EC: call    _rand
0x7E49F1: mov     [esp+60h+var_50], eax
0x7E49F5: fild    [esp+60h+var_50]
0x7E49F9: fdiv    qword ptr ds:0A3D5A8h
0x7E49FF: fstp    [esp+60h+var_50]
0x7E4A03: fld     [esp+60h+var_50]
0x7E4A07: fld     st
0x7E4A09: fld1
0x7E4A0B: fsubrp  st(1), st
0x7E4A0D: fstp    [esp+60h+var_50]
0x7E4A11: fld     dword ptr [ebx+88h]
0x7E4A17: fld     [esp+60h+var_50]
0x7E4A1B: fld     st
0x7E4A1D: fmulp   st(2), st
0x7E4A1F: fxch    st(1)
0x7E4A21: fstp    [esp+60h+var_24]
0x7E4A25: fld     dword ptr [ebx+8Ch]
0x7E4A2B: fmul    st, st(1)
0x7E4A2D: fstp    [esp+60h+var_20]
0x7E4A31: fmul    dword ptr [ebx+90h]
0x7E4A37: fstp    [esp+60h+var_1C]
0x7E4A3B: fld     dword ptr [esi+88h]
0x7E4A41: fmul    st, st(1)
0x7E4A43: fstp    [esp+60h+var_30]
0x7E4A47: fld     dword ptr [esi+8Ch]
0x7E4A4D: fmul    st, st(1)
0x7E4A4F: fstp    [esp+60h+var_2C]
0x7E4A53: fmul    dword ptr [esi+90h]
0x7E4A59: fstp    [esp+60h+var_28]
0x7E4A5D: fld     [esp+60h+var_30]
0x7E4A61: fadd    [esp+60h+var_24]
0x7E4A65: fstp    [esp+60h+var_18]
0x7E4A69: mov     ecx, [esp+60h+var_18]
0x7E4A6D: fld     [esp+60h+var_2C]
0x7E4A71: mov     dword ptr [esp+60h+var_48], ecx
0x7E4A75: fadd    [esp+60h+var_20]
0x7E4A79: fstp    [esp+60h+var_14]
0x7E4A7D: mov     edx, [esp+60h+var_14]
0x7E4A81: fld     [esp+60h+var_28]
0x7E4A85: mov     dword ptr [esp+60h+var_48+4], edx
0x7E4A89: fadd    [esp+60h+var_1C]
0x7E4A8D: fstp    [esp+60h+var_10]
0x7E4A91: mov     eax, [esp+60h+var_10]
0x7E4A95: mov     [esp+60h+var_40], eax
0x7E4A99: call    _rand
0x7E4A9E: mov     [esp+60h+var_50], eax
0x7E4AA2: fild    [esp+60h+var_50]
0x7E4AA6: fadd    st, st
0x7E4AA8: fdiv    qword ptr ds:0A3D5A8h
0x7E4AAE: fsub    qword ptr ds:0A2F928h
0x7E4AB4: fstp    [esp+60h+var_50]
0x7E4AB8: fld     [esp+60h+var_50]
0x7E4ABC: fstp    [esp+60h+var_4C]
0x7E4AC0: call    _rand
0x7E4AC5: mov     [esp+60h+var_50], eax
0x7E4AC9: fild    [esp+60h+var_50]
0x7E4ACD: lea     ecx, [esp+60h+var_C]
0x7E4AD1: fadd    st, st
0x7E4AD3: fdiv    qword ptr ds:0A3D5A8h
0x7E4AD9: fsub    qword ptr ds:0A2F928h
0x7E4ADF: fstp    [esp+60h+var_50]
0x7E4AE3: fld     [esp+60h+var_50]
0x7E4AE7: fstp    [esp+60h+var_C]
0x7E4AEB: fldz
0x7E4AED: fstp    [esp+60h+var_8]
0x7E4AF1: fld     [esp+60h+var_4C]
0x7E4AF5: fstp    [esp+60h+var_4]
0x7E4AF9: call    sub_43F350
0x7E4AFE: fstp    st
0x7E4B00: lea     ecx, [esp+60h+var_C]
0x7E4B04: push    ecx
0x7E4B05: lea     edx, [esp+64h+var_18]
0x7E4B09: push    edx
0x7E4B0A: lea     ecx, [edi+64h]
0x7E4B0D: call    sub_7101F0
0x7E4B12: mov     ecx, [eax]
0x7E4B14: mov     dword ptr [esp+60h+var_3C], ecx
0x7E4B18: mov     edx, [eax+4]
0x7E4B1B: mov     dword ptr [esp+60h+var_3C+4], edx
0x7E4B1F: mov     eax, [eax+8]
0x7E4B22: mov     [esp+60h+var_34], eax
0x7E4B26: jmp     loc_7E4CB2
0x7E4B2B: mov     ecx, [edi+0B4h]
0x7E4B31: movzx   esi, word ptr [ecx+8]
0x7E4B35: call    _rand
0x7E4B3A: movzx   ecx, si
0x7E4B3D: xor     edx, edx
0x7E4B3F: div     ecx
0x7E4B41: mov     esi, [edi+0B4h]
0x7E4B47: test    esi, esi
0x7E4B49: mov     ebx, edx
0x7E4B4B: jz      loc_7E4CB2
0x7E4B51: mov     ecx, [esi+34h]
0x7E4B54: test    ecx, ecx
0x7E4B56: jz      loc_7E4BF5
0x7E4B5C: mov     edx, [ecx]
0x7E4B5E: mov     eax, [edx+4Ch]
0x7E4B61: call    eax
0x7E4B63: test    al, al
0x7E4B65: jz      loc_7E4BF5
0x7E4B6B: xor     eax, eax
0x7E4B6D: push    1
0x7E4B6F: mov     ecx, esi
0x7E4B71: mov     [esp+64h+var_18], eax
0x7E4B75: mov     [esp+64h+var_14], eax
0x7E4B79: mov     byte ptr [esp+64h+var_10], al
0x7E4B7D: mov     [esp+64h+var_24], eax
0x7E4B81: mov     [esp+64h+var_20], eax
0x7E4B85: mov     byte ptr [esp+64h+var_1C], al
0x7E4B89: call    sub_728AB0
0x7E4B8E: test    al, al
0x7E4B90: jz      loc_7E4C45
0x7E4B96: lea     ecx, [esp+60h+var_18]
0x7E4B9A: push    ecx
0x7E4B9B: mov     ecx, esi
0x7E4B9D: call    sub_728B60
0x7E4BA2: lea     edx, [esp+60h+var_24]
0x7E4BA6: push    edx
0x7E4BA7: mov     ecx, esi
0x7E4BA9: call    sub_728D00
0x7E4BAE: mov     eax, [esp+60h+var_14]
0x7E4BB2: imul    eax, ebx
0x7E4BB5: add     eax, [esp+60h+var_18]
0x7E4BB9: mov     ecx, [eax]
0x7E4BBB: mov     dword ptr [esp+60h+var_48], ecx
0x7E4BBF: mov     edx, [eax+4]
0x7E4BC2: mov     dword ptr [esp+60h+var_48+4], edx
0x7E4BC6: mov     eax, [eax+8]
0x7E4BC9: mov     [esp+60h+var_40], eax
0x7E4BCD: mov     eax, [esp+60h+var_20]
0x7E4BD1: imul    eax, ebx
0x7E4BD4: add     eax, [esp+60h+var_24]
0x7E4BD8: mov     ecx, [eax]
0x7E4BDA: mov     dword ptr [esp+60h+var_3C], ecx
0x7E4BDE: mov     edx, [eax+4]
0x7E4BE1: mov     dword ptr [esp+60h+var_3C+4], edx
0x7E4BE5: mov     eax, [eax+8]
0x7E4BE8: mov     ecx, esi
0x7E4BEA: mov     [esp+60h+var_34], eax
0x7E4BEE: call    sub_728B20
0x7E4BF3: jmp     short loc_7E4C45
0x7E4BF5: mov     eax, [esi+1Ch]
0x7E4BF8: test    eax, eax
0x7E4BFA: jz      short loc_7E4C04
0x7E4BFC: lea     ecx, [ebx+ebx*2]
0x7E4BFF: lea     eax, [eax+ecx*4]
0x7E4C02: jmp     short loc_7E4C09
0x7E4C04: mov     eax, offset Vector3_InitValue?
0x7E4C09: mov     edx, [eax]
0x7E4C0B: mov     dword ptr [esp+60h+var_48], edx
0x7E4C0F: mov     ecx, [eax+4]
0x7E4C12: mov     dword ptr [esp+60h+var_48+4], ecx
0x7E4C16: mov     edx, [eax+8]
0x7E4C19: mov     [esp+60h+var_40], edx
0x7E4C1D: mov     esi, [esi+20h]
0x7E4C20: test    esi, esi
0x7E4C22: jz      short loc_7E4C2C
0x7E4C24: lea     eax, [ebx+ebx*2]
0x7E4C27: lea     eax, [esi+eax*4]
0x7E4C2A: jmp     short loc_7E4C31
0x7E4C2C: mov     eax, offset Vector3_InitValue?
0x7E4C31: mov     ecx, [eax]
0x7E4C33: mov     dword ptr [esp+60h+var_3C], ecx
0x7E4C37: mov     edx, [eax+4]
0x7E4C3A: mov     dword ptr [esp+60h+var_3C+4], edx
0x7E4C3E: mov     eax, [eax+8]
0x7E4C41: mov     [esp+60h+var_34], eax
0x7E4C45: cmp     byte ptr [ebp+78h], 0
0x7E4C49: jz      short loc_7E4CB2
0x7E4C4B: lea     ecx, [esp+60h+var_48]
0x7E4C4F: push    ecx
0x7E4C50: lea     edx, [esp+64h+var_C]
0x7E4C54: lea     esi, [edi+64h]
0x7E4C57: push    edx
0x7E4C58: mov     ecx, esi
0x7E4C5A: call    sub_53D4B0
0x7E4C5F: mov     ecx, [eax]
0x7E4C61: mov     dword ptr [esp+60h+var_48], ecx
0x7E4C65: mov     edx, [eax+4]
0x7E4C68: mov     dword ptr [esp+60h+var_48+4], edx
0x7E4C6C: mov     eax, [eax+8]
0x7E4C6F: lea     ecx, [esp+60h+var_3C]
0x7E4C73: push    ecx
0x7E4C74: lea     edx, [esp+64h+var_C]
0x7E4C78: push    edx
0x7E4C79: mov     ecx, esi
0x7E4C7B: mov     [esp+68h+var_40], eax
0x7E4C7F: call    sub_7101F0
0x7E4C84: mov     ecx, [eax]
0x7E4C86: mov     dword ptr [esp+60h+var_3C], ecx
0x7E4C8A: mov     edx, [eax+4]
0x7E4C8D: mov     dword ptr [esp+60h+var_3C+4], edx
0x7E4C91: mov     eax, [eax+8]
0x7E4C94: mov     [esp+60h+var_34], eax
0x7E4C98: jmp     short loc_7E4CB2
0x7E4C9A: mov     dword ptr [esp+60h+var_48], eax
0x7E4C9E: mov     dword ptr [esp+60h+var_48+4], ecx
0x7E4CA2: mov     [esp+60h+var_40], edx
0x7E4CA6: mov     dword ptr [esp+60h+var_3C], eax
0x7E4CAA: mov     dword ptr [esp+60h+var_3C+4], ecx
0x7E4CAE: mov     [esp+60h+var_34], edx
0x7E4CB2: mov     ecx, [ebp+6Ch]
0x7E4CB5: fld     dword ptr [esp+60h+var_48]
0x7E4CB9: mov     eax, [esp+60h+arg_0]
0x7E4CBD: shl     eax, 5
0x7E4CC0: fstp    dword ptr [eax+ecx]
0x7E4CC3: mov     edx, [ebp+6Ch]
0x7E4CC6: fld     dword ptr [esp+60h+var_48+4]
0x7E4CCA: pop     edi
0x7E4CCB: fstp    dword ptr [eax+edx+4]
0x7E4CCF: mov     ecx, [ebp+6Ch]
0x7E4CD2: fld     [esp+5Ch+var_40]
0x7E4CD6: pop     esi
0x7E4CD7: fstp    dword ptr [eax+ecx+8]
0x7E4CDB: mov     edx, [ebp+6Ch]
0x7E4CDE: fld     dword ptr [ebp+0F8h]
0x7E4CE4: fstp    dword ptr [eax+edx+0Ch]
0x7E4CE8: mov     ecx, [ebp+6Ch]
0x7E4CEB: fld     dword ptr [esp+58h+var_3C]
0x7E4CEF: fstp    dword ptr [eax+ecx+10h]
0x7E4CF3: mov     edx, [ebp+6Ch]
0x7E4CF6: fld     dword ptr [esp+58h+var_3C+4]
0x7E4CFA: fstp    dword ptr [eax+edx+14h]
0x7E4CFE: mov     ecx, [ebp+6Ch]
0x7E4D01: fld     [esp+58h+var_34]
0x7E4D05: pop     ebp
0x7E4D06: fstp    dword ptr [eax+ecx+18h]
0x7E4D0A: pop     ebx
0x7E4D0B: add     esp, 50h
0x7E4D0E: retn    4
