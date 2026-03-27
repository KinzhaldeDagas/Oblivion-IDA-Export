0x8CAC70: mov     ecx, [ecx-44h]
0x8CAC73: test    ecx, ecx
0x8CAC75: jz      short locret_8CAC8B
0x8CAC77: mov     eax, [esp+arg_0]
0x8CAC7B: push    offset aPhantoms; "Phantoms"
0x8CAC80: push    offset unk_BA8488
0x8CAC85: push    eax
0x8CAC86: call    sub_8CA450
0x8CAC8B: retn    4
