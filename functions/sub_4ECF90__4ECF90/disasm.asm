0x4ECF90: sub     esp, 414h
0x4ECF96: mov     eax, ds:0B30AACh
0x4ECF9B: xor     eax, esp
0x4ECF9D: mov     [esp+414h+var_4], eax
0x4ECFA4: push    esi
0x4ECFA5: mov     esi, ecx
0x4ECFA7: cmp     dword ptr [esi+1Ch], 0
0x4ECFAB: jz      short loc_4ECFC6
0x4ECFAD: mov     eax, [esi+1Ch]
0x4ECFB0: movzx   ecx, word ptr [eax+0Ch]
0x4ECFB4: mov     edx, [eax+10h]
0x4ECFB7: xor     eax, eax
0x4ECFB9: cmp     ecx, edx
0x4ECFBB: setz    al
0x4ECFBE: test    al, al
0x4ECFC0: jz      loc_4ED0AC
0x4ECFC6: cmp     byte ptr [esi+28h], 0
0x4ECFCA: jz      loc_4ED0AC
0x4ECFD0: cmp     dword ptr [esi+0Ch], 0
0x4ECFD4: jnz     loc_4ED0A5
0x4ECFDA: mov     eax, [esi+34h]
0x4ECFDD: mov     ecx, [esi+30h]
0x4ECFE0: mov     edx, [esi+2Ch]
0x4ECFE3: push    20h ; ' '
0x4ECFE5: push    eax
0x4ECFE6: push    ecx
0x4ECFE7: push    edx
0x4ECFE8: lea     eax, [esp+428h+Str1]
0x4ECFEF: push    offset aTexturesLandsc; "Textures\\LandscapeLOD\\Generated\\%i.%"...
0x4ECFF4: push    eax
0x4ECFF5: call    __sprintf
0x4ECFFA: mov     ecx, [esi+34h]
0x4ECFFD: mov     edx, [esi+30h]
0x4ED000: mov     eax, [esi+2Ch]
0x4ED003: push    20h ; ' '
0x4ED005: push    ecx
0x4ED006: push    edx
0x4ED007: push    eax
0x4ED008: lea     ecx, [esp+440h+var_414]
0x4ED00C: push    offset aTexturesLand_0; "Textures\\LandscapeLOD\\Generated\\%i.%"...
0x4ED011: push    ecx
0x4ED012: call    __sprintf
0x4ED017: lea     edx, [esp+448h+var_310]
0x4ED01E: push    edx; int
0x4ED01F: lea     eax, [esp+44Ch+Str1]
0x4ED026: push    eax; Str1
0x4ED027: call    sub_47D8F0
0x4ED02C: lea     ecx, [esp+450h+var_108]
0x4ED033: push    ecx; int
0x4ED034: lea     edx, [esp+454h+var_414]
0x4ED038: push    edx; Str1
0x4ED039: call    sub_47D8F0
0x4ED03E: mov     ecx, ds:0B35300h
0x4ED044: mov     eax, [ecx]
0x4ED046: mov     eax, [eax+4]
0x4ED049: add     esp, 40h
0x4ED04C: push    0
0x4ED04E: lea     edx, [esp+41Ch+var_310]
0x4ED055: push    edx
0x4ED056: call    eax
0x4ED058: push    eax; a2
0x4ED059: lea     ecx, [esi+40h]; this
0x4ED05C: call    NiSmartPointer_Set??
0x4ED061: mov     ecx, ds:0B35300h
0x4ED067: mov     edx, [ecx]
0x4ED069: mov     edx, [edx+4]
0x4ED06C: push    0
0x4ED06E: lea     eax, [esp+41Ch+var_108]
0x4ED075: push    eax
0x4ED076: call    edx
0x4ED078: push    eax; a2
0x4ED079: lea     ecx, [esi+44h]; this
0x4ED07C: call    NiSmartPointer_Set??
0x4ED081: mov     ecx, ds:0B33A10h
0x4ED087: mov     eax, [ecx]
0x4ED089: mov     edx, [eax+3Ch]
0x4ED08C: push    esi
0x4ED08D: call    edx
0x4ED08F: pop     esi
0x4ED090: mov     ecx, [esp+414h+var_4]
0x4ED097: xor     ecx, esp
0x4ED099: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ED09E: add     esp, 414h
0x4ED0A4: retn
0x4ED0A5: mov     ecx, esi
0x4ED0A7: call    sub_436F30
0x4ED0AC: mov     ecx, [esp+418h+var_4]
0x4ED0B3: pop     esi
0x4ED0B4: xor     ecx, esp
0x4ED0B6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ED0BB: add     esp, 414h
0x4ED0C1: retn
