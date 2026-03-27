0x7EFA80: push    esi
0x7EFA81: mov     esi, ecx
0x7EFA83: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7EFA88: fld     [esp+4+arg_4]
0x7EFA8C: mov     eax, [esp+4+arg_0]
0x7EFA90: fstp    dword ptr [esi+74h]
0x7EFA93: mov     [esi+6Ch], eax
0x7EFA96: mov     eax, [esp+4+arg_C]
0x7EFA9A: mov     dword ptr [esi], offset ??_7PrecipitationShaderProperty@@6B@; const PrecipitationShaderProperty::`vftable'
0x7EFAA0: mov     ecx, [eax]
0x7EFAA2: mov     [esi+78h], ecx
0x7EFAA5: mov     edx, [eax+4]
0x7EFAA8: mov     [esi+7Ch], edx
0x7EFAAB: mov     eax, [eax+8]
0x7EFAAE: mov     [esi+80h], eax
0x7EFAB4: mov     eax, [esp+4+arg_10]
0x7EFAB8: mov     ecx, [eax]
0x7EFABA: mov     [esi+84h], ecx
0x7EFAC0: mov     edx, [eax+4]
0x7EFAC3: mov     [esi+88h], edx
0x7EFAC9: mov     eax, [eax+8]
0x7EFACC: mov     [esi+8Ch], eax
0x7EFAD2: mov     eax, [esp+4+arg_8]
0x7EFAD6: mov     ecx, [eax]
0x7EFAD8: mov     [esi+90h], ecx
0x7EFADE: mov     edx, [eax+4]
0x7EFAE1: mov     ecx, [esp+4+arg_14]
0x7EFAE5: mov     [esi+94h], edx
0x7EFAEB: mov     eax, [eax+8]
0x7EFAEE: xor     edx, edx
0x7EFAF0: cmp     [esp+4+arg_18], edx
0x7EFAF4: mov     [esi+98h], eax
0x7EFAFA: setnz   dl
0x7EFAFD: mov     dword ptr [esi+9Ch], 0
0x7EFB07: mov     dword ptr [esi+0A0h], 3
0x7EFB11: mov     [esi+0A8h], ecx
0x7EFB17: mov     eax, esi
0x7EFB19: mov     [esi+0A4h], edx
0x7EFB1F: pop     esi
0x7EFB20: retn    1Ch
