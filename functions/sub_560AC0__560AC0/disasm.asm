0x560AC0: push    0FFFFFFFFh
0x560AC2: push    offset SEH_560AC0
0x560AC7: mov     eax, large fs:0
0x560ACD: push    eax
0x560ACE: sub     esp, 138h
0x560AD4: mov     eax, ds:0B30AACh
0x560AD9: xor     eax, esp
0x560ADB: mov     [esp+144h+var_10], eax
0x560AE2: push    ebx
0x560AE3: push    ebp
0x560AE4: push    esi
0x560AE5: push    edi
0x560AE6: mov     eax, ds:0B30AACh
0x560AEB: xor     eax, esp
0x560AED: push    eax
0x560AEE: lea     eax, [esp+158h+var_C]
0x560AF5: mov     large fs:0, eax
0x560AFB: mov     edi, [esp+158h+arg_0]
0x560B02: mov     ebp, ecx
0x560B04: xor     esi, esi
0x560B06: mov     [esp+158h+var_134], ebp
0x560B0A: mov     [esp+158h+var_138], edi
0x560B0E: mov     [esp+158h+var_13C], esi
0x560B12: cmp     edi, esi
0x560B14: mov     [esp+158h+var_4], esi
0x560B1B: jz      loc_561003
0x560B21: cmp     [ebp+0Ch], esi
0x560B24: jz      loc_561003
0x560B2A: cmp     dword ptr [ebp+8], 2
0x560B2E: jz      loc_561003
0x560B34: fld     dword ptr ds:0B12610h
0x560B3A: fstp    [esp+158h+var_144]
0x560B3E: fldz
0x560B40: fld     [esp+158h+var_144]
0x560B44: fcom    st(1)
0x560B46: fnstsw  ax
0x560B48: test    ah, 5
0x560B4B: jnp     short loc_560B58
0x560B4D: fld1
0x560B4F: fcomp   st(1)
0x560B51: fnstsw  ax
0x560B53: test    ah, 5
0x560B56: jp      short loc_560B72
0x560B58: mov     eax, [edi]
0x560B5A: fstp    st(1)
0x560B5C: mov     edx, [eax+14Ch]
0x560B62: fstp    st
0x560B64: mov     ecx, edi
0x560B66: call    edx
0x560B68: fstp    [esp+158h+var_144]
0x560B6C: fldz
0x560B6E: fld     [esp+158h+var_144]
0x560B72: fcom    st(1)
0x560B74: fnstsw  ax
0x560B76: test    ah, 1
0x560B79: jnz     short loc_560B98
0x560B7B: fld1
0x560B7D: fcomp   st(1)
0x560B7F: fnstsw  ax
0x560B81: test    ah, 1
0x560B84: jnz     short loc_560B98
0x560B86: push    ecx
0x560B87: fstp    st(1)
0x560B89: mov     ecx, [ebp+0Ch]
0x560B8C: fstp    [esp+15Ch+var_15C]; float
0x560B8F: call    sub_7870E0
0x560B94: fldz
0x560B96: jmp     short loc_560B9A
0x560B98: fstp    st
0x560B9A: fld     dword ptr ds:0B12618h
0x560BA0: fstp    [esp+158h+var_144]
0x560BA4: fld     [esp+158h+var_144]
0x560BA8: fcom    st(1)
0x560BAA: fnstsw  ax
0x560BAC: test    ah, 5
0x560BAF: jnp     short loc_560BBC
0x560BB1: fld1
0x560BB3: fcomp   st(1)
0x560BB5: fnstsw  ax
0x560BB7: test    ah, 5
0x560BBA: jp      short loc_560BD6
0x560BBC: mov     eax, [edi]
0x560BBE: fstp    st(1)
0x560BC0: mov     edx, [eax+154h]
0x560BC6: fstp    st
0x560BC8: mov     ecx, edi
0x560BCA: call    edx
0x560BCC: fstp    [esp+158h+var_144]
0x560BD0: fldz
0x560BD2: fld     [esp+158h+var_144]
0x560BD6: fcom    st(1)
0x560BD8: fnstsw  ax
0x560BDA: test    ah, 1
0x560BDD: jnz     short loc_560BFC
0x560BDF: fld1
0x560BE1: fcomp   st(1)
0x560BE3: fnstsw  ax
0x560BE5: test    ah, 1
0x560BE8: jnz     short loc_560BFC
0x560BEA: push    ecx
0x560BEB: fstp    st(1)
0x560BED: mov     ecx, [ebp+0Ch]
0x560BF0: fstp    [esp+15Ch+var_15C]; float
0x560BF3: call    sub_787100
0x560BF8: fldz
0x560BFA: jmp     short loc_560BFE
0x560BFC: fstp    st
0x560BFE: fld     dword ptr ds:0B12608h
0x560C04: fstp    [esp+158h+var_144]
0x560C08: fld     [esp+158h+var_144]
0x560C0C: fcom    st(1)
0x560C0E: fnstsw  ax
0x560C10: test    ah, 5
0x560C13: jp      short loc_560C2F
0x560C15: mov     eax, [edi]
0x560C17: fstp    st(1)
0x560C19: mov     edx, [eax+134h]
0x560C1F: fstp    st
0x560C21: mov     ecx, edi
0x560C23: call    edx
0x560C25: fstp    [esp+158h+var_144]
0x560C29: fldz
0x560C2B: fld     [esp+158h+var_144]
0x560C2F: fcom    st(1)
0x560C31: fnstsw  ax
0x560C33: test    ah, 1
0x560C36: jnz     short loc_560C3D
0x560C38: fstp    dword ptr [ebp+44h]
0x560C3B: jmp     short loc_560C3F
0x560C3D: fstp    st
0x560C3F: fld     dword ptr ds:0B12620h
0x560C45: fstp    [esp+158h+var_140]
0x560C49: fld     dword ptr ds:0B12628h
0x560C4F: fstp    [esp+158h+var_144]
0x560C53: fld     [esp+158h+var_140]
0x560C57: fcom    st(1)
0x560C59: fnstsw  ax
0x560C5B: fld     dword ptr ds:0A430CCh
0x560C61: test    ah, 5
0x560C64: jnp     loc_560D21
0x560C6A: fcom    st(1)
0x560C6C: fnstsw  ax
0x560C6E: test    ah, 5
0x560C71: jnp     loc_560D21
0x560C77: fld     [esp+158h+var_144]
0x560C7B: fcom    st(3)
0x560C7D: fnstsw  ax
0x560C7F: test    ah, 5
0x560C82: jnp     short loc_560C96
0x560C84: fcom    st(1)
0x560C86: fnstsw  ax
0x560C88: test    ah, 41h
0x560C8B: jz      short loc_560C96
0x560C8D: fcom    st(2)
0x560C8F: fnstsw  ax
0x560C91: test    ah, 5
0x560C94: jp      short loc_560CD2
0x560C96: fstp    st(3)
0x560C98: fstp    st(1)
0x560C9A: fstp    st(1)
0x560C9C: mov     eax, [edi]
0x560C9E: fstp    st
0x560CA0: mov     edx, [eax+13Ch]
0x560CA6: mov     ecx, edi
0x560CA8: call    edx
0x560CAA: fstp    [esp+158h+var_140]
0x560CAE: mov     eax, [edi]
0x560CB0: mov     edx, [eax+144h]
0x560CB6: mov     ecx, edi
0x560CB8: call    edx
0x560CBA: fstp    [esp+158h+var_144]
0x560CBE: fld     [esp+158h+var_140]
0x560CC2: fld     [esp+158h+var_144]
0x560CC6: fld     dword ptr ds:0A430CCh
0x560CCC: fldz
0x560CCE: fxch    st(3)
0x560CD0: fxch    st(2)
0x560CD2: fxch    st(2)
0x560CD4: fcom    st(3)
0x560CD6: fnstsw  ax
0x560CD8: test    ah, 1
0x560CDB: jnz     short loc_560D2A
0x560CDD: fcom    st(1)
0x560CDF: fnstsw  ax
0x560CE1: test    ah, 41h
0x560CE4: jp      short loc_560D2A
0x560CE6: fxch    st(3)
0x560CE8: fcomp   st(2)
0x560CEA: fnstsw  ax
0x560CEC: test    ah, 41h
0x560CEF: jp      short loc_560D2C
0x560CF1: fcomp   st(1)
0x560CF3: fnstsw  ax
0x560CF5: test    ah, 1
0x560CF8: jnz     short loc_560D32
0x560CFA: fcomp   st(1)
0x560CFC: fnstsw  ax
0x560CFE: test    ah, 1
0x560D01: jnz     short loc_560D34
0x560D03: push    ecx
0x560D04: mov     ecx, [ebp+0Ch]
0x560D07: fstp    [esp+15Ch+var_15C]; float
0x560D0A: call    sub_787160
0x560D0F: fld     [esp+158h+var_144]
0x560D13: push    ecx
0x560D14: mov     ecx, [ebp+0Ch]
0x560D17: fstp    [esp+15Ch+var_15C]; float
0x560D1A: call    sub_787180
0x560D1F: jmp     short loc_560D36
0x560D21: fstp    st(2)
0x560D23: fstp    st
0x560D25: jmp     loc_560C9C
0x560D2A: fstp    st(3)
0x560D2C: fstp    st(2)
0x560D2E: fstp    st
0x560D30: jmp     short loc_560D34
0x560D32: fstp    st(1)
0x560D34: fstp    st
0x560D36: mov     eax, [ebp+34h]
0x560D39: cmp     eax, esi
0x560D3B: lea     ebx, [ebp+34h]
0x560D3E: jnz     loc_560E64
0x560D44: lea     ecx, [esp+158h+var_130]
0x560D48: call    sub_786FA0
0x560D4D: mov     ecx, [ebp+0Ch]
0x560D50: lea     eax, [esp+158h+var_130]
0x560D54: push    eax
0x560D55: mov     byte ptr [esp+15Ch+var_4], 1
0x560D5D: call    sub_78A890
0x560D62: mov     eax, [esp+158h+var_130]
0x560D66: mov     ecx, 6
0x560D6B: mov     esi, offset aTexturesTree_0; "Textures\\Trees\\Branches\\"
0x560D70: lea     edi, [esp+158h+ArgList]
0x560D74: rep movsd
0x560D76: movsb
0x560D77: mov     ecx, eax
0x560D79: lea     esp, [esp+0]
0x560D80: mov     dl, [eax]
0x560D82: add     eax, 1
0x560D85: test    dl, dl
0x560D87: jnz     short loc_560D80
0x560D89: lea     edi, [esp+158h+ArgList]
0x560D8D: sub     eax, ecx
0x560D8F: mov     esi, ecx
0x560D91: add     edi, 0FFFFFFFFh
0x560D94: mov     cl, [edi+1]
0x560D97: add     edi, 1
0x560D9A: test    cl, cl
0x560D9C: jnz     short loc_560D94
0x560D9E: mov     ecx, eax
0x560DA0: shr     ecx, 2
0x560DA3: rep movsd
0x560DA5: mov     ecx, eax
0x560DA7: and     ecx, 3
0x560DAA: lea     eax, [esp+158h+ArgList]
0x560DAE: rep movsb
0x560DB0: lea     ecx, [eax+1]
0x560DB3: mov     dl, [eax]
0x560DB5: add     eax, 1
0x560DB8: test    dl, dl
0x560DBA: jnz     short loc_560DB3
0x560DBC: sub     eax, ecx
0x560DBE: lea     eax, [esp+eax+158h+ArgList]
0x560DC2: mov     cl, 64h ; 'd'
0x560DC4: push    0; char
0x560DC6: mov     [eax-3], cl
0x560DC9: mov     [eax-2], cl
0x560DCC: push    1; char
0x560DCE: lea     ecx, [esp+160h+ArgList]
0x560DD2: push    ecx; ArgList
0x560DD3: mov     ecx, ds:0B333A0h
0x560DD9: lea     edx, [esp+164h+var_140]
0x560DDD: push    edx; int
0x560DDE: mov     byte ptr [eax-1], 73h ; 's'
0x560DE2: call    sub_442890
0x560DE7: push    eax
0x560DE8: lea     ecx, [esp+15Ch+var_13C]
0x560DEC: mov     byte ptr [esp+15Ch+var_4], 2
0x560DF4: call    sub_55E2A0
0x560DF9: lea     ecx, [esp+158h+var_140]; this
0x560DFD: mov     byte ptr [esp+158h+var_4], 1
0x560E05: call    sub_7016A0
0x560E0A: mov     esi, [esp+158h+var_13C]
0x560E0E: test    esi, esi
0x560E10: jz      short loc_560E4F
0x560E12: push    30h ; '0'; Size
0x560E14: call    FormHeapAlloc
0x560E19: add     esp, 4
0x560E1C: mov     [esp+158h+var_140], eax
0x560E20: test    eax, eax
0x560E22: mov     byte ptr [esp+158h+var_4], 3
0x560E2A: jz      short loc_560E35
0x560E2C: mov     ecx, eax
0x560E2E: call    NiTexturingProperty__NiTexturingProperty
0x560E33: jmp     short loc_560E37
0x560E35: xor     eax, eax
0x560E37: push    eax; a2
0x560E38: mov     ecx, ebx; this
0x560E3A: mov     byte ptr [esp+15Ch+var_4], 1
0x560E42: call    NiSmartPointer_Set??
0x560E47: mov     ecx, [ebx]
0x560E49: push    esi
0x560E4A: call    NiTexturingProperty__SetUnk08
0x560E4F: lea     ecx, [esp+158h+var_130]
0x560E53: mov     byte ptr [esp+158h+var_4], 0
0x560E5B: call    sub_786FC0
0x560E60: mov     edi, [esp+158h+var_138]
0x560E64: mov     eax, [ebp+38h]
0x560E67: test    eax, eax
0x560E69: lea     ebx, [ebp+38h]
0x560E6C: jnz     loc_560F13
0x560E72: lea     ebp, [edi+3Ch]
0x560E75: mov     ecx, ebp
0x560E77: call    sub_449190
0x560E7C: test    eax, eax
0x560E7E: jz      loc_560F0B
0x560E84: mov     eax, [ebp+4]
0x560E87: test    eax, eax
0x560E89: mov     ecx, 5
0x560E8E: mov     esi, offset aTexturesTreesL; "Textures\\Trees\\Leaves\\"
0x560E93: lea     edi, [esp+158h+ArgList]
0x560E97: rep movsd
0x560E99: movsw
0x560E9B: movsb
0x560E9C: jnz     short loc_560EA3
0x560E9E: mov     eax, offset EmptyString
0x560EA3: mov     edx, eax
0x560EA5: mov     cl, [eax]
0x560EA7: add     eax, 1
0x560EAA: test    cl, cl
0x560EAC: jnz     short loc_560EA5
0x560EAE: lea     edi, [esp+158h+ArgList]
0x560EB2: sub     eax, edx
0x560EB4: add     edi, 0FFFFFFFFh
0x560EB7: mov     cl, [edi+1]
0x560EBA: add     edi, 1
0x560EBD: test    cl, cl
0x560EBF: jnz     short loc_560EB7
0x560EC1: mov     ecx, eax
0x560EC3: shr     ecx, 2
0x560EC6: mov     esi, edx
0x560EC8: rep movsd
0x560ECA: mov     ecx, eax
0x560ECC: push    0; char
0x560ECE: and     ecx, 3
0x560ED1: push    1; char
0x560ED3: rep movsb
0x560ED5: lea     eax, [esp+160h+ArgList]
0x560ED9: push    eax; ArgList
0x560EDA: lea     ecx, [esp+164h+var_140]
0x560EDE: push    ecx; int
0x560EDF: mov     ecx, ds:0B333A0h
0x560EE5: call    sub_442890
0x560EEA: push    eax
0x560EEB: mov     ecx, ebx
0x560EED: mov     byte ptr [esp+15Ch+var_4], 4
0x560EF5: call    sub_55E2A0
0x560EFA: lea     ecx, [esp+158h+var_140]; this
0x560EFE: mov     byte ptr [esp+158h+var_4], 0
0x560F06: call    sub_7016A0
0x560F0B: mov     edi, [esp+158h+var_138]
0x560F0F: mov     ebp, [esp+158h+var_134]
0x560F13: cmp     dword ptr [ebp+3Ch], 0
0x560F17: lea     esi, [ebp+3Ch]
0x560F1A: jnz     loc_560FD8
0x560F20: lea     ecx, [esp+158h+var_130]
0x560F24: call    sub_786FA0
0x560F29: lea     edx, [esp+158h+ArgList]
0x560F2D: push    edx
0x560F2E: mov     ecx, edi
0x560F30: mov     byte ptr [esp+15Ch+var_4], 5
0x560F38: call    sub_4B9C40
0x560F3D: push    0; char
0x560F3F: push    1; char
0x560F41: lea     eax, [esp+160h+ArgList]
0x560F45: push    eax; ArgList
0x560F46: lea     ecx, [esp+164h+var_134]
0x560F4A: push    ecx; int
0x560F4B: mov     ecx, ds:0B333A0h
0x560F51: call    sub_442890
0x560F56: push    eax
0x560F57: lea     ecx, [esp+15Ch+var_13C]
0x560F5B: mov     byte ptr [esp+15Ch+var_4], 6
0x560F63: call    sub_55E2A0
0x560F68: lea     ecx, [esp+158h+var_134]; this
0x560F6C: mov     byte ptr [esp+158h+var_4], 5
0x560F74: call    sub_7016A0
0x560F79: mov     edi, [esp+158h+var_13C]
0x560F7D: test    edi, edi
0x560F7F: jz      short loc_560FC7
0x560F81: push    30h ; '0'; Size
0x560F83: call    FormHeapAlloc
0x560F88: add     esp, 4
0x560F8B: mov     [esp+158h+var_138], eax
0x560F8F: test    eax, eax
0x560F91: mov     byte ptr [esp+158h+var_4], 7
0x560F99: jz      short loc_560FA4
0x560F9B: mov     ecx, eax
0x560F9D: call    NiTexturingProperty__NiTexturingProperty
0x560FA2: jmp     short loc_560FA6
0x560FA4: xor     eax, eax
0x560FA6: push    eax; a2
0x560FA7: mov     ecx, esi; this
0x560FA9: mov     byte ptr [esp+15Ch+var_4], 5
0x560FB1: call    NiSmartPointer_Set??
0x560FB6: mov     ecx, [esi]
0x560FB8: push    edi
0x560FB9: call    NiTexturingProperty__SetUnk08
0x560FBE: mov     ecx, [esi]
0x560FC0: push    0
0x560FC2: call    sub_405870
0x560FC7: lea     ecx, [esp+158h+var_130]
0x560FCB: mov     byte ptr [esp+158h+var_4], 0
0x560FD3: call    sub_786FC0
0x560FD8: mov     esi, [esp+158h+var_13C]
0x560FDC: test    esi, esi
0x560FDE: mov     [esp+158h+var_4], 0FFFFFFFFh
0x560FE9: jz      short loc_561003
0x560FEB: lea     edx, [esi+4]
0x560FEE: push    edx; lpAddend
0x560FEF: call    dword ptr ds:0A2807Ch
0x560FF5: test    eax, eax
0x560FF7: jnz     short loc_561003
0x560FF9: mov     eax, [esi]
0x560FFB: mov     edx, [eax]
0x560FFD: push    1
0x560FFF: mov     ecx, esi
0x561001: call    edx
0x561003: mov     ecx, dword ptr [esp+158h+var_C]
0x56100A: mov     large fs:0, ecx
0x561011: pop     ecx
0x561012: pop     edi
0x561013: pop     esi
0x561014: pop     ebp
0x561015: pop     ebx
0x561016: mov     ecx, [esp+144h+var_10]
0x56101D: xor     ecx, esp
0x56101F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x561024: add     esp, 144h
0x56102A: retn    4
