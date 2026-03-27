0x42B150: push    0FFFFFFFFh
0x42B152: push    offset ??0NonActorMagicCaster@@QAE@XZ_SEH
0x42B157: mov     eax, large fs:0
0x42B15D: push    eax
0x42B15E: push    ecx
0x42B15F: push    ebx
0x42B160: push    esi
0x42B161: push    edi
0x42B162: mov     eax, ___security_cookie
0x42B167: xor     eax, esp
0x42B169: push    eax
0x42B16A: lea     eax, [esp+20h+var_C]
0x42B16E: mov     large fs:0, eax
0x42B174: mov     ebx, ecx
0x42B176: mov     [esp+20h+var_10], ebx
0x42B17A: mov     dword ptr [ebx], offset ??_7ExtraLight@@6B@; const ExtraLight::`vftable'
0x42B180: mov     edi, [ebx+0Ch]
0x42B183: test    edi, edi
0x42B185: mov     [esp+20h+var_4], 0
0x42B18D: jz      short loc_42B1BA
0x42B18F: mov     esi, [edi]
0x42B191: test    esi, esi
0x42B193: jz      short loc_42B1B1
0x42B195: lea     eax, [esi+4]
0x42B198: push    eax; lpAddend
0x42B199: call    ds:InterlockedDecrement
0x42B19F: test    eax, eax
0x42B1A1: jnz     short loc_42B1B1
0x42B1A3: test    esi, esi
0x42B1A5: jz      short loc_42B1B1
0x42B1A7: mov     edx, [esi]
0x42B1A9: mov     eax, [edx]
0x42B1AB: push    1
0x42B1AD: mov     ecx, esi
0x42B1AF: call    eax
0x42B1B1: push    edi
0x42B1B2: call    FormHeapFree
0x42B1B7: add     esp, 4
0x42B1BA: mov     dword ptr [ebx], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42B1C0: mov     ecx, dword ptr [esp+20h+var_C]
0x42B1C4: mov     large fs:0, ecx
0x42B1CB: pop     ecx
0x42B1CC: pop     edi
0x42B1CD: pop     esi
0x42B1CE: pop     ebx
0x42B1CF: add     esp, 10h
0x42B1D2: retn
