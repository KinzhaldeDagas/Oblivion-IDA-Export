0x7387A0: push    esi
0x7387A1: mov     esi, ecx
0x7387A3: mov     dword ptr [esi], offset ??_7NiLODData@@6B@; const NiLODData::`vftable'
0x7387A9: call    NiRefObject_destr
0x7387AE: test    byte ptr [esp+4+arg_0], 1
0x7387B3: jz      short loc_7387BE
0x7387B5: push    esi
0x7387B6: call    FormHeapFree
0x7387BB: add     esp, 4
0x7387BE: mov     eax, esi
0x7387C0: pop     esi
0x7387C1: retn    4
