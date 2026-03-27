0x8BBE00: sub     esp, 404h
0x8BBE06: mov     eax, ds:0B30AACh
0x8BBE0B: push    ebx
0x8BBE0C: push    esi
0x8BBE0D: mov     [esp+40Ch+var_4], eax
0x8BBE14: mov     eax, dword ptr [esp+40Ch+Args]
0x8BBE1B: push    edi
0x8BBE1C: push    eax; Args
0x8BBE1D: push    offset aI; "%i"
0x8BBE22: mov     esi, ecx
0x8BBE24: lea     ecx, [esp+418h+Dest]
0x8BBE28: push    400h; Count
0x8BBE2D: push    ecx; Dest
0x8BBE2E: call    sub_8B1730
0x8BBE33: mov     edi, [esi+8]
0x8BBE36: mov     ebx, [edi]
0x8BBE38: lea     edx, [esp+420h+Dest]
0x8BBE3C: push    edx
0x8BBE3D: call    sub_8B1860
0x8BBE42: add     esp, 14h
0x8BBE45: push    eax
0x8BBE46: lea     eax, [esp+414h+Dest]
0x8BBE4A: push    eax
0x8BBE4B: mov     ecx, edi
0x8BBE4D: call    dword ptr [ebx+0Ch]
0x8BBE50: mov     ecx, [esp+410h+var_4]
0x8BBE57: pop     edi
0x8BBE58: mov     eax, esi
0x8BBE5A: pop     esi
0x8BBE5B: pop     ebx
0x8BBE5C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BBE61: add     esp, 404h
0x8BBE67: retn    4
