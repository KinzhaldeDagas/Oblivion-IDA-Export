0x618120: sub     esp, 0Ch
0x618123: cmp     byte ptr [esp+0Ch+arg_4], 0
0x618128: push    esi
0x618129: mov     esi, ecx
0x61812B: jnz     loc_6181E1
0x618131: mov     ecx, [esi+3Ch]
0x618134: mov     eax, [ecx]
0x618136: mov     edx, [eax+174h]
0x61813C: call    edx
0x61813E: fld     dword ptr [eax]
0x618140: mov     ecx, [esp+10h+arg_0]
0x618144: fsub    dword ptr [ecx]
0x618146: fstp    [esp+10h+var_C]
0x61814A: fld     dword ptr [eax+4]
0x61814D: fsub    dword ptr [ecx+4]
0x618150: fstp    [esp+10h+var_8]
0x618154: fld     dword ptr [eax+8]
0x618157: fsub    dword ptr [ecx+8]
0x61815A: fstp    [esp+10h+var_4]
0x61815E: fld     [esp+10h+var_8]
0x618162: fld     [esp+10h+var_C]
0x618166: fld     [esp+10h+var_4]
0x61816A: fld     st(1)
0x61816C: fmulp   st(2), st
0x61816E: fld     st(2)
0x618170: fmulp   st(3), st
0x618172: fxch    st(1)
0x618174: faddp   st(2), st
0x618176: fmul    st, st
0x618178: faddp   st(1), st
0x61817A: fstp    [esp+10h+arg_4]
0x61817E: fld     [esp+10h+arg_4]
0x618182: call    __CIsqrt
0x618187: fstp    [esp+10h+arg_4]
0x61818B: fld     [esp+10h+arg_4]
0x61818F: fstp    [esp+10h+arg_4]
0x618193: fldz
0x618195: fcomp   dword ptr [esi+184h]
0x61819B: fnstsw  ax
0x61819D: test    ah, 41h
0x6181A0: jnz     short loc_6181C0
0x6181A2: push    edi; a5
0x6181A3: mov     edi, [esi+3Ch]; a1
0x6181A6: push    0; a4
0x6181A8: mov     ecx, esi
0x6181AA: call    sub_6135F0
0x6181AF: push    eax; a3
0x6181B0: push    edi; a2
0x6181B1: call    TESObjectREFR_GetDistanceBetween?
0x6181B6: fstp    dword ptr [esi+184h]
0x6181BC: add     esp, 0Ch
0x6181BF: pop     edi
0x6181C0: fld     [esp+10h+arg_4]
0x6181C4: fld     dword ptr [esi+184h]
0x6181CA: fcompp
0x6181CC: fnstsw  ax
0x6181CE: test    ah, 41h
0x6181D1: jnz     short loc_6181E1
0x6181D3: mov     byte ptr [esi+15Bh], 1
0x6181DA: pop     esi
0x6181DB: add     esp, 0Ch
0x6181DE: retn    8
0x6181E1: mov     byte ptr [esi+15Bh], 0
0x6181E8: pop     esi
0x6181E9: add     esp, 0Ch
0x6181EC: retn    8
