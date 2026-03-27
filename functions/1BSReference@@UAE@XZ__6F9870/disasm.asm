0x6F9870: push    0FFFFFFFFh
0x6F9872: push    offset SEH_7F1810
0x6F9877: mov     eax, large fs:0
0x6F987D: push    eax
0x6F987E: push    ecx
0x6F987F: push    esi
0x6F9880: mov     eax, ds:0B30AACh
0x6F9885: xor     eax, esp
0x6F9887: push    eax
0x6F9888: lea     eax, [esp+18h+var_C]
0x6F988C: mov     large fs:0, eax
0x6F9892: mov     esi, ecx
0x6F9894: mov     [esp+18h+var_10], esi
0x6F9898: mov     dword ptr [esi], offset ??_7BSReference@@6B@; const BSReference::`vftable'
0x6F989E: push    0
0x6F98A0: mov     [esp+1Ch+var_4], 0
0x6F98A8: call    sub_6FDF10
0x6F98AD: mov     ecx, esi
0x6F98AF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6F98B7: call    NiRefObject_destr
0x6F98BC: mov     ecx, [esp+18h+var_C]
0x6F98C0: mov     large fs:0, ecx
0x6F98C7: pop     ecx
0x6F98C8: pop     esi
0x6F98C9: add     esp, 10h
0x6F98CC: retn
