0x790A70: push    ecx; Oblivion 1.2.0.416: stdcall checked-template thunk to the shared 24-byte uninitialized-fill primitive; returns destination plus count*0x18.
0x790A71: mov     edx, [esp+4+value]
0x790A75: push    esi
0x790A76: mov     esi, [esp+8+count]
0x790A7A: push    edi
0x790A7B: mov     edi, [esp+0Ch+destination]
0x790A7F: mov     byte ptr [esp+0Ch+var_4], 0
0x790A84: mov     eax, [esp+0Ch+var_4]
0x790A88: push    eax
0x790A89: mov     eax, [esp+10h+value]
0x790A8D: push    edx
0x790A8E: push    ecx
0x790A8F: push    eax; value
0x790A90: push    esi; count
0x790A91: push    edi; destination
0x790A92: call    OB_stVector24_UninitializedFillN_010201A0; Oblivion 1.2.0.416: placement/uninitialized fill of count six-dword records; returns the advanced destination.
0x790A97: lea     ecx, [esi+esi*2]
0x790A9A: add     esp, 18h
0x790A9D: lea     eax, [edi+ecx*8]
0x790AA0: pop     edi
0x790AA1: pop     esi
0x790AA2: pop     ecx
0x790AA3: retn    0Ch
