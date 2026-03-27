0x98501B: push    ebp
0x98501C: mov     ebp, esp
0x98501E: sub     esp, 10h
0x985021: push    [ebp+Locale]; struct localeinfo_struct *
0x985024: lea     ecx, [ebp+var_10]; this
0x985027: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98502C: mov     eax, [ebp+var_10.locinfo]
0x98502F: cmp     dword ptr [eax+0ACh], 1
0x985036: jle     short loc_98504B
0x985038: lea     eax, [ebp+var_10]
0x98503B: push    eax; Locale
0x98503C: push    4; Type
0x98503E: push    [ebp+C]; C
0x985041: call    __isctype_l
0x985046: add     esp, 0Ch
0x985049: jmp     short loc_98505B
0x98504B: mov     eax, [eax+0C8h]
0x985051: mov     ecx, [ebp+C]
0x985054: movzx   eax, byte ptr [eax+ecx*2]
0x985058: and     eax, 4
0x98505B: cmp     [ebp+var_4], 0
0x98505F: jz      short locret_985068
0x985061: mov     ecx, [ebp+var_8]
0x985064: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x985068: leave
0x985069: retn
