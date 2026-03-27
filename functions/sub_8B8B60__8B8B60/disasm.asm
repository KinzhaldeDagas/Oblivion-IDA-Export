0x8B8B60: push    ebp
0x8B8B61: mov     ebp, esp
0x8B8B63: and     esp, 0FFFFFFF0h
0x8B8B66: sub     esp, 164h
0x8B8B6C: push    ebx
0x8B8B6D: push    esi
0x8B8B6E: push    edi
0x8B8B6F: mov     edi, ecx
0x8B8B71: mov     esi, [edi+18h]
0x8B8B74: mov     ecx, [esi+50h]
0x8B8B77: lea     eax, [edi+20h]
0x8B8B7A: add     ecx, 10h
0x8B8B7D: push    eax
0x8B8B7E: push    ecx
0x8B8B7F: lea     ecx, [esp+178h+var_150]
0x8B8B83: call    sub_88FCC0
0x8B8B88: movaps  xmm0, [esp+170h+var_150]
0x8B8B8D: mov     eax, [esi+50h]
0x8B8B90: movaps  xmm2, xmmword ptr [edi+30h]
0x8B8B94: mov     edx, [eax+0C0h]
0x8B8B9A: movaps  xmm1, xmm0
0x8B8B9D: subps   xmm1, xmm2
0x8B8BA0: movaps  [esp+170h+var_100], xmm1
0x8B8BA5: movaps  xmm1, xmmword ptr [eax+60h]
0x8B8BA9: lea     eax, [esp+170h+var_140]
0x8B8BAD: subps   xmm0, xmm1
0x8B8BB0: push    eax
0x8B8BB1: lea     ecx, [esp+174h+var_C0]
0x8B8BB8: mov     dword ptr [esp+174h+var_16C+8], edx
0x8B8BBC: movaps  [esp+174h+var_140], xmm0
0x8B8BC1: call    sub_8D2BD0
0x8B8BC6: mov     ecx, [esi+50h]
0x8B8BC9: mov     edx, [ecx]
0x8B8BCB: lea     eax, [esp+170h+var_60]
0x8B8BD2: push    eax
0x8B8BD3: call    dword ptr [edx+3Ch]
0x8B8BD6: mov     ecx, dword ptr [esp+170h+var_16C+8]
0x8B8BDA: xorps   xmm0, xmm0
0x8B8BDD: mov     edx, ecx
0x8B8BDF: mov     eax, ecx
0x8B8BE1: movaps  [esp+170h+var_130], xmm0
0x8B8BE6: mov     dword ptr [esp+170h+var_130], ecx
0x8B8BEA: movaps  [esp+170h+anonymous_0], xmm0
0x8B8BEF: lea     ecx, [esp+170h+var_60]
0x8B8BF6: mov     dword ptr [esp+170h+anonymous_0+4], edx
0x8B8BFA: push    ecx
0x8B8BFB: lea     edx, [esp+174h+var_C0]
0x8B8C02: movaps  [esp+174h+anonymous_1], xmm0
0x8B8C07: push    edx
0x8B8C08: lea     ecx, [esp+178h+var_90]
0x8B8C0F: mov     dword ptr [esp+178h+anonymous_1+8], eax
0x8B8C13: call    sub_8D2AB0
0x8B8C18: lea     eax, [esp+170h+var_C0]
0x8B8C1F: push    eax
0x8B8C20: lea     ecx, [esp+174h+var_90]
0x8B8C27: push    ecx
0x8B8C28: lea     ecx, [esp+178h+var_30]
0x8B8C2F: call    sub_8D2AB0
0x8B8C34: lea     edx, [esp+170h+var_30]
0x8B8C3B: push    edx
0x8B8C3C: lea     ecx, [esp+174h+var_130]
0x8B8C40: call    sub_8D2A20
0x8B8C45: push    33D6BF95h; float
0x8B8C4A: lea     ecx, [esp+174h+var_130]
0x8B8C4E: call    sub_8D28B0
0x8B8C53: test    eax, eax
0x8B8C55: jnz     loc_8B8DDB
0x8B8C5B: mov     eax, [edi+4Ch]
0x8B8C5E: mov     ecx, [esi+50h]
0x8B8C61: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8B8C68: mov     dword ptr [esp+170h+var_16C+8], eax
0x8B8C6C: movss   xmm0, dword ptr [esp+170h+var_16C+8]
0x8B8C72: movaps  xmm2, xmm0
0x8B8C75: shufps  xmm2, xmm0, 0
0x8B8C79: mulps   xmm2, xmm1
0x8B8C7C: mov     ecx, esi
0x8B8C7E: movaps  [esp+170h+anonymous_2], xmm2
0x8B8C86: call    sub_8A6410
0x8B8C8B: mov     ecx, [esi+50h]
0x8B8C8E: mov     edx, [ecx]
0x8B8C90: lea     eax, [esp+170h+anonymous_2]
0x8B8C97: push    eax
0x8B8C98: call    dword ptr [edx+54h]
0x8B8C9B: mov     ecx, [edi+4Ch]
0x8B8C9E: mov     edx, [esi+50h]
0x8B8CA1: movaps  xmm1, xmmword ptr [edx+0E0h]
0x8B8CA8: mov     dword ptr [esp+170h+var_16C+8], ecx
0x8B8CAC: movss   xmm0, dword ptr [esp+170h+var_16C+8]
0x8B8CB2: movaps  xmm2, xmm0
0x8B8CB5: shufps  xmm2, xmm0, 0
0x8B8CB9: mulps   xmm2, xmm1
0x8B8CBC: mov     ecx, esi
0x8B8CBE: movaps  [esp+170h+var_D0], xmm2
0x8B8CC6: call    sub_8A6410
0x8B8CCB: mov     ecx, [esi+50h]
0x8B8CCE: mov     eax, [ecx]
0x8B8CD0: lea     edx, [esp+170h+var_D0]
0x8B8CD7: push    edx
0x8B8CD8: call    dword ptr [eax+58h]
0x8B8CDB: lea     eax, [esp+170h+var_140]
0x8B8CDF: push    eax
0x8B8CE0: lea     ecx, [esp+174h+var_150]
0x8B8CE4: push    ecx
0x8B8CE5: mov     ecx, esi
0x8B8CE7: call    sub_8ABCE0
0x8B8CEC: fld     dword ptr [edi+44h]
0x8B8CEF: mov     ebx, [ebp+arg_0]
0x8B8CF2: fmul    dword ptr [ebx+0Ch]
0x8B8CF5: mov     edx, [edi+40h]
0x8B8CF8: movaps  xmm2, [esp+170h+var_140]
0x8B8CFD: lea     eax, [esp+170h+var_F0]
0x8B8D04: fstp    dword ptr [esp+170h+var_16C+8]
0x8B8D08: movss   xmm0, dword ptr [esp+170h+var_16C+8]
0x8B8D0E: mov     dword ptr [esp+170h+var_16C+8], edx
0x8B8D12: movss   xmm1, dword ptr [esp+170h+var_16C+8]
0x8B8D18: movaps  xmm3, xmm1
0x8B8D1B: shufps  xmm3, xmm1, 0
0x8B8D1F: movaps  xmm1, xmm0
0x8B8D22: shufps  xmm1, xmm0, 0
0x8B8D26: mulps   xmm1, [esp+170h+var_100]
0x8B8D2B: push    eax
0x8B8D2C: lea     ecx, [esp+174h+var_130]
0x8B8D30: mulps   xmm3, xmm2
0x8B8D33: push    ecx
0x8B8D34: addps   xmm1, xmm3
0x8B8D37: lea     ecx, [esp+178h+var_16C+0Ch]
0x8B8D3B: movaps  [esp+178h+var_F0], xmm1
0x8B8D43: call    sub_88FE00
0x8B8D48: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8B8D4F: movaps  xmm0, [esp+170h+var_16C+0Ch]
0x8B8D54: xorps   xmm0, xmm1
0x8B8D57: movaps  [esp+170h+var_16C+0Ch], xmm0
0x8B8D5C: mov     ecx, [esi+50h]
0x8B8D5F: mulps   xmm0, xmm0
0x8B8D62: movaps  xmm1, xmm0
0x8B8D65: shufps  xmm1, xmm0, 55h ; 'U'
0x8B8D69: movaps  xmm2, xmm0
0x8B8D6C: addss   xmm1, xmm0
0x8B8D70: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B8D74: lea     edx, [esp+170h+var_16C+8]
0x8B8D78: addss   xmm2, xmm1
0x8B8D7C: movss   dword ptr [edx], xmm2
0x8B8D80: call    sub_89DA90
0x8B8D85: fmul    dword ptr [edi+48h]
0x8B8D88: fmul    dword ptr [ebx+8]
0x8B8D8B: fld     st
0x8B8D8D: fmul    st, st(1)
0x8B8D8F: fcomp   dword ptr [esp+170h+var_16C+8]
0x8B8D93: fnstsw  ax
0x8B8D95: test    ah, 5
0x8B8D98: jp      short loc_8B8DC0
0x8B8D9A: fld     dword ptr [esp+170h+var_16C+8]
0x8B8D9E: movaps  xmm1, [esp+170h+var_16C+0Ch]
0x8B8DA3: fsqrt
0x8B8DA5: fdivr   st, st(1)
0x8B8DA7: fstp    dword ptr [esp+170h+var_16C+8]
0x8B8DAB: movss   xmm0, dword ptr [esp+170h+var_16C+8]
0x8B8DB1: movaps  xmm2, xmm0
0x8B8DB4: shufps  xmm2, xmm0, 0
0x8B8DB8: mulps   xmm2, xmm1
0x8B8DBB: movaps  [esp+170h+var_16C+0Ch], xmm2
0x8B8DC0: mov     ecx, esi
0x8B8DC2: fstp    st
0x8B8DC4: call    sub_8A6410
0x8B8DC9: mov     ecx, [esi+50h]
0x8B8DCC: mov     eax, [ecx]
0x8B8DCE: lea     edx, [esp+170h+var_150]
0x8B8DD2: push    edx
0x8B8DD3: lea     edx, [esp+174h+var_16C+0Ch]
0x8B8DD7: push    edx
0x8B8DD8: call    dword ptr [eax+60h]
0x8B8DDB: pop     edi
0x8B8DDC: pop     esi
0x8B8DDD: pop     ebx
0x8B8DDE: mov     esp, ebp
0x8B8DE0: pop     ebp
0x8B8DE1: retn    4
