0x98F8C9: push    ebp
0x98F8CA: mov     ebp, esp
0x98F8CC: sub     esp, 10h
0x98F8CF: push    ebx
0x98F8D0: xor     ebx, ebx
0x98F8D2: push    ebx; struct localeinfo_struct *
0x98F8D3: lea     ecx, [ebp+var_10]; this
0x98F8D6: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98F8DB: cmp     esi, 0FFFFFFFEh
0x98F8DE: mov     dword_BAA604, ebx
0x98F8E4: jnz     short loc_98F904
0x98F8E6: mov     dword_BAA604, 1
0x98F8F0: call    ds:GetOEMCP
0x98F8F6: cmp     [ebp+var_4], bl
0x98F8F9: jz      short loc_98F940
0x98F8FB: mov     ecx, [ebp+var_8]
0x98F8FE: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x98F902: jmp     short loc_98F940
0x98F904: cmp     esi, 0FFFFFFFDh
0x98F907: jnz     short loc_98F91B
0x98F909: mov     dword_BAA604, 1
0x98F913: call    ds:GetACP
0x98F919: jmp     short loc_98F8F6
0x98F91B: cmp     esi, 0FFFFFFFCh
0x98F91E: jnz     short loc_98F932
0x98F920: mov     eax, [ebp+var_10]
0x98F923: mov     eax, [eax+4]
0x98F926: mov     dword_BAA604, 1
0x98F930: jmp     short loc_98F8F6
0x98F932: cmp     [ebp+var_4], bl
0x98F935: jz      short loc_98F93E
0x98F937: mov     eax, [ebp+var_8]
0x98F93A: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98F93E: mov     eax, esi
0x98F940: pop     ebx
0x98F941: leave
0x98F942: retn
