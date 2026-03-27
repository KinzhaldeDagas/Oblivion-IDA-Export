0x9933B1: push    ebp
0x9933B2: mov     ebp, esp
0x9933B4: sub     esp, 10h
0x9933B7: push    [ebp+Locale]; struct localeinfo_struct *
0x9933BA: lea     ecx, [ebp+var_10]; this
0x9933BD: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9933C2: movzx   eax, byte ptr [ebp+C]
0x9933C6: mov     ecx, [ebp+var_10]
0x9933C9: mov     ecx, [ecx+0C8h]
0x9933CF: movzx   eax, word ptr [ecx+eax*2]
0x9933D3: and     eax, 8000h
0x9933D8: cmp     [ebp+var_4], 0
0x9933DC: jz      short locret_9933E5
0x9933DE: mov     ecx, [ebp+var_8]
0x9933E1: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9933E5: leave
0x9933E6: retn
