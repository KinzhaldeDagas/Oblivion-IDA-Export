0x5BE380: sub     esp, 10h
0x5BE383: push    esi
0x5BE384: mov     esi, ecx
0x5BE386: mov     eax, [esi+0D8h]
0x5BE38C: test    eax, eax
0x5BE38E: jz      short loc_5BE3EC
0x5BE390: mov     eax, [eax+0Ch]
0x5BE393: lea     ecx, [esp+14h+var_4]
0x5BE397: push    ecx
0x5BE398: lea     edx, [esp+18h+var_8]
0x5BE39C: push    edx
0x5BE39D: lea     ecx, [esp+1Ch+var_C]
0x5BE3A1: push    ecx
0x5BE3A2: lea     edx, [esp+20h+var_10]
0x5BE3A6: push    edx
0x5BE3A7: push    eax
0x5BE3A8: call    sub_5479F0
0x5BE3AD: mov     eax, [esp+28h+var_10]
0x5BE3B1: lea     ecx, [eax+eax*4]
0x5BE3B4: mov     dword ptr [esi+ecx*4+18h], 1
0x5BE3BC: mov     eax, [esp+28h+var_C]
0x5BE3C0: lea     edx, [eax+eax*4]
0x5BE3C3: mov     dword ptr [esi+edx*4+18h], 2
0x5BE3CB: mov     eax, [esp+28h+var_8]
0x5BE3CF: lea     eax, [eax+eax*4]
0x5BE3D2: mov     dword ptr [esi+eax*4+18h], 3
0x5BE3DA: mov     eax, [esp+28h+var_4]
0x5BE3DE: lea     ecx, [eax+eax*4]
0x5BE3E1: add     esp, 14h
0x5BE3E4: mov     dword ptr [esi+ecx*4+18h], 4
0x5BE3EC: pop     esi
0x5BE3ED: add     esp, 10h
0x5BE3F0: retn
