0x7006E0: push    esi
0x7006E1: mov     esi, ecx
0x7006E3: push    offset NiRefObject_objcount; lpAddend
0x7006E8: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7006EE: call    dword ptr ds:0A2807Ch
0x7006F4: test    [esp+4+arg_0], 1
0x7006F9: jz      short loc_700704
0x7006FB: push    esi
0x7006FC: call    FormHeapFree
0x700701: add     esp, 4
0x700704: mov     eax, esi
0x700706: pop     esi
0x700707: retn    4
