0x70E2F0: mov     ecx, [esp+arg_0]
0x70E2F4: test    ecx, ecx
0x70E2F6: jz      short loc_70E330
0x70E2F8: mov     eax, [esp+arg_4]
0x70E2FC: test    eax, eax
0x70E2FE: jz      short loc_70E330
0x70E300: shr     ecx, 1
0x70E302: mov     edx, 1
0x70E307: jz      short loc_70E317
0x70E309: lea     esp, [esp+0]
0x70E310: add     edx, 1
0x70E313: shr     ecx, 1
0x70E315: jnz     short loc_70E310
0x70E317: shr     eax, 1
0x70E319: mov     ecx, 1
0x70E31E: jz      short loc_70E327
0x70E320: add     ecx, 1
0x70E323: shr     eax, 1
0x70E325: jnz     short loc_70E320
0x70E327: cmp     ecx, edx
0x70E329: mov     eax, edx
0x70E32B: jb      short locret_70E332
0x70E32D: mov     eax, ecx
0x70E32F: retn
0x70E330: xor     eax, eax
0x70E332: retn
