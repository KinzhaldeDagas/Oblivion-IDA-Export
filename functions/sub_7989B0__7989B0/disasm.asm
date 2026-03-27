0x7989B0: sub     esp, 9Ch
0x7989B6: push    ebp
0x7989B7: push    edi
0x7989B8: mov     edi, ecx
0x7989BA: mov     ebp, [edi+2Ch]
0x7989BD: test    ebp, ebp
0x7989BF: jz      loc_798CAA
0x7989C5: push    esi
0x7989C6: mov     esi, [esp+0A8h+arg_4]
0x7989CD: cmp     si, [edi+28h]
0x7989D1: jnb     loc_798CA9
0x7989D7: cmp     dword ptr [edi+10h], 0
0x7989DB: jz      loc_798CA9
0x7989E1: cmp     dword ptr [edi+24h], 0
0x7989E5: jz      loc_798CA9
0x7989EB: cmp     dword ptr [edi+20h], 0
0x7989EF: jz      loc_798CA9
0x7989F5: mov     eax, [edi+4]
0x7989F8: test    eax, eax
0x7989FA: jz      loc_798CA9
0x798A00: cmp     dword ptr [edi+0Ch], 0
0x798A04: jz      loc_798CA9
0x798A0A: push    ebx
0x798A0B: movzx   ebx, si
0x798A0E: mov     ecx, ebx
0x798A10: shl     ecx, 4
0x798A13: add     ecx, ebx
0x798A15: cmp     byte ptr [ebp+ecx*4+3Ch], 0
0x798A1A: lea     ebp, [ebp+ecx*4+0]
0x798A1E: mov     [esp+0ACh+var_28], ebx
0x798A25: mov     [esp+0ACh+var_5C], ebp
0x798A29: jnz     loc_798C90
0x798A2F: cmp     dword ptr [eax+10h], 1
0x798A33: jnz     short loc_798A3D
0x798A35: push    esi; float
0x798A36: mov     ecx, edi
0x798A38: call    sub_7987D0
0x798A3D: test    si, si
0x798A40: fld1
0x798A42: fstp    [esp+0ACh+var_9C]
0x798A46: jbe     short loc_798A60
0x798A48: fild    [esp+0ACh+var_28]
0x798A4F: fmul    [esp+0ACh+arg_10]
0x798A56: fadd    qword ptr ds:0A2F928h
0x798A5C: fstp    [esp+0ACh+var_9C]
0x798A60: push    offset sub_786E40
0x798A65: push    4
0x798A67: push    0Ch
0x798A69: lea     edx, [esp+0B8h+var_8C]
0x798A6D: push    edx
0x798A6E: call    sub_401080
0x798A73: push    offset sub_786E40
0x798A78: push    4
0x798A7A: push    0Ch
0x798A7C: lea     eax, [esp+0B8h+var_58]
0x798A80: push    eax
0x798A81: call    sub_401080
0x798A86: movzx   ecx, word ptr [edi+1Ch]
0x798A8A: add     ecx, ecx
0x798A8C: xor     esi, esi
0x798A8E: test    ecx, ecx
0x798A90: jle     loc_798C8C
0x798A96: fld     [esp+0ACh+var_9C]
0x798A9A: movzx   ebp, word ptr [edi+8]
0x798A9E: fldz
0x798AA0: fld1
0x798AA2: jmp     short loc_798AA6
0x798AA4: fxch    st(1)
0x798AA6: mov     eax, esi
0x798AA8: cdq
0x798AA9: sub     eax, edx
0x798AAB: sar     eax, 1
0x798AAD: lea     ecx, [eax+eax*2]
0x798AB0: mov     eax, [edi+24h]
0x798AB3: add     ecx, ecx
0x798AB5: add     ecx, ecx
0x798AB7: mov     edx, [eax+ecx]
0x798ABA: add     eax, ecx
0x798ABC: mov     [esp+0ACh+var_98], edx
0x798AC0: mov     edx, [eax+4]
0x798AC3: mov     eax, [eax+8]
0x798AC6: mov     [esp+0ACh+var_94], edx
0x798ACA: mov     edx, esi
0x798ACC: and     edx, 80000001h
0x798AD2: mov     [esp+0ACh+var_90], eax
0x798AD6: jns     short loc_798ADD
0x798AD8: dec     edx
0x798AD9: or      edx, 0FFFFFFFEh
0x798ADC: inc     edx
0x798ADD: jnz     short loc_798AE9
0x798ADF: fld     [esp+0ACh+var_98]
0x798AE3: fsubr   st, st(1)
0x798AE5: fstp    [esp+0ACh+var_98]
0x798AE9: fld     [esp+0ACh+var_98]
0x798AED: mov     eax, [edi+20h]
0x798AF0: fld     st
0x798AF2: add     eax, ecx
0x798AF4: fsubr   st, st(2)
0x798AF6: xor     ecx, ecx
0x798AF8: test    ebp, ebp
0x798AFA: fmul    st, st(4)
0x798AFC: fmul    dword ptr [eax]
0x798AFE: fstp    [esp+0ACh+var_20]
0x798B05: fld     [esp+0ACh+var_94]
0x798B09: fld     st
0x798B0B: fsubr   st, st(3)
0x798B0D: fmul    st, st(5)
0x798B0F: fmul    dword ptr [eax+4]
0x798B12: fstp    [esp+0ACh+var_1C]
0x798B19: fld     dword ptr [eax]
0x798B1B: fmulp   st(2), st
0x798B1D: fld     st(4)
0x798B1F: fmulp   st(2), st
0x798B21: fxch    st(1)
0x798B23: fchs
0x798B25: fstp    [esp+0ACh+var_14]
0x798B2C: fmul    dword ptr [eax+4]
0x798B2F: fmul    st, st(3)
0x798B31: fchs
0x798B33: fstp    [esp+0ACh+var_4]
0x798B3A: fxch    st(1)
0x798B3C: fst     [esp+0ACh+var_8C]
0x798B40: fld     [esp+0ACh+var_20]
0x798B47: fst     [esp+0ACh+var_88]
0x798B4B: fld     [esp+0ACh+var_1C]
0x798B52: fst     [esp+0ACh+var_84]
0x798B56: fxch    st(2)
0x798B58: fst     [esp+0ACh+var_80]
0x798B5C: fld     [esp+0ACh+var_14]
0x798B63: fst     [esp+0ACh+var_7C]
0x798B67: fstp    [esp+0ACh+var_70]
0x798B6B: fxch    st(2)
0x798B6D: fstp    [esp+0ACh+var_78]
0x798B71: fxch    st(1)
0x798B73: fst     [esp+0ACh+var_74]
0x798B77: fld     [esp+0ACh+var_4]
0x798B7E: fst     [esp+0ACh+var_6C]
0x798B82: fstp    [esp+0ACh+var_60]
0x798B86: fst     [esp+0ACh+var_68]
0x798B8A: fxch    st(1)
0x798B8C: fstp    [esp+0ACh+var_64]
0x798B90: jle     loc_798C71
0x798B96: mov     eax, [esp+0ACh+var_88]
0x798B9A: mov     [esp+0ACh+var_54], eax
0x798B9E: mov     eax, [esp+0ACh+var_84]
0x798BA2: mov     [esp+0ACh+var_50], eax
0x798BA6: mov     eax, [esp+0ACh+var_80]
0x798BAA: mov     [esp+0ACh+var_4C], eax
0x798BAE: mov     eax, [esp+0ACh+var_7C]
0x798BB2: mov     [esp+0ACh+var_48], eax
0x798BB6: mov     eax, [esp+0ACh+var_78]
0x798BBA: mov     [esp+0ACh+var_44], eax
0x798BBE: mov     eax, [esp+0ACh+var_74]
0x798BC2: mov     [esp+0ACh+var_40], eax
0x798BC6: mov     eax, [esp+0ACh+var_70]
0x798BCA: mov     [esp+0ACh+var_3C], eax
0x798BCE: mov     eax, [esp+0ACh+var_6C]
0x798BD2: mov     [esp+0ACh+var_38], eax
0x798BD6: mov     eax, [esp+0ACh+var_68]
0x798BDA: mov     edx, [esp+0ACh+var_8C]
0x798BDE: mov     [esp+0ACh+var_34], eax
0x798BE2: mov     eax, [esp+0ACh+var_64]
0x798BE6: mov     [esp+0ACh+var_30], eax
0x798BEA: mov     eax, [esp+0ACh+var_60]
0x798BEE: mov     [esp+0ACh+var_2C], eax
0x798BF5: mov     [esp+0ACh+var_58], edx
0x798BF9: mov     eax, ebp
0x798BFB: mov     ebp, [edi+10h]
0x798BFE: imul    eax, esi
0x798C01: add     eax, ecx
0x798C03: shl     eax, 6
0x798C06: add     eax, [ebp+ebx*4+0]
0x798C0A: add     ecx, 1
0x798C0D: mov     [eax], edx
0x798C0F: mov     edx, [esp+0ACh+var_54]
0x798C13: mov     [eax+4], edx
0x798C16: mov     edx, [esp+0ACh+var_50]
0x798C1A: mov     [eax+8], edx
0x798C1D: mov     edx, [esp+0ACh+var_4C]
0x798C21: mov     [eax+10h], edx
0x798C24: mov     edx, [esp+0ACh+var_48]
0x798C28: mov     [eax+14h], edx
0x798C2B: mov     edx, [esp+0ACh+var_44]
0x798C2F: mov     [eax+18h], edx
0x798C32: mov     edx, [esp+0ACh+var_40]
0x798C36: add     eax, 10h
0x798C39: mov     [eax+10h], edx
0x798C3C: mov     edx, [esp+0ACh+var_3C]
0x798C40: add     eax, 10h
0x798C43: mov     [eax+4], edx
0x798C46: mov     edx, [esp+0ACh+var_38]
0x798C4A: mov     [eax+8], edx
0x798C4D: mov     edx, [esp+0ACh+var_34]
0x798C51: mov     [eax+10h], edx
0x798C54: mov     edx, [esp+0ACh+var_30]
0x798C58: mov     [eax+14h], edx
0x798C5B: mov     edx, [esp+0ACh+var_2C]
0x798C62: mov     [eax+18h], edx
0x798C65: movzx   ebp, word ptr [edi+8]
0x798C69: cmp     ecx, ebp
0x798C6B: jl      loc_798B96
0x798C71: movzx   eax, word ptr [edi+1Ch]
0x798C75: add     esi, 1
0x798C78: add     eax, eax
0x798C7A: cmp     esi, eax
0x798C7C: jl      loc_798AA4
0x798C82: mov     ebp, [esp+0ACh+var_5C]
0x798C86: fstp    st(2)
0x798C88: fstp    st(1)
0x798C8A: fstp    st
0x798C8C: mov     byte ptr [ebp+3Ch], 1
0x798C90: mov     eax, [esp+0ACh+arg_0]
0x798C97: mov     ecx, 0Fh
0x798C9C: mov     esi, ebp
0x798C9E: mov     edi, eax
0x798CA0: rep movsd
0x798CA2: mov     [eax+8], ebx
0x798CA5: mov     byte ptr [eax], 1
0x798CA8: pop     ebx
0x798CA9: pop     esi
0x798CAA: pop     edi
0x798CAB: pop     ebp
0x798CAC: add     esp, 9Ch
0x798CB2: retn    14h
