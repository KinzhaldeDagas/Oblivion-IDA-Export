0x4699C0: push    0FFFFFFFFh
0x4699C2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4699C7: mov     eax, large fs:0
0x4699CD: push    eax
0x4699CE: sub     esp, 8
0x4699D1: push    ebp
0x4699D2: push    esi
0x4699D3: push    edi
0x4699D4: mov     eax, ds:0B30AACh
0x4699D9: xor     eax, esp
0x4699DB: push    eax
0x4699DC: lea     eax, [esp+24h+var_C]
0x4699E0: mov     large fs:0, eax
0x4699E6: cmp     [esp+24h+arg_4], 0
0x4699EB: mov     [esp+24h+var_11], 0
0x4699F0: jz      TESContainer_CopyContentsAsLevItem___Done
0x4699F6: lea     ebp, [ecx+8]
0x4699F9: test    ebp, ebp
0x4699FB: jz      TESContainer_CopyContentsAsLevItem___Done
