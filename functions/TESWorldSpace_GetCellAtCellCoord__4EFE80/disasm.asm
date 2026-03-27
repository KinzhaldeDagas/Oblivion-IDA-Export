0x4EFE80: mov     eax, [esp+arg_0]
0x4EFE84: cmp     eax, 7FFFh
0x4EFE89: jg      short loc_4EFED4
0x4EFE8B: mov     edx, [esp+arg_4]
0x4EFE8F: cmp     edx, 7FFFh
0x4EFE95: jg      short loc_4EFED4
0x4EFE97: cmp     eax, 0FFFF8000h
0x4EFE9C: jl      short loc_4EFED4
0x4EFE9E: cmp     edx, 0FFFF8000h
0x4EFEA4: jl      short loc_4EFED4
0x4EFEA6: mov     ecx, [ecx+30h]
0x4EFEA9: movsx   eax, ax
0x4EFEAC: push    esi
0x4EFEAD: movzx   edx, dx
0x4EFEB0: shl     eax, 10h
0x4EFEB3: lea     esi, [esp+4+arg_0]
0x4EFEB7: push    esi
0x4EFEB8: or      eax, edx
0x4EFEBA: push    eax
0x4EFEBB: mov     [esp+0Ch+arg_0], 0
0x4EFEC3: call    NiTMap_GetAt
0x4EFEC8: neg     al
0x4EFECA: pop     esi
0x4EFECB: sbb     eax, eax
0x4EFECD: and     eax, [esp+arg_0]
0x4EFED1: retn    8
0x4EFED4: push    7FFFh
0x4EFED9: push    0FFFF8000h; ArgList
0x4EFEDE: push    offset aTryingToGetExt; "Trying to get exterior cell for invalid"...
0x4EFEE3: call    PrintError
0x4EFEE8: add     esp, 0Ch
0x4EFEEB: xor     eax, eax
0x4EFEED: retn    8
