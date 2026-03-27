0x6E5F40: push    0FFFFFFFFh
0x6E5F42: push    offset SEH_8C62B0
0x6E5F47: mov     eax, large fs:0
0x6E5F4D: push    eax
0x6E5F4E: push    ecx
0x6E5F4F: push    esi
0x6E5F50: mov     eax, ds:0B30AACh
0x6E5F55: xor     eax, esp
0x6E5F57: push    eax
0x6E5F58: lea     eax, [esp+18h+var_C]
0x6E5F5C: mov     large fs:0, eax
0x6E5F62: push    34h ; '4'; Size
0x6E5F64: call    FormHeapAlloc
0x6E5F69: mov     esi, eax
0x6E5F6B: add     esp, 4
0x6E5F6E: mov     [esp+18h+var_10], esi
0x6E5F72: xor     eax, eax
0x6E5F74: cmp     esi, eax
0x6E5F76: mov     [esp+18h+var_4], eax
0x6E5F7A: jz      short loc_6E5FA4
0x6E5F7C: push    eax; int
0x6E5F7D: push    0FFFFh; int
0x6E5F82: push    eax; int
0x6E5F83: mov     ecx, esi; this
0x6E5F85: call    sub_6E5090
0x6E5F8A: mov     dword ptr [esi], offset ??_7NiBSplineCompPoint3Interpolator@@6B@; const NiBSplineCompPoint3Interpolator::`vftable'
0x6E5F90: fld     dword ptr ds:0A7DEB4h
0x6E5F96: fstp    dword ptr [esi+2Ch]
0x6E5F99: mov     eax, esi
0x6E5F9B: fld     dword ptr ds:0A7DEB4h
0x6E5FA1: fstp    dword ptr [esi+30h]
0x6E5FA4: mov     ecx, [esp+18h+var_C]
0x6E5FA8: mov     large fs:0, ecx
0x6E5FAF: pop     ecx
0x6E5FB0: pop     esi
0x6E5FB1: add     esp, 10h
0x6E5FB4: retn
