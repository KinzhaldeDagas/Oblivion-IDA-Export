0x733940: push    0FFFFFFFFh
0x733942: push    offset ??1NiNIFImageReader@@UAE@XZ_SEH
0x733947: mov     eax, large fs:0
0x73394D: push    eax
0x73394E: push    ecx
0x73394F: push    esi
0x733950: mov     eax, ds:0B30AACh
0x733955: xor     eax, esp
0x733957: push    eax
0x733958: lea     eax, [esp+18h+var_C]
0x73395C: mov     large fs:0, eax
0x733962: mov     esi, ecx
0x733964: mov     [esp+18h+var_10], esi
0x733968: lea     eax, [esi+80h]
0x73396E: mov     dword ptr [esi], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x733974: push    eax; lpCriticalSection
0x733975: mov     dword ptr [eax+78h], 0
0x73397C: mov     dword ptr [eax+7Ch], 0
0x733983: call    dword ptr ds:0A28064h
0x733989: lea     ecx, [esi+100h]; this
0x73398F: mov     [esp+18h+var_4], 0
0x733997: mov     dword ptr [esi], offset ??_7NiNIFImageReader@@6B@; const NiNIFImageReader::`vftable'
0x73399D: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x7339A2: mov     eax, esi
0x7339A4: mov     ecx, [esp+18h+var_C]
0x7339A8: mov     large fs:0, ecx
0x7339AF: pop     ecx
0x7339B0: pop     esi
0x7339B1: add     esp, 10h
0x7339B4: retn
