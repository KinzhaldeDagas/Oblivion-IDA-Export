0x6E67E0: push    0FFFFFFFFh
0x6E67E2: push    offset SEH_8C62B0
0x6E67E7: mov     eax, large fs:0
0x6E67ED: push    eax
0x6E67EE: push    ecx
0x6E67EF: push    esi
0x6E67F0: mov     eax, ds:0B30AACh
0x6E67F5: xor     eax, esp
0x6E67F7: push    eax
0x6E67F8: lea     eax, [esp+18h+var_C]
0x6E67FC: mov     large fs:0, eax
0x6E6802: push    34h ; '4'; Size
0x6E6804: call    FormHeapAlloc
0x6E6809: mov     esi, eax
0x6E680B: add     esp, 4
0x6E680E: mov     [esp+18h+var_10], esi
0x6E6812: xor     eax, eax
0x6E6814: cmp     esi, eax
0x6E6816: mov     [esp+18h+var_4], eax
0x6E681A: jz      short loc_6E6842
0x6E681C: push    eax
0x6E681D: push    eax
0x6E681E: mov     ecx, esi; this
0x6E6820: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E6825: fldz
0x6E6827: mov     dword ptr [esi], offset ??_7NiBSplineColorInterpolator@@6B@; const NiBSplineColorInterpolator::`vftable'
0x6E682D: fst     dword ptr [esi+1Ch]
0x6E6830: fst     dword ptr [esi+20h]
0x6E6833: mov     eax, esi
0x6E6835: fst     dword ptr [esi+24h]
0x6E6838: fstp    dword ptr [esi+28h]
0x6E683B: mov     dword ptr [esi+2Ch], 0FFFFh
0x6E6842: mov     ecx, [esp+18h+var_C]
0x6E6846: mov     large fs:0, ecx
0x6E684D: pop     ecx
0x6E684E: pop     esi
0x6E684F: add     esp, 10h
0x6E6852: retn
