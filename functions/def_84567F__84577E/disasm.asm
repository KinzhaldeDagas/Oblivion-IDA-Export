0x84577E: mov     eax, ds:0B42E8Ch; jumptable 0084567F default case
0x845783: test    eax, eax
0x845785: jz      short loc_84579F
0x845787: push    0; _DWORD
0x845789: fstp    st(1)
0x84578B: push    offset aInvalidSubText; "Invalid sub texture in decal"
0x845790: fstp    st
0x845792: call    eax ; dword_B42E8C
0x845794: fld     dword ptr ds:0A3D65Ch
0x84579A: fldz
0x84579C: add     esp, 8
0x84579F: fxch    st(1)
0x8457A1: mov     eax, [esp+arg_1C]
0x8457A5: add     [esp+arg_10], 40h ; '@'
0x8457AA: add     eax, 1
0x8457AD: add     ebx, 10h
0x8457B0: cmp     eax, ds:0B42E88h
0x8457B6: mov     [esp+arg_1C], eax
0x8457BA: jge     short loc_8457D6
0x8457BC: mov     ecx, [esp+arg_F8]
0x8457C3: fstp    st
0x8457C5: fstp    st
0x8457C7: call    sub_7EE1F0
0x8457CC: fldz
0x8457CE: mov     ebp, eax
0x8457D0: fld     dword ptr ds:0A3D65Ch
0x8457D6: test    ebp, ebp
0x8457D8: mov     edi, [esp+arg_24]
0x8457DC: jnz     loc_84553C
0x8457E2: mov     ebx, [esp+arg_14]
0x8457E6: fstp    st
0x8457E8: fstp    st
0x8457EA: fild    [esp+arg_1C]
0x8457EE: mov     esi, 1
0x8457F3: mov     [esp+arg_14], ebx
0x8457F7: fstp    dword ptr ds:0B4615Ch
0x8457FD: add     [ebx+60h], esi
0x845800: mov     ecx, [edi+38h]
0x845803: lea     eax, [esp+arg_14]
0x845807: push    eax
0x845808: push    ecx
0x845809: lea     ecx, [edi+40h]
0x84580C: mov     [esp+8+arg_E4], 0
0x845817: call    sub_76CE40
0x84581C: or      eax, 0FFFFFFFFh
0x84581F: add     [ebx+60h], eax
0x845822: mov     [esp+arg_E4], eax
0x845829: jnz     short loc_845832
0x84582B: mov     ecx, ebx
0x84582D: call    sub_7604D0
0x845832: add     [edi+38h], esi
0x845835: mov     ecx, [esp+arg_DC]
0x84583C: mov     large fs:0, ecx
0x845843: pop     ecx
0x845844: pop     edi
0x845845: pop     esi
0x845846: pop     ebp
0x845847: pop     ebx
0x845848: add     esp, 0D8h
0x84584E: retn    10h
