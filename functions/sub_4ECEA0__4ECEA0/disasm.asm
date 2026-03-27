0x4ECEA0: sub     esp, 414h
0x4ECEA6: mov     eax, ds:0B30AACh
0x4ECEAB: xor     eax, esp
0x4ECEAD: mov     [esp+414h+var_4], eax
0x4ECEB4: push    esi
0x4ECEB5: mov     esi, ecx
0x4ECEB7: mov     eax, [esi+34h]
0x4ECEBA: mov     ecx, [esi+30h]
0x4ECEBD: mov     edx, [esi+2Ch]
0x4ECEC0: push    20h ; ' '
0x4ECEC2: push    eax
0x4ECEC3: push    ecx
0x4ECEC4: push    edx
0x4ECEC5: lea     eax, [esp+428h+Str1]
0x4ECECC: push    offset aTexturesLandsc; "Textures\\LandscapeLOD\\Generated\\%i.%"...
0x4ECED1: push    eax
0x4ECED2: call    __sprintf
0x4ECED7: mov     ecx, [esi+34h]
0x4ECEDA: mov     edx, [esi+30h]
0x4ECEDD: mov     eax, [esi+2Ch]
0x4ECEE0: push    20h ; ' '
0x4ECEE2: push    ecx
0x4ECEE3: push    edx
0x4ECEE4: push    eax
0x4ECEE5: lea     ecx, [esp+440h+var_414]
0x4ECEE9: push    offset aTexturesLand_0; "Textures\\LandscapeLOD\\Generated\\%i.%"...
0x4ECEEE: push    ecx
0x4ECEEF: call    __sprintf
0x4ECEF4: lea     edx, [esp+448h+var_310]
0x4ECEFB: push    edx; int
0x4ECEFC: lea     eax, [esp+44Ch+Str1]
0x4ECF03: push    eax; Str1
0x4ECF04: call    sub_47D8F0
0x4ECF09: lea     ecx, [esp+450h+var_108]
0x4ECF10: push    ecx; int
0x4ECF11: lea     edx, [esp+454h+var_414]
0x4ECF15: push    edx; Str1
0x4ECF16: call    sub_47D8F0
0x4ECF1B: mov     eax, [esi+10h]
0x4ECF1E: mov     edx, [esi+14h]
0x4ECF21: add     esp, 40h
0x4ECF24: push    esi
0x4ECF25: mov     cl, 10h
0x4ECF27: call    __allshr
0x4ECF2C: movzx   eax, al
0x4ECF2F: push    eax
0x4ECF30: lea     ecx, [esp+420h+var_310]
0x4ECF37: push    ecx
0x4ECF38: mov     ecx, ds:0B33A1Ch
0x4ECF3E: call    sub_43B0D0
0x4ECF43: mov     eax, [esi+10h]
0x4ECF46: mov     edx, [esi+14h]
0x4ECF49: push    esi
0x4ECF4A: mov     cl, 10h
0x4ECF4C: call    __allshr
0x4ECF51: mov     ecx, ds:0B33A1Ch
0x4ECF57: movzx   edx, al
0x4ECF5A: push    edx
0x4ECF5B: lea     eax, [esp+420h+var_108]
0x4ECF62: push    eax
0x4ECF63: call    sub_43B0D0
0x4ECF68: mov     edx, [esi]
0x4ECF6A: mov     eax, [edx+28h]
0x4ECF6D: mov     ecx, esi
0x4ECF6F: mov     byte ptr [esi+28h], 1
0x4ECF73: call    eax
0x4ECF75: mov     ecx, [esp+418h+var_4]
0x4ECF7C: pop     esi
0x4ECF7D: xor     ecx, esp
0x4ECF7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ECF84: add     esp, 414h
0x4ECF8A: retn
