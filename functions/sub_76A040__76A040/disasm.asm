0x76A040: push    ecx
0x76A041: mov     edx, [esp+4+arg_0]
0x76A045: fnstcw  word ptr [esp+4+arg_0]
0x76A049: movzx   eax, word ptr [esp+4+arg_0]
0x76A04E: fld     dword ptr [edx+0Ch]
0x76A051: fld     qword ptr ds:0A3DDD8h
0x76A057: or      eax, 0C00h
0x76A05C: mov     [esp+4+var_4], eax
0x76A05F: fmul    st(1), st
0x76A061: fxch    st(1)
0x76A063: push    esi
0x76A064: fldcw   word ptr [esp+8+var_4]
0x76A068: mov     esi, ecx
0x76A06A: xor     ecx, ecx
0x76A06C: fistp   [esp+8+var_4]
0x76A070: movzx   eax, byte ptr [esp+8+var_4]
0x76A075: mov     ch, al
0x76A077: fldcw   word ptr [esp+8+arg_0]
0x76A07B: fld     dword ptr [edx]
0x76A07D: fnstcw  word ptr [esp+8+arg_0]
0x76A081: fmul    st, st(1)
0x76A083: movzx   eax, word ptr [esp+8+arg_0]
0x76A088: or      eax, 0C00h
0x76A08D: mov     [esp+8+var_4], eax
0x76A091: fldcw   word ptr [esp+8+var_4]
0x76A095: fistp   [esp+8+var_4]
0x76A099: movzx   eax, byte ptr [esp+8+var_4]
0x76A09E: mov     cl, al
0x76A0A0: fldcw   word ptr [esp+8+arg_0]
0x76A0A4: fld     dword ptr [edx+4]
0x76A0A7: shl     ecx, 8
0x76A0AA: fnstcw  word ptr [esp+8+arg_0]
0x76A0AE: fmul    st, st(1)
0x76A0B0: movzx   eax, word ptr [esp+8+arg_0]
0x76A0B5: or      eax, 0C00h
0x76A0BA: mov     [esp+8+var_4], eax
0x76A0BE: fldcw   word ptr [esp+8+var_4]
0x76A0C2: fistp   [esp+8+var_4]
0x76A0C6: movzx   eax, byte ptr [esp+8+var_4]
0x76A0CB: movzx   eax, al
0x76A0CE: fldcw   word ptr [esp+8+arg_0]
0x76A0D2: or      ecx, eax
0x76A0D4: shl     ecx, 8
0x76A0D7: fmul    dword ptr [edx+8]
0x76A0DA: fnstcw  word ptr [esp+8+arg_0]
0x76A0DE: movzx   eax, word ptr [esp+8+arg_0]
0x76A0E3: or      eax, 0C00h
0x76A0E8: mov     [esp+8+var_4], eax
0x76A0EC: fldcw   word ptr [esp+8+var_4]
0x76A0F0: fistp   [esp+8+var_4]
0x76A0F4: mov     dl, byte ptr [esp+8+var_4]
0x76A0F8: movzx   eax, dl
0x76A0FB: or      ecx, eax
0x76A0FD: fldcw   word ptr [esp+8+arg_0]
0x76A101: mov     [esi+5D4h], ecx
0x76A107: pop     esi
0x76A108: pop     ecx
0x76A109: retn    4
