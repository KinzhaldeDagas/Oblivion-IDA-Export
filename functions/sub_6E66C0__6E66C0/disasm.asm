0x6E66C0: mov     eax, [esp+arg_8]
0x6E66C4: push    esi
0x6E66C5: mov     esi, ecx
0x6E66C7: mov     ecx, [esp+4+arg_0]
0x6E66CB: push    eax
0x6E66CC: push    ecx
0x6E66CD: mov     ecx, esi; this
0x6E66CF: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E66D4: fldz
0x6E66D6: mov     edx, [esp+4+arg_4]
0x6E66DA: mov     dword ptr [esi], offset ??_7NiBSplineColorInterpolator@@6B@; const NiBSplineColorInterpolator::`vftable'
0x6E66E0: fst     dword ptr [esi+1Ch]
0x6E66E3: fst     dword ptr [esi+20h]
0x6E66E6: mov     eax, esi
0x6E66E8: fst     dword ptr [esi+24h]
0x6E66EB: fstp    dword ptr [esi+28h]
0x6E66EE: mov     [esi+2Ch], edx
0x6E66F1: pop     esi
0x6E66F2: retn    0Ch
