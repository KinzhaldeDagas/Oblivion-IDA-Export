0x660710: mov     eax, [esp+arg_0]
0x660714: test    eax, eax
0x660716: push    esi
0x660717: mov     esi, ecx
0x660719: jle     short loc_660721
0x66071B: add     [esi+6FCh], eax
0x660721: fild    dword ptr [esi+6FCh]
0x660727: fstp    [esp+4+arg_0]
0x66072B: fld     [esp+4+arg_0]
0x66072F: fld     dword ptr ds:0B36A68h
0x660735: fcom    st(1)
0x660737: fnstsw  ax
0x660739: test    ah, 41h
0x66073C: jp      short loc_660756
0x66073E: fsubp   st(1), st
0x660740: call    Double_To_SInt32
0x660745: add     dword ptr [esi+6F8h], 1
0x66074C: mov     [esi+6FCh], eax
0x660752: pop     esi
0x660753: retn    4
0x660756: fstp    st(1)
0x660758: pop     esi
0x660759: fstp    st
0x66075B: retn    4
