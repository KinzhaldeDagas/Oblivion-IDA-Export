0x4504B0: sub     esp, 10Ch
0x4504B6: mov     eax, ds:0B30AACh
0x4504BB: xor     eax, esp
0x4504BD: mov     [esp+10Ch+var_4], eax
0x4504C4: fld1
0x4504C6: xor     dl, dl
0x4504C8: fcomp   dword ptr [ecx+3D0h]
0x4504CE: fnstsw  ax
0x4504D0: test    ah, 5
0x4504D3: jp      short loc_45052B
0x4504D5: movzx   eax, byte ptr ds:0B06B18h
0x4504DC: push    ebx
0x4504DD: add     ecx, 1Ch
0x4504E0: push    ecx
0x4504E1: lea     ecx, [esp+114h+Format]
0x4504E5: push    offset aFileSIsAHigher; "File %s is a higher version than this E"...
0x4504EA: push    ecx; ArgList
0x4504EB: mov     bl, 1
0x4504ED: mov     [esp+11Ch+var_109], al
0x4504F1: mov     ds:0B06B18h, dl
0x4504F7: call    __sprintf
0x4504FC: lea     edx, [esp+11Ch+Format]
0x450500: push    edx; Format
0x450501: call    PrintError
0x450506: movzx   eax, [esp+120h+var_109]
0x45050B: add     esp, 10h
0x45050E: mov     ds:0B06B18h, al
0x450513: mov     al, bl
0x450515: pop     ebx
0x450516: mov     ecx, [esp+10Ch+var_4]
0x45051D: xor     ecx, esp
0x45051F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450524: add     esp, 10Ch
0x45052A: retn
0x45052B: mov     ecx, [esp+10Ch+var_4]
0x450532: xor     ecx, esp
0x450534: mov     al, dl
0x450536: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45053B: add     esp, 10Ch
0x450541: retn
