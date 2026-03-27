0x7069C0: push    0FFFFFFFFh
0x7069C2: push    offset SEH_8C62B0
0x7069C7: mov     eax, large fs:0
0x7069CD: push    eax
0x7069CE: push    ecx
0x7069CF: push    esi
0x7069D0: mov     eax, ds:0B30AACh
0x7069D5: xor     eax, esp
0x7069D7: push    eax
0x7069D8: lea     eax, [esp+18h+var_C]
0x7069DC: mov     large fs:0, eax
0x7069E2: push    1Ch; Size
0x7069E4: call    FormHeapAlloc
0x7069E9: mov     esi, eax
0x7069EB: add     esp, 4
0x7069EE: mov     [esp+18h+var_10], esi
0x7069F2: test    esi, esi
0x7069F4: mov     [esp+18h+var_4], 0
0x7069FC: jz      short loc_706A24
0x7069FE: mov     ecx, esi; this
0x706A00: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706A05: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x706A0B: mov     word ptr [esi+18h], 0
0x706A11: mov     eax, esi
0x706A13: mov     ecx, [esp+18h+var_C]
0x706A17: mov     large fs:0, ecx
0x706A1E: pop     ecx
0x706A1F: pop     esi
0x706A20: add     esp, 10h
0x706A23: retn
0x706A24: xor     eax, eax
0x706A26: mov     ecx, [esp+18h+var_C]
0x706A2A: mov     large fs:0, ecx
0x706A31: pop     ecx
0x706A32: pop     esi
0x706A33: add     esp, 10h
0x706A36: retn
