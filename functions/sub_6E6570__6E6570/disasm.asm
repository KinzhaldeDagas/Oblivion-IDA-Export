0x6E6570: push    0FFFFFFFFh
0x6E6572: push    offset SEH_8C62B0
0x6E6577: mov     eax, large fs:0
0x6E657D: push    eax
0x6E657E: push    ecx
0x6E657F: push    esi
0x6E6580: mov     eax, ds:0B30AACh
0x6E6585: xor     eax, esp
0x6E6587: push    eax
0x6E6588: lea     eax, [esp+18h+var_C]
0x6E658C: mov     large fs:0, eax
0x6E6592: push    3Ch ; '<'; Size
0x6E6594: call    FormHeapAlloc
0x6E6599: mov     esi, eax
0x6E659B: add     esp, 4
0x6E659E: mov     [esp+18h+var_10], esi
0x6E65A2: xor     eax, eax
0x6E65A4: cmp     esi, eax
0x6E65A6: mov     [esp+18h+var_4], eax
0x6E65AA: jz      short loc_6E65D4
0x6E65AC: push    eax; int
0x6E65AD: push    0FFFFh; int
0x6E65B2: push    eax; int
0x6E65B3: mov     ecx, esi; this
0x6E65B5: call    sub_6E66C0
0x6E65BA: mov     dword ptr [esi], offset ??_7NiBSplineCompColorInterpolator@@6B@; const NiBSplineCompColorInterpolator::`vftable'
0x6E65C0: fld     dword ptr ds:0A7DEB4h
0x6E65C6: fstp    dword ptr [esi+34h]
0x6E65C9: mov     eax, esi
0x6E65CB: fld     dword ptr ds:0A7DEB4h
0x6E65D1: fstp    dword ptr [esi+38h]
0x6E65D4: mov     ecx, [esp+18h+var_C]
0x6E65D8: mov     large fs:0, ecx
0x6E65DF: pop     ecx
0x6E65E0: pop     esi
0x6E65E1: add     esp, 10h
0x6E65E4: retn
