0x692370: mov     eax, [esp+arg_8]
0x692374: mov     edx, [esp+arg_0]
0x692378: push    esi
0x692379: mov     esi, ecx
0x69237B: mov     ecx, [esp+4+arg_4]
0x69237F: push    eax
0x692380: push    ecx
0x692381: push    edx
0x692382: mov     ecx, esi; this
0x692384: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x692389: mov     dword ptr [esi], offset ??_7CommandEffect@@6B@; const CommandEffect::`vftable'
0x69238F: mov     eax, esi
0x692391: pop     esi
0x692392: retn    0Ch
