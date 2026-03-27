0x6E6973: and     al, 0Ch
0x6E6975: test    esi, esi
0x6E6977: mov     [esp+arg_14], 0
0x6E697F: jz      short loc_6E69A9
0x6E6981: push    0
0x6E6983: push    0
0x6E6985: mov     ecx, esi; this
0x6E6987: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E698C: fldz
0x6E698E: mov     dword ptr [esi], offset ??_7NiBSplineColorInterpolator@@6B@; const NiBSplineColorInterpolator::`vftable'
0x6E6994: fst     dword ptr [esi+1Ch]
0x6E6997: fst     dword ptr [esi+20h]
0x6E699A: fst     dword ptr [esi+24h]
0x6E699D: fstp    dword ptr [esi+28h]
0x6E69A0: mov     dword ptr [esi+2Ch], 0FFFFh
0x6E69A7: jmp     short loc_6E69AB
0x6E69A9: xor     esi, esi
0x6E69AB: mov     eax, [esp+arg_1C]
0x6E69AF: push    eax
0x6E69B0: push    esi
0x6E69B1: mov     ecx, edi
0x6E69B3: mov     [esp+8+arg_14], 0FFFFFFFFh
0x6E69BB: call    sub_6ED2B0
0x6E69C0: mov     ecx, [edi+1Ch]
0x6E69C3: mov     [esi+1Ch], ecx
0x6E69C6: mov     edx, [edi+20h]
0x6E69C9: mov     [esi+20h], edx
0x6E69CC: mov     eax, [edi+24h]
0x6E69CF: mov     [esi+24h], eax
0x6E69D2: mov     ecx, [edi+28h]
0x6E69D5: mov     [esi+28h], ecx
0x6E69D8: mov     edx, [edi+2Ch]
0x6E69DB: mov     [esi+2Ch], edx
0x6E69DE: mov     eax, esi
0x6E69E0: mov     ecx, [esp+arg_C]
0x6E69E4: mov     large fs:0, ecx
0x6E69EB: pop     ecx
0x6E69EC: pop     edi
0x6E69ED: pop     esi
0x6E69EE: add     esp, 10h
0x6E69F1: retn    4
