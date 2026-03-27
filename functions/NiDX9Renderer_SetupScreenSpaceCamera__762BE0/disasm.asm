0x762BE0: sub     esp, 34h
0x762BE3: push    esi
0x762BE4: mov     esi, ecx
0x762BE6: cmp     byte ptr [esi+6F0h], 0
0x762BED: jnz     loc_762F9E
0x762BF3: mov     ecx, [esi+87Ch]
0x762BF9: mov     eax, [ecx]
0x762BFB: mov     edx, [eax+4Ch]
0x762BFE: push    ebp
0x762BFF: push    edi
0x762C00: push    0
0x762C02: call    edx
0x762C04: mov     ecx, [esi+87Ch]
0x762C0A: mov     edi, eax
0x762C0C: mov     eax, [ecx]
0x762C0E: mov     edx, [eax+50h]
0x762C11: push    0
0x762C13: call    edx
0x762C15: mov     ebp, eax
0x762C17: mov     eax, edi
0x762C19: test    eax, eax
0x762C1B: mov     [esp+38h+var_24], eax
0x762C1F: fild    [esp+38h+var_24]
0x762C23: jge     short loc_762C2B
0x762C25: fadd    dword ptr ds:0A2FC78h
0x762C2B: mov     ecx, ebp
0x762C2D: fstp    [esp+38h+var_2C]
0x762C31: test    ecx, ecx
0x762C33: mov     [esp+38h+var_24], ecx
0x762C37: fild    [esp+38h+var_24]
0x762C3B: jge     short loc_762C43
0x762C3D: fadd    dword ptr ds:0A2FC78h
0x762C43: fstp    [esp+38h+var_24]
0x762C47: lea     eax, [esi+980h]
0x762C4D: fld1
0x762C4F: mov     ecx, [esi+280h]
0x762C55: fst     dword ptr [eax]
0x762C57: push    eax
0x762C58: fldz
0x762C5A: push    2
0x762C5C: fst     dword ptr [esi+984h]
0x762C62: push    ecx
0x762C63: fst     dword ptr [esi+988h]
0x762C69: fst     dword ptr [esi+98Ch]
0x762C6F: fst     dword ptr [esi+990h]
0x762C75: fld     dword ptr ds:0A30634h
0x762C7B: fst     dword ptr [esi+994h]
0x762C81: fxch    st(1)
0x762C83: fst     dword ptr [esi+998h]
0x762C89: fst     dword ptr [esi+99Ch]
0x762C8F: fst     dword ptr [esi+9A0h]
0x762C95: fst     dword ptr [esi+9A4h]
0x762C9B: fst     dword ptr [esi+9ACh]
0x762CA1: fxch    st(2)
0x762CA3: fst     dword ptr [esi+9A8h]
0x762CA9: fld     dword ptr ds:0A45E4Ch
0x762CAF: fstp    dword ptr [esi+9B0h]
0x762CB5: fld     dword ptr ds:0A3D65Ch
0x762CBB: fst     dword ptr [esi+9B4h]
0x762CC1: fst     dword ptr [esi+0A30h]
0x762CC7: fstp    dword ptr [esi+0A34h]
0x762CCD: fst     dword ptr [esi+9B8h]
0x762CD3: fst     dword ptr [esi+9BCh]
0x762CD9: fst     dword ptr [esi+0A00h]
0x762CDF: fst     dword ptr [esi+0A28h]
0x762CE5: fstp    dword ptr [esi+0A3Ch]
0x762CEB: fxch    st(1)
0x762CED: fst     dword ptr [esi+0A04h]
0x762CF3: fst     dword ptr [esi+0A08h]
0x762CF9: fst     dword ptr [esi+0A0Ch]
0x762CFF: fst     dword ptr [esi+0A10h]
0x762D05: fst     dword ptr [esi+0A18h]
0x762D0B: fst     dword ptr [esi+0A1Ch]
0x762D11: fst     dword ptr [esi+0A20h]
0x762D17: fst     dword ptr [esi+0A24h]
0x762D1D: fstp    dword ptr [esi+0A2Ch]
0x762D23: fst     dword ptr [esi+0A14h]
0x762D29: fstp    dword ptr [esi+0A38h]
0x762D2F: mov     edx, [ecx]
0x762D31: mov     eax, [edx+0B0h]
0x762D37: call    eax
0x762D39: fld1
0x762D3B: fst     [esp+38h+var_1C]
0x762D3F: fldz
0x762D41: mov     eax, [esp+38h+var_1C]
0x762D45: fst     [esp+38h+var_18]
0x762D49: mov     [esi+640h], eax
0x762D4F: fst     [esp+38h+var_14]
0x762D53: mov     [esi+628h], eax
0x762D59: mov     ecx, [esp+38h+var_18]
0x762D5D: fst     [esp+38h+var_1C]
0x762D61: fld     dword ptr ds:0A30634h
0x762D67: mov     edx, [esp+38h+var_14]
0x762D6B: mov     eax, [esp+38h+var_1C]
0x762D6F: fstp    [esp+38h+var_18]
0x762D73: mov     [esi+644h], ecx
0x762D79: mov     [esi+62Ch], ecx
0x762D7F: mov     ecx, [esp+38h+var_18]
0x762D83: fst     [esp+38h+var_14]
0x762D87: mov     [esi+64Ch], eax
0x762D8D: fxch    st(1)
0x762D8F: mov     [esi+634h], eax
0x762D95: fst     dword ptr [esi+678h]
0x762D9B: mov     [esi+648h], edx
0x762DA1: fld     dword ptr ds:0A88980h
0x762DA7: mov     [esi+630h], edx
0x762DAD: mov     edx, [esp+38h+var_14]
0x762DB1: fstp    dword ptr [esi+67Ch]
0x762DB7: mov     [esi+650h], ecx
0x762DBD: mov     [esi+638h], ecx
0x762DC3: mov     [esi+654h], edx
0x762DC9: mov     [esi+63Ch], edx
0x762DCF: lea     eax, [esi+9C0h]
0x762DD5: fld     dword ptr ds:0A379B4h
0x762DDB: mov     ecx, [esi+280h]
0x762DE1: fst     dword ptr [eax]
0x762DE3: push    eax
0x762DE4: fxch    st(2)
0x762DE6: push    3
0x762DE8: fst     dword ptr [esi+9D0h]
0x762DEE: push    ecx
0x762DEF: fst     dword ptr [esi+9E0h]
0x762DF5: fld     [esp+44h+var_2C]
0x762DF9: fdivr   qword ptr ds:0A3D360h
0x762DFF: fstp    dword ptr [esi+9F0h]
0x762E05: fst     dword ptr [esi+9C4h]
0x762E0B: fst     dword ptr [esi+9E4h]
0x762E11: fxch    st(2)
0x762E13: fstp    dword ptr [esi+9D4h]
0x762E19: fld     [esp+44h+var_24]
0x762E1D: fld1
0x762E1F: fdivrp  st(1), st
0x762E21: fstp    dword ptr [esi+9F4h]
0x762E27: fxch    st(1)
0x762E29: fst     dword ptr [esi+9C8h]
0x762E2F: fst     dword ptr [esi+9D8h]
0x762E35: fld     dword ptr ds:0A8897Ch
0x762E3B: fstp    dword ptr [esi+9E8h]
0x762E41: fld     dword ptr ds:0A88978h
0x762E47: fstp    dword ptr [esi+9F8h]
0x762E4D: fst     dword ptr [esi+9CCh]
0x762E53: fst     dword ptr [esi+9DCh]
0x762E59: fstp    dword ptr [esi+9ECh]
0x762E5F: fstp    dword ptr [esi+9FCh]
0x762E65: mov     edx, [ecx]
0x762E67: mov     eax, [edx+0B0h]
0x762E6D: call    eax
0x762E6F: mov     ecx, [esp+38h+arg_8]
0x762E73: test    ecx, ecx
0x762E75: jz      loc_762F43
0x762E7B: fld     dword ptr [ecx]
0x762E7D: fld     [esp+38h+var_2C]
0x762E81: fld     st
0x762E83: fmulp   st(2), st
0x762E85: fnstcw  word ptr [esp+38h+arg_8]
0x762E89: movzx   eax, word ptr [esp+38h+arg_8]
0x762E8E: fxch    st(1)
0x762E90: or      eax, 0C00h
0x762E95: mov     [esp+38h+var_2C], eax
0x762E99: fldcw   word ptr [esp+38h+var_2C]
0x762E9D: fistp   qword ptr [esp+38h+var_2C]
0x762EA1: mov     edx, [esp+38h+var_2C]
0x762EA5: mov     [esp+38h+var_10.l], edx
0x762EA9: fldcw   word ptr [esp+38h+arg_8]
0x762EAD: fld     dword ptr [ecx+8]
0x762EB0: fld1
0x762EB2: fsubrp  st(1), st
0x762EB4: fld     [esp+38h+var_24]
0x762EB8: fld     st
0x762EBA: fnstcw  word ptr [esp+38h+arg_8]
0x762EBE: fmulp   st(2), st
0x762EC0: movzx   eax, word ptr [esp+38h+arg_8]
0x762EC5: fxch    st(1)
0x762EC7: or      eax, 0C00h
0x762ECC: mov     [esp+38h+var_24], eax
0x762ED0: fldcw   word ptr [esp+38h+var_24]
0x762ED4: fistp   qword ptr [esp+38h+var_24]
0x762ED8: mov     eax, [esp+38h+var_24]
0x762EDC: mov     [esp+38h+var_10.r], eax
0x762EE0: fldcw   word ptr [esp+38h+arg_8]
0x762EE4: fld     dword ptr [ecx+4]
0x762EE7: fsub    dword ptr [ecx]
0x762EE9: fnstcw  word ptr [esp+38h+arg_8]
0x762EED: fmulp   st(2), st
0x762EEF: movzx   eax, word ptr [esp+38h+arg_8]
0x762EF4: fxch    st(1)
0x762EF6: or      eax, 0C00h
0x762EFB: mov     [esp+38h+var_24], eax
0x762EFF: fldcw   word ptr [esp+38h+var_24]
0x762F03: fistp   qword ptr [esp+38h+var_24]
0x762F07: mov     edx, [esp+38h+var_24]
0x762F0B: mov     [esp+38h+var_10.t], edx
0x762F0F: fldcw   word ptr [esp+38h+arg_8]
0x762F13: fld     dword ptr [ecx+8]
0x762F16: fsub    dword ptr [ecx+0Ch]
0x762F19: fnstcw  word ptr [esp+38h+arg_8]
0x762F1D: fmulp   st(1), st
0x762F1F: movzx   eax, word ptr [esp+38h+arg_8]
0x762F24: or      eax, 0C00h
0x762F29: mov     [esp+38h+var_24], eax
0x762F2D: fldcw   word ptr [esp+38h+var_24]
0x762F31: fistp   qword ptr [esp+38h+var_24]
0x762F35: mov     eax, [esp+38h+var_24]
0x762F39: mov     [esp+38h+var_10.b], eax
0x762F3D: fldcw   word ptr [esp+38h+arg_8]
0x762F41: jmp     short loc_762F5B
0x762F43: mov     [esp+38h+var_10.l], 0
0x762F4B: mov     [esp+38h+var_10.r], 0
0x762F53: mov     [esp+38h+var_10.t], edi
0x762F57: mov     [esp+38h+var_10.b], ebp
0x762F5B: fldz
0x762F5D: mov     eax, [esi+280h]
0x762F63: fstp    dword ptr [esp+38h]
0x762F67: lea     edx, [esp+38h+var_10]
0x762F6B: fld1
0x762F6D: push    edx
0x762F6E: fstp    [esp+3Ch+a6]
0x762F72: push    eax
0x762F73: mov     ecx, [eax]
0x762F75: mov     eax, [ecx+0BCh]
0x762F7B: call    eax
0x762F7D: fld     dword ptr ds:0A5A04Ch
0x762F83: mov     ecx, [esi+8ACh]
0x762F89: mov     edx, [ecx]
0x762F8B: mov     eax, [edx+44h]
0x762F8E: sub     esp, 8
0x762F91: fstp    [esp+48h+var_44]
0x762F95: fld1
0x762F97: fstp    dword ptr [esp+48h+var_4C+4]
0x762F9A: call    eax
0x762F9C: pop     edi
0x762F9D: pop     ebp
0x762F9E: pop     esi
0x762F9F: add     esp, 34h
0x762FA2: retn    4
