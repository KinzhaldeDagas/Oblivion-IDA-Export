0x70DF30: fldz
0x70DF32: push    ebx
0x70DF33: push    ebp
0x70DF34: push    esi
0x70DF35: push    edi
0x70DF36: push    0; a8
0x70DF38: sub     esp, 18h
0x70DF3B: fst     [esp+2Ch+a7]; a7
0x70DF3F: mov     esi, ecx
0x70DF41: fst     [esp+2Ch+a6]; a6
0x70DF45: lea     ecx, [esi+10h]; this
0x70DF48: fst     [esp+2Ch+a5]; a5
0x70DF4C: mov     dword ptr [esi], offset ??_7NiCullingProcess@@6B@; const NiCullingProcess::`vftable'
0x70DF52: fst     [esp+2Ch+a4]; a4
0x70DF56: mov     byte ptr [esi+4], 0
0x70DF5A: fst     [esp+2Ch+a3]; a3
0x70DF5E: fstp    [esp+2Ch+a2]; a2
0x70DF61: call    NiFrustum__InitFrustum
0x70DF66: lea     ebx, [esi+2Ch]
0x70DF69: mov     edi, ebx
0x70DF6B: mov     ebp, 5
0x70DF70: mov     ecx, edi; this
0x70DF72: call    sub_716DB0
0x70DF77: add     edi, 10h
0x70DF7A: sub     ebp, 1
0x70DF7D: jns     short loc_70DF70
0x70DF7F: mov     eax, [esp+10h+arg_0]
0x70DF83: mov     dword ptr [ebx+60h], 3Fh ; '?'
0x70DF8A: pop     edi
0x70DF8B: mov     [esi+8], eax
0x70DF8E: mov     dword ptr [esi+0Ch], 0
0x70DF95: mov     eax, esi
0x70DF97: pop     esi
0x70DF98: pop     ebp
0x70DF99: pop     ebx
0x70DF9A: retn    4
