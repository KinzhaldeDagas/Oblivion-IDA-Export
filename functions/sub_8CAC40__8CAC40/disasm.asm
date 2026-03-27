0x8CAC40: mov     ecx, [ecx-40h]
0x8CAC43: test    ecx, ecx
0x8CAC45: jz      short locret_8CAC5B
0x8CAC47: mov     eax, [esp+arg_0]
0x8CAC4B: push    offset aEntities; "Entities"
0x8CAC50: push    offset unk_BA8464
0x8CAC55: push    eax
0x8CAC56: call    sub_8CA450
0x8CAC5B: retn    4
