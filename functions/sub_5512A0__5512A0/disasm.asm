0x5512A0: sub     esp, 8
0x5512A3: xor     edx, edx
0x5512A5: push    esi
0x5512A6: mov     [esp+0Ch+var_8], edx
0x5512AA: mov     eax, [ecx+0Ch]
0x5512AD: xor     esi, esi
0x5512AF: cmp     eax, esi
0x5512B1: jnz     short loc_5512D3
0x5512B3: push    esi
0x5512B4: call    FormHeapFree
0x5512B9: add     esp, 4
0x5512BC: mov     [esp+0Ch+var_8], esi
0x5512C0: mov     [esp+0Ch+var_2], si
0x5512C5: mov     [esp+0Ch+var_4], si
0x5512CA: lea     eax, [esp+0Ch+var_8]
0x5512CE: mov     edx, 1
0x5512D3: test    dl, 1
0x5512D6: mov     esi, [eax]
0x5512D8: jz      short loc_5512E7
0x5512DA: mov     eax, [esp+0Ch+var_8]
0x5512DE: push    eax
0x5512DF: call    FormHeapFree
0x5512E4: add     esp, 4
0x5512E7: mov     eax, esi
0x5512E9: pop     esi
0x5512EA: add     esp, 8
0x5512ED: retn
