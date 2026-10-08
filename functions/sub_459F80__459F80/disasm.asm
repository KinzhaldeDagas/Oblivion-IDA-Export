0x459F80: mov     eax, [esp+arg_0]
0x459F84: test    eax, eax
0x459F86: jz      short loc_459F96
0x459F88: mov     eax, [eax+0Ch]
0x459F8B: push    0
0x459F8D: push    eax
0x459F8E: call    sub_459AF0; EngineFix trace 2026-05-11: raw save-cursor parser with several fixed-size direct reads/memcpy blocks and branch-dependent cursor advances. Not patched in this pass; requires either per-read conversion to SaveLoad_LoadData or a state-machine wrapper to avoid save desynchronization.
0x459F93: retn    4
0x459F96: xor     eax, eax
0x459F98: retn    4
