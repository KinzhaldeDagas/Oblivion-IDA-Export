0x4CFF80: sub     esp, 108h
0x4CFF86: mov     eax, ds:0B30AACh
0x4CFF8B: xor     eax, esp
0x4CFF8D: mov     [esp+108h+var_4], eax
0x4CFF94: push    esi; Format
0x4CFF95: mov     esi, [esp+10Ch+arg_0]
0x4CFF9C: push    0; a2
0x4CFF9E: call    TESForm_GetOverrideFile
0x4CFFA3: test    eax, eax
0x4CFFA5: jz      short loc_4CFFFE
0x4CFFA7: add     eax, 1Ch
0x4CFFAA: push    eax
0x4CFFAB: push    offset PathName; ".\\Data\\Textures\\Maps\\"
0x4CFFB0: push    offset aSS_0; "%s%s"
0x4CFFB5: lea     eax, [esp+118h+Dest]
0x4CFFB9: push    104h; Count
0x4CFFBE: push    eax; Dest
0x4CFFBF: call    __snprintf
0x4CFFC4: lea     eax, [esp+120h+Dest]
0x4CFFC8: add     esp, 14h
0x4CFFCB: lea     edx, [eax+1]
0x4CFFCE: mov     edi, edi
0x4CFFD0: mov     cl, [eax]
0x4CFFD2: add     eax, 1
0x4CFFD5: test    cl, cl
0x4CFFD7: jnz     short loc_4CFFD0
0x4CFFD9: push    edi
0x4CFFDA: sub     eax, edx
0x4CFFDC: lea     edi, [esp+110h+Dest]
0x4CFFE0: mov     [esp+eax+110h+var_10C], cl
0x4CFFE4: add     edi, 0FFFFFFFFh
0x4CFFE7: mov     al, [edi+1]
0x4CFFEA: add     edi, 1
0x4CFFED: test    al, al
0x4CFFEF: jnz     short loc_4CFFE7
0x4CFFF1: mov     cx, ds:0A3207Ch
0x4CFFF8: mov     [edi], cx
0x4CFFFB: pop     edi
0x4CFFFC: jmp     short loc_4D0015
0x4CFFFE: push    offset PathName; ".\\Data\\Textures\\Maps\\"
0x4D0003: lea     edx, [esp+110h+Dest]
0x4D0007: push    104h; Count
0x4D000C: push    edx; Dest
0x4D000D: call    __snprintf
0x4D0012: add     esp, 0Ch
0x4D0015: push    0; a3
0x4D0017: lea     eax, [esp+110h+Dest]
0x4D001B: push    eax; a2
0x4D001C: mov     ecx, esi; this
0x4D001E: call    BSStringT_Set
0x4D0023: mov     ecx, [esp+10Ch+var_4]
0x4D002A: pop     esi
0x4D002B: xor     ecx, esp
0x4D002D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D0032: add     esp, 108h
0x4D0038: retn    4
