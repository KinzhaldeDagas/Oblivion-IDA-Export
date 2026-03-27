0x693550: push    0FFFFFFFFh
0x693552: push    offset SEH_8C62B0
0x693557: mov     eax, large fs:0
0x69355D: push    eax
0x69355E: push    ecx
0x69355F: push    esi
0x693560: mov     eax, ds:0B30AACh
0x693565: xor     eax, esp
0x693567: push    eax
0x693568: lea     eax, [esp+18h+var_C]
0x69356C: mov     large fs:0, eax
0x693572: push    3Ch ; '<'; Size
0x693574: call    FormHeapAlloc
0x693579: mov     esi, eax
0x69357B: add     esp, 4
0x69357E: mov     [esp+18h+var_10], esi
0x693582: test    esi, esi
0x693584: mov     [esp+18h+var_4], 0
0x69358C: jz      short loc_6935C4
0x69358E: mov     eax, [esp+18h+arg_8]
0x693592: mov     ecx, [esp+18h+arg_4]
0x693596: mov     edx, [esp+18h+arg_0]
0x69359A: push    eax
0x69359B: push    ecx
0x69359C: push    edx
0x69359D: mov     ecx, esi; this
0x69359F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6935A4: mov     dword ptr [esi], offset ??_7DisintegrateArmorEffect@@6B@; const DisintegrateArmorEffect::`vftable'
0x6935AA: mov     dword ptr [esi+38h], 0
0x6935B1: mov     eax, esi
0x6935B3: mov     ecx, [esp+18h+var_C]
0x6935B7: mov     large fs:0, ecx
0x6935BE: pop     ecx
0x6935BF: pop     esi
0x6935C0: add     esp, 10h
0x6935C3: retn
0x6935C4: xor     eax, eax
0x6935C6: mov     ecx, [esp+18h+var_C]
0x6935CA: mov     large fs:0, ecx
0x6935D1: pop     ecx
0x6935D2: pop     esi
0x6935D3: add     esp, 10h
0x6935D6: retn
