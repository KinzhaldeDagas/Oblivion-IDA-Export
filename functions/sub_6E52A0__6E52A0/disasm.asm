0x6E52A0: push    0FFFFFFFFh
0x6E52A2: push    offset SEH_8C8970
0x6E52A7: mov     eax, large fs:0
0x6E52AD: push    eax
0x6E52AE: push    ecx
0x6E52AF: push    esi
0x6E52B0: push    edi
0x6E52B1: mov     eax, ds:0B30AACh
0x6E52B6: xor     eax, esp
0x6E52B8: push    eax
0x6E52B9: lea     eax, [esp+1Ch+var_C]
0x6E52BD: mov     large fs:0, eax
0x6E52C3: mov     edi, ecx
0x6E52C5: push    2Ch ; ','; Size
0x6E52C7: call    FormHeapAlloc
0x6E52CC: mov     esi, eax
0x6E52CE: add     esp, 4
0x6E52D1: mov     [esp+1Ch+var_10], esi
0x6E52D5: test    esi, esi
0x6E52D7: mov     [esp+1Ch+var_4], 0
0x6E52DF: jz      short loc_6E52FB
0x6E52E1: push    0
0x6E52E3: push    0
0x6E52E5: mov     ecx, esi; this
0x6E52E7: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E52EC: mov     dword ptr [esi], offset ??_7NiBSplinePoint3Interpolator@@6B@; const NiBSplinePoint3Interpolator::`vftable'
0x6E52F2: mov     dword ptr [esi+28h], 0FFFFh
0x6E52F9: jmp     short loc_6E52FD
0x6E52FB: xor     esi, esi
0x6E52FD: mov     eax, [esp+1Ch+arg_0]
0x6E5301: push    eax
0x6E5302: push    esi
0x6E5303: mov     ecx, edi
0x6E5305: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E530D: call    sub_6ED2B0
0x6E5312: mov     ecx, [edi+1Ch]
0x6E5315: mov     [esi+1Ch], ecx
0x6E5318: mov     edx, [edi+20h]
0x6E531B: mov     [esi+20h], edx
0x6E531E: mov     eax, [edi+24h]
0x6E5321: mov     [esi+24h], eax
0x6E5324: mov     ecx, [edi+28h]
0x6E5327: mov     [esi+28h], ecx
0x6E532A: mov     eax, esi
0x6E532C: mov     ecx, [esp+1Ch+var_C]
0x6E5330: mov     large fs:0, ecx
0x6E5337: pop     ecx
0x6E5338: pop     edi
0x6E5339: pop     esi
0x6E533A: add     esp, 10h
0x6E533D: retn    4
