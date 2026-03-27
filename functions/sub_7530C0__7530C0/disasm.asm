0x7530C0: sub     esp, 0D0h
0x7530C6: push    ebx
0x7530C7: mov     ebx, ecx
0x7530C9: mov     eax, [ebx+50h]
0x7530CC: test    eax, eax
0x7530CE: jz      short loc_753142
0x7530D0: push    esi
0x7530D1: push    edi
0x7530D2: lea     esi, [eax+64h]
0x7530D5: mov     ecx, 0Dh
0x7530DA: lea     edi, [esp+0DCh+var_9C]
0x7530DE: rep movsd
0x7530E0: mov     esi, [ebx+10h]
0x7530E3: add     esi, 64h ; 'd'
0x7530E6: mov     ecx, 0Dh
0x7530EB: lea     edi, [esp+0DCh+var_34]
0x7530F2: lea     eax, [esp+0DCh+var_68]
0x7530F6: rep movsd
0x7530F8: push    eax
0x7530F9: lea     ecx, [esp+0E0h+var_34]
0x753100: call    sub_718A80
0x753105: lea     ecx, [esp+0DCh+var_9C]
0x753109: push    ecx
0x75310A: lea     edx, [esp+0E0h+var_D0]
0x75310E: push    edx
0x75310F: lea     ecx, [esp+0E4h+var_68]
0x753113: call    sub_53D7A0
0x753118: mov     ecx, [esp+0DCh+arg_4]
0x75311F: mov     edx, [esp+0DCh+arg_0]
0x753126: mov     eax, [ebx]
0x753128: push    ecx
0x753129: push    edx
0x75312A: mov     edx, [eax+68h]
0x75312D: lea     ecx, [esp+0E4h+var_D0]
0x753131: push    ecx
0x753132: mov     ecx, ebx
0x753134: call    edx
0x753136: pop     edi
0x753137: pop     esi
0x753138: pop     ebx
0x753139: add     esp, 0D0h
0x75313F: retn    8
0x753142: lea     ecx, [esp+0D4h+var_D0]
0x753146: call    sub_718A50
0x75314B: mov     ecx, [esp+0D4h+arg_4]
0x753152: mov     edx, [esp+0D4h+arg_0]
0x753159: mov     eax, [ebx]
0x75315B: push    ecx
0x75315C: push    edx
0x75315D: mov     edx, [eax+68h]
0x753160: lea     ecx, [esp+0DCh+var_D0]
0x753164: push    ecx
0x753165: mov     ecx, ebx
0x753167: call    edx
0x753169: pop     ebx
0x75316A: add     esp, 0D0h
0x753170: retn    8
