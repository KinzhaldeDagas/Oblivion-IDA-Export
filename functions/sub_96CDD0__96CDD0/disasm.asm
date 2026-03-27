0x96CDD0: sub     esp, 48h
0x96CDD3: mov     eax, [esp+48h+arg_C]
0x96CDD7: mov     ecx, [eax]
0x96CDD9: mov     edx, [eax+4]
0x96CDDC: mov     [esp+48h+var_24], ecx
0x96CDE0: mov     ecx, [eax+8]
0x96CDE3: mov     [esp+48h+var_1C], ecx
0x96CDE7: mov     ecx, [esp+48h+arg_10]
0x96CDEB: fld     dword ptr [ecx]
0x96CDED: mov     [esp+48h+var_20], edx
0x96CDF1: fsub    dword ptr [eax]
0x96CDF3: push    esi
0x96CDF4: fstp    [esp+4Ch+var_48]
0x96CDF8: mov     edx, [esp+4Ch+var_48]
0x96CDFC: fld     dword ptr [ecx+4]
0x96CDFF: mov     [esp+4Ch+var_18], edx
0x96CE03: fsub    dword ptr [eax+4]
0x96CE06: fstp    [esp+4Ch+var_44]
0x96CE0A: fld     dword ptr [ecx+8]
0x96CE0D: mov     ecx, [esp+4Ch+var_44]
0x96CE11: fsub    dword ptr [eax+8]
0x96CE14: mov     [esp+4Ch+var_14], ecx
0x96CE18: mov     ecx, [esp+4Ch+arg_14]
0x96CE1C: fstp    [esp+4Ch+var_40]
0x96CE20: mov     edx, [esp+4Ch+var_40]
0x96CE24: fld     dword ptr [ecx]
0x96CE26: mov     [esp+4Ch+var_10], edx
0x96CE2A: fsub    dword ptr [eax]
0x96CE2C: fstp    [esp+4Ch+var_48]
0x96CE30: fld     dword ptr [ecx+4]
0x96CE33: fsub    dword ptr [eax+4]
0x96CE36: fstp    [esp+4Ch+var_44]
0x96CE3A: fld     dword ptr [ecx+8]
0x96CE3D: mov     ecx, [esp+4Ch+var_44]
0x96CE41: fsub    dword ptr [eax+8]
0x96CE44: mov     eax, [esp+4Ch+var_48]
0x96CE48: mov     [esp+4Ch+var_C], eax
0x96CE4C: mov     eax, [esp+4Ch+arg_8]
0x96CE50: fstp    [esp+4Ch+var_40]
0x96CE54: mov     edx, [esp+4Ch+var_40]
0x96CE58: fld     dword ptr [eax]
0x96CE5A: mov     [esp+4Ch+var_8], ecx
0x96CE5E: mov     ecx, [esp+4Ch+arg_18]
0x96CE62: fsub    dword ptr [ecx]
0x96CE64: mov     [esp+4Ch+var_4], edx
0x96CE68: fstp    [esp+4Ch+var_48]
0x96CE6C: fld     dword ptr [eax+4]
0x96CE6F: fsub    dword ptr [ecx+4]
0x96CE72: fstp    [esp+4Ch+var_44]
0x96CE76: fld     dword ptr [eax+8]
0x96CE79: fsub    dword ptr [ecx+8]
0x96CE7C: fstp    [esp+4Ch+var_40]
0x96CE80: fld     [esp+4Ch+var_48]
0x96CE84: fld     st
0x96CE86: fld     dword ptr ds:0B3F9A8h
0x96CE8C: fucompp
0x96CE8E: fnstsw  ax
0x96CE90: fld     [esp+4Ch+var_40]
0x96CE94: test    ah, 44h
0x96CE97: fld     [esp+4Ch+var_44]
0x96CE9B: jp      short loc_96CEBF
0x96CE9D: fld     st
0x96CE9F: fld     dword ptr ds:0B3F9ACh
0x96CEA5: fucompp
0x96CEA7: fnstsw  ax
0x96CEA9: test    ah, 44h
0x96CEAC: jp      short loc_96CEBF
0x96CEAE: fld     st(1)
0x96CEB0: fld     dword ptr ds:0B3F9B0h
0x96CEB6: fucompp
0x96CEB8: fnstsw  ax
0x96CEBA: test    ah, 44h
0x96CEBD: jnp     short loc_96CF2D
0x96CEBF: fld     [esp+4Ch+arg_0]
0x96CEC3: mov     esi, [esp+4Ch+arg_4]
0x96CEC7: mov     eax, [esi+4]
0x96CECA: fld     st
0x96CECC: mov     ecx, [esi+8]
0x96CECF: fmulp   st(4), st
0x96CED1: mov     edx, [esi+0Ch]
0x96CED4: fxch    st(3)
0x96CED6: mov     [esp+4Ch+var_3C], eax
0x96CEDA: fstp    [esp+4Ch+var_48]
0x96CEDE: mov     eax, [esp+4Ch+var_48]
0x96CEE2: mov     [esp+4Ch+var_38], ecx
0x96CEE6: fmul    st, st(2)
0x96CEE8: mov     [esp+4Ch+var_30], eax
0x96CEEC: mov     [esp+4Ch+var_34], edx
0x96CEF0: lea     eax, [esp+4Ch+arg_4]
0x96CEF4: fstp    [esp+4Ch+var_44]
0x96CEF8: mov     ecx, [esp+4Ch+var_44]
0x96CEFC: push    eax
0x96CEFD: fmulp   st(1), st
0x96CEFF: mov     [esp+50h+var_2C], ecx
0x96CF03: lea     ecx, [esp+50h+arg_C]
0x96CF07: push    ecx
0x96CF08: fstp    [esp+54h+var_40]
0x96CF0C: mov     edx, [esp+54h+var_40]
0x96CF10: mov     [esp+54h+var_28], edx
0x96CF14: lea     edx, [esp+54h+arg_10]
0x96CF18: push    edx
0x96CF19: lea     eax, [esp+58h+var_24]
0x96CF1D: push    eax
0x96CF1E: lea     ecx, [esp+5Ch+var_3C]
0x96CF22: push    ecx
0x96CF23: call    sub_9726E0
0x96CF28: add     esp, 14h
0x96CF2B: jmp     short loc_96CF52
0x96CF2D: mov     esi, [esp+4Ch+arg_4]
0x96CF31: fstp    st(2)
0x96CF33: lea     edx, [esp+4Ch+arg_4]
0x96CF37: fstp    st
0x96CF39: push    edx
0x96CF3A: fstp    st
0x96CF3C: lea     eax, [esp+50h+arg_C]
0x96CF40: push    eax
0x96CF41: lea     ecx, [esp+54h+var_24]
0x96CF45: push    ecx
0x96CF46: lea     edx, [esi+4]
0x96CF49: push    edx
0x96CF4A: call    sub_975DF0
0x96CF4F: add     esp, 10h
0x96CF52: fstp    [esp+4Ch+arg_4]
0x96CF56: fld     dword ptr [esi+10h]
0x96CF59: pop     esi
0x96CF5A: fld     [esp+48h+arg_4]
0x96CF5E: fld     st(1)
0x96CF60: fmulp   st(2), st
0x96CF62: fcompp
0x96CF64: fnstsw  ax
0x96CF66: test    ah, 41h
0x96CF69: jp      short loc_96CF74
0x96CF6B: mov     eax, 1
0x96CF70: add     esp, 48h
0x96CF73: retn
0x96CF74: xor     eax, eax
0x96CF76: add     esp, 48h
0x96CF79: retn
