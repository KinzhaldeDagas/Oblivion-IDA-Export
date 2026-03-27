0x6079A0: push    ebp
0x6079A1: mov     ebp, esp
0x6079A3: and     esp, 0FFFFFFF0h
0x6079A6: sub     esp, 34h
0x6079A9: mov     eax, ds:0B30AACh
0x6079AE: xor     eax, esp
0x6079B0: mov     [esp+34h+var_4], eax
0x6079B4: push    ebx
0x6079B5: mov     ebx, ecx
0x6079B7: mov     eax, [ebx+5Ch]
0x6079BA: test    eax, eax
0x6079BC: push    esi
0x6079BD: push    edi
0x6079BE: jz      short loc_6079CB
0x6079C0: mov     dword ptr [eax], 4
0x6079C6: jmp     loc_607B42
0x6079CB: push    54h ; 'T'; Size
0x6079CD: call    FormHeapAlloc
0x6079D2: mov     [ebx+5Ch], eax
0x6079D5: mov     dword ptr [eax], 4
0x6079DB: mov     eax, [ebx+5Ch]
0x6079DE: mov     edx, [ebp+arg_0]
0x6079E1: mov     dword ptr [eax+2Ch], 0
0x6079E8: mov     ecx, [ebx+5Ch]
0x6079EB: mov     [ecx+28h], edx
0x6079EE: mov     eax, [ebx+5Ch]
0x6079F1: mov     ecx, ds:0B3F9A8h
0x6079F7: mov     [eax+10h], ecx
0x6079FA: mov     edx, ds:0B3F9ACh
0x607A00: mov     [eax+14h], edx
0x607A03: mov     ecx, ds:0B3F9B0h
0x607A09: mov     [eax+18h], ecx
0x607A0C: mov     edx, ds:0B3F9A8h
0x607A12: add     eax, 10h
0x607A15: mov     eax, [ebx+5Ch]
0x607A18: mov     [eax+4], edx
0x607A1B: mov     ecx, ds:0B3F9ACh
0x607A21: mov     [eax+8], ecx
0x607A24: mov     edx, ds:0B3F9B0h
0x607A2A: add     eax, 4
0x607A2D: mov     [eax+8], edx
0x607A30: mov     edi, [ebx+5Ch]
0x607A33: add     edi, 30h ; '0'
0x607A36: mov     ecx, 9
0x607A3B: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x607A40: rep movsd
0x607A42: mov     eax, [ebx+5Ch]
0x607A45: mov     ecx, ds:0B3F9A8h
0x607A4B: add     eax, 1Ch
0x607A4E: mov     [eax], ecx
0x607A50: mov     edx, ds:0B3F9ACh
0x607A56: mov     [eax+4], edx
0x607A59: mov     ecx, ds:0B3F9B0h
0x607A5F: mov     [eax+8], ecx
0x607A62: add     esp, 4
0x607A65: mov     ecx, ebx; this
0x607A67: call    MobileObject_GetCharProxy
0x607A6C: test    eax, eax
0x607A6E: jz      loc_607B42
0x607A74: mov     ecx, ebx; this
0x607A76: call    MobileObject_GetCharProxy
0x607A7B: test    eax, eax
0x607A7D: jz      short loc_607A8F
0x607A7F: mov     eax, [eax+8]
0x607A82: test    eax, eax
0x607A84: jz      short loc_607A8F
0x607A86: mov     ecx, eax
0x607A88: call    sub_8AC0A0
0x607A8D: jmp     short loc_607A94
0x607A8F: mov     eax, offset stru_BA7A40
0x607A94: movaps  xmm0, xmmword ptr [eax]
0x607A97: movss   [esp+40h+var_30], xmm0
0x607A9D: fld     [esp+40h+var_30]
0x607AA1: fld     dword ptr ds:0A7DEB4h
0x607AA7: movaps  [esp+40h+var_20], xmm0
0x607AAC: fchs
0x607AAE: fucompp
0x607AB0: fnstsw  ax
0x607AB2: test    ah, 44h
0x607AB5: jp      short loc_607B2E
0x607AB7: mov     edx, [ebx]
0x607AB9: mov     eax, [edx+154h]
0x607ABF: mov     ecx, ebx
0x607AC1: call    eax
0x607AC3: test    eax, eax
0x607AC5: jz      short loc_607B42
0x607AC7: fld     dword ptr [ebx+6Ch]
0x607ACA: mov     edx, [ebx]
0x607ACC: fstp    [esp+40h+var_34]
0x607AD0: mov     eax, [edx+154h]
0x607AD6: fld     dword ptr ds:0B258DCh
0x607ADC: mov     ecx, ebx
0x607ADE: fld     [esp+40h+var_34]
0x607AE2: fld     st
0x607AE4: fmulp   st(2), st
0x607AE6: fxch    st(1)
0x607AE8: fstp    dword ptr [esp+40h+var_20]
0x607AEC: fld     dword ptr ds:0B258E0h
0x607AF2: fmul    st, st(1)
0x607AF4: fstp    dword ptr [esp+40h+var_20+4]
0x607AF8: fmul    dword ptr ds:0B258E4h
0x607AFE: fstp    dword ptr [esp+40h+var_20+8]
0x607B02: call    eax
0x607B04: lea     ecx, [esp+40h+var_20]
0x607B08: push    ecx
0x607B09: lea     edx, [esp+44h+var_30]
0x607B0D: push    edx
0x607B0E: lea     ecx, [eax+64h]
0x607B11: call    sub_7101F0
0x607B16: mov     ecx, [ebx+5Ch]
0x607B19: mov     edx, [eax]
0x607B1B: add     ecx, 1Ch
0x607B1E: mov     [ecx], edx
0x607B20: mov     edx, [eax+4]
0x607B23: mov     [ecx+4], edx
0x607B26: mov     eax, [eax+8]
0x607B29: mov     [ecx+8], eax
0x607B2C: jmp     short loc_607B42
0x607B2E: mov     edx, [ebx+5Ch]
0x607B31: lea     ecx, [esp+40h+var_20]
0x607B35: push    ecx
0x607B36: add     edx, 1Ch
0x607B39: push    edx
0x607B3A: call    sub_43F3E0
0x607B3F: add     esp, 8
0x607B42: mov     ecx, [esp+40h+var_4]
0x607B46: pop     edi
0x607B47: pop     esi
0x607B48: mov     dword ptr [ebx+60h], 1
0x607B4F: pop     ebx
0x607B50: xor     ecx, esp
0x607B52: call    @__security_check_cookie@4; __security_check_cookie(x)
0x607B57: mov     esp, ebp
0x607B59: pop     ebp
0x607B5A: retn    4
