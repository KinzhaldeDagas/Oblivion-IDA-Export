0xA26E30: mov     eax, dword_B42970
0xA26E35: mov     edx, [eax]
0xA26E37: sub     esp, 8
0xA26E3A: push    esi
0xA26E3B: push    eax
0xA26E3C: mov     ecx, offset dword_B4296C
0xA26E41: push    ecx
0xA26E42: push    edx
0xA26E43: mov     esi, ecx
0xA26E45: push    esi
0xA26E46: lea     eax, [esp+1Ch+var_8]
0xA26E4A: push    eax
0xA26E4B: call    sub_785910
0xA26E50: mov     ecx, dword_B42970
0xA26E56: push    ecx
0xA26E57: call    FormHeapFree
0xA26E5C: add     esp, 4
0xA26E5F: xor     eax, eax
0xA26E61: mov     dword_B42970, eax
0xA26E66: mov     dword_B42974, eax
0xA26E6B: pop     esi
0xA26E6C: add     esp, 8
0xA26E6F: retn
