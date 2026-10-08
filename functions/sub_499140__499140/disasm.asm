0x499140: push    ecx; Exterior fog day/night helper: climate sunrise boundary byte (+0x50) cached as normalized time for weather fog interpolation.
0x499141: test    dword ptr [ecx+0FCh], 100h
0x49914B: jz      short loc_499174; Fog time-boundary decode: sunrise helper refreshes cached boundary only when Sky Flags0FC bit 0x100 marks it dirty.
0x49914D: mov     eax, [ecx+0Ch]
0x499150: test    eax, eax
0x499152: jz      short loc_499174
0x499154: movzx   eax, byte ptr [eax+50h]
0x499158: mov     [esp+4+var_4], eax
0x49915B: fild    [esp+4+var_4]
0x49915E: fdiv    qword ptr ds:0A3F3A0h
0x499164: fstp    dword ptr ds:0B35238h; Fog time-boundary decode: climate byte +0x50 / 24.0-style divisor -> cached sunrise time B33E90+0x13A8.
0x49916A: and     dword ptr [ecx+0FCh], 0FFFFFEFFh; Fog time-boundary decode: clears sunrise dirty bit after cache refresh.
0x499174: fld     dword ptr ds:0B35238h
0x49917A: pop     ecx
0x49917B: retn; Fog time-boundary decode: returns cached normalized sunrise boundary used by weather fog day/night interpolation.
