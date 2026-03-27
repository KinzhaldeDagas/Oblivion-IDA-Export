0x99D1DC: push    0; WCh
0x99D1DE: push    dword ptr [esp+4+WCh]; WCh
0x99D1E2: push    [esp+8+SizeInBytes]; SizeInBytes
0x99D1E6: push    [esp+0Ch+MbCh]; MbCh
0x99D1EA: push    [esp+10h+SizeConverted]; SizeConverted
0x99D1EE: call    __wctomb_s_l
0x99D1F3: add     esp, 14h
0x99D1F6: retn
