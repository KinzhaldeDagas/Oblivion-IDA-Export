0x551250: sub     esp, 8
0x551253: xor     edx, edx
0x551255: push    esi
0x551256: mov     [esp+0Ch+var_8], edx
0x55125A: mov     eax, [ecx+8]
0x55125D: xor     esi, esi
0x55125F: cmp     eax, esi
0x551261: jnz     short loc_551283
0x551263: push    esi
0x551264: call    FormHeapFree
0x551269: add     esp, 4
0x55126C: mov     [esp+0Ch+var_8], esi
0x551270: mov     [esp+0Ch+var_2], si
0x551275: mov     [esp+0Ch+var_4], si
0x55127A: lea     eax, [esp+0Ch+var_8]
0x55127E: mov     edx, 1
0x551283: test    dl, 1
0x551286: mov     esi, [eax]
0x551288: jz      short loc_551297
0x55128A: mov     eax, [esp+0Ch+var_8]
0x55128E: push    eax
0x55128F: call    FormHeapFree
0x551294: add     esp, 4
0x551297: mov     eax, esi
0x551299: pop     esi
0x55129A: add     esp, 8
0x55129D: retn
