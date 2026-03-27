0x6DBBE0: push    ebp
0x6DBBE1: mov     ebp, esp
0x6DBBE3: and     esp, 0FFFFFFF8h
0x6DBBE6: sub     esp, 1Ch
0x6DBBE9: push    ebx
0x6DBBEA: mov     ebx, ecx
0x6DBBEC: mov     eax, [ebx+18h]
0x6DBBEF: test    eax, eax
0x6DBBF1: push    esi
0x6DBBF2: push    edi
0x6DBBF3: jz      short loc_6DBBFE
0x6DBBF5: mov     esi, [eax+8]
0x6DBBF8: mov     dword ptr [esp+28h+var_18], esi
0x6DBBFC: jmp     short loc_6DBC0A
0x6DBBFE: mov     dword ptr [esp+28h+var_18], 0
0x6DBC06: mov     esi, dword ptr [esp+28h+var_18]
0x6DBC0A: fldz
0x6DBC0C: fld     st
0x6DBC0E: fld     [ebp+arg_0]
0x6DBC11: fucom   st(1)
0x6DBC13: fnstsw  ax
0x6DBC15: fstp    st(1)
0x6DBC17: test    ah, 44h
0x6DBC1A: jp      short loc_6DBC3E
0x6DBC1C: mov     eax, [ebp+arg_4]
0x6DBC1F: fstp    st
0x6DBC21: mov     ecx, [ebp+arg_8]
0x6DBC24: mov     edx, [ebp+arg_C]
0x6DBC27: mov     dword ptr [eax], 0
0x6DBC2D: mov     dword ptr [ecx], 1
0x6DBC33: fstp    dword ptr [edx]
0x6DBC35: pop     edi
0x6DBC36: pop     esi
0x6DBC37: pop     ebx
0x6DBC38: mov     esp, ebp
0x6DBC3A: pop     ebp
0x6DBC3B: retn    10h
0x6DBC3E: fcom    st(1)
0x6DBC40: fnstsw  ax
0x6DBC42: fstp    st(1)
0x6DBC44: test    ah, 5
0x6DBC47: fld1
0x6DBC49: jp      short loc_6DBC66
0x6DBC4B: call    unknown_libname_14
0x6DBC50: fstp    [esp+28h+var_C]
0x6DBC54: fld     [esp+28h+var_C]
0x6DBC58: fld1
0x6DBC5A: fadd    st(1), st
0x6DBC5C: fxch    st(1)
0x6DBC5E: fstp    [ebp+arg_0]
0x6DBC61: fld     [ebp+arg_0]
0x6DBC64: fxch    st(1)
0x6DBC66: fld1
0x6DBC68: fld     st
0x6DBC6A: fucomp  st(3)
0x6DBC6C: fnstsw  ax
0x6DBC6E: test    ah, 44h
0x6DBC71: jp      short loc_6DBC95
0x6DBC73: mov     ecx, [ebp+arg_4]
0x6DBC76: fstp    st(2)
0x6DBC78: mov     edx, [ebp+arg_8]
0x6DBC7B: fstp    st
0x6DBC7D: lea     eax, [esi-2]
0x6DBC80: mov     [ecx], eax
0x6DBC82: mov     eax, [ebp+arg_C]
0x6DBC85: add     esi, 0FFFFFFFFh
0x6DBC88: mov     [edx], esi
0x6DBC8A: fstp    dword ptr [eax]
0x6DBC8C: pop     edi
0x6DBC8D: pop     esi
0x6DBC8E: pop     ebx
0x6DBC8F: mov     esp, ebp
0x6DBC91: pop     ebp
0x6DBC92: retn    10h
0x6DBC95: fcomp   st(2)
0x6DBC97: fnstsw  ax
0x6DBC99: test    ah, 5
0x6DBC9C: jp      short loc_6DBCB3
0x6DBC9E: call    unknown_libname_14
0x6DBCA3: fstp    [esp+28h+var_C]
0x6DBCA7: fld     [esp+28h+var_C]
0x6DBCAB: fstp    [ebp+arg_0]
0x6DBCAE: fld     [ebp+arg_0]
0x6DBCB1: jmp     short loc_6DBCB5
0x6DBCB3: fstp    st
0x6DBCB5: fmul    dword ptr [ebx+24h]
0x6DBCB8: mov     ecx, dword ptr [esp+28h+var_18]
0x6DBCBC: xor     esi, esi
0x6DBCBE: add     ecx, 0FFFFFFFFh
0x6DBCC1: fstp    [esp+28h+var_C]
0x6DBCC5: mov     edi, 1
0x6DBCCA: jz      short loc_6DBD0C
0x6DBCCC: mov     edx, [ebx+20h]
0x6DBCCF: fld     [esp+28h+var_C]
0x6DBCD3: add     edx, 4
0x6DBCD6: fld     dword ptr [edx]
0x6DBCD8: fcomp   st(1)
0x6DBCDA: fnstsw  ax
0x6DBCDC: test    ah, 1
0x6DBCDF: jz      short loc_6DBCF2
0x6DBCE1: add     esi, 1
0x6DBCE4: add     edi, 1
0x6DBCE7: add     edx, 4
0x6DBCEA: cmp     esi, ecx
0x6DBCEC: jb      short loc_6DBCD6
0x6DBCEE: fstp    st
0x6DBCF0: jmp     short loc_6DBD0C
0x6DBCF2: mov     eax, [ebx+20h]
0x6DBCF5: fsub    dword ptr [eax+esi*4]
0x6DBCF8: fstp    [esp+28h+var_10]
0x6DBCFC: fld     [esp+28h+var_10]
0x6DBD00: fld     dword ptr [eax+edi*4]
0x6DBD03: fsub    dword ptr [eax+esi*4]
0x6DBD06: fdivp   st(1), st
0x6DBD08: fstp    dword ptr [esp+28h+var_18]
0x6DBD0C: mov     [esp+28h+var_C], 0
0x6DBD14: fld     dword ptr [esp+28h+var_18]
0x6DBD18: push    ecx
0x6DBD19: fstp    [esp+2Ch+var_2C]; float
0x6DBD1C: push    edi; int
0x6DBD1D: push    esi; int
0x6DBD1E: mov     ecx, ebx
0x6DBD20: call    sub_6DB6F0
0x6DBD25: fsub    [esp+28h+var_10]
0x6DBD29: fstp    dword ptr [esp+28h+var_8]
0x6DBD2D: fld     dword ptr [esp+28h+var_8]
0x6DBD31: fld     st
0x6DBD33: fabs
0x6DBD35: fstp    dword ptr [esp+28h+var_8]
0x6DBD39: fld     dword ptr [esp+28h+var_8]
0x6DBD3D: fcomp   qword ptr ds:0A68FE0h
0x6DBD43: fnstsw  ax
0x6DBD45: test    ah, 41h
0x6DBD48: jnp     short loc_6DBD83
0x6DBD4A: fld     dword ptr [esp+28h+var_18]
0x6DBD4E: push    ecx
0x6DBD4F: fst     [esp+2Ch+var_18]
0x6DBD53: mov     ecx, ebx
0x6DBD55: fxch    st(1)
0x6DBD57: fstp    [esp+2Ch+var_8]
0x6DBD5B: fstp    [esp+2Ch+var_2C]; float
0x6DBD5E: push    edi; int
0x6DBD5F: push    esi; int
0x6DBD60: call    sub_6DB660
0x6DBD65: fdivr   [esp+28h+var_8]
0x6DBD69: mov     eax, [esp+28h+var_C]
0x6DBD6D: add     eax, 1
0x6DBD70: cmp     eax, 20h ; ' '
0x6DBD73: mov     [esp+28h+var_C], eax
0x6DBD77: fsubr   [esp+28h+var_18]
0x6DBD7B: fstp    dword ptr [esp+28h+var_18]
0x6DBD7F: jl      short loc_6DBD14
0x6DBD81: jmp     short loc_6DBD85
0x6DBD83: fstp    st
0x6DBD85: mov     ecx, [ebp+arg_4]
0x6DBD88: fld     dword ptr [esp+28h+var_18]
0x6DBD8C: mov     edx, [ebp+arg_8]
0x6DBD8F: mov     eax, [ebp+arg_C]
0x6DBD92: mov     [ecx], esi
0x6DBD94: mov     [edx], edi
0x6DBD96: fstp    dword ptr [eax]
0x6DBD98: pop     edi
0x6DBD99: pop     esi
0x6DBD9A: pop     ebx
0x6DBD9B: mov     esp, ebp
0x6DBD9D: pop     ebp
0x6DBD9E: retn    10h
