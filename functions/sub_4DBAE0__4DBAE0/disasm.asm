0x4DBAE0: push    ebp
0x4DBAE1: mov     ebp, esp
0x4DBAE3: sub     esp, 60h
0x4DBAE6: mov     eax, ds:0B30AACh
0x4DBAEB: xor     eax, ebp
0x4DBAED: mov     [ebp+var_4], eax
0x4DBAF0: push    ebx
0x4DBAF1: push    esi
0x4DBAF2: mov     esi, ecx
0x4DBAF4: mov     eax, [esi]
0x4DBAF6: mov     edx, [eax+170h]
0x4DBAFC: push    edi
0x4DBAFD: mov     [ebp+var_20], esi
0x4DBB00: mov     [ebp+var_5], 0
0x4DBB04: call    edx
0x4DBB06: cmp     byte ptr [eax+4], 20h ; ' '
0x4DBB0A: jnz     loc_4DBDD0
0x4DBB10: mov     eax, [esi]
0x4DBB12: mov     edx, [eax+154h]
0x4DBB18: mov     ecx, esi
0x4DBB1A: call    edx
0x4DBB1C: test    eax, eax
0x4DBB1E: mov     ecx, esi
0x4DBB20: jz      loc_4DBD97
0x4DBB26: mov     eax, [esi]
0x4DBB28: mov     edx, [eax+170h]
0x4DBB2E: call    edx
0x4DBB30: mov     edi, eax
0x4DBB32: xor     ebx, ebx
0x4DBB34: cmp     edi, ebx
0x4DBB36: mov     [ebp+var_3C], edi
0x4DBB39: jz      loc_4DBDD0
0x4DBB3F: cmp     [ebp+arg_4], bl
0x4DBB42: jz      short loc_4DBB4F
0x4DBB44: mov     ecx, edi
0x4DBB46: call    sub_4AE590
0x4DBB4B: test    al, al
0x4DBB4D: jnz     short loc_4DBB67
0x4DBB4F: cmp     [ebp+arg_8], bl
0x4DBB52: jz      loc_4DBDD0
0x4DBB58: mov     ecx, edi
0x4DBB5A: call    sub_4AE5A0
0x4DBB5F: test    al, al
0x4DBB61: jz      loc_4DBDD0
0x4DBB67: mov     eax, [esi]
0x4DBB69: mov     edx, [eax+154h]
0x4DBB6F: mov     ecx, esi
0x4DBB71: call    edx
0x4DBB73: push    eax; NiObjectNET *
0x4DBB74: call    NiObjectNET__GetBSFornitureMarker
0x4DBB79: add     esp, 4
0x4DBB7C: cmp     eax, ebx
0x4DBB7E: mov     [ebp+var_1C], eax
0x4DBB81: jz      loc_4DBDD0
0x4DBB87: movzx   esi, word ptr [eax+18h]
0x4DBB8B: cmp     esi, ebx
0x4DBB8D: mov     [ebp+var_24], esi
0x4DBB90: jz      loc_4DBDD0
0x4DBB96: lea     eax, [esi+esi*2]
0x4DBB99: add     eax, eax
0x4DBB9B: add     eax, eax
0x4DBB9D: mov     [ebp+var_C], eax
0x4DBBA0: call    __alloca?
0x4DBBA5: lea     eax, ds:0[esi*4]
0x4DBBAC: mov     [ebp+var_14], esp
0x4DBBAF: call    __alloca?
0x4DBBB4: xor     edi, edi
0x4DBBB6: cmp     esi, ebx
0x4DBBB8: mov     [ebp+var_28], esp
0x4DBBBB: jbe     loc_4DBDD0
0x4DBBC1: mov     esi, [ebp+var_14]
0x4DBBC4: mov     [ebp+var_18], ebx
0x4DBBC7: mov     ecx, [ebp+var_3C]
0x4DBBCA: push    ebx
0x4DBBCB: call    sub_4AE5B0
0x4DBBD0: test    al, al
0x4DBBD2: jz      short loc_4DBC41
0x4DBBD4: mov     ecx, [ebp+var_20]
0x4DBBD7: push    ebx
0x4DBBD8: call    sub_4D72C0
0x4DBBDD: test    al, al
0x4DBBDF: jnz     short loc_4DBC41
0x4DBBE1: mov     eax, [ebp+var_1C]
0x4DBBE4: mov     ecx, [eax+10h]
0x4DBBE7: mov     edx, [ebp+var_18]
0x4DBBEA: movzx   eax, byte ptr [edx+ecx+0Eh]
0x4DBBEF: push    eax
0x4DBBF0: mov     [ebp+var_2C], eax
0x4DBBF3: call    sub_4AE5E0
0x4DBBF8: add     esp, 4
0x4DBBFB: test    al, al
0x4DBBFD: jz      short loc_4DBC05
0x4DBBFF: cmp     [ebp+arg_4], 0
0x4DBC03: jnz     short loc_4DBC1B
0x4DBC05: mov     eax, [ebp+var_2C]
0x4DBC08: push    eax
0x4DBC09: call    sub_4AE5D0
0x4DBC0E: add     esp, 4
0x4DBC11: test    al, al
0x4DBC13: jz      short loc_4DBC41
0x4DBC15: cmp     [ebp+arg_8], 0
0x4DBC19: jz      short loc_4DBC41
0x4DBC1B: mov     ecx, [ebp+var_1C]
0x4DBC1E: mov     eax, [ecx+10h]
0x4DBC21: add     eax, [ebp+var_18]
0x4DBC24: add     edi, 1
0x4DBC27: mov     edx, [eax]
0x4DBC29: mov     [esi], edx
0x4DBC2B: mov     ecx, [eax+4]
0x4DBC2E: mov     [esi+4], ecx
0x4DBC31: mov     edx, [eax+8]
0x4DBC34: mov     eax, [ebp+var_28]
0x4DBC37: mov     [eax+edi*4-4], ebx
0x4DBC3B: mov     [esi+8], edx
0x4DBC3E: add     esi, 0Ch
0x4DBC41: add     [ebp+var_18], 10h
0x4DBC45: add     ebx, 1
0x4DBC48: cmp     ebx, [ebp+var_24]
0x4DBC4B: jb      loc_4DBBC7
0x4DBC51: test    edi, edi
0x4DBC53: jz      loc_4DBDD0
0x4DBC59: mov     eax, [ebp+var_C]
0x4DBC5C: call    __alloca?
0x4DBC61: mov     ecx, [ebp+var_14]
0x4DBC64: mov     ebx, [ebp+var_20]
0x4DBC67: mov     edx, [ebx]
0x4DBC69: mov     eax, [edx+174h]
0x4DBC6F: mov     esi, esp
0x4DBC71: push    esi
0x4DBC72: push    ecx
0x4DBC73: push    edi
0x4DBC74: mov     ecx, ebx
0x4DBC76: mov     [ebp+var_24], esi
0x4DBC79: call    eax
0x4DBC7B: push    eax
0x4DBC7C: lea     ecx, [ebp+var_60]
0x4DBC7F: push    ecx
0x4DBC80: mov     ecx, ebx
0x4DBC82: call    sub_4D7AF0
0x4DBC87: push    eax
0x4DBC88: call    sub_710580
0x4DBC8D: fld     dword ptr ds:0A32048h
0x4DBC93: add     esp, 14h
0x4DBC96: fstp    [ebp+var_14]
0x4DBC99: xor     ebx, ebx
0x4DBC9B: test    edi, edi
0x4DBC9D: mov     [ebp+var_D], 7Fh
0x4DBCA1: jbe     loc_4DBDD0
0x4DBCA7: add     esi, 8
0x4DBCAA: lea     ebx, [ebx+0]
0x4DBCB0: mov     eax, [ebp+arg_0]
0x4DBCB3: fld     dword ptr [eax]
0x4DBCB5: fsub    dword ptr [esi-8]
0x4DBCB8: fstp    [ebp+var_38]
0x4DBCBB: fld     dword ptr [eax+4]
0x4DBCBE: fsub    dword ptr [esi-4]
0x4DBCC1: fstp    [ebp+var_34]
0x4DBCC4: fld     dword ptr [eax+8]
0x4DBCC7: fsub    dword ptr [esi]
0x4DBCC9: fstp    [ebp+var_30]
0x4DBCCC: fld     [ebp+var_34]
0x4DBCCF: fld     [ebp+var_38]
0x4DBCD2: fld     [ebp+var_30]
0x4DBCD5: fld     st(1)
0x4DBCD7: fmulp   st(2), st
0x4DBCD9: fld     st(2)
0x4DBCDB: fmulp   st(3), st
0x4DBCDD: fxch    st(1)
0x4DBCDF: faddp   st(2), st
0x4DBCE1: fmul    st, st
0x4DBCE3: faddp   st(1), st
0x4DBCE5: fstp    [ebp+var_C]
0x4DBCE8: fld     [ebp+var_C]
0x4DBCEB: call    __CIsqrt
0x4DBCF0: fstp    [ebp+var_C]
0x4DBCF3: fld     [ebp+var_C]
0x4DBCF6: fstp    [ebp+var_C]
0x4DBCF9: fld     [ebp+var_C]
0x4DBCFC: fld     [ebp+var_14]
0x4DBCFF: fcomp   st(1)
0x4DBD01: fnstsw  ax
0x4DBD03: test    ah, 41h
0x4DBD06: jnz     short loc_4DBD10
0x4DBD08: fstp    [ebp+var_14]
0x4DBD0B: mov     [ebp+var_D], bl
0x4DBD0E: jmp     short loc_4DBD12
0x4DBD10: fstp    st
0x4DBD12: add     ebx, 1
0x4DBD15: add     esi, 0Ch
0x4DBD18: cmp     ebx, edi
0x4DBD1A: jb      short loc_4DBCB0
0x4DBD1C: mov     al, [ebp+var_D]
0x4DBD1F: cmp     al, 7Fh
0x4DBD21: jz      loc_4DBDD0
0x4DBD27: mov     edi, [ebp+arg_10]
0x4DBD2A: mov     esi, [ebp+var_1C]
0x4DBD2D: movzx   edx, al
0x4DBD30: mov     eax, [ebp+var_28]
0x4DBD33: mov     eax, [eax+edx*4]
0x4DBD36: mov     [edi], eax
0x4DBD38: mov     ecx, [esi+10h]
0x4DBD3B: shl     eax, 4
0x4DBD3E: mov     al, [eax+ecx+0Eh]
0x4DBD42: mov     ecx, [ebp+arg_C]
0x4DBD45: mov     [ecx+0Eh], al
0x4DBD48: mov     eax, [ebp+var_24]
0x4DBD4B: lea     edx, [edx+edx*2]
0x4DBD4E: lea     eax, [eax+edx*4]
0x4DBD51: mov     edx, [eax]
0x4DBD53: mov     [ecx], edx
0x4DBD55: mov     edx, [eax+4]
0x4DBD58: mov     [ecx+4], edx
0x4DBD5B: mov     eax, [eax+8]
0x4DBD5E: mov     [ecx+8], eax
0x4DBD61: mov     edx, [edi]
0x4DBD63: mov     eax, [esi+10h]
0x4DBD66: shl     edx, 4
0x4DBD69: movzx   edx, word ptr [edx+eax+0Ch]
0x4DBD6E: mov     [ebp+var_C], edx
0x4DBD71: mov     eax, [ebp+var_20]
0x4DBD74: push    ecx
0x4DBD75: fild    [ebp+var_C]
0x4DBD78: fdiv    qword ptr ds:0A2FC70h
0x4DBD7E: fstp    [ebp+var_C]
0x4DBD81: fld     [ebp+var_C]
0x4DBD84: fadd    dword ptr [eax+28h]
0x4DBD87: fstp    [ebp+var_C]
0x4DBD8A: fld     [ebp+var_C]
0x4DBD8D: fstp    [esp+70h+var_70]; float
0x4DBD90: call    sub_6FAEE0
0x4DBD95: jmp     short loc_4DBDCC
0x4DBD97: mov     edx, [esi]
0x4DBD99: mov     eax, [edx+174h]
0x4DBD9F: call    eax
0x4DBDA1: fldz
0x4DBDA3: mov     edx, [eax]
0x4DBDA5: mov     ecx, [ebp+arg_C]
0x4DBDA8: mov     [ecx], edx
0x4DBDAA: mov     edx, [eax+4]
0x4DBDAD: mov     [ecx+4], edx
0x4DBDB0: mov     eax, [eax+8]
0x4DBDB3: push    ecx
0x4DBDB4: fstp    [esp+70h+var_70]; float
0x4DBDB7: mov     [ecx+8], eax
0x4DBDBA: mov     byte ptr [ecx+0Eh], 0
0x4DBDBE: call    sub_6FAEE0
0x4DBDC3: mov     ecx, [ebp+arg_10]
0x4DBDC6: mov     dword ptr [ecx], 0FFFFFFFFh
0x4DBDCC: mov     [ebp+var_5], 1
0x4DBDD0: mov     al, [ebp+var_5]
0x4DBDD3: lea     esp, [ebp-6Ch]
0x4DBDD6: pop     edi
0x4DBDD7: pop     esi
0x4DBDD8: pop     ebx
0x4DBDD9: mov     ecx, [ebp+var_4]
0x4DBDDC: xor     ecx, ebp
0x4DBDDE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4DBDE3: mov     esp, ebp
0x4DBDE5: pop     ebp
0x4DBDE6: retn    14h
