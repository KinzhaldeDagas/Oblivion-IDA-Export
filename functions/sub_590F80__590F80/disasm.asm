0x590F80: mov     eax, [esp+arg_8]
0x590F84: mov     edx, [esp+arg_0]
0x590F88: push    esi; a3
0x590F89: push    edi; a3
0x590F8A: mov     esi, ecx
0x590F8C: mov     ecx, [esp+8+arg_4]
0x590F90: push    eax
0x590F91: push    ecx
0x590F92: push    edx
0x590F93: mov     ecx, esi
0x590F95: call    sub_58DA00
0x590F9A: fld     dword ptr ds:0A40098h
0x590FA0: push    ecx
0x590FA1: fstp    [esp+0Ch+a2]; a3
0x590FA4: push    0FCCh; a2
0x590FA9: mov     ecx, esi; this
0x590FAB: call    Tile_SetFloat
0x590FB0: fld     dword ptr ds:0A40098h
0x590FB6: push    ecx
0x590FB7: fstp    [esp+0Ch+a2]; a3
0x590FBA: push    0FCDh; a2
0x590FBF: mov     ecx, esi; this
0x590FC1: call    Tile_SetFloat
0x590FC6: fld     dword ptr ds:0A40098h
0x590FCC: push    ecx
0x590FCD: fstp    [esp+0Ch+a2]; a3
0x590FD0: push    0FCEh; a2
0x590FD5: mov     ecx, esi; this
0x590FD7: call    Tile_SetFloat
0x590FDC: fld     dword ptr ds:0A40098h
0x590FE2: push    ecx
0x590FE3: fstp    [esp+0Ch+a2]; a3
0x590FE6: push    0FA7h; a2
0x590FEB: mov     ecx, esi; this
0x590FED: call    Tile_SetFloat
0x590FF2: fld1
0x590FF4: fstp    dword ptr [esi+40h]
0x590FF7: mov     edi, [esi+44h]
0x590FFA: test    edi, edi
0x590FFC: jz      short loc_591021
0x590FFE: lea     eax, [edi+4]
0x591001: push    eax; lpAddend
0x591002: call    dword ptr ds:0A2807Ch
0x591008: test    eax, eax
0x59100A: jnz     short loc_59101A
0x59100C: test    edi, edi
0x59100E: jz      short loc_59101A
0x591010: mov     edx, [edi]
0x591012: mov     eax, [edx]
0x591014: push    1
0x591016: mov     ecx, edi
0x591018: call    eax
0x59101A: mov     dword ptr [esi+44h], 0
0x591021: pop     edi
0x591022: mov     byte ptr [esi+48h], 0
0x591026: pop     esi
0x591027: retn    0Ch
