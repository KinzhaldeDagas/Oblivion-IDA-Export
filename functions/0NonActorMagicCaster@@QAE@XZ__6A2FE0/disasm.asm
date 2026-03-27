0x6A2FE0: push    0FFFFFFFFh
0x6A2FE2: push    offset ??0NonActorMagicCaster@@QAE@XZ_SEH
0x6A2FE7: mov     eax, large fs:0
0x6A2FED: push    eax
0x6A2FEE: push    ecx
0x6A2FEF: push    ebx
0x6A2FF0: push    esi
0x6A2FF1: push    edi
0x6A2FF2: mov     eax, ds:0B30AACh
0x6A2FF7: xor     eax, esp
0x6A2FF9: push    eax
0x6A2FFA: lea     eax, [esp+20h+var_C]
0x6A2FFE: mov     large fs:0, eax
0x6A3004: mov     esi, ecx
0x6A3006: mov     [esp+20h+var_10], esi
0x6A300A: xor     ebx, ebx
0x6A300C: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x6A3012: mov     byte ptr [esi+4], 39h ; '9'
0x6A3016: mov     [esi+8], ebx
0x6A3019: lea     edi, [esi+0Ch]
0x6A301C: mov     ecx, edi
0x6A301E: mov     [esp+20h+var_4], ebx
0x6A3022: call    MagicCaster_constr
0x6A3027: mov     eax, [esp+20h+arg_0]
0x6A302B: mov     [esi+20h], eax
0x6A302E: mov     dword ptr [esi], offset ??_7NonActorMagicCaster@@6BNonActorMagicCaster@@@; const NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'}
0x6A3034: mov     dword ptr [edi], offset ??_7NonActorMagicCaster@@6BMagicCaster@@@; const NonActorMagicCaster::`vftable'{for `MagicCaster'}
0x6A303A: mov     [esi+18h], ebx
0x6A303D: mov     [esi+1Ch], ebx
0x6A3040: mov     eax, esi
0x6A3042: mov     ecx, [esp+20h+var_C]
0x6A3046: mov     large fs:0, ecx
0x6A304D: pop     ecx
0x6A304E: pop     edi
0x6A304F: pop     esi
0x6A3050: pop     ebx
0x6A3051: add     esp, 10h
0x6A3054: retn    4
