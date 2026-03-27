0x94E860: push    ebp
0x94E861: mov     ebp, esp
0x94E863: and     esp, 0FFFFFFF0h
0x94E866: sub     esp, 104h
0x94E86C: mov     eax, [ebp+arg_0]
0x94E86F: push    ebx
0x94E870: mov     ebx, [eax+0Ch]
0x94E873: push    esi
0x94E874: push    edi
0x94E875: mov     edi, [ebp+arg_4]
0x94E878: mov     esi, ecx
0x94E87A: push    edi
0x94E87B: lea     ecx, [esi+0C0h]
0x94E881: call    sub_958600
0x94E886: mov     eax, [ebp+arg_0]
0x94E889: lea     ecx, [esp+110h+var_40]
0x94E890: push    ecx
0x94E891: lea     edx, [esp+114h+var_C0]
0x94E895: push    edx
0x94E896: push    eax
0x94E897: mov     ecx, esi
0x94E899: call    sub_94D100
0x94E89E: movaps  xmm0, [esp+110h+var_90]
0x94E8A6: mov     edx, [ebp+arg_0]
0x94E8A9: movaps  xmmword ptr [esi+50h], xmm0
0x94E8AD: mov     eax, [edx+10h]
0x94E8B0: lea     ecx, [esi+40h]
0x94E8B3: push    ecx
0x94E8B4: mov     ecx, [eax+50h]
0x94E8B7: add     ecx, 10h
0x94E8BA: push    ecx
0x94E8BB: mov     ecx, ebx
0x94E8BD: call    sub_928570
0x94E8C2: mov     edx, [ebp+arg_8]
0x94E8C5: push    edx
0x94E8C6: mov     ecx, esi
0x94E8C8: call    sub_94CF80
0x94E8CD: mov     eax, [ebp+arg_8]
0x94E8D0: push    eax
0x94E8D1: mov     ecx, esi
0x94E8D3: call    sub_94CF30
0x94E8D8: mov     eax, [ebx+0Ch]
0x94E8DB: xor     esi, esi
0x94E8DD: cmp     eax, esi
0x94E8DF: jz      loc_94EA05
0x94E8E5: lea     ecx, [ebx+60h]
0x94E8E8: push    ecx
0x94E8E9: lea     edx, [esp+114h+var_C0]
0x94E8ED: push    edx
0x94E8EE: lea     ecx, [esp+118h+var_80]
0x94E8F5: call    sub_8B1F70
0x94E8FA: mov     ebx, [ebx+0Ch]
0x94E8FD: cmp     ebx, esi
0x94E8FF: jz      loc_94EA05
0x94E905: mov     eax, [ebx]
0x94E907: lea     ecx, [esp+110h+var_100]
0x94E90B: push    ecx
0x94E90C: mov     ecx, ebx
0x94E90E: mov     [esp+114h+var_100], esi
0x94E912: mov     [esp+114h+var_FC], esi
0x94E916: mov     [esp+114h+var_F8], 80000000h
0x94E91E: call    dword ptr [eax+28h]
0x94E921: mov     eax, [esp+110h+var_FC]
0x94E925: cmp     eax, 1
0x94E928: jle     loc_94E9C8
0x94E92E: dec     eax
0x94E92F: mov     esi, 10h
0x94E934: mov     dword ptr [esp+110h+var_F4], eax
0x94E938: jmp     short loc_94E940
0x94E93A: align 10h
0x94E940: mov     edx, [esp+110h+var_100]
0x94E944: movaps  xmm0, xmmword ptr [esi+edx]
0x94E948: lea     eax, [esp+110h+var_F4+4]
0x94E94C: push    eax
0x94E94D: lea     ecx, [esp+114h+var_80]
0x94E954: push    ecx
0x94E955: lea     ecx, [esp+118h+var_D0]
0x94E959: movaps  [esp+118h+var_F4+4], xmm0
0x94E95E: call    sub_88FCC0
0x94E963: mov     edx, [esp+110h+var_100]
0x94E967: movaps  xmm0, xmmword ptr [esi+edx-10h]
0x94E96C: lea     eax, [esp+110h+var_F4+4]
0x94E970: push    eax
0x94E971: lea     ecx, [esp+114h+var_80]
0x94E978: push    ecx
0x94E979: lea     ecx, [esp+118h+var_E0]
0x94E97D: movaps  [esp+118h+var_F4+4], xmm0
0x94E982: call    sub_88FCC0
0x94E987: mov     edx, [ebp+arg_8]
0x94E98A: mov     ebx, [edi]
0x94E98C: push    edx
0x94E98D: push    3F800000h; float
0x94E992: push    3F800000h; float
0x94E997: push    3E800000h; float
0x94E99C: push    0; float
0x94E99E: call    sub_8AEBB0
0x94E9A3: add     esp, 10h
0x94E9A6: push    eax
0x94E9A7: lea     eax, [esp+118h+var_E0]
0x94E9AB: push    eax
0x94E9AC: lea     ecx, [esp+11Ch+var_D0]
0x94E9B0: push    ecx
0x94E9B1: mov     ecx, edi
0x94E9B3: call    dword ptr [ebx+1Ch]
0x94E9B6: mov     eax, dword ptr [esp+110h+var_F4]
0x94E9BA: add     esi, 10h
0x94E9BD: dec     eax
0x94E9BE: mov     dword ptr [esp+110h+var_F4], eax
0x94E9C2: jnz     loc_94E940
0x94E9C8: mov     eax, [esp+110h+var_F8]
0x94E9CC: test    eax, eax
0x94E9CE: js      short loc_94EA05
0x94E9D0: mov     ecx, large fs:2Ch
0x94E9D7: mov     edx, ds:0BA9DE4h
0x94E9DD: mov     edx, [ecx+edx*4]
0x94E9E0: mov     ecx, [edx+19Ch]
0x94E9E6: test    ecx, ecx
0x94E9E8: jnz     short loc_94E9F0
0x94E9EA: mov     ecx, ds:0BA7D9Ch
0x94E9F0: and     eax, 3FFFFFFFh
0x94E9F5: push    14h
0x94E9F7: shl     eax, 4
0x94E9FA: push    eax
0x94E9FB: mov     eax, [esp+118h+var_100]
0x94E9FF: push    eax
0x94EA00: call    sub_8A75D0
0x94EA05: pop     edi
0x94EA06: pop     esi
0x94EA07: pop     ebx
0x94EA08: mov     esp, ebp
0x94EA0A: pop     ebp
0x94EA0B: retn    0Ch
