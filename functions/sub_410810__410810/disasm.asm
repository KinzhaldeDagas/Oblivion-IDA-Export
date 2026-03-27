0x410810: mov     ecx, ObjectPtr
0x410816: test    ecx, ecx
0x410818: jz      short loc_410830
0x41081A: cmp     dword ptr [ecx+20h], 0
0x41081E: jz      short loc_410830
0x410820: mov     eax, [esp+arg_4]
0x410824: mov     edx, [esp+arg_0]
0x410828: push    eax
0x410829: push    edx
0x41082A: call    VideoPass
0x41082F: retn
0x410830: xor     al, al
0x410832: retn
