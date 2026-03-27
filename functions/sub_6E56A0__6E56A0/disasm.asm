0x6E56A0: push    0FFFFFFFFh
0x6E56A2: push    offset SEH_8C8970
0x6E56A7: mov     eax, large fs:0
0x6E56AD: push    eax
0x6E56AE: push    ecx
0x6E56AF: push    esi
0x6E56B0: push    edi
0x6E56B1: mov     eax, ds:0B30AACh
0x6E56B6: xor     eax, esp
0x6E56B8: push    eax
0x6E56B9: lea     eax, [esp+1Ch+var_C]
0x6E56BD: mov     large fs:0, eax
0x6E56C3: mov     edi, ecx
0x6E56C5: push    24h ; '$'; Size
0x6E56C7: call    FormHeapAlloc
0x6E56CC: mov     esi, eax
0x6E56CE: add     esp, 4
0x6E56D1: mov     [esp+1Ch+var_10], esi
0x6E56D5: test    esi, esi
0x6E56D7: mov     [esp+1Ch+var_4], 0
0x6E56DF: jz      short loc_6E56FB
0x6E56E1: push    0
0x6E56E3: push    0
0x6E56E5: mov     ecx, esi; this
0x6E56E7: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E56EC: mov     dword ptr [esi], offset ??_7NiBSplineFloatInterpolator@@6B@; const NiBSplineFloatInterpolator::`vftable'
0x6E56F2: mov     dword ptr [esi+20h], 0FFFFh
0x6E56F9: jmp     short loc_6E56FD
0x6E56FB: xor     esi, esi
0x6E56FD: mov     eax, [esp+1Ch+arg_0]
0x6E5701: push    eax
0x6E5702: push    esi
0x6E5703: mov     ecx, edi
0x6E5705: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E570D: call    sub_6ED2B0
0x6E5712: fld     dword ptr [edi+1Ch]
0x6E5715: fstp    dword ptr [esi+1Ch]
0x6E5718: mov     ecx, [edi+20h]
0x6E571B: mov     [esi+20h], ecx
0x6E571E: mov     eax, esi
0x6E5720: mov     ecx, [esp+1Ch+var_C]
0x6E5724: mov     large fs:0, ecx
0x6E572B: pop     ecx
0x6E572C: pop     edi
0x6E572D: pop     esi
0x6E572E: add     esp, 10h
0x6E5731: retn    4
