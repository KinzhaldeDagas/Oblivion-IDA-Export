0x606860: push    0FFFFFFFFh
0x606862: push    offset SEH_6068D0
0x606867: mov     eax, large fs:0
0x60686D: push    eax
0x60686E: push    ecx
0x60686F: push    esi
0x606870: mov     eax, ds:0B30AACh
0x606875: xor     eax, esp
0x606877: push    eax
0x606878: lea     eax, [esp+18h+var_C]
0x60687C: mov     large fs:0, eax
0x606882: mov     esi, ecx
0x606884: mov     [esp+18h+var_10], esi
0x606888: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x60688D: push    8; Size
0x60688F: mov     [esp+1Ch+var_4], 0
0x606897: mov     dword ptr [esi], offset ??_7AlarmPackage@@6B@; const AlarmPackage::`vftable'
0x60689D: call    FormHeapAlloc
0x6068A2: add     esp, 4
0x6068A5: test    eax, eax
0x6068A7: jz      short loc_6068B8
0x6068A9: mov     dword ptr [eax], 0
0x6068AF: mov     dword ptr [eax+4], 0
0x6068B6: jmp     short loc_6068BA
0x6068B8: xor     eax, eax
0x6068BA: mov     [esi+3Ch], eax
0x6068BD: mov     eax, esi
0x6068BF: mov     ecx, [esp+18h+var_C]
0x6068C3: mov     large fs:0, ecx
0x6068CA: pop     ecx
0x6068CB: pop     esi
0x6068CC: add     esp, 10h
0x6068CF: retn
