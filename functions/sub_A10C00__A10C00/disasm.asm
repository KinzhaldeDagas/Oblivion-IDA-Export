0xA10C00: mov     ecx, offset dword_B4296C
0xA10C05: call    sub_784840
0xA10C0A: mov     dword_B42970, eax
0xA10C0F: mov     byte ptr [eax+2Dh], 1
0xA10C13: mov     eax, dword_B42970
0xA10C18: mov     [eax+4], eax
0xA10C1B: mov     eax, dword_B42970
0xA10C20: mov     [eax], eax
0xA10C22: mov     eax, dword_B42970
0xA10C27: mov     [eax+8], eax
0xA10C2A: push    offset sub_A26E30; void (__cdecl *)()
0xA10C2F: mov     dword_B42974, 0
0xA10C39: call    _atexit
0xA10C3E: pop     ecx
0xA10C3F: retn
