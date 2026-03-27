0x4B2C00: sub     esp, 10Ch
0x4B2C06: mov     eax, ds:0B30AACh
0x4B2C0B: xor     eax, esp
0x4B2C0D: mov     [esp+10Ch+var_4], eax
0x4B2C14: push    esi
0x4B2C15: mov     esi, ecx
0x4B2C17: mov     eax, [esi+0Ch]
0x4B2C1A: lea     ecx, [esp+110h+var_10C]
0x4B2C1E: push    ecx
0x4B2C1F: push    eax
0x4B2C20: mov     ecx, offset off_B08310
0x4B2C25: mov     [esp+118h+var_10C], 0
0x4B2C2D: call    NiTMap_GetAt
0x4B2C32: test    al, al
0x4B2C34: jz      short loc_4B2C5F
0x4B2C36: push    edi
0x4B2C37: mov     edi, [esp+114h+var_10C]
0x4B2C3B: test    edi, edi
0x4B2C3D: jz      short loc_4B2C5E
0x4B2C3F: lea     edx, [esp+114h+Str]
0x4B2C43: push    esi; int
0x4B2C44: push    edx; Str
0x4B2C45: call    sub_46D540
0x4B2C4A: add     esp, 8
0x4B2C4D: lea     eax, [esp+114h+Str]
0x4B2C51: push    eax
0x4B2C52: push    4C544D44h
0x4B2C57: mov     ecx, edi
0x4B2C59: call    nullsub_returnVoid_2arg
0x4B2C5E: pop     edi
0x4B2C5F: mov     ecx, [esp+110h+var_4]
0x4B2C66: pop     esi
0x4B2C67: xor     ecx, esp
0x4B2C69: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B2C6E: add     esp, 10Ch
0x4B2C74: retn
