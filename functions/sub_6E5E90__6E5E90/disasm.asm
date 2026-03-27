0x6E5E90: push    0FFFFFFFFh
0x6E5E92: push    offset SEH_8C8970
0x6E5E97: mov     eax, large fs:0
0x6E5E9D: push    eax
0x6E5E9E: push    ecx
0x6E5E9F: push    esi
0x6E5EA0: push    edi
0x6E5EA1: mov     eax, ds:0B30AACh
0x6E5EA6: xor     eax, esp
0x6E5EA8: push    eax
0x6E5EA9: lea     eax, [esp+1Ch+var_C]
0x6E5EAD: mov     large fs:0, eax
0x6E5EB3: mov     edi, ecx
0x6E5EB5: push    34h ; '4'; Size
0x6E5EB7: call    FormHeapAlloc
0x6E5EBC: mov     esi, eax
0x6E5EBE: add     esp, 4
0x6E5EC1: mov     [esp+1Ch+var_10], esi
0x6E5EC5: test    esi, esi
0x6E5EC7: mov     [esp+1Ch+var_4], 0
0x6E5ECF: jz      short loc_6E5EFB
0x6E5ED1: push    0; int
0x6E5ED3: push    0FFFFh; int
0x6E5ED8: push    0; int
0x6E5EDA: mov     ecx, esi; this
0x6E5EDC: call    sub_6E5090
0x6E5EE1: mov     dword ptr [esi], offset ??_7NiBSplineCompPoint3Interpolator@@6B@; const NiBSplineCompPoint3Interpolator::`vftable'
0x6E5EE7: fld     dword ptr ds:0A7DEB4h
0x6E5EED: fstp    dword ptr [esi+2Ch]
0x6E5EF0: fld     dword ptr ds:0A7DEB4h
0x6E5EF6: fstp    dword ptr [esi+30h]
0x6E5EF9: jmp     short loc_6E5EFD
0x6E5EFB: xor     esi, esi
0x6E5EFD: mov     eax, [esp+1Ch+arg_0]
0x6E5F01: push    eax
0x6E5F02: push    esi
0x6E5F03: mov     ecx, edi
0x6E5F05: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E5F0D: call    sub_6E5130
0x6E5F12: fld     dword ptr [edi+2Ch]
0x6E5F15: fstp    dword ptr [esi+2Ch]
0x6E5F18: mov     eax, esi
0x6E5F1A: fld     dword ptr [edi+30h]
0x6E5F1D: fstp    dword ptr [esi+30h]
0x6E5F20: mov     ecx, [esp+1Ch+var_C]
0x6E5F24: mov     large fs:0, ecx
0x6E5F2B: pop     ecx
0x6E5F2C: pop     edi
0x6E5F2D: pop     esi
0x6E5F2E: add     esp, 10h
0x6E5F31: retn    4
