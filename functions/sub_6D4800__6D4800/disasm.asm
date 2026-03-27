0x6D4800: push    0FFFFFFFFh
0x6D4802: push    offset SEH_8C8900
0x6D4807: mov     eax, large fs:0
0x6D480D: push    eax
0x6D480E: push    ecx
0x6D480F: mov     eax, ds:0B30AACh
0x6D4814: xor     eax, esp
0x6D4816: push    eax
0x6D4817: lea     eax, [esp+14h+var_C]
0x6D481B: mov     large fs:0, eax
0x6D4821: push    4Ch ; 'L'; Size
0x6D4823: call    FormHeapAlloc
0x6D4828: add     esp, 4
0x6D482B: mov     [esp+14h+var_10], eax
0x6D482F: test    eax, eax
0x6D4831: mov     [esp+14h+var_4], 0
0x6D4839: jz      short loc_6D4852
0x6D483B: mov     ecx, eax; this
0x6D483D: call    ??0NiUVData@@QAE@XZ; NiUVData::NiUVData(void)
0x6D4842: mov     ecx, [esp+14h+var_C]
0x6D4846: mov     large fs:0, ecx
0x6D484D: pop     ecx
0x6D484E: add     esp, 10h
0x6D4851: retn
0x6D4852: xor     eax, eax
0x6D4854: mov     ecx, [esp+14h+var_C]
0x6D4858: mov     large fs:0, ecx
0x6D485F: pop     ecx
0x6D4860: add     esp, 10h
0x6D4863: retn
