0x99FEA5: push    ebp
0x99FEA6: mov     ebp, esp
0x99FEA8: sub     esp, 10h
0x99FEAB: push    [ebp+arg_8]; struct localeinfo_struct *
0x99FEAE: lea     ecx, [ebp+var_10]; this
0x99FEB1: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99FEB6: mov     eax, [ebp+arg_4]
0x99FEB9: mov     ecx, [ebp+var_C]
0x99FEBC: dec     eax
0x99FEBD: movzx   eax, [ebp+arg_0]
0x99FEC1: jz      short loc_99FF05
0x99FEC3: mov     cl, [eax+ecx+1Dh]
0x99FEC7: test    cl, 4
0x99FECA: jz      short loc_99FEDE
0x99FECC: cmp     [ebp+var_4], 0
0x99FED0: jz      short loc_99FED9
0x99FED2: mov     eax, [ebp+var_8]
0x99FED5: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FED9: xor     eax, eax
0x99FEDB: inc     eax
0x99FEDC: leave
0x99FEDD: retn
0x99FEDE: mov     edx, [ebp+var_10]
0x99FEE1: mov     edx, [edx+0C8h]
0x99FEE7: test    word ptr [edx+eax*2], 157h
0x99FEED: jnz     short loc_99FEF4
0x99FEEF: test    cl, 3
0x99FEF2: jz      short loc_99FF1E
0x99FEF4: cmp     [ebp+var_4], 0
0x99FEF8: jz      short loc_99FF01
0x99FEFA: mov     eax, [ebp+var_8]
0x99FEFD: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FF01: xor     eax, eax
0x99FF03: leave
0x99FF04: retn
0x99FF05: test    byte ptr [eax+ecx+1Dh], 8
0x99FF0A: jz      short loc_99FF1E
0x99FF0C: cmp     [ebp+var_4], 0
0x99FF10: jz      short loc_99FF19
0x99FF12: mov     eax, [ebp+var_8]
0x99FF15: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FF19: push    2
0x99FF1B: pop     eax
0x99FF1C: leave
0x99FF1D: retn
0x99FF1E: cmp     [ebp+var_4], 0
0x99FF22: jz      short loc_99FF2B
0x99FF24: mov     eax, [ebp+var_8]
0x99FF27: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FF2B: or      eax, 0FFFFFFFFh
0x99FF2E: leave
0x99FF2F: retn
