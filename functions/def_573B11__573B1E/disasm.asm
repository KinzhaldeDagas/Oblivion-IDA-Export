0x573B1E: movzx   ecx, al; jumptable 00573B11 default case
0x573B21: cmp     ecx, 100h
0x573B27: jle     short loc_573B50
0x573B29: xor     al, al
0x573B2B: movzx   eax, al
0x573B2E: lea     ecx, ds:0[eax*8]
0x573B35: sub     ecx, eax
0x573B37: mov     eax, [edi+38h]
0x573B3A: lea     eax, [eax+ecx*8+128h]
0x573B41: fld     dword ptr [eax+2Ch]
0x573B44: fadd    dword ptr [eax+24h]
0x573B47: fadd    dword ptr [eax+30h]
0x573B4A: fstp    [esp+arg_1C]
0x573B4E: jmp     short loc_573B7F
0x573B50: cmp     al, 9
0x573B52: jnz     short loc_573B2B
0x573B54: fstp    st(1)
0x573B56: fld     dword ptr [esi]
0x573B58: fxch    st(1)
0x573B5A: call    unknown_libname_14
0x573B5F: fstp    [esp+arg_1C]
0x573B63: fld     [esp+arg_1C]
0x573B67: mov     edx, [esp+arg_20]
0x573B6B: fld     qword ptr ds:0A68950h
0x573B71: fld     st
0x573B73: fsubrp  st(2), st
0x573B75: fxch    st(1)
0x573B77: fstp    [esp+arg_1C]
0x573B7B: fldz
0x573B7D: fxch    st(1)
0x573B7F: fld     dword ptr [esi]
0x573B81: fadd    [esp+arg_1C]
0x573B85: fld     [esp+arg_24]
0x573B89: fcompp
0x573B8B: fnstsw  ax
0x573B8D: test    ah, 5
0x573B90: jp      short loc_573BBC
0x573B92: cmp     [esp+arg_28], 0
0x573B97: jz      short loc_573BA3
0x573B99: mov     ecx, [edi+38h]
0x573B9C: fld     dword ptr [ecx]
0x573B9E: fadd    dword ptr [ebp+0]
0x573BA1: jmp     short loc_573BA9
0x573BA3: fld     dword ptr [ebp+0]
0x573BA6: fadd    dword ptr [edi+2Ch]
0x573BA9: cmp     edx, 0FFFFFFFEh
0x573BAC: fstp    dword ptr [ebp+0]
0x573BAF: jz      short loc_573BC5
0x573BB1: add     [esp+arg_C], 1
0x573BB6: fxch    st(1)
0x573BB8: fst     dword ptr [esi]
0x573BBA: fxch    st(1)
0x573BBC: cmp     byte ptr [ebx], 0
0x573BBF: jnz     loc_573A00
0x573BC5: fstp    st
0x573BC7: pop     ebx
0x573BC8: fstp    st
0x573BCA: fld     [esp-4+arg_18]
0x573BCE: fld     dword ptr [esi]
0x573BD0: fcomp   st(1)
0x573BD2: fnstsw  ax
0x573BD4: test    ah, 5
0x573BD7: mov     eax, [esp-4+arg_C]
0x573BDB: jp      short loc_573BE6
0x573BDD: pop     edi
0x573BDE: fstp    dword ptr [esi]
0x573BE0: pop     esi
0x573BE1: pop     ebp
0x573BE2: pop     ecx
0x573BE3: retn    1Ch
0x573BE6: pop     edi
0x573BE7: fstp    st
0x573BE9: pop     esi
0x573BEA: pop     ebp
0x573BEB: pop     ecx
0x573BEC: retn    1Ch
