0x687DA0: push    0FFFFFFFFh
0x687DA2: push    offset SEH_687DA0
0x687DA7: mov     eax, large fs:0
0x687DAD: push    eax
0x687DAE: sub     esp, 54h
0x687DB1: push    ebx
0x687DB2: push    ebp
0x687DB3: push    esi
0x687DB4: push    edi
0x687DB5: mov     eax, ds:0B30AACh
0x687DBA: xor     eax, esp
0x687DBC: push    eax
0x687DBD: lea     eax, [esp+74h+var_C]
0x687DC1: mov     large fs:0, eax
0x687DC7: cmp     byte ptr ds:0B3C089h, 0
0x687DCE: jnz     loc_688107
0x687DD4: mov     edi, [esp+74h+arg_4]
0x687DD8: mov     esi, [esp+74h+arg_8]
0x687DDF: fld     dword ptr [edi]
0x687DE1: fsub    dword ptr [esi]
0x687DE3: fstp    dword ptr [esp+74h+var_5C]
0x687DE7: fld     dword ptr [edi+4]
0x687DEA: fsub    dword ptr [esi+4]
0x687DED: fstp    [esp+74h+var_60]
0x687DF1: fld     dword ptr [edi+8]
0x687DF4: fsub    dword ptr [esi+8]
0x687DF7: fstp    [esp+74h+var_4C]
0x687DFB: fld     [esp+74h+var_60]
0x687DFF: fld     dword ptr [esp+74h+var_5C]
0x687E03: fmul    st, st
0x687E05: fld     st(1)
0x687E07: fmulp   st(2), st
0x687E09: faddp   st(1), st
0x687E0B: fst     [esp+74h+var_5C]
0x687E0F: fld     [esp+74h+var_4C]
0x687E13: fmul    st, st
0x687E15: faddp   st(1), st
0x687E17: fstp    [esp+74h+var_4C]
0x687E1B: fld     [esp+74h+var_4C]
0x687E1F: call    __CIsqrt
0x687E24: fstp    [esp+74h+var_4C]
0x687E28: fld     [esp+74h+var_4C]
0x687E2C: fstp    [esp+74h+var_4C]
0x687E30: fld1
0x687E32: fld     [esp+74h+var_4C]
0x687E36: fcom    st(1)
0x687E38: fnstsw  ax
0x687E3A: fstp    st(1)
0x687E3C: test    ah, 5
0x687E3F: jp      short loc_687E48
0x687E41: fstp    st
0x687E43: jmp     loc_688107
0x687E48: fcomp   dword ptr ds:0A56670h
0x687E4E: fnstsw  ax
0x687E50: test    ah, 41h
0x687E53: jnz     short loc_687E7F
0x687E55: fld     [esp+74h+var_5C]
0x687E59: fstp    [esp+74h+var_4C]
0x687E5D: fld     [esp+74h+var_4C]
0x687E61: call    __CIsqrt
0x687E66: fstp    [esp+74h+var_4C]
0x687E6A: fld     [esp+74h+var_4C]
0x687E6E: fcomp   qword ptr ds:0A74D18h
0x687E74: fnstsw  ax
0x687E76: test    ah, 5
0x687E79: jnp     loc_688048
0x687E7F: mov     ebx, [esp+74h+arg_0]
0x687E83: test    ebx, ebx
0x687E85: jz      loc_688107
0x687E8B: mov     ecx, ebx; this
0x687E8D: call    MobileObject_GetCharProxy
0x687E92: test    eax, eax
0x687E94: jz      loc_688107
0x687E9A: mov     ecx, ds:0B333A0h
0x687EA0: cmp     dword ptr [ecx+34h], 0
0x687EA4: jnz     short loc_687EB4
0x687EA6: push    esi
0x687EA7: call    sub_43F840
0x687EAC: test    al, al
0x687EAE: jz      loc_688048
0x687EB4: lea     ecx, [esp+74h+var_20]
0x687EB8: call    sub_68CB30
0x687EBD: cmp     byte ptr [esp+74h+arg_C], 0
0x687EC5: mov     [esp+74h+var_4], 0
0x687ECD: jnz     short loc_687EDC
0x687ECF: cmp     byte ptr ds:0B15824h, 0
0x687ED6: jnz     short loc_687EDC
0x687ED8: xor     al, al
0x687EDA: jmp     short loc_687EE1
0x687EDC: mov     eax, 1
0x687EE1: push    eax
0x687EE2: push    1
0x687EE4: lea     eax, [esp+7Ch+var_20]
0x687EE8: push    eax
0x687EE9: push    esi
0x687EEA: push    ebx
0x687EEB: call    sub_686450
0x687EF0: add     esp, 14h
0x687EF3: test    al, al
0x687EF5: jz      loc_688037
0x687EFB: mov     ecx, [edi]
0x687EFD: mov     edx, [edi+4]
0x687F00: mov     eax, [edi+8]
0x687F03: mov     [esp+74h+var_3C], ecx
0x687F07: lea     ecx, [esp+74h+var_20]
0x687F0B: mov     [esp+74h+var_38], edx
0x687F0F: mov     [esp+74h+var_34], eax
0x687F13: call    sub_6899C0
0x687F18: mov     edi, [eax]
0x687F1A: mov     [esp+74h+var_48], edi
0x687F1E: fld     [esp+74h+var_48]
0x687F22: fsub    [esp+74h+var_3C]
0x687F26: mov     ebp, [eax+4]
0x687F29: mov     [esp+74h+var_44], ebp
0x687F2D: mov     ebx, [eax+8]
0x687F30: fstp    [esp+74h+var_4C]
0x687F34: lea     ecx, [esp+74h+var_30]
0x687F38: fld     [esp+74h+var_44]
0x687F3C: mov     [esp+74h+var_40], ebx
0x687F40: fsub    [esp+74h+var_38]
0x687F44: fstp    dword ptr [esp+74h+var_5C]
0x687F48: fld     [esp+74h+var_4C]
0x687F4C: fstp    [esp+74h+var_30]
0x687F50: fld     dword ptr [esp+74h+var_5C]
0x687F54: fstp    [esp+74h+var_2C]
0x687F58: fldz
0x687F5A: fstp    [esp+74h+var_28]
0x687F5E: call    sub_404C90
0x687F63: fstp    dword ptr [esp+74h+var_5C]
0x687F67: fld     [esp+74h+var_40]
0x687F6B: fld     st
0x687F6D: fld     [esp+74h+var_34]
0x687F71: fld     st
0x687F73: fsubp   st(2), st
0x687F75: fxch    st(1)
0x687F77: fstp    [esp+74h+var_4C]
0x687F7B: fld     [esp+74h+var_4C]
0x687F7F: fabs
0x687F81: fstp    [esp+74h+var_4C]
0x687F85: fld     [esp+74h+var_4C]
0x687F89: fld     dword ptr [esp+74h+var_5C]
0x687F8D: fcompp
0x687F8F: fnstsw  ax
0x687F91: test    ah, 5
0x687F94: jp      loc_68805E
0x687F9A: fcompp
0x687F9C: fnstsw  ax
0x687F9E: test    ah, 41h
0x687FA1: jnz     short loc_687FC9
0x687FA3: mov     ecx, [esp+74h+arg_0]
0x687FA7: call    sub_5E34B0
0x687FAC: test    al, al
0x687FAE: jz      short loc_687FC9
0x687FB0: mov     ecx, [esp+74h+var_48]
0x687FB4: mov     edx, [esp+74h+var_44]
0x687FB8: mov     eax, [esp+74h+var_40]
0x687FBC: mov     [esi], ecx
0x687FBE: mov     [esi+4], edx
0x687FC1: mov     [esi+8], eax
0x687FC4: jmp     loc_6880F6
0x687FC9: cmp     byte ptr ds:0B15824h, 0
0x687FD0: jz      short loc_688037
0x687FD2: fld1
0x687FD4: lea     ecx, [esp+74h+var_30]
0x687FD8: fst     [esp+74h+var_30]
0x687FDC: push    ecx
0x687FDD: fldz
0x687FDF: lea     edx, [esp+78h+var_48]
0x687FE3: fst     [esp+78h+var_2C]
0x687FE7: push    edx
0x687FE8: fst     [esp+7Ch+var_28]
0x687FEC: lea     eax, [esp+7Ch+var_5C]
0x687FF0: fst     [esp+7Ch+var_24]
0x687FF4: push    eax
0x687FF5: fst     dword ptr [esp+80h+var_5C]
0x687FF9: lea     ecx, [esp+80h+var_3C]
0x687FFD: fst     [esp+80h+var_54]
0x688001: push    ecx
0x688002: fstp    [esp+84h+var_50]
0x688006: fstp    dword ptr [esp+84h+var_5C+4]
0x68800A: call    sub_47F070
0x68800F: add     esp, 10h
0x688012: mov     esi, eax
0x688014: call    sub_4E70B0
0x688019: push    eax; a2
0x68801A: mov     ecx, esi; this
0x68801C: call    sub_405680
0x688021: fld     dword ptr ds:0A3D8F0h
0x688027: push    ecx
0x688028: mov     ecx, ds:0B333A0h
0x68802E: fstp    [esp+78h+var_78]; float
0x688031: push    esi; int
0x688032: call    sub_440E60
0x688037: lea     ecx, [esp+74h+var_20]; void *
0x68803B: mov     [esp+74h+var_4], 0FFFFFFFFh
0x688043: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x688048: xor     al, al
0x68804A: mov     ecx, [esp+74h+var_C]
0x68804E: mov     large fs:0, ecx
0x688055: pop     ecx
0x688056: pop     edi
0x688057: pop     esi
0x688058: pop     ebp
0x688059: pop     ebx
0x68805A: add     esp, 60h
0x68805D: retn
0x68805E: mov     ecx, [esp+74h+arg_0]
0x688062: fstp    st(1)
0x688064: mov     [esi], edi
0x688066: fstp    st
0x688068: mov     [esi+4], ebp
0x68806B: mov     [esi+8], ebx
0x68806E: mov     ebx, [esp+74h+arg_C]
0x688075: push    ebx
0x688076: lea     edx, [esp+78h+var_48]
0x68807A: push    edx
0x68807B: lea     eax, [esp+7Ch+var_3C]
0x68807F: push    eax
0x688080: push    ecx
0x688081: call    sub_687060
0x688086: add     esp, 10h
0x688089: test    al, al
0x68808B: jnz     short loc_688037
0x68808D: test    bl, bl
0x68808F: jz      short loc_6880F6
0x688091: fld1
0x688093: lea     edx, [esp+74h+var_30]
0x688097: fst     [esp+74h+var_30]
0x68809B: push    edx
0x68809C: fst     [esp+78h+var_2C]
0x6880A0: lea     eax, [esp+78h+var_48]
0x6880A4: fldz
0x6880A6: push    eax
0x6880A7: fst     [esp+7Ch+var_28]
0x6880AB: lea     ecx, [esp+7Ch+var_5C]
0x6880AF: fst     [esp+7Ch+var_24]
0x6880B3: push    ecx
0x6880B4: fst     [esp+80h+var_54]
0x6880B8: lea     edx, [esp+80h+var_3C]
0x6880BC: fstp    [esp+80h+var_50]
0x6880C0: push    edx
0x6880C1: fst     dword ptr [esp+84h+var_5C]
0x6880C5: fstp    dword ptr [esp+84h+var_5C+4]
0x6880C9: call    sub_47F070
0x6880CE: add     esp, 10h
0x6880D1: mov     esi, eax
0x6880D3: call    sub_4E70B0
0x6880D8: push    eax; a2
0x6880D9: mov     ecx, esi; this
0x6880DB: call    sub_405680
0x6880E0: fld     dword ptr ds:0A3D8F0h
0x6880E6: push    ecx
0x6880E7: mov     ecx, ds:0B333A0h
0x6880ED: fstp    [esp+78h+var_78]; float
0x6880F0: push    esi; int
0x6880F1: call    sub_440E60
0x6880F6: lea     ecx, [esp+74h+var_20]; void *
0x6880FA: mov     [esp+74h+var_4], 0FFFFFFFFh
0x688102: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x688107: mov     al, 1
0x688109: mov     ecx, [esp+74h+var_C]
0x68810D: mov     large fs:0, ecx
0x688114: pop     ecx
0x688115: pop     edi
0x688116: pop     esi
0x688117: pop     ebp
0x688118: pop     ebx
0x688119: add     esp, 60h
0x68811C: retn
