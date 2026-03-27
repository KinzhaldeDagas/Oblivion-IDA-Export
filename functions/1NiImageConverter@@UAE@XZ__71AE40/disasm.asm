0x71AE40: push    0FFFFFFFFh
0x71AE42: push    offset SEH_7F1810
0x71AE47: mov     eax, large fs:0
0x71AE4D: push    eax
0x71AE4E: push    ecx
0x71AE4F: push    esi
0x71AE50: mov     eax, ds:0B30AACh
0x71AE55: xor     eax, esp
0x71AE57: push    eax
0x71AE58: lea     eax, [esp+18h+var_C]
0x71AE5C: mov     large fs:0, eax
0x71AE62: mov     esi, ecx
0x71AE64: mov     [esp+18h+var_10], esi
0x71AE68: mov     dword ptr [esi], offset ??_7NiImageConverter@@6B@; const NiImageConverter::`vftable'
0x71AE6E: mov     eax, ds:0B3FD24h
0x71AE73: test    eax, eax
0x71AE75: mov     [esp+18h+var_4], 0
0x71AE7D: jz      short loc_71AE88
0x71AE7F: push    eax
0x71AE80: call    FormHeapFree
0x71AE85: add     esp, 4
0x71AE88: lea     ecx, [esi+80h]; this
0x71AE8E: mov     dword ptr ds:0B3FD24h, 0
0x71AE98: call    ??1NiNIFImageReader@@UAE@XZ; NiNIFImageReader::~NiNIFImageReader(void)
0x71AE9D: push    offset NiRefObject_objcount; lpAddend
0x71AEA2: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x71AEA8: call    dword ptr ds:0A2807Ch
0x71AEAE: mov     ecx, [esp+18h+var_C]
0x71AEB2: mov     large fs:0, ecx
0x71AEB9: pop     ecx
0x71AEBA: pop     esi
0x71AEBB: add     esp, 10h
0x71AEBE: retn
