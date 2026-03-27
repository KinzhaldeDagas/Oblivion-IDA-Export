0x76D4F0: mov     eax, ecx
0x76D4F2: mov     ecx, [eax+10h]
0x76D4F5: test    ecx, ecx
0x76D4F7: jz      short loc_76D50C
0x76D4F9: cmp     dword ptr [eax+0Ch], 0
0x76D4FD: jz      short loc_76D50C
0x76D4FF: push    11h
0x76D501: call    sub_71B4A0
0x76D506: test    al, al
0x76D508: setnbe  al
0x76D50B: retn
0x76D50C: xor     al, al
0x76D50E: retn
