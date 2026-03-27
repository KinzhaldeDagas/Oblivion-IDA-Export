0x8BB200: push    esi
0x8BB201: mov     esi, ecx
0x8BB203: mov     eax, [esi+0Ch]
0x8BB206: test    eax, eax
0x8BB208: mov     dword ptr [esi], offset off_A98274
0x8BB20E: jz      short loc_8BB219
0x8BB210: push    eax; File
0x8BB211: call    _fclose
0x8BB216: add     esp, 4
0x8BB219: test    [esp+4+arg_0], 1
0x8BB21E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BB224: jz      short loc_8BB239
0x8BB226: movzx   edx, word ptr [esi+4]
0x8BB22A: mov     ecx, ds:0BA7D98h
0x8BB230: mov     eax, [ecx]
0x8BB232: push    17h
0x8BB234: push    edx
0x8BB235: push    esi
0x8BB236: call    dword ptr [eax+14h]
0x8BB239: mov     eax, esi
0x8BB23B: pop     esi
0x8BB23C: retn    4
