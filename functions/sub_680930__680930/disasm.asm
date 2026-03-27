0x680930: fld     [esp+arg_0]
0x680934: push    esi; ArgList
0x680935: sub     esp, 8
0x680938: fstp    [esp+0Ch+X]; X
0x68093B: mov     esi, ecx
0x68093D: call    __finite
0x680942: add     esp, 8
0x680945: test    eax, eax
0x680947: jz      short loc_6809B7
0x680949: fld     [esp+4+arg_0]
0x68094D: sub     esp, 8
0x680950: fstp    [esp+0Ch+X]; X
0x680953: call    __finite
0x680958: add     esp, 8
0x68095B: test    eax, eax
0x68095D: jz      short loc_6809B7
0x68095F: fld     [esp+4+arg_0]
0x680963: sub     esp, 8
0x680966: fstp    [esp+0Ch+X]; X
0x680969: call    __finite
0x68096E: add     esp, 8
0x680971: test    eax, eax
0x680973: jz      short loc_6809B7
0x680975: fld     [esp+4+arg_0]
0x680979: sub     esp, 8
0x68097C: fstp    [esp+0Ch+X]; X
0x68097F: call    __isnan
0x680984: add     esp, 8
0x680987: test    eax, eax
0x680989: jnz     short loc_6809B7
0x68098B: fld     [esp+4+arg_0]
0x68098F: sub     esp, 8
0x680992: fstp    [esp+0Ch+X]; X
0x680995: call    __isnan
0x68099A: add     esp, 8
0x68099D: test    eax, eax
0x68099F: jnz     short loc_6809B7
0x6809A1: fld     [esp+4+arg_0]
0x6809A5: sub     esp, 8
0x6809A8: fstp    [esp+0Ch+X]; X
0x6809AB: call    __isnan
0x6809B0: add     esp, 8
0x6809B3: test    eax, eax
0x6809B5: jz      short loc_6809CA
0x6809B7: push    offset aCorruptGoalSet; "Corrupt goal, setting to 0."
0x6809BC: call    PrintError
0x6809C1: fldz
0x6809C3: fstp    [esp+8+arg_0]
0x6809C7: add     esp, 4
0x6809CA: movzx   eax, word ptr [esi]
0x6809CD: fld     [esp+4+arg_0]
0x6809D1: xor     ecx, ecx
0x6809D3: cmp     ax, ds:0B3BF04h
0x6809DA: pop     esi
0x6809DB: jnb     short loc_6809EE
0x6809DD: movzx   eax, ax
0x6809E0: shl     eax, 4
0x6809E3: add     eax, ds:0B3BF00h
0x6809E9: fstp    dword ptr [eax]
0x6809EB: retn    4
0x6809EE: fstp    dword ptr [ecx]
0x6809F0: retn    4
