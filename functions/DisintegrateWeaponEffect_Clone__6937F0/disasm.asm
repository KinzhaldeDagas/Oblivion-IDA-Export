0x6937F0: push    0FFFFFFFFh
0x6937F2: push    offset SEH_8C8970
0x6937F7: mov     eax, large fs:0
0x6937FD: push    eax
0x6937FE: push    ecx
0x6937FF: push    esi
0x693800: push    edi
0x693801: mov     eax, ds:0B30AACh
0x693806: xor     eax, esp
0x693808: push    eax
0x693809: lea     eax, [esp+1Ch+var_C]
0x69380D: mov     large fs:0, eax
0x693813: mov     edi, ecx
0x693815: push    38h ; '8'; Size
0x693817: call    FormHeapAlloc
0x69381C: mov     esi, eax
0x69381E: add     esp, 4
0x693821: mov     [esp+1Ch+var_10], esi
0x693825: test    esi, esi
0x693827: mov     [esp+1Ch+var_4], 0
0x69382F: jz      short loc_69384C
0x693831: mov     eax, [edi+0Ch]
0x693834: mov     ecx, [edi+8]
0x693837: mov     edx, [edi+24h]
0x69383A: push    eax
0x69383B: push    ecx
0x69383C: push    edx
0x69383D: mov     ecx, esi; this
0x69383F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x693844: mov     dword ptr [esi], offset ??_7DisintegrateWeaponEffect@@6B@; const DisintegrateWeaponEffect::`vftable'
0x69384A: jmp     short loc_69384E
0x69384C: xor     esi, esi
0x69384E: push    esi
0x69384F: mov     ecx, edi
0x693851: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693859: call    ActiveEffect_Base_CopyTo
0x69385E: mov     eax, esi
0x693860: mov     ecx, [esp+1Ch+var_C]
0x693864: mov     large fs:0, ecx
0x69386B: pop     ecx
0x69386C: pop     edi
0x69386D: pop     esi
0x69386E: add     esp, 10h
0x693871: retn
