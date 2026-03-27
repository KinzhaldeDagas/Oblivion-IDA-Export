0x4EC990: push    0FFFFFFFFh
0x4EC992: push    offset SEH_4EC990
0x4EC997: mov     eax, large fs:0
0x4EC99D: push    eax
0x4EC99E: sub     esp, 54h
0x4EC9A1: push    ebx
0x4EC9A2: push    esi
0x4EC9A3: push    edi
0x4EC9A4: mov     eax, ds:0B30AACh
0x4EC9A9: xor     eax, esp
0x4EC9AB: push    eax
0x4EC9AC: lea     eax, [esp+70h+var_C]
0x4EC9B0: mov     large fs:0, eax
0x4EC9B6: mov     esi, ecx
0x4EC9B8: xor     ebx, ebx
0x4EC9BA: cmp     [esi+2Ch], ebx
0x4EC9BD: jz      loc_4ECAC6
0x4EC9C3: mov     eax, [esp+70h+arg_0]
0x4EC9C7: mov     ecx, [eax]
0x4EC9C9: mov     edx, [eax+4]
0x4EC9CC: mov     eax, [eax+8]
0x4EC9CF: mov     [esp+70h+var_4C], eax
0x4EC9D3: fld     [esp+70h+var_4C]
0x4EC9D7: fadd    qword ptr ds:0A47CA8h
0x4EC9DD: mov     [esp+70h+var_54], ecx
0x4EC9E1: mov     [esp+70h+var_50], edx
0x4EC9E5: fstp    [esp+70h+var_4C]
0x4EC9E9: fldz
0x4EC9EB: fst     [esp+70h+var_60]
0x4EC9EF: mov     ecx, [esp+70h+var_60]
0x4EC9F3: fstp    [esp+70h+var_5C]
0x4EC9F7: fld     dword ptr ds:0A30634h
0x4EC9FD: mov     edx, [esp+70h+var_5C]
0x4ECA01: fstp    [esp+70h+var_58]
0x4ECA05: mov     [esp+70h+var_48], ecx
0x4ECA09: mov     eax, [esp+70h+var_58]
0x4ECA0D: lea     ecx, [esp+70h+var_3C]
0x4ECA11: mov     [esp+70h+var_44], edx
0x4ECA15: mov     [esp+70h+var_40], eax
0x4ECA19: call    sub_959BC0
0x4ECA1E: mov     esi, [esi+2Ch]
0x4ECA21: mov     eax, [esp+70h+var_28]
0x4ECA25: cmp     eax, esi
0x4ECA27: mov     [esp+70h+var_4], ebx
0x4ECA2B: jz      short loc_4ECA61
0x4ECA2D: cmp     eax, ebx
0x4ECA2F: jz      short loc_4ECA4F
0x4ECA31: mov     edi, eax
0x4ECA33: add     eax, 4
0x4ECA36: push    eax; lpAddend
0x4ECA37: call    dword ptr ds:0A2807Ch
0x4ECA3D: test    eax, eax
0x4ECA3F: jnz     short loc_4ECA4F
0x4ECA41: cmp     edi, ebx
0x4ECA43: jz      short loc_4ECA4F
0x4ECA45: mov     edx, [edi]
0x4ECA47: mov     eax, [edx]
0x4ECA49: push    1
0x4ECA4B: mov     ecx, edi
0x4ECA4D: call    eax
0x4ECA4F: cmp     esi, ebx
0x4ECA51: mov     [esp+70h+var_28], esi
0x4ECA55: jz      short loc_4ECA61
0x4ECA57: add     esi, 4
0x4ECA5A: push    esi; lpAddend
0x4ECA5B: call    dword ptr ds:0A28078h
0x4ECA61: push    ebx
0x4ECA62: lea     ecx, [esp+74h+var_48]
0x4ECA66: push    ecx
0x4ECA67: lea     edx, [esp+78h+var_54]
0x4ECA6B: push    edx
0x4ECA6C: lea     ecx, [esp+7Ch+var_3C]
0x4ECA70: mov     byte ptr [esp+7Ch+var_10+1], 1
0x4ECA75: mov     byte ptr [esp+7Ch+var_10+2], 1
0x4ECA7A: mov     [esp+7Ch+var_34], 1
0x4ECA82: call    sub_959D60
0x4ECA87: test    al, al
0x4ECA89: jz      short loc_4ECAB5
0x4ECA8B: mov     eax, [esp+70h+var_20]
0x4ECA8F: mov     eax, [eax]
0x4ECA91: cmp     eax, ebx
0x4ECA93: jz      short loc_4ECAB5
0x4ECA95: fld     dword ptr [eax+10h]
0x4ECA98: mov     ecx, [esp+70h+arg_4]
0x4ECA9C: fstp    dword ptr [ecx]
0x4ECA9E: mov     edx, [eax+28h]
0x4ECAA1: mov     ecx, [esp+70h+arg_8]
0x4ECAA5: mov     [ecx], edx
0x4ECAA7: mov     edx, [eax+2Ch]
0x4ECAAA: mov     [ecx+4], edx
0x4ECAAD: mov     eax, [eax+30h]
0x4ECAB0: mov     bl, 1
0x4ECAB2: mov     [ecx+8], eax
0x4ECAB5: lea     ecx, [esp+70h+var_3C]
0x4ECAB9: mov     [esp+70h+var_4], 0FFFFFFFFh
0x4ECAC1: call    sub_959EC0
0x4ECAC6: mov     al, bl
0x4ECAC8: mov     ecx, dword ptr [esp+70h+var_C]
0x4ECACC: mov     large fs:0, ecx
0x4ECAD3: pop     ecx
0x4ECAD4: pop     edi
0x4ECAD5: pop     esi
0x4ECAD6: pop     ebx
0x4ECAD7: add     esp, 60h
0x4ECADA: retn    0Ch
