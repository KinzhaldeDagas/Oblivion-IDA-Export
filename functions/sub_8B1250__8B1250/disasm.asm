0x8B1250: sub     esp, 0Ch
0x8B1253: push    ebx
0x8B1254: push    ebp
0x8B1255: push    esi
0x8B1256: mov     esi, ecx
0x8B1258: mov     eax, [esi+8]
0x8B125B: mov     ecx, dword ptr [esp+18h+arg_0+4]
0x8B125F: mov     [esp+18h+var_C], eax
0x8B1263: cdq
0x8B1264: mov     ebx, eax
0x8B1266: mov     eax, dword ptr [esp+18h+arg_0]
0x8B126A: push    edi
0x8B126B: shrd    eax, ecx, 4
0x8B126F: push    0
0x8B1271: push    9E3779B1h
0x8B1276: shr     ecx, 4
0x8B1279: push    ecx
0x8B127A: mov     edi, edx
0x8B127C: push    eax
0x8B127D: mov     [esp+2Ch+var_4], edi
0x8B1281: call    __allmul
0x8B1286: mov     ecx, [esi]
0x8B1288: and     eax, ebx
0x8B128A: mov     esi, [ecx+eax*8]
0x8B128D: and     edx, edi
0x8B128F: mov     edi, [ecx+eax*8+4]
0x8B1293: mov     ebp, esi
0x8B1295: or      ebp, edi
0x8B1297: jz      short loc_8B12C7
0x8B1299: lea     esp, [esp+0]
0x8B12A0: cmp     esi, dword ptr [esp+1Ch+arg_0]
0x8B12A4: jnz     short loc_8B12AC
0x8B12A6: cmp     edi, dword ptr [esp+1Ch+arg_0+4]
0x8B12AA: jz      short loc_8B12CC
0x8B12AC: mov     esi, [esp+1Ch+var_4]
0x8B12B0: add     eax, 1
0x8B12B3: adc     edx, 0
0x8B12B6: and     eax, ebx
0x8B12B8: mov     edi, [ecx+eax*8+4]
0x8B12BC: and     edx, esi
0x8B12BE: mov     esi, [ecx+eax*8]
0x8B12C1: mov     ebp, esi
0x8B12C3: or      ebp, edi
0x8B12C5: jnz     short loc_8B12A0
0x8B12C7: mov     eax, [esp+1Ch+var_C]
0x8B12CB: inc     eax
0x8B12CC: pop     edi
0x8B12CD: pop     esi
0x8B12CE: pop     ebp
0x8B12CF: pop     ebx
0x8B12D0: add     esp, 0Ch
0x8B12D3: retn    8
