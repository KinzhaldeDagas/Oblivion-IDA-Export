0x8D3330: mov     eax, [esp+arg_0]
0x8D3334: push    esi
0x8D3335: mov     esi, ecx
0x8D3337: push    edi
0x8D3338: mov     word ptr [esi+6], 1
0x8D333E: mov     dword ptr [esi], offset off_A9A030
0x8D3344: xor     edi, edi
0x8D3346: mov     [esi+14h], edi
0x8D3349: mov     [esi+18h], edi
0x8D334C: mov     dword ptr [esi+1Ch], 80000000h
0x8D3353: mov     [esi+10h], edi
0x8D3356: mov     [esi+0Ch], eax
0x8D3359: mov     ecx, ds:0BA7D98h
0x8D335F: mov     edx, [ecx]
0x8D3361: push    12h
0x8D3363: push    0Ch
0x8D3365: call    dword ptr [edx+10h]
0x8D3368: mov     ecx, eax
0x8D336A: mov     word ptr [eax+4], 0Ch
0x8D3370: call    sub_91FEB0
0x8D3375: mov     [esi+24h], edi
0x8D3378: mov     [esi+20h], eax
0x8D337B: pop     edi
0x8D337C: mov     eax, esi
0x8D337E: pop     esi
0x8D337F: retn    4
