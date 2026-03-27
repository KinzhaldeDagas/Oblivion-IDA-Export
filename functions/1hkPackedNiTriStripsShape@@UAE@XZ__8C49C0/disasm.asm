0x8C49C0: push    0FFFFFFFFh
0x8C49C2: push    offset ??1hkPackedNiTriStripsShape@@UAE@XZ_SEH
0x8C49C7: mov     eax, large fs:0
0x8C49CD: push    eax
0x8C49CE: push    ecx
0x8C49CF: push    ebp
0x8C49D0: push    esi
0x8C49D1: push    edi
0x8C49D2: mov     eax, ds:0B30AACh
0x8C49D7: xor     eax, esp
0x8C49D9: push    eax
0x8C49DA: lea     eax, [esp+20h+var_C]
0x8C49DE: mov     large fs:0, eax
0x8C49E4: mov     esi, ecx
0x8C49E6: mov     [esp+20h+var_10], esi
0x8C49EA: mov     dword ptr [esi], offset ??_7hkPackedNiTriStripsShape@@6B@; const hkPackedNiTriStripsShape::`vftable'
0x8C49F0: mov     edi, [esi+10h]
0x8C49F3: test    edi, edi
0x8C49F5: mov     ebp, ds:0A2807Ch
0x8C49FB: mov     [esp+20h+var_4], 1
0x8C4A03: jz      short loc_8C4A24
0x8C4A05: lea     eax, [edi+4]
0x8C4A08: push    eax; lpAddend
0x8C4A09: call    ebp ; InterlockedDecrement
0x8C4A0B: test    eax, eax
0x8C4A0D: jnz     short loc_8C4A1D
0x8C4A0F: test    edi, edi
0x8C4A11: jz      short loc_8C4A1D
0x8C4A13: mov     edx, [edi]
0x8C4A15: mov     eax, [edx]
0x8C4A17: push    1
0x8C4A19: mov     ecx, edi
0x8C4A1B: call    eax
0x8C4A1D: mov     dword ptr [esi+10h], 0
0x8C4A24: mov     edi, [esi+10h]
0x8C4A27: test    edi, edi
0x8C4A29: mov     byte ptr [esp+20h+var_4], 0
0x8C4A2E: jz      short loc_8C4A48
0x8C4A30: lea     ecx, [edi+4]
0x8C4A33: push    ecx; lpAddend
0x8C4A34: call    ebp ; InterlockedDecrement
0x8C4A36: test    eax, eax
0x8C4A38: jnz     short loc_8C4A48
0x8C4A3A: test    edi, edi
0x8C4A3C: jz      short loc_8C4A48
0x8C4A3E: mov     edx, [edi]
0x8C4A40: mov     eax, [edx]
0x8C4A42: push    1
0x8C4A44: mov     ecx, edi
0x8C4A46: call    eax
0x8C4A48: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8C4A4E: mov     ecx, dword ptr [esp+20h+var_C]
0x8C4A52: mov     large fs:0, ecx
0x8C4A59: pop     ecx
0x8C4A5A: pop     edi
0x8C4A5B: pop     esi
0x8C4A5C: pop     ebp
0x8C4A5D: add     esp, 10h
0x8C4A60: retn
