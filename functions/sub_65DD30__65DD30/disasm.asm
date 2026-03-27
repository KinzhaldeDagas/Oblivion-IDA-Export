0x65DD30: mov     eax, [esp+arg_0]
0x65DD34: push    esi
0x65DD35: mov     esi, ecx
0x65DD37: mov     cx, [esp+4+arg_4]
0x65DD3C: mov     [esi+0Eh], cx
0x65DD40: xor     ecx, ecx
0x65DD42: cmp     ax, cx
0x65DD45: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVTESRegion@@@@6B@; const NiTArray<TESRegion *>::`vftable'
0x65DD4B: mov     [esi+8], ax
0x65DD4F: mov     [esi+0Ah], cx
0x65DD53: mov     [esi+0Ch], cx
0x65DD57: jbe     short loc_65DD7C
0x65DD59: movzx   eax, ax
0x65DD5C: mov     edx, 4
0x65DD61: mul     edx
0x65DD63: seto    cl
0x65DD66: neg     ecx
0x65DD68: or      ecx, eax
0x65DD6A: push    ecx; Size
0x65DD6B: call    FormHeapAlloc
0x65DD70: mov     [esi+4], eax
0x65DD73: add     esp, 4
0x65DD76: mov     eax, esi
0x65DD78: pop     esi
0x65DD79: retn    8
0x65DD7C: mov     [esi+4], ecx
0x65DD7F: mov     eax, esi
0x65DD81: pop     esi
0x65DD82: retn    8
