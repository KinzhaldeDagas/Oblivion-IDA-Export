0x4ACB20: push    0FFFFFFFFh
0x4ACB22: push    offset SEH_6FB0D0
0x4ACB27: mov     eax, large fs:0
0x4ACB2D: push    eax
0x4ACB2E: sub     esp, 24h
0x4ACB31: push    ebx
0x4ACB32: push    ebp
0x4ACB33: push    esi
0x4ACB34: push    edi
0x4ACB35: mov     eax, ds:0B30AACh
0x4ACB3A: xor     eax, esp
0x4ACB3C: push    eax
0x4ACB3D: lea     eax, [esp+44h+var_C]
0x4ACB41: mov     large fs:0, eax
0x4ACB47: mov     edi, ecx
0x4ACB49: push    6Ch ; 'l'; Size
0x4ACB4B: call    FormHeapAlloc
0x4ACB50: add     esp, 4
0x4ACB53: mov     [esp+44h+var_30], eax
0x4ACB57: xor     esi, esi
0x4ACB59: cmp     eax, esi
0x4ACB5B: mov     [esp+44h+var_4], esi
0x4ACB5F: jz      short loc_4ACB6A
0x4ACB61: mov     ecx, eax; this
0x4ACB63: call    ??0TextureEffectData@BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::TextureEffectData::TextureEffectData(void)
0x4ACB68: mov     esi, eax
0x4ACB6A: mov     ebp, [esi+8]
0x4ACB6D: test    ebp, ebp
0x4ACB6F: mov     eax, [edi+50h]
0x4ACB72: mov     ebx, [edi+28h]
0x4ACB75: mov     [esp+44h+var_4], 0FFFFFFFFh
0x4ACB7D: mov     [esp+44h+var_30], eax
0x4ACB81: jz      short loc_4ACBAB
0x4ACB83: lea     eax, [ebp+4]
0x4ACB86: push    eax; lpAddend
0x4ACB87: call    dword ptr ds:0A2807Ch
0x4ACB8D: test    eax, eax
0x4ACB8F: jnz     short loc_4ACBA0
0x4ACB91: test    ebp, ebp
0x4ACB93: jz      short loc_4ACBA0
0x4ACB95: mov     edx, [ebp+0]
0x4ACB98: mov     eax, [edx]
0x4ACB9A: push    1
0x4ACB9C: mov     ecx, ebp
0x4ACB9E: call    eax
0x4ACBA0: mov     eax, [esp+44h+var_30]
0x4ACBA4: mov     dword ptr [esi+8], 0
0x4ACBAB: movzx   ecx, bl
0x4ACBAE: mov     [esp+44h+var_30], ecx
0x4ACBB2: movzx   edx, bh
0x4ACBB5: fild    [esp+44h+var_30]
0x4ACBB9: mov     [esp+44h+var_30], edx
0x4ACBBD: fstp    [esp+44h+var_1C]
0x4ACBC1: shr     ebx, 10h
0x4ACBC4: fild    [esp+44h+var_30]
0x4ACBC8: movzx   ecx, bl
0x4ACBCB: fstp    [esp+44h+var_18]
0x4ACBCF: mov     [esp+44h+var_30], ecx
0x4ACBD3: mov     edx, [esp+44h+var_1C]
0x4ACBD7: fild    [esp+44h+var_30]
0x4ACBDB: mov     ecx, [esp+44h+var_18]
0x4ACBDF: mov     [esp+44h+var_2C], edx
0x4ACBE3: mov     [esp+44h+var_28], ecx
0x4ACBE7: fstp    [esp+44h+var_14]
0x4ACBEB: mov     edx, [esp+44h+var_14]
0x4ACBEF: fldz
0x4ACBF1: mov     [esp+44h+var_24], edx
0x4ACBF5: fst     [esp+44h+var_10]
0x4ACBF9: mov     ecx, [esp+44h+var_10]
0x4ACBFD: fld     [esp+44h+var_1C]
0x4ACC01: mov     [esp+44h+var_20], ecx
0x4ACC05: fld     qword ptr ds:0A3DDD8h
0x4ACC0B: fdiv    st(1), st
0x4ACC0D: fxch    st(1)
0x4ACC0F: fstp    [esp+44h+var_2C]
0x4ACC13: fld     [esp+44h+var_28]
0x4ACC17: fdiv    st, st(1)
0x4ACC19: mov     edx, [esp+44h+var_2C]
0x4ACC1D: mov     [esi+2Ch], edx
0x4ACC20: fstp    [esp+44h+var_28]
0x4ACC24: fld     [esp+44h+var_24]
0x4ACC28: fdiv    st, st(1)
0x4ACC2A: mov     ecx, [esp+44h+var_28]
0x4ACC2E: mov     [esi+30h], ecx
0x4ACC31: fstp    [esp+44h+var_24]
0x4ACC35: fld     [esp+44h+var_20]
0x4ACC39: fdiv    st, st(1)
0x4ACC3B: mov     edx, [esp+44h+var_24]
0x4ACC3F: mov     [esi+34h], edx
0x4ACC42: movzx   edx, al
0x4ACC45: mov     [esp+44h+var_30], edx
0x4ACC49: fstp    [esp+44h+var_20]
0x4ACC4D: fild    [esp+44h+var_30]
0x4ACC51: mov     ecx, [esp+44h+var_20]
0x4ACC55: mov     [esi+38h], ecx
0x4ACC58: movzx   ecx, ah
0x4ACC5B: shr     eax, 10h
0x4ACC5E: fstp    [esp+44h+var_1C]
0x4ACC62: mov     [esp+44h+var_30], ecx
0x4ACC66: movzx   edx, al
0x4ACC69: fild    [esp+44h+var_30]
0x4ACC6D: mov     [esp+44h+var_30], edx
0x4ACC71: fstp    [esp+44h+var_18]
0x4ACC75: mov     eax, [esp+44h+var_1C]
0x4ACC79: fild    [esp+44h+var_30]
0x4ACC7D: mov     ecx, [esp+44h+var_18]
0x4ACC81: mov     [esp+44h+var_2C], eax
0x4ACC85: mov     [esp+44h+var_28], ecx
0x4ACC89: fstp    [esp+44h+var_14]
0x4ACC8D: mov     edx, [esp+44h+var_14]
0x4ACC91: fxch    st(1)
0x4ACC93: mov     [esp+44h+var_24], edx
0x4ACC97: fst     [esp+44h+var_10]
0x4ACC9B: mov     eax, [esp+44h+var_10]
0x4ACC9F: fld     [esp+44h+var_1C]
0x4ACCA3: mov     [esp+44h+var_20], eax
0x4ACCA7: fdiv    st, st(2)
0x4ACCA9: fstp    [esp+44h+var_2C]
0x4ACCAD: fld     [esp+44h+var_28]
0x4ACCB1: fdiv    st, st(2)
0x4ACCB3: fstp    [esp+44h+var_28]
0x4ACCB7: fld     [esp+44h+var_24]
0x4ACCBB: fdiv    st, st(2)
0x4ACCBD: fstp    [esp+44h+var_24]
0x4ACCC1: fld     [esp+44h+var_20]
0x4ACCC5: fdivrp  st(2), st
0x4ACCC7: fxch    st(1)
0x4ACCC9: fstp    [esp+44h+var_20]
0x4ACCCD: mov     ecx, [esp+44h+var_2C]
0x4ACCD1: fst     dword ptr [esi+4Ch]
0x4ACCD4: mov     edx, [esp+44h+var_28]
0x4ACCD8: fstp    dword ptr [esi+50h]
0x4ACCDB: mov     eax, [esp+44h+var_24]
0x4ACCDF: mov     [esi+3Ch], ecx
0x4ACCE2: mov     ecx, [esp+44h+var_20]
0x4ACCE6: mov     [esi+40h], edx
0x4ACCE9: mov     edx, [esp+44h+arg_0]
0x4ACCED: mov     ebp, [esp+44h+arg_4]
0x4ACCF1: mov     [esi+44h], eax
0x4ACCF4: mov     [esi+48h], ecx
0x4ACCF7: fld     dword ptr [edi+4Ch]
0x4ACCFA: fstp    dword ptr [esi+54h]
0x4ACCFD: fld     dword ptr [edx+2Ch]
0x4ACD00: fadd    st, st
0x4ACD02: fstp    dword ptr [esi+58h]
0x4ACD05: mov     eax, [edi+1Ch]
0x4ACD08: mov     [esi+5Ch], eax
0x4ACD0B: mov     ecx, [edi+74h]
0x4ACD0E: mov     [esi+60h], ecx
0x4ACD11: mov     edx, [edi+20h]
0x4ACD14: mov     [esi+64h], edx
0x4ACD17: mov     eax, [edi+24h]
0x4ACD1A: mov     [esi+68h], eax
0x4ACD1D: mov     ebx, [esi+8]
0x4ACD20: cmp     ebx, ebp
0x4ACD22: jz      short loc_4ACD55
0x4ACD24: test    ebx, ebx
0x4ACD26: jz      short loc_4ACD44
0x4ACD28: lea     ecx, [ebx+4]
0x4ACD2B: push    ecx; lpAddend
0x4ACD2C: call    dword ptr ds:0A2807Ch
0x4ACD32: test    eax, eax
0x4ACD34: jnz     short loc_4ACD44
0x4ACD36: test    ebx, ebx
0x4ACD38: jz      short loc_4ACD44
0x4ACD3A: mov     edx, [ebx]
0x4ACD3C: mov     eax, [edx]
0x4ACD3E: push    1
0x4ACD40: mov     ecx, ebx
0x4ACD42: call    eax
0x4ACD44: test    ebp, ebp
0x4ACD46: mov     [esi+8], ebp
0x4ACD49: jz      short loc_4ACD55
0x4ACD4B: add     ebp, 4
0x4ACD4E: push    ebp; lpAddend
0x4ACD4F: call    dword ptr ds:0A28078h
0x4ACD55: test    byte ptr [edi+18h], 10h
0x4ACD59: mov     eax, esi
0x4ACD5B: jz      short loc_4ACD77
0x4ACD5D: fld     dword ptr [esi+3Ch]
0x4ACD60: fld1
0x4ACD62: fsub    st(1), st
0x4ACD64: fxch    st(1)
0x4ACD66: fstp    dword ptr [esi+3Ch]
0x4ACD69: fld     dword ptr [esi+40h]
0x4ACD6C: fsub    st, st(1)
0x4ACD6E: fstp    dword ptr [esi+40h]
0x4ACD71: fsubr   dword ptr [esi+44h]
0x4ACD74: fstp    dword ptr [esi+44h]
0x4ACD77: mov     ecx, dword ptr [esp+44h+var_C]
0x4ACD7B: mov     large fs:0, ecx
0x4ACD82: pop     ecx
0x4ACD83: pop     edi
0x4ACD84: pop     esi
0x4ACD85: pop     ebp
0x4ACD86: pop     ebx
0x4ACD87: add     esp, 30h
0x4ACD8A: retn    8
