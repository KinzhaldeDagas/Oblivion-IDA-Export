0x608DA0: push    ebp
0x608DA1: mov     ebp, esp
0x608DA3: and     esp, 0FFFFFFF0h
0x608DA6: sub     esp, 34h
0x608DA9: mov     eax, ds:0B30AACh
0x608DAE: xor     eax, esp
0x608DB0: mov     [esp+34h+var_4], eax
0x608DB4: push    ebx
0x608DB5: push    esi
0x608DB6: mov     ebx, ecx
0x608DB8: mov     esi, [ebx+5Ch]
0x608DBB: push    edi
0x608DBC: xor     edi, edi
0x608DBE: cmp     esi, edi
0x608DC0: jz      short loc_608E36
0x608DC2: mov     edi, [ebp+arg_4]
0x608DC5: push    offset Vector3_InitValue?
0x608DCA: mov     ecx, edi
0x608DCC: call    sub_8AA390
0x608DD1: test    al, al
0x608DD3: jz      short loc_608DE6
0x608DD5: mov     eax, [edi]
0x608DD7: mov     [esi+10h], eax
0x608DDA: mov     ecx, [edi+4]
0x608DDD: mov     [esi+14h], ecx
0x608DE0: mov     edx, [edi+8]
0x608DE3: mov     [esi+18h], edx
0x608DE6: mov     esi, [ebp+arg_0]
0x608DE9: push    offset Vector3_InitValue?
0x608DEE: mov     ecx, esi
0x608DF0: call    sub_8AA390
0x608DF5: test    al, al
0x608DF7: jz      short loc_608E0F
0x608DF9: mov     eax, [ebx+5Ch]
0x608DFC: mov     ecx, [esi]
0x608DFE: add     eax, 4
0x608E01: mov     [eax], ecx
0x608E03: mov     edx, [esi+4]
0x608E06: mov     [eax+4], edx
0x608E09: mov     ecx, [esi+8]
0x608E0C: mov     [eax+8], ecx
0x608E0F: mov     edx, [ebx+5Ch]
0x608E12: mov     dword ptr [edx], 3
0x608E18: mov     eax, [ebx+5Ch]
0x608E1B: mov     dword ptr [eax+28h], 0
0x608E22: pop     edi
0x608E23: pop     esi
0x608E24: pop     ebx
0x608E25: mov     ecx, [esp+34h+var_4]
0x608E29: xor     ecx, esp
0x608E2B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x608E30: mov     esp, ebp
0x608E32: pop     ebp
0x608E33: retn    8
0x608E36: push    54h ; 'T'; Size
0x608E38: call    FormHeapAlloc
0x608E3D: mov     [ebx+5Ch], eax
0x608E40: mov     dword ptr [eax], 3
0x608E46: mov     ecx, [ebx+5Ch]
0x608E49: mov     [ecx+2Ch], edi
0x608E4C: mov     edx, [ebx+5Ch]
0x608E4F: mov     ecx, [ebp+arg_4]
0x608E52: mov     [edx+28h], edi
0x608E55: mov     edx, [ecx]
0x608E57: mov     eax, [ebx+5Ch]
0x608E5A: mov     [eax+10h], edx
0x608E5D: mov     edx, [ecx+4]
0x608E60: mov     [eax+14h], edx
0x608E63: mov     ecx, [ecx+8]
0x608E66: mov     [eax+18h], ecx
0x608E69: mov     ecx, [ebp+arg_0]
0x608E6C: mov     edx, [ecx]
0x608E6E: add     eax, 10h
0x608E71: mov     eax, [ebx+5Ch]
0x608E74: mov     [eax+4], edx
0x608E77: mov     edx, [ecx+4]
0x608E7A: mov     [eax+8], edx
0x608E7D: mov     ecx, [ecx+8]
0x608E80: add     eax, 4
0x608E83: mov     [eax+8], ecx
0x608E86: mov     edi, [ebx+5Ch]
0x608E89: add     edi, 30h ; '0'
0x608E8C: mov     ecx, 9
0x608E91: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x608E96: rep movsd
0x608E98: mov     eax, [ebx+5Ch]
0x608E9B: mov     edx, ds:0B3F9A8h
0x608EA1: add     eax, 1Ch
0x608EA4: mov     [eax], edx
0x608EA6: mov     ecx, ds:0B3F9ACh
0x608EAC: mov     [eax+4], ecx
0x608EAF: mov     edx, ds:0B3F9B0h
0x608EB5: add     esp, 4
0x608EB8: mov     ecx, ebx; this
0x608EBA: mov     [eax+8], edx
0x608EBD: call    MobileObject_GetCharProxy
0x608EC2: test    eax, eax
0x608EC4: jz      loc_608F98
0x608ECA: mov     ecx, ebx; this
0x608ECC: call    MobileObject_GetCharProxy
0x608ED1: test    eax, eax
0x608ED3: jz      short loc_608EE5
0x608ED5: mov     eax, [eax+8]
0x608ED8: test    eax, eax
0x608EDA: jz      short loc_608EE5
0x608EDC: mov     ecx, eax
0x608EDE: call    sub_8AC0A0
0x608EE3: jmp     short loc_608EEA
0x608EE5: mov     eax, offset stru_BA7A40
0x608EEA: movaps  xmm0, xmmword ptr [eax]
0x608EED: movss   [esp+40h+var_30], xmm0
0x608EF3: fld     [esp+40h+var_30]
0x608EF7: fld     dword ptr ds:0A7DEB4h
0x608EFD: movaps  [esp+40h+var_20], xmm0
0x608F02: fchs
0x608F04: fucompp
0x608F06: fnstsw  ax
0x608F08: test    ah, 44h
0x608F0B: jp      short loc_608F84
0x608F0D: mov     eax, [ebx]
0x608F0F: mov     edx, [eax+154h]
0x608F15: mov     ecx, ebx
0x608F17: call    edx
0x608F19: test    eax, eax
0x608F1B: jz      short loc_608F98
0x608F1D: fld     dword ptr [ebx+6Ch]
0x608F20: mov     eax, [ebx]
0x608F22: fstp    [esp+40h+var_34]
0x608F26: mov     edx, [eax+154h]
0x608F2C: fld     dword ptr ds:0B258DCh
0x608F32: mov     ecx, ebx
0x608F34: fld     [esp+40h+var_34]
0x608F38: fld     st
0x608F3A: fmulp   st(2), st
0x608F3C: fxch    st(1)
0x608F3E: fstp    dword ptr [esp+40h+var_20]
0x608F42: fld     dword ptr ds:0B258E0h
0x608F48: fmul    st, st(1)
0x608F4A: fstp    dword ptr [esp+40h+var_20+4]
0x608F4E: fmul    dword ptr ds:0B258E4h
0x608F54: fstp    dword ptr [esp+40h+var_20+8]
0x608F58: call    edx
0x608F5A: lea     ecx, [esp+40h+var_20]
0x608F5E: push    ecx
0x608F5F: lea     edx, [esp+44h+var_30]
0x608F63: push    edx
0x608F64: lea     ecx, [eax+64h]
0x608F67: call    sub_7101F0
0x608F6C: mov     ecx, [ebx+5Ch]
0x608F6F: mov     edx, [eax]
0x608F71: add     ecx, 1Ch
0x608F74: mov     [ecx], edx
0x608F76: mov     edx, [eax+4]
0x608F79: mov     [ecx+4], edx
0x608F7C: mov     eax, [eax+8]
0x608F7F: mov     [ecx+8], eax
0x608F82: jmp     short loc_608F98
0x608F84: mov     edx, [ebx+5Ch]
0x608F87: lea     ecx, [esp+40h+var_20]
0x608F8B: push    ecx
0x608F8C: add     edx, 1Ch
0x608F8F: push    edx
0x608F90: call    sub_43F3E0
0x608F95: add     esp, 8
0x608F98: mov     ecx, [esp+40h+var_4]
0x608F9C: pop     edi
0x608F9D: pop     esi
0x608F9E: mov     dword ptr [ebx+60h], 1
0x608FA5: pop     ebx
0x608FA6: xor     ecx, esp
0x608FA8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x608FAD: mov     esp, ebp
0x608FAF: pop     ebp
0x608FB0: retn    8
