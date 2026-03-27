0x403DD0: mov     edx, [esp+arg_0]
0x403DD4: mov     al, [edx+24h]
0x403DD7: sub     esp, 18h
0x403DDA: cmp     al, 14h
0x403DDC: jz      short loc_403DED
0x403DDE: cmp     al, 15h
0x403DE0: jz      short loc_403DED
0x403DE2: mov     eax, 1
0x403DE7: add     esp, 18h
0x403DEA: retn    8
0x403DED: push    ebx
0x403DEE: mov     ebx, [esp+1Ch+arg_4]
0x403DF2: mov     eax, [ebx+18F0h]
0x403DF8: imul    eax, 244h
0x403DFE: push    ebp
0x403DFF: push    esi
0x403E00: push    edi
0x403E01: mov     esi, edx
0x403E03: lea     edi, [eax+ebx+530h]
0x403E0A: mov     ecx, 91h ; '‘'
0x403E0F: rep movsd
0x403E11: mov     eax, [ebx+4]
0x403E14: mov     ecx, [eax]
0x403E16: xor     ebp, ebp
0x403E18: push    ebp
0x403E19: lea     esi, [esp+2Ch+arg_0]
0x403E1D: push    esi
0x403E1E: add     edx, 4
0x403E21: push    edx
0x403E22: mov     edx, [ecx+0Ch]
0x403E25: push    eax
0x403E26: call    edx
0x403E28: mov     esi, [esp+28h+arg_0]
0x403E2C: mov     edi, [esi]
0x403E2E: push    6
0x403E30: add     edi, 34h ; '4'
0x403E33: call    ds:GetActiveWindow
0x403E39: push    eax
0x403E3A: mov     eax, [edi]
0x403E3C: push    esi
0x403E3D: call    eax
0x403E3F: mov     ecx, [esi]
0x403E41: mov     edx, [ecx+2Ch]
0x403E44: push    offset JoystickDeviceFormat
0x403E49: push    esi
0x403E4A: call    edx
0x403E4C: mov     eax, [ebx+18F0h]
0x403E52: imul    eax, 2Ch ; ','
0x403E55: push    2Ch ; ','
0x403E57: lea     ecx, [eax+ebx+1750h]
0x403E5E: push    ebp
0x403E5F: push    ecx
0x403E60: call    __memset
0x403E65: mov     edx, [ebx+18F0h]
0x403E6B: imul    edx, 2Ch ; ','
0x403E6E: mov     dword ptr [edx+ebx+1750h], 2Ch ; ','
0x403E79: mov     ecx, [ebx+18F0h]
0x403E7F: mov     eax, [esi]
0x403E81: imul    ecx, 2Ch ; ','
0x403E84: mov     eax, [eax+0Ch]
0x403E87: add     esp, 0Ch
0x403E8A: lea     edx, [ecx+ebx+1750h]
0x403E91: push    edx
0x403E92: push    esi
0x403E93: call    eax
0x403E95: mov     ecx, [ebx+18F0h]
0x403E9B: mov     [ebx+ecx*8+18B0h], ebp
0x403EA2: mov     edx, [ebx+18F0h]
0x403EA8: mov     [ebx+edx*8+18B4h], ebp
0x403EAF: mov     ecx, [ebx+18F0h]
0x403EB5: mov     eax, [esi]
0x403EB7: mov     eax, [eax+10h]
0x403EBA: push    ebp
0x403EBB: lea     edx, [ebx+ecx*8+18B0h]
0x403EC2: push    edx
0x403EC3: push    offset sub_4035D0
0x403EC8: push    esi
0x403EC9: call    eax
0x403ECB: mov     ecx, [ebx+18F0h]
0x403ED1: mov     [ebx+ecx*4+8], esi
0x403ED5: mov     edx, [ebx+18F0h]
0x403EDB: mov     eax, [ebx+edx*4+8]
0x403EDF: lea     edx, [esp+28h+var_18]
0x403EE3: mov     [esp+28h+var_18], 18h
0x403EEB: mov     [esp+28h+var_14], 10h
0x403EF3: mov     [esp+28h+var_C], ebp
0x403EF7: mov     [esp+28h+var_10], ebp
0x403EFB: mov     [esp+28h+var_8], 0FFFFFF9Ch
0x403F03: mov     [esp+28h+var_4], 64h ; 'd'
0x403F0B: mov     ecx, [eax]
0x403F0D: push    edx
0x403F0E: push    4
0x403F10: push    eax
0x403F11: mov     eax, [ecx+18h]
0x403F14: call    eax
0x403F16: fld     ds:flt_A2FAAC
0x403F1C: push    ecx
0x403F1D: mov     ecx, [ebx+18F0h]
0x403F23: fstp    [esp+2Ch+deadzonePercent]; deadzonePercent
0x403F26: push    ecx; whichJoystick
0x403F27: mov     ecx, ebx; this
0x403F29: call    InputGlobals__SetJoystickDeadzone
0x403F2E: add     dword ptr [ebx+18F0h], 1
0x403F35: mov     ebx, [ebx+18F0h]
0x403F3B: pop     edi
0x403F3C: pop     esi
0x403F3D: xor     eax, eax
0x403F3F: cmp     ebx, 8
0x403F42: pop     ebp
0x403F43: setnz   al
0x403F46: pop     ebx
0x403F47: add     esp, 18h
0x403F4A: retn    8
