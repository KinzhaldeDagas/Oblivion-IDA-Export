0x759030: push    esi
0x759031: push    edi
0x759032: mov     edi, [esp+8+arg_4]
0x759036: xor     esi, esi
0x759038: cmp     [edi+48h], si
0x75903C: jbe     short loc_7590BD
0x75903E: fld     [esp+8+arg_0]
0x759042: fld1
0x759044: fld1
0x759046: movzx   eax, si
0x759049: fld     st(2)
0x75904B: lea     edx, ds:0[eax*8]
0x759052: sub     edx, eax
0x759054: mov     eax, [edi+5Ch]
0x759057: lea     edx, [eax+edx*4]
0x75905A: fsub    dword ptr [edx+14h]
0x75905D: fmul    dword ptr [ecx+1Ch]
0x759060: fstp    [esp+8+arg_4]
0x759064: fld     [esp+8+arg_4]
0x759068: fcom    st(2)
0x75906A: fnstsw  ax
0x75906C: test    ah, 5
0x75906F: jp      short loc_759095
0x759071: fsubr   st, st(1)
0x759073: fstp    [esp+8+arg_4]
0x759077: fld     dword ptr [edx]
0x759079: fld     [esp+8+arg_4]
0x75907D: fld     st
0x75907F: fmulp   st(2), st
0x759081: fxch    st(1)
0x759083: fstp    dword ptr [edx]
0x759085: fld     dword ptr [edx+4]
0x759088: fmul    st, st(1)
0x75908A: fstp    dword ptr [edx+4]
0x75908D: fmul    dword ptr [edx+8]
0x759090: fstp    dword ptr [edx+8]
0x759093: jmp     short loc_7590AE
0x759095: mov     eax, ds:0B3F9A8h
0x75909A: fstp    st
0x75909C: mov     [edx], eax
0x75909E: mov     eax, ds:0B3F9ACh
0x7590A3: mov     [edx+4], eax
0x7590A6: mov     eax, ds:0B3F9B0h
0x7590AB: mov     [edx+8], eax
0x7590AE: add     esi, 1
0x7590B1: cmp     si, [edi+48h]
0x7590B5: jb      short loc_759046
0x7590B7: fstp    st(2)
0x7590B9: fstp    st
0x7590BB: fstp    st
0x7590BD: pop     edi
0x7590BE: pop     esi
0x7590BF: retn    8
