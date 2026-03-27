0x6DA1C0: push    0FFFFFFFFh
0x6DA1C2: push    offset ??1NiPoint3Interpolator@@UAE@XZ_SEH
0x6DA1C7: mov     eax, large fs:0
0x6DA1CD: push    eax
0x6DA1CE: push    ecx
0x6DA1CF: push    esi
0x6DA1D0: push    edi
0x6DA1D1: mov     eax, ds:0B30AACh
0x6DA1D6: xor     eax, esp
0x6DA1D8: push    eax
0x6DA1D9: lea     eax, [esp+1Ch+var_C]
0x6DA1DD: mov     large fs:0, eax
0x6DA1E3: mov     edi, ecx
0x6DA1E5: mov     [esp+1Ch+var_10], edi
0x6DA1E9: mov     esi, [edi+18h]
0x6DA1EC: test    esi, esi
0x6DA1EE: mov     [esp+1Ch+var_4], 0
0x6DA1F6: jz      short loc_6DA214
0x6DA1F8: lea     eax, [esi+4]
0x6DA1FB: push    eax; lpAddend
0x6DA1FC: call    dword ptr ds:0A2807Ch
0x6DA202: test    eax, eax
0x6DA204: jnz     short loc_6DA214
0x6DA206: test    esi, esi
0x6DA208: jz      short loc_6DA214
0x6DA20A: mov     edx, [esi]
0x6DA20C: mov     eax, [edx]
0x6DA20E: push    1
0x6DA210: mov     ecx, esi
0x6DA212: call    eax
0x6DA214: mov     ecx, edi
0x6DA216: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6DA21E: call    sub_6EC250
0x6DA223: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6DA227: mov     large fs:0, ecx
0x6DA22E: pop     ecx
0x6DA22F: pop     edi
0x6DA230: pop     esi
0x6DA231: add     esp, 10h
0x6DA234: retn
