0x73B170: push    0FFFFFFFFh
0x73B172: push    offset SEH_8C8970
0x73B177: mov     eax, large fs:0
0x73B17D: push    eax
0x73B17E: push    ecx
0x73B17F: push    esi
0x73B180: push    edi
0x73B181: mov     eax, ds:0B30AACh
0x73B186: xor     eax, esp
0x73B188: push    eax
0x73B189: lea     eax, [esp+1Ch+var_C]
0x73B18D: mov     large fs:0, eax
0x73B193: mov     edi, ecx
0x73B195: push    1Ch; Size
0x73B197: call    FormHeapAlloc
0x73B19C: mov     esi, eax
0x73B19E: add     esp, 4
0x73B1A1: mov     [esp+1Ch+var_10], esi
0x73B1A5: test    esi, esi
0x73B1A7: mov     [esp+1Ch+var_4], 0
0x73B1AF: jz      short loc_73B1CE
0x73B1B1: mov     ecx, esi
0x73B1B3: call    sub_721350
0x73B1B8: fldz
0x73B1BA: fst     dword ptr [esi+18h]
0x73B1BD: mov     dword ptr [esi], offset ??_7NiVectorExtraData@@6B@; const NiVectorExtraData::`vftable'
0x73B1C3: fst     dword ptr [esi+14h]
0x73B1C6: fst     dword ptr [esi+10h]
0x73B1C9: fstp    dword ptr [esi+0Ch]
0x73B1CC: jmp     short loc_73B1D0
0x73B1CE: xor     esi, esi
0x73B1D0: mov     eax, [esp+1Ch+arg_0]
0x73B1D4: push    eax
0x73B1D5: push    esi
0x73B1D6: mov     ecx, edi
0x73B1D8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73B1E0: call    sub_7214A0
0x73B1E5: fld     dword ptr [edi+0Ch]
0x73B1E8: fstp    dword ptr [esi+0Ch]
0x73B1EB: mov     eax, esi
0x73B1ED: fld     dword ptr [edi+10h]
0x73B1F0: fstp    dword ptr [esi+10h]
0x73B1F3: fld     dword ptr [edi+14h]
0x73B1F6: fstp    dword ptr [esi+14h]
0x73B1F9: fld     dword ptr [edi+18h]
0x73B1FC: fstp    dword ptr [esi+18h]
0x73B1FF: mov     ecx, [esp+1Ch+var_C]
0x73B203: mov     large fs:0, ecx
0x73B20A: pop     ecx
0x73B20B: pop     edi
0x73B20C: pop     esi
0x73B20D: add     esp, 10h
0x73B210: retn    4
