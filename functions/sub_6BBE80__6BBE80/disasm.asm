0x6BBE80: push    esi
0x6BBE81: mov     esi, [esp+4+arg_4]
0x6BBE85: push    edi
0x6BBE86: mov     edi, [esp+8+arg_0]
0x6BBE8A: push    esi
0x6BBE8B: push    edi
0x6BBE8C: call    sub_6D3190
0x6BBE91: add     esp, 8
0x6BBE94: test    al, al
0x6BBE96: jnz     short loc_6BBE9B
0x6BBE98: pop     edi
0x6BBE99: pop     esi
0x6BBE9A: retn
0x6BBE9B: fld     dword ptr [edi+4]
0x6BBE9E: fld     dword ptr [esi+4]
0x6BBEA1: fucompp
0x6BBEA3: fnstsw  ax
0x6BBEA5: test    ah, 44h
0x6BBEA8: jp      short loc_6BBED0
0x6BBEAA: fld     dword ptr [edi+8]
0x6BBEAD: fld     dword ptr [esi+8]
0x6BBEB0: fucompp
0x6BBEB2: fnstsw  ax
0x6BBEB4: test    ah, 44h
0x6BBEB7: jp      short loc_6BBED0
0x6BBEB9: fld     dword ptr [edi+0Ch]
0x6BBEBC: fld     dword ptr [esi+0Ch]
0x6BBEBF: fucompp
0x6BBEC1: fnstsw  ax
0x6BBEC3: test    ah, 44h
0x6BBEC6: jp      short loc_6BBED0
0x6BBEC8: pop     edi
0x6BBEC9: mov     eax, 1
0x6BBECE: pop     esi
0x6BBECF: retn
0x6BBED0: pop     edi
0x6BBED1: xor     eax, eax
0x6BBED3: pop     esi
0x6BBED4: retn
