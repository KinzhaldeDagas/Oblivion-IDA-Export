0x8BBE70: sub     esp, 404h
0x8BBE76: mov     eax, ds:0B30AACh
0x8BBE7B: push    ebx
0x8BBE7C: push    esi
0x8BBE7D: mov     [esp+40Ch+var_4], eax
0x8BBE84: mov     eax, dword ptr [esp+40Ch+Args]
0x8BBE8B: push    edi
0x8BBE8C: push    eax; Args
0x8BBE8D: push    offset aU_1; "%u"
0x8BBE92: mov     esi, ecx
0x8BBE94: lea     ecx, [esp+418h+Dest]
0x8BBE98: push    400h; Count
0x8BBE9D: push    ecx; Dest
0x8BBE9E: call    sub_8B1730
0x8BBEA3: mov     edi, [esi+8]
0x8BBEA6: mov     ebx, [edi]
0x8BBEA8: lea     edx, [esp+420h+Dest]
0x8BBEAC: push    edx
0x8BBEAD: call    sub_8B1860
0x8BBEB2: add     esp, 14h
0x8BBEB5: push    eax
0x8BBEB6: lea     eax, [esp+414h+Dest]
0x8BBEBA: push    eax
0x8BBEBB: mov     ecx, edi
0x8BBEBD: call    dword ptr [ebx+0Ch]
0x8BBEC0: mov     ecx, [esp+410h+var_4]
0x8BBEC7: pop     edi
0x8BBEC8: mov     eax, esi
0x8BBECA: pop     esi
0x8BBECB: pop     ebx
0x8BBECC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BBED1: add     esp, 404h
0x8BBED7: retn    4
