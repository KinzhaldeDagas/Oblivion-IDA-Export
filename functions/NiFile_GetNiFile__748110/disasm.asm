0x748110: push    28h ; '('; Size
0x748112: call    FormHeapAlloc
0x748117: add     esp, 4
0x74811A: test    eax, eax
0x74811C: jz      short loc_748135
0x74811E: mov     ecx, [esp+arg_8]
0x748122: mov     edx, [esp+arg_4]
0x748126: push    ecx
0x748127: mov     ecx, [esp+4+arg_0]
0x74812B: push    edx
0x74812C: push    ecx
0x74812D: mov     ecx, eax; this
0x74812F: call    ??0NiFile@@QAE@XZ; NiFile::NiFile(void)
0x748134: retn
0x748135: xor     eax, eax
0x748137: retn
