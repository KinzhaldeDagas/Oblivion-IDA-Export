0x706CB0: push    0FFFFFFFFh
0x706CB2: push    offset SEH_8C62B0
0x706CB7: mov     eax, large fs:0
0x706CBD: push    eax
0x706CBE: push    ecx
0x706CBF: push    esi
0x706CC0: mov     eax, ds:0B30AACh
0x706CC5: xor     eax, esp
0x706CC7: push    eax
0x706CC8: lea     eax, [esp+18h+var_C]
0x706CCC: mov     large fs:0, eax
0x706CD2: push    1Ch; Size
0x706CD4: call    FormHeapAlloc
0x706CD9: mov     esi, eax
0x706CDB: add     esp, 4
0x706CDE: mov     [esp+18h+var_10], esi
0x706CE2: xor     eax, eax
0x706CE4: cmp     esi, eax
0x706CE6: mov     [esp+18h+var_4], eax
0x706CEA: jz      short loc_706D01
0x706CEC: mov     ecx, esi; this
0x706CEE: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706CF3: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x706CF9: mov     word ptr [esi+18h], 0Fh
0x706CFF: mov     eax, esi
0x706D01: mov     ecx, [esp+18h+var_C]
0x706D05: mov     large fs:0, ecx
0x706D0C: pop     ecx
0x706D0D: pop     esi
0x706D0E: add     esp, 10h
0x706D11: retn
