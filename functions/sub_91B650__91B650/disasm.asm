0x91B650: mov     ecx, ds:0BA7D98h
0x91B656: mov     eax, [ecx]
0x91B658: push    32h ; '2'
0x91B65A: push    3Ch ; '<'
0x91B65C: call    dword ptr [eax+10h]
0x91B65F: mov     ecx, [esp+arg_0]
0x91B663: push    ecx
0x91B664: mov     ecx, eax
0x91B666: mov     word ptr [eax+4], 3Ch ; '<'
0x91B66C: call    sub_91B4B0
0x91B671: test    eax, eax
0x91B673: jz      short loc_91B679
0x91B675: add     eax, 8
0x91B678: retn
0x91B679: xor     eax, eax
0x91B67B: retn
