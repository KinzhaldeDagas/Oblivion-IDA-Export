0x8A7B20: push    ebp
0x8A7B21: mov     ebp, esp
0x8A7B23: and     esp, 0FFFFFFF0h
0x8A7B26: sub     esp, 8
0x8A7B29: push    esi
0x8A7B2A: push    edi
0x8A7B2B: mov     edi, [ebp+arg_0]
0x8A7B2E: push    edi
0x8A7B2F: mov     esi, ecx
0x8A7B31: call    ??0bhkWorld@@QAE@XZ; bhkWorld::bhkWorld(void)
0x8A7B36: fld     dword ptr ds:0A46B2Ch
0x8A7B3C: mov     dword ptr [esi], offset ??_7bhkWorldM@@6B@; const bhkWorldM::`vftable'
0x8A7B42: fst     dword ptr [esi+80h]
0x8A7B48: fst     dword ptr [esi+84h]
0x8A7B4E: mov     eax, esi
0x8A7B50: fstp    dword ptr [esi+88h]
0x8A7B56: movaps  xmm0, xmmword ptr [edi+40h]
0x8A7B5A: movaps  xmmword ptr [esi+0A0h], xmm0
0x8A7B61: fld     dword ptr [edi+40h]
0x8A7B64: fld     qword ptr ds:0A97608h
0x8A7B6A: fsub    st(1), st
0x8A7B6C: fxch    st(1)
0x8A7B6E: fstp    dword ptr [esi+90h]
0x8A7B74: fld     dword ptr [edi+44h]
0x8A7B77: fsub    st, st(1)
0x8A7B79: fstp    dword ptr [esi+94h]
0x8A7B7F: fsubr   dword ptr [edi+48h]
0x8A7B82: pop     edi
0x8A7B83: fstp    dword ptr [esi+98h]
0x8A7B89: pop     esi
0x8A7B8A: mov     esp, ebp
0x8A7B8C: pop     ebp
0x8A7B8D: retn    4
