0x9649B0: fld     dword ptr ds:0A79DB4h
0x9649B6: mov     eax, [esp+arg_C]
0x9649BA: mov     ecx, [esp+arg_4]
0x9649BE: sub     esp, 5Ch
0x9649C1: push    20h ; ' '; int
0x9649C3: sub     esp, 0Ch
0x9649C6: fstp    [esp+6Ch+var_64]; float
0x9649CA: fld     dword ptr ds:0A37080h
0x9649D0: fstp    [esp+6Ch+var_68]; float
0x9649D4: fld     [esp+6Ch+arg_0]
0x9649D8: fstp    [esp+6Ch+var_6C]; float
0x9649DB: push    eax; int
0x9649DC: push    ecx; int
0x9649DD: lea     ecx, [esp+74h+var_50]
0x9649E1: call    sub_974250
0x9649E6: mov     edx, [esp+5Ch+arg_10]
0x9649EA: mov     eax, [esp+5Ch+arg_8]
0x9649EE: push    edx
0x9649EF: push    eax
0x9649F0: lea     ecx, [esp+64h+var_50]
0x9649F4: call    sub_96F170
0x9649F9: lea     ecx, [esp+5Ch+var_50]
0x9649FD: call    sub_680CC0
0x964A02: mov     ecx, [esp+5Ch+arg_14]
0x964A06: fstp    dword ptr [ecx]
0x964A08: lea     ecx, [esp+5Ch+var_50]
0x964A0C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x964A11: cmp     eax, 3
0x964A14: jz      short loc_964A2A
0x964A16: lea     ecx, [esp+5Ch+var_50]
0x964A1A: call    NiRenderTargetGroup__GetRenderTargetsNum
0x964A1F: cmp     eax, 2
0x964A22: jz      short loc_964A2A
0x964A24: xor     al, al
0x964A26: add     esp, 5Ch
0x964A29: retn
0x964A2A: lea     ecx, [esp+5Ch+var_50]
0x964A2E: call    sub_4E7DE0
0x964A33: cmp     [esp+5Ch+arg_1C], 0
0x964A38: mov     edx, [eax]
0x964A3A: mov     ecx, [esp+5Ch+arg_18]
0x964A3E: mov     [ecx], edx
0x964A40: mov     edx, [eax+4]
0x964A43: mov     [ecx+4], edx
0x964A46: mov     eax, [eax+8]
0x964A49: mov     [ecx+8], eax
0x964A4C: jz      short loc_964AA1
0x964A4E: lea     ecx, [esp+5Ch+var_50]; this
0x964A52: call    TESObjectREFR_GetPosition
0x964A57: mov     edx, [eax]
0x964A59: mov     ecx, [esp+5Ch+arg_20]
0x964A60: mov     [ecx], edx
0x964A62: mov     edx, [eax+4]
0x964A65: mov     [ecx+4], edx
0x964A68: mov     eax, [eax+8]
0x964A6B: mov     [ecx+8], eax
0x964A6E: fld     dword ptr [ecx]
0x964A70: mov     eax, [esp+5Ch+arg_24]
0x964A77: fchs
0x964A79: fstp    [esp+5Ch+var_5C]
0x964A7C: fld     dword ptr [ecx+4]
0x964A7F: fchs
0x964A81: fstp    [esp+5Ch+var_58]
0x964A85: mov     edx, [esp+5Ch+var_58]
0x964A89: fld     dword ptr [ecx+8]
0x964A8C: mov     ecx, [esp+5Ch+var_5C]
0x964A8F: fchs
0x964A91: mov     [eax], ecx
0x964A93: fstp    [esp+5Ch+var_54]
0x964A97: mov     ecx, [esp+5Ch+var_54]
0x964A9B: mov     [eax+4], edx
0x964A9E: mov     [eax+8], ecx
0x964AA1: mov     al, 1
0x964AA3: add     esp, 5Ch
0x964AA6: retn
