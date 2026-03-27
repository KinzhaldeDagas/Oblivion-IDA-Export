0x71ADD0: push    0FFFFFFFFh
0x71ADD2: push    offset SEH_7F1810
0x71ADD7: mov     eax, large fs:0
0x71ADDD: push    eax
0x71ADDE: push    ecx
0x71ADDF: push    esi
0x71ADE0: mov     eax, ds:0B30AACh
0x71ADE5: xor     eax, esp
0x71ADE7: push    eax
0x71ADE8: lea     eax, [esp+18h+var_C]
0x71ADEC: mov     large fs:0, eax
0x71ADF2: mov     esi, ecx
0x71ADF4: mov     [esp+18h+var_10], esi
0x71ADF8: push    offset NiRefObject_objcount; lpAddend
0x71ADFD: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x71AE03: mov     dword ptr [esi+4], 0
0x71AE0A: call    dword ptr ds:0A28078h
0x71AE10: lea     ecx, [esi+80h]; this
0x71AE16: mov     [esp+18h+var_4], 0
0x71AE1E: mov     dword ptr [esi], offset ??_7NiImageConverter@@6B@; const NiImageConverter::`vftable'
0x71AE24: call    ??0NiNIFImageReader@@QAE@XZ; NiNIFImageReader::NiNIFImageReader(void)
0x71AE29: mov     eax, esi
0x71AE2B: mov     ecx, [esp+18h+var_C]
0x71AE2F: mov     large fs:0, ecx
0x71AE36: pop     ecx
0x71AE37: pop     esi
0x71AE38: add     esp, 10h
0x71AE3B: retn
