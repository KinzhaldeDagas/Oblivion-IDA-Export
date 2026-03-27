0x5A3860: mov     eax, [esp+arg_0]
0x5A3864: add     eax, 0FFFFFFFDh; switch 8 cases
0x5A3867: cmp     eax, 7
0x5A386A: push    esi; a3
0x5A386B: mov     esi, ecx
0x5A386D: ja      def_5A3873
0x5A3873: jmp     ds:jpt_5A3873[eax*4]; switch jump
0x5A387A: mov     eax, ds:0B333C4h; jumptable 005A3873 case 10
0x5A387F: fld     dword ptr [eax+734h]
0x5A3885: mov     ecx, [esi+28h]
0x5A3888: push    0FB5h
0x5A388D: fstp    [esp+8+arg_0]
0x5A3891: call    Tile_GetFloat
0x5A3896: fstp    [esp+4+arg_4]
0x5A389A: fld     [esp+4+arg_0]
0x5A389E: fld     [esp+4+arg_4]
0x5A38A2: fld     st
0x5A38A4: fucomp  st(2)
0x5A38A6: fnstsw  ax
0x5A38A8: fstp    st(1)
0x5A38AA: test    ah, 44h
0x5A38AD: jnp     short loc_5A38CE
0x5A38AF: mov     edx, ds:0B07BF0h
0x5A38B5: fstp    dword ptr ds:0B14EB0h
0x5A38BB: mov     eax, [edx+0Ch]
0x5A38BE: push    offset flt_B14EB0
0x5A38C3: mov     ecx, offset INISettingCollection
0x5A38C8: call    eax
0x5A38CA: fld     [esp+8+arg_0]
0x5A38CE: mov     ecx, ds:0B333C4h
0x5A38D4: fstp    dword ptr [ecx+734h]
0x5A38DA: call    sub_5A3810
0x5A38DF: call    sub_5BD610
0x5A38E4: pop     esi
0x5A38E5: retn    8
0x5A38E8: cmp     byte ptr ds:0B13208h, 0; jumptable 005A3873 case 3
0x5A38EF: mov     edx, [esp+4+arg_4]
0x5A38F3: setz    al
0x5A38F6: mov     ds:0B13208h, al
0x5A38FB: push    eax
0x5A38FC: push    edx
0x5A38FD: call    sub_59B640
0x5A3902: mov     eax, ds:0B07BF0h
0x5A3907: mov     edx, [eax+0Ch]
0x5A390A: push    offset byte_B13208
0x5A390F: mov     ecx, offset INISettingCollection
0x5A3914: call    edx
0x5A3916: pop     esi
0x5A3917: retn    8
0x5A391A: cmp     byte ptr ds:0B13200h, 0; jumptable 005A3873 case 4
0x5A3921: setz    al
0x5A3924: mov     ds:0B13200h, al
0x5A3929: push    eax
0x5A392A: mov     eax, [esp+8+arg_4]
0x5A392E: push    eax
0x5A392F: call    sub_59B640
0x5A3934: mov     edx, ds:0B07BF0h
0x5A393A: mov     eax, [edx+0Ch]
0x5A393D: push    offset byte_B13200
0x5A3942: mov     ecx, offset INISettingCollection
0x5A3947: call    eax
0x5A3949: pop     esi
0x5A394A: retn    8
0x5A394D: cmp     byte ptr ds:0B13210h, 0; jumptable 005A3873 case 5
0x5A3954: mov     ecx, [esp+4+arg_4]
0x5A3958: setz    al
0x5A395B: mov     ds:0B13210h, al
0x5A3960: push    eax
0x5A3961: push    ecx
0x5A3962: mov     ecx, esi
0x5A3964: call    sub_59B640
0x5A3969: mov     edx, ds:0B07BF0h
0x5A396F: mov     eax, [edx+0Ch]
0x5A3972: push    offset byte_B13210
0x5A3977: mov     ecx, offset INISettingCollection
0x5A397C: call    eax
0x5A397E: pop     esi
0x5A397F: retn    8
0x5A3982: cmp     byte ptr ds:0B13218h, 0; jumptable 005A3873 case 6
0x5A3989: mov     ecx, [esp+4+arg_4]
0x5A398D: setz    al
0x5A3990: mov     ds:0B13218h, al
0x5A3995: push    eax
0x5A3996: push    ecx
0x5A3997: mov     ecx, esi
0x5A3999: call    sub_59B640
0x5A399E: mov     edx, ds:0B07BF0h
0x5A39A4: mov     eax, [edx+0Ch]
0x5A39A7: push    offset byte_B13218
0x5A39AC: mov     ecx, offset INISettingCollection
0x5A39B1: call    eax
0x5A39B3: pop     esi
0x5A39B4: retn    8
0x5A39B7: cmp     byte ptr ds:0B13220h, 0; jumptable 005A3873 case 7
0x5A39BE: mov     ecx, [esp+4+arg_4]
0x5A39C2: setz    al
0x5A39C5: mov     ds:0B13220h, al
0x5A39CA: push    eax
0x5A39CB: push    ecx
0x5A39CC: mov     ecx, esi
0x5A39CE: call    sub_59B640
0x5A39D3: mov     edx, ds:0B07BF0h
0x5A39D9: mov     eax, [edx+0Ch]
0x5A39DC: push    offset byte_B13220
0x5A39E1: mov     ecx, offset INISettingCollection
0x5A39E6: call    eax
0x5A39E8: pop     esi
0x5A39E9: retn    8
0x5A39EC: cmp     byte ptr ds:0B13228h, 0; jumptable 005A3873 case 8
0x5A39F3: mov     ecx, [esp+4+arg_4]
0x5A39F7: setz    al
0x5A39FA: mov     ds:0B13228h, al
0x5A39FF: push    eax
0x5A3A00: push    ecx
0x5A3A01: mov     ecx, esi
0x5A3A03: call    sub_59B640
0x5A3A08: mov     edx, ds:0B07BF0h
0x5A3A0E: mov     eax, [edx+0Ch]
0x5A3A11: push    offset byte_B13228
0x5A3A16: mov     ecx, offset INISettingCollection
0x5A3A1B: call    eax
0x5A3A1D: pop     esi
0x5A3A1E: retn    8
0x5A3A21: fld     dword ptr ds:0A6B328h; jumptable 005A3873 case 9
0x5A3A27: push    ebx; a3
0x5A3A28: push    ecx
0x5A3A29: mov     ecx, [esi+28h]; this
0x5A3A2C: fstp    [esp+0Ch+a2]; a3
0x5A3A2F: push    0FB3h; a2
0x5A3A34: call    Tile_SetFloat
0x5A3A39: fld     dword ptr ds:0B37B80h
0x5A3A3F: fsub    dword ptr ds:0B37B70h
0x5A3A45: push    ecx
0x5A3A46: mov     ecx, [esi+28h]; this
0x5A3A49: fstp    [esp+0Ch+arg_4]
0x5A3A4D: fld     [esp+0Ch+arg_4]
0x5A3A51: fstp    [esp+0Ch+a2]; a3
0x5A3A54: push    0FB3h; a2
0x5A3A59: call    Tile_SetFloat
0x5A3A5E: fldz
0x5A3A60: push    ecx
0x5A3A61: fstp    [esp+0Ch+a2]; a3
0x5A3A64: mov     ecx, [esi+28h]; this
0x5A3A67: push    0FB3h; a2
0x5A3A6C: call    Tile_SetFloat
0x5A3A71: mov     ebx, 1
0x5A3A76: mov     ds:0B13208h, bl
0x5A3A7C: mov     ecx, [esi+30h]
0x5A3A7F: push    ebx
0x5A3A80: push    ecx
0x5A3A81: mov     ecx, esi
0x5A3A83: call    sub_59B640
0x5A3A88: mov     ds:0B13200h, bl
0x5A3A8E: mov     edx, [esi+34h]
0x5A3A91: push    ebx
0x5A3A92: push    edx
0x5A3A93: mov     ecx, esi
0x5A3A95: call    sub_59B640
0x5A3A9A: mov     ds:0B13210h, bl
0x5A3AA0: mov     eax, [esi+38h]
0x5A3AA3: push    ebx
0x5A3AA4: push    eax
0x5A3AA5: mov     ecx, esi
0x5A3AA7: call    sub_59B640
0x5A3AAC: mov     ds:0B13218h, bl
0x5A3AB2: mov     ecx, [esi+3Ch]
0x5A3AB5: push    ebx
0x5A3AB6: push    ecx
0x5A3AB7: mov     ecx, esi
0x5A3AB9: call    sub_59B640
0x5A3ABE: mov     ds:0B13220h, bl
0x5A3AC4: mov     edx, [esi+40h]
0x5A3AC7: push    ebx
0x5A3AC8: push    edx
0x5A3AC9: mov     ecx, esi
0x5A3ACB: call    sub_59B640
0x5A3AD0: mov     ds:0B13228h, bl
0x5A3AD6: mov     eax, [esi+44h]
0x5A3AD9: push    ebx
0x5A3ADA: push    eax
0x5A3ADB: mov     ecx, esi
0x5A3ADD: call    sub_59B640
0x5A3AE2: mov     edx, ds:0B07BF0h
0x5A3AE8: mov     eax, [edx+0Ch]
0x5A3AEB: push    offset byte_B13208
0x5A3AF0: mov     ecx, offset INISettingCollection
0x5A3AF5: call    eax
0x5A3AF7: mov     edx, ds:0B07BF0h
0x5A3AFD: mov     eax, [edx+0Ch]
0x5A3B00: push    offset byte_B13200
0x5A3B05: mov     ecx, offset INISettingCollection
0x5A3B0A: call    eax
0x5A3B0C: mov     edx, ds:0B07BF0h
0x5A3B12: mov     eax, [edx+0Ch]
0x5A3B15: push    offset byte_B13210
0x5A3B1A: mov     ecx, offset INISettingCollection
0x5A3B1F: call    eax
0x5A3B21: mov     edx, ds:0B07BF0h
0x5A3B27: mov     eax, [edx+0Ch]
0x5A3B2A: push    offset byte_B13218
0x5A3B2F: mov     ecx, offset INISettingCollection
0x5A3B34: call    eax
0x5A3B36: push    offset byte_B13220
0x5A3B3B: mov     ecx, offset INISettingCollection
0x5A3B40: mov     edx, ds:0B07BF0h
0x5A3B46: mov     eax, [edx+0Ch]
0x5A3B49: call    eax
0x5A3B4B: mov     edx, ds:0B07BF0h
0x5A3B51: mov     eax, [edx+0Ch]
0x5A3B54: push    offset byte_B13228
0x5A3B59: mov     ecx, offset INISettingCollection
0x5A3B5E: call    eax
0x5A3B60: pop     ebx
