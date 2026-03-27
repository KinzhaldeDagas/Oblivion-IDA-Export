0x4729B0: mov     edx, [esp+arg_0]
0x4729B4: mov     ecx, [ecx+9Ch]
0x4729BA: lea     eax, [esp+arg_0]
0x4729BE: push    eax
0x4729BF: push    edx
0x4729C0: call    sub_470960
0x4729C5: test    al, al
0x4729C7: jz      short loc_4729DC
0x4729C9: mov     ecx, [esp+arg_0]
0x4729CD: mov     eax, [ecx]
0x4729CF: mov     edx, [eax+10h]
0x4729D2: push    0FFFFFFFFh
0x4729D4: call    edx
0x4729D6: mov     eax, [eax+68h]
0x4729D9: retn    4
0x4729DC: xor     eax, eax
0x4729DE: retn    4
