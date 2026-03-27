0x5F451C: mov     eax, [ebx-5Ch]
0x5F451F: mov     edx, [eax+284h]
0x5F4525: lea     esi, [ebx-5Ch]
0x5F4528: push    31h ; '1'
0x5F452A: mov     ecx, esi
0x5F452C: call    edx
0x5F452E: test    eax, eax
0x5F4530: setnle  [esp+4+arg_A]
