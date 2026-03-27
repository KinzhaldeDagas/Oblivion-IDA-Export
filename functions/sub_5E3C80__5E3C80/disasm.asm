0x5E3C80: sub     esp, 8
0x5E3C83: push    edi
0x5E3C84: mov     edi, ecx
0x5E3C86: mov     eax, [edi]
0x5E3C88: mov     edx, [eax+25Ch]
0x5E3C8E: call    edx
0x5E3C90: test    al, al
0x5E3C92: jz      short loc_5E3C9B
0x5E3C94: fldz
0x5E3C96: pop     edi
0x5E3C97: add     esp, 8
0x5E3C9A: retn
0x5E3C9B: mov     ecx, edi
0x5E3C9D: call    Actor_CalcCurrentEncumberance?
0x5E3CA2: fstp    [esp+0Ch+var_4]
0x5E3CA6: fld     [esp+0Ch+var_4]
0x5E3CAA: mov     eax, [edi]
0x5E3CAC: mov     edx, [eax+284h]
0x5E3CB2: push    ecx
0x5E3CB3: fstp    [esp+10h+var_10]; float
0x5E3CB6: push    4
0x5E3CB8: mov     ecx, edi
0x5E3CBA: call    edx
0x5E3CBC: mov     [esp+10h+var_4], eax
0x5E3CC0: fild    [esp+10h+var_4]
0x5E3CC4: push    ecx
0x5E3CC5: fstp    [esp+14h+var_14]; float
0x5E3CC8: call    sub_547E70
0x5E3CCD: add     esp, 8
0x5E3CD0: fstp    [esp+0Ch+var_4]
0x5E3CD4: cmp     dword ptr [edi+58h], 0
0x5E3CD8: jz      loc_5E3DB6
0x5E3CDE: mov     ecx, [edi+58h]
0x5E3CE1: mov     eax, [ecx]
0x5E3CE3: mov     edx, [eax+184h]
0x5E3CE9: call    edx
0x5E3CEB: test    eax, eax
0x5E3CED: jz      loc_5E3DB6
0x5E3CF3: cmp     byte ptr [eax+20h], 1
0x5E3CF7: jnz     loc_5E3DB6
0x5E3CFD: mov     eax, [edi+58h]
0x5E3D00: test    eax, eax
0x5E3D02: jz      loc_5E3DB6
0x5E3D08: mov     eax, [eax+8]
0x5E3D0B: test    eax, eax
0x5E3D0D: jz      loc_5E3DB6
0x5E3D13: mov     ecx, [eax+28h]
0x5E3D16: test    ecx, ecx
0x5E3D18: jz      loc_5E3DB6
0x5E3D1E: push    esi
0x5E3D1F: call    sub_569E60
0x5E3D24: mov     esi, eax
0x5E3D26: test    esi, esi
0x5E3D28: jz      loc_5E3DB5
0x5E3D2E: cmp     esi, ds:0B333C4h
0x5E3D34: jz      short loc_5E3DB5
0x5E3D36: mov     eax, [esi]
0x5E3D38: mov     edx, [eax+190h]
0x5E3D3E: mov     ecx, esi
0x5E3D40: call    edx
0x5E3D42: test    al, al
0x5E3D44: jz      short loc_5E3DB5
0x5E3D46: cmp     dword ptr [esi+58h], 0
0x5E3D4A: jz      short loc_5E3DB5
0x5E3D4C: mov     ecx, esi
0x5E3D4E: call    sub_5E3C80
0x5E3D53: fstp    [esp+10h+var_8]
0x5E3D57: fldz
0x5E3D59: fcomp   [esp+10h+var_8]
0x5E3D5D: fnstsw  ax
0x5E3D5F: test    ah, 5
0x5E3D62: jp      short loc_5E3DB5
0x5E3D64: push    0
0x5E3D66: push    esi
0x5E3D67: mov     ecx, edi
0x5E3D69: call    TesObjectREF_GetDistance
0x5E3D6E: fcomp   dword ptr ds:0A44BA4h
0x5E3D74: fnstsw  ax
0x5E3D76: test    ah, 5
0x5E3D79: jp      short loc_5E3D89
0x5E3D7B: fld     [esp+10h+var_8]
0x5E3D7F: fsub    qword ptr ds:0A3F3D0h
0x5E3D85: fstp    [esp+10h+var_8]
0x5E3D89: fld     [esp+10h+var_8]
0x5E3D8D: fldz
0x5E3D8F: fcomp   st(1)
0x5E3D91: fnstsw  ax
0x5E3D93: test    ah, 5
0x5E3D96: jp      short loc_5E3DB3
0x5E3D98: fld     [esp+10h+var_4]
0x5E3D9C: fcomp   st(1)
0x5E3D9E: fnstsw  ax
0x5E3DA0: test    ah, 5
0x5E3DA3: jnp     short loc_5E3DB3
0x5E3DA5: fstp    [esp+10h+var_4]
0x5E3DA9: pop     esi
0x5E3DAA: fld     [esp+0Ch+var_4]
0x5E3DAE: pop     edi
0x5E3DAF: add     esp, 8
0x5E3DB2: retn
0x5E3DB3: fstp    st
0x5E3DB5: pop     esi
0x5E3DB6: fld     [esp+0Ch+var_4]
0x5E3DBA: pop     edi
0x5E3DBB: add     esp, 8
0x5E3DBE: retn
