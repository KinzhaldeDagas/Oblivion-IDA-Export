0x68C610: sub     esp, 10h
0x68C613: fldz
0x68C615: push    edi
0x68C616: mov     edi, [ecx]
0x68C618: fstp    [esp+14h+var_10]
0x68C61C: test    edi, edi
0x68C61E: jz      loc_68C6CC
0x68C624: push    esi
0x68C625: mov     esi, [esp+18h+arg_0]
0x68C629: test    esi, esi
0x68C62B: jz      loc_68C6CB
0x68C631: mov     ecx, edi
0x68C633: call    sub_6899C0
0x68C638: push    eax
0x68C639: mov     ecx, esi
0x68C63B: call    sub_4D7E30
0x68C640: fadd    qword ptr ds:0A2FC68h
0x68C646: mov     ecx, edi
0x68C648: fstp    [esp+18h+var_10]
0x68C64C: call    NiDX92DBufferData__GetSurfaceData
0x68C651: mov     esi, eax
0x68C653: test    esi, esi
0x68C655: jz      short loc_68C6CB
0x68C657: mov     ecx, edi
0x68C659: call    sub_6899C0
0x68C65E: mov     ecx, esi
0x68C660: mov     edi, eax
0x68C662: call    sub_6899C0
0x68C667: fld     dword ptr [eax]
0x68C669: fsub    dword ptr [edi]
0x68C66B: fstp    [esp+18h+var_C]
0x68C66F: fld     dword ptr [eax+4]
0x68C672: fsub    dword ptr [edi+4]
0x68C675: fstp    [esp+18h+var_8]
0x68C679: fld     dword ptr [eax+8]
0x68C67C: fsub    dword ptr [edi+8]
0x68C67F: fstp    [esp+18h+var_4]
0x68C683: fld     [esp+18h+var_C]
0x68C687: fld     [esp+18h+var_8]
0x68C68B: fld     [esp+18h+var_4]
0x68C68F: fld     st(1)
0x68C691: fmulp   st(2), st
0x68C693: fld     st(2)
0x68C695: fmulp   st(3), st
0x68C697: fxch    st(1)
0x68C699: faddp   st(2), st
0x68C69B: fmul    st, st
0x68C69D: faddp   st(1), st
0x68C69F: fstp    [esp+18h+arg_0]
0x68C6A3: fld     [esp+18h+arg_0]
0x68C6A7: call    __CIsqrt
0x68C6AC: fstp    [esp+18h+arg_0]
0x68C6B0: fld     [esp+18h+arg_0]
0x68C6B4: mov     ecx, esi
0x68C6B6: fadd    [esp+18h+var_10]
0x68C6BA: mov     edi, esi
0x68C6BC: fstp    [esp+18h+var_10]
0x68C6C0: call    NiDX92DBufferData__GetSurfaceData
0x68C6C5: mov     esi, eax
0x68C6C7: test    esi, esi
0x68C6C9: jnz     short loc_68C657
0x68C6CB: pop     esi
0x68C6CC: fld     [esp+14h+var_10]
0x68C6D0: pop     edi
0x68C6D1: add     esp, 10h
0x68C6D4: retn    4
