0x8E0300: push    ebx
0x8E0301: push    ebp
0x8E0302: push    esi
0x8E0303: push    edi
0x8E0304: xor     ebx, ebx
0x8E0306: push    ebx
0x8E0307: mov     esi, ecx
0x8E0309: call    sub_8D3330
0x8E030E: mov     dword ptr [esi], offset off_A9A5A8
0x8E0314: mov     [esi+34h], ebx
0x8E0317: mov     dword ptr [esi+2Ch], offset off_A9A588
0x8E031E: lea     ebp, [esi+2Ch]
0x8E0321: mov     eax, 1
0x8E0326: mov     [ebp+6], ax
0x8E032A: lea     edi, [esi+38h]
0x8E032D: mov     [edi+6], ax
0x8E0331: mov     [edi+8], ebx
0x8E0334: mov     dword ptr [edi], offset off_A9A598
0x8E033A: push    0FA0h; dwSpinCount
0x8E033F: lea     eax, [esi+54h]
0x8E0342: mov     [esi+48h], ebx
0x8E0345: mov     [esi+4Ch], ebx
0x8E0348: mov     ebx, ds:0A2818Ch
0x8E034E: push    eax; lpCriticalSection
0x8E034F: mov     dword ptr [esi+50h], 80000000h
0x8E0356: call    ebx ; InitializeCriticalSectionAndSpinCount
0x8E0358: xor     eax, eax
0x8E035A: push    0FA0h; dwSpinCount
0x8E035F: lea     ecx, [esi+78h]
0x8E0362: push    ecx; lpCriticalSection
0x8E0363: mov     [esi+6Ch], eax
0x8E0366: mov     [esi+70h], eax
0x8E0369: mov     dword ptr [esi+74h], 80000000h
0x8E0370: call    ebx ; InitializeCriticalSectionAndSpinCount
0x8E0372: lea     ecx, [esi+0C0h]; lpCriticalSection
0x8E0378: call    sub_926390
0x8E037D: push    0FA0h; dwSpinCount
0x8E0382: lea     edx, [esi+140h]
0x8E0388: push    edx; lpCriticalSection
0x8E0389: call    ebx ; InitializeCriticalSectionAndSpinCount
0x8E038B: push    186A0h; dwSpinCount
0x8E0390: lea     eax, [esi+180h]
0x8E0396: push    eax; lpCriticalSection
0x8E0397: call    ebx ; InitializeCriticalSectionAndSpinCount
0x8E0399: lea     eax, [esi+1C0h]
0x8E039F: push    0FA0h; dwSpinCount
0x8E03A4: push    eax; lpCriticalSection
0x8E03A5: call    ebx ; InitializeCriticalSectionAndSpinCount
0x8E03A7: mov     eax, [esp+10h+arg_0]
0x8E03AB: mov     [esi+28h], eax
0x8E03AE: mov     dword ptr [esi+90h], 0
0x8E03B8: mov     byte ptr [esi+44h], 0
0x8E03BC: mov     [esi+34h], esi
0x8E03BF: lea     ecx, [esi+1C0h]
0x8E03C5: mov     [esi+40h], ecx
0x8E03C8: mov     ecx, [eax+68h]
0x8E03CB: mov     [ecx+24h], ebp
0x8E03CE: mov     edx, [eax+68h]
0x8E03D1: mov     [edx+44h], edi
0x8E03D4: mov     ecx, [eax+68h]
0x8E03D7: mov     [ecx+28h], edi
0x8E03DA: mov     edx, [eax+68h]
0x8E03DD: mov     [edx+48h], edi
0x8E03E0: pop     edi
0x8E03E1: mov     eax, esi
0x8E03E3: pop     esi
0x8E03E4: pop     ebp
0x8E03E5: pop     ebx
0x8E03E6: retn    4
