0x9613E0: push    3Ch ; '<'; Size
0x9613E2: call    FormHeapAlloc
0x9613E7: add     esp, 4
0x9613EA: test    eax, eax
0x9613EC: jz      short loc_961440
0x9613EE: mov     ecx, ds:0B258D0h
0x9613F4: fld1
0x9613F6: sub     esp, 0Ch
0x9613F9: mov     edx, esp
0x9613FB: mov     [edx], ecx
0x9613FD: mov     ecx, ds:0B258D4h
0x961403: mov     [edx+4], ecx
0x961406: mov     ecx, ds:0B258D8h
0x96140C: mov     [edx+8], ecx
0x96140F: mov     ecx, ds:0B3F9A8h
0x961415: sub     esp, 0Ch
0x961418: mov     edx, esp
0x96141A: mov     [edx], ecx
0x96141C: mov     ecx, ds:0B3F9ACh
0x961422: mov     [edx+4], ecx
0x961425: mov     ecx, ds:0B3F9B0h
0x96142B: mov     [edx+8], ecx
0x96142E: sub     esp, 8
0x961431: fst     [esp+20h+var_1C]; float
0x961435: mov     ecx, eax
0x961437: fstp    [esp+20h+var_20]; float
0x96143A: call    sub_9604C0
0x96143F: retn
0x961440: xor     eax, eax
0x961442: retn
