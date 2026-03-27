0x48F6A0: push    esi
0x48F6A1: xor     esi, esi
0x48F6A3: test    byte ptr ds:0B34440h, 1
0x48F6AA: jnz     short loc_48F6D4
0x48F6AC: or      dword ptr ds:0B34440h, 1
0x48F6B3: push    offset sub_A18950; void (__cdecl *)()
0x48F6B8: mov     ds:0B34438h, esi
0x48F6BE: mov     ds:0B3443Ch, si
0x48F6C5: mov     ds:0B3443Eh, si
0x48F6CC: call    _atexit
0x48F6D1: add     esp, 4
0x48F6D4: mov     eax, ds:0B34438h
0x48F6D9: push    eax
0x48F6DA: call    FormHeapFree
0x48F6DF: mov     ecx, [esp+8+arg_0]
0x48F6E3: xor     eax, eax
0x48F6E5: add     esp, 4
0x48F6E8: cmp     ecx, 1
0x48F6EB: mov     ds:0B34438h, eax
0x48F6F0: mov     ds:0B3443Eh, si
0x48F6F7: mov     ds:0B3443Ch, si
0x48F6FE: jnz     short loc_48F720
0x48F700: push    offset aIcons; "Icons"
0x48F705: push    offset aSIcon_small_it; "%s\\icon_small_item_pickup.dds"
0x48F70A: push    offset dword_B34438; int
0x48F70F: call    BSStringT_Static_Format
0x48F714: mov     eax, ds:0B34438h
0x48F719: add     esp, 0Ch
0x48F71C: pop     esi
0x48F71D: retn    4
0x48F720: cmp     ecx, 2
0x48F723: jnz     short loc_48F745
0x48F725: push    offset aIcons; "Icons"
0x48F72A: push    offset aSIcon_enchante; "%s\\icon_enchanted_item.dds"
0x48F72F: push    offset dword_B34438; int
0x48F734: call    BSStringT_Static_Format
0x48F739: mov     eax, ds:0B34438h
0x48F73E: add     esp, 0Ch
0x48F741: pop     esi
0x48F742: retn    4
0x48F745: cmp     ecx, 4
0x48F748: jnz     short loc_48F76A
0x48F74A: push    offset aIcons; "Icons"
0x48F74F: push    offset aSIcon_poisoned; "%s\\icon_poisoned_weapon.dds"
0x48F754: push    offset dword_B34438; int
0x48F759: call    BSStringT_Static_Format
0x48F75E: mov     eax, ds:0B34438h
0x48F763: add     esp, 0Ch
0x48F766: pop     esi
0x48F767: retn    4
0x48F76A: cmp     ecx, 8
0x48F76D: jnz     short loc_48F78F
0x48F76F: push    offset aIcons; "Icons"
0x48F774: push    offset aSIcon_broken_i; "%s\\icon_broken_item.dds"
0x48F779: push    offset dword_B34438; int
0x48F77E: call    BSStringT_Static_Format
0x48F783: mov     eax, ds:0B34438h
0x48F788: add     esp, 0Ch
0x48F78B: pop     esi
0x48F78C: retn    4
0x48F78F: cmp     ecx, esi
0x48F791: jle     short loc_48F7B0
0x48F793: push    ecx
0x48F794: push    offset aIcons; "Icons"
0x48F799: push    offset aSIcon_image_se; "%s\\icon_image_set_%d.dds"
0x48F79E: push    offset dword_B34438; int
0x48F7A3: call    BSStringT_Static_Format
0x48F7A8: mov     eax, ds:0B34438h
0x48F7AD: add     esp, 10h
0x48F7B0: pop     esi
0x48F7B1: retn    4
