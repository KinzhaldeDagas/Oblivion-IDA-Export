0x7185B0: push    0FFFFFFFFh
0x7185B2: push    offset SEH_8C62B0
0x7185B7: mov     eax, large fs:0
0x7185BD: push    eax
0x7185BE: push    ecx
0x7185BF: push    esi
0x7185C0: mov     eax, ds:0B30AACh
0x7185C5: xor     eax, esp
0x7185C7: push    eax
0x7185C8: lea     eax, [esp+18h+var_C]
0x7185CC: mov     large fs:0, eax
0x7185D2: push    1Ch; Size
0x7185D4: call    FormHeapAlloc
0x7185D9: mov     esi, eax
0x7185DB: add     esp, 4
0x7185DE: mov     [esp+18h+var_10], esi
0x7185E2: test    esi, esi
0x7185E4: mov     [esp+18h+var_4], 0
0x7185EC: jz      short loc_718618
0x7185EE: mov     ecx, esi; this
0x7185F0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7185F5: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7185FB: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x718601: mov     byte ptr [esi+1Ah], 0
0x718605: mov     eax, esi
0x718607: mov     ecx, [esp+18h+var_C]
0x71860B: mov     large fs:0, ecx
0x718612: pop     ecx
0x718613: pop     esi
0x718614: add     esp, 10h
0x718617: retn
0x718618: xor     eax, eax
0x71861A: mov     ecx, [esp+18h+var_C]
0x71861E: mov     large fs:0, ecx
0x718625: pop     ecx
0x718626: pop     esi
0x718627: add     esp, 10h
0x71862A: retn
