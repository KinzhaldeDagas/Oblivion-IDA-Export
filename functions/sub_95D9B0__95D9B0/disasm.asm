0x95D9B0: push    ebx
0x95D9B1: push    esi
0x95D9B2: mov     esi, [esp+8+arg_4]
0x95D9B6: mov     eax, [esi]
0x95D9B8: mov     edx, [eax+0Ch]
0x95D9BB: push    edi
0x95D9BC: mov     ecx, esi
0x95D9BE: call    edx
0x95D9C0: mov     edi, [esp+0Ch+arg_C]
0x95D9C4: lea     ebx, [eax+eax*2]
0x95D9C7: mov     eax, [edi]
0x95D9C9: mov     edx, [eax+0Ch]
0x95D9CC: mov     ecx, edi
0x95D9CE: add     ebx, ebx
0x95D9D0: call    edx
0x95D9D2: mov     ecx, ds:0BA9AA4h
0x95D9D8: add     eax, ebx
0x95D9DA: mov     eax, [ecx+eax*4]
0x95D9DD: test    eax, eax
0x95D9DF: jz      short loc_95DA17
0x95D9E1: mov     edx, [esp+0Ch+arg_24]
0x95D9E5: fld     [esp+0Ch+arg_0]
0x95D9E9: mov     ecx, [esp+0Ch+arg_20]
0x95D9ED: push    edx
0x95D9EE: mov     edx, [esp+10h+arg_1C]
0x95D9F2: push    ecx
0x95D9F3: mov     ecx, [esp+14h+arg_18]
0x95D9F7: push    edx
0x95D9F8: mov     edx, [esp+18h+arg_14]
0x95D9FC: push    ecx
0x95D9FD: mov     ecx, [esp+1Ch+arg_10]
0x95DA01: push    edx
0x95DA02: mov     edx, [esp+20h+arg_8]
0x95DA06: push    ecx
0x95DA07: push    edi
0x95DA08: push    edx
0x95DA09: push    esi
0x95DA0A: push    ecx
0x95DA0B: fstp    [esp+34h+var_34]
0x95DA0E: call    eax
0x95DA10: add     esp, 28h
0x95DA13: pop     edi
0x95DA14: pop     esi
0x95DA15: pop     ebx
0x95DA16: retn
0x95DA17: mov     eax, [edi]
0x95DA19: mov     edx, [eax+0Ch]
0x95DA1C: mov     ecx, edi
0x95DA1E: call    edx
0x95DA20: lea     ebx, [eax+eax*2]
0x95DA23: mov     eax, [esi]
0x95DA25: mov     edx, [eax+0Ch]
0x95DA28: mov     ecx, esi
0x95DA2A: add     ebx, ebx
0x95DA2C: call    edx
0x95DA2E: fld     [esp+0Ch+arg_0]
0x95DA32: mov     ecx, ds:0BA9AA4h
0x95DA38: mov     edx, [esp+0Ch+arg_20]
0x95DA3C: push    edx
0x95DA3D: mov     edx, [esp+10h+arg_1C]
0x95DA41: add     eax, ebx
0x95DA43: mov     eax, [ecx+eax*4]
0x95DA46: mov     ecx, [esp+10h+arg_24]
0x95DA4A: push    ecx
0x95DA4B: mov     ecx, [esp+14h+arg_18]
0x95DA4F: push    edx
0x95DA50: mov     edx, [esp+18h+arg_14]
0x95DA54: push    ecx
0x95DA55: mov     ecx, [esp+1Ch+arg_8]
0x95DA59: push    edx
0x95DA5A: mov     edx, [esp+20h+arg_10]
0x95DA5E: push    ecx
0x95DA5F: push    esi
0x95DA60: push    edx
0x95DA61: push    edi
0x95DA62: push    ecx
0x95DA63: fstp    [esp+34h+var_34]
0x95DA66: call    eax
0x95DA68: add     esp, 28h
0x95DA6B: pop     edi
0x95DA6C: pop     esi
0x95DA6D: pop     ebx
0x95DA6E: retn
