0x6D91B0: sub     esp, 7Ch
0x6D91B3: push    ebx
0x6D91B4: mov     ebx, ecx
0x6D91B6: cmp     dword ptr [ebx+30h], 0
0x6D91BA: jz      loc_6D926E
0x6D91C0: fld     [esp+80h+arg_0]
0x6D91C7: push    ecx
0x6D91C8: fstp    [esp+84h+var_84]; float
0x6D91CB: call    sub_6C36B0
0x6D91D0: test    al, al
0x6D91D2: jnz     loc_6D926E
0x6D91D8: push    esi
0x6D91D9: push    edi
0x6D91DA: lea     eax, [esp+88h+var_7C]
0x6D91DE: push    eax
0x6D91DF: lea     ecx, [esp+8Ch+var_74]
0x6D91E3: push    ecx
0x6D91E4: lea     edx, [esp+90h+var_78]
0x6D91E8: push    edx
0x6D91E9: mov     ecx, ebx
0x6D91EB: call    sub_6EC8C0
0x6D91F0: fld     dword ptr [ebx+28h]
0x6D91F3: mov     ecx, dword ptr [esp+88h+var_7C]
0x6D91F7: push    ecx; char
0x6D91F8: mov     ecx, [esp+8Ch+var_78]
0x6D91FC: lea     edx, [ebx+3Ch]
0x6D91FF: push    edx; int
0x6D9200: mov     edx, [esp+90h+var_74]
0x6D9204: push    ecx; int
0x6D9205: push    edx; int
0x6D9206: push    eax; int
0x6D9207: push    ecx
0x6D9208: fstp    [esp+0A0h+var_A0]; float
0x6D920B: call    sub_6BB270
0x6D9210: mov     esi, [ebx+30h]
0x6D9213: fstp    [esp+0A0h+var_70]
0x6D9217: fld     [esp+0A0h+var_70]
0x6D921B: add     esi, 30h ; '0'
0x6D921E: mov     ecx, 9
0x6D9223: fchs
0x6D9225: lea     edi, [esp+0A0h+var_6C]
0x6D9229: fstp    [esp+0A0h+var_8C]; float
0x6D922D: rep movsd
0x6D922F: add     esp, 14h
0x6D9232: lea     ecx, [esp+8Ch+var_48]
0x6D9236: call    NiMatrix33_InitRotationTransform
0x6D923B: lea     eax, [esp+88h+var_48]
0x6D923F: push    eax
0x6D9240: lea     ecx, [esp+8Ch+var_24]
0x6D9244: push    ecx
0x6D9245: lea     ecx, [esp+90h+var_6C]
0x6D9249: call    NiMAtrix33_Multiply
0x6D924E: mov     ecx, 9
0x6D9253: mov     esi, eax
0x6D9255: lea     edi, [esp+88h+var_6C]
0x6D9259: rep movsd
0x6D925B: mov     edi, [ebx+30h]
0x6D925E: add     edi, 30h ; '0'
0x6D9261: mov     ecx, 9
0x6D9266: lea     esi, [esp+88h+var_6C]
0x6D926A: rep movsd
0x6D926C: pop     edi
0x6D926D: pop     esi
0x6D926E: pop     ebx
0x6D926F: add     esp, 7Ch
0x6D9272: retn    4
