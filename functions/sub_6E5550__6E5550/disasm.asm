0x6E5550: push    0FFFFFFFFh
0x6E5552: push    offset SEH_8C62B0
0x6E5557: mov     eax, large fs:0
0x6E555D: push    eax
0x6E555E: push    ecx
0x6E555F: push    esi
0x6E5560: mov     eax, ds:0B30AACh
0x6E5565: xor     eax, esp
0x6E5567: push    eax
0x6E5568: lea     eax, [esp+18h+var_C]
0x6E556C: mov     large fs:0, eax
0x6E5572: push    24h ; '$'; Size
0x6E5574: call    FormHeapAlloc
0x6E5579: mov     esi, eax
0x6E557B: add     esp, 4
0x6E557E: mov     [esp+18h+var_10], esi
0x6E5582: xor     eax, eax
0x6E5584: cmp     esi, eax
0x6E5586: mov     [esp+18h+var_4], eax
0x6E558A: jz      short loc_6E55A4
0x6E558C: push    eax
0x6E558D: push    eax
0x6E558E: mov     ecx, esi; this
0x6E5590: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E5595: mov     dword ptr [esi], offset ??_7NiBSplineFloatInterpolator@@6B@; const NiBSplineFloatInterpolator::`vftable'
0x6E559B: mov     dword ptr [esi+20h], 0FFFFh
0x6E55A2: mov     eax, esi
0x6E55A4: mov     ecx, [esp+18h+var_C]
0x6E55A8: mov     large fs:0, ecx
0x6E55AF: pop     ecx
0x6E55B0: pop     esi
0x6E55B1: add     esp, 10h
0x6E55B4: retn
