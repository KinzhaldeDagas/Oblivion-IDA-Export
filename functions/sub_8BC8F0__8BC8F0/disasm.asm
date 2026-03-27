0x8BC8F0: push    ebp
0x8BC8F1: mov     ebp, [esp+4+arg_0]
0x8BC8F5: push    esi
0x8BC8F6: mov     esi, ecx
0x8BC8F8: mov     cl, [esp+8+arg_4]
0x8BC8FC: mov     word ptr [esi+6], 1
0x8BC902: mov     dword ptr [esi], offset off_A97598
0x8BC908: lea     edx, [esi+14h]
0x8BC90B: lea     eax, [edx+14h]
0x8BC90E: push    edi
0x8BC90F: xor     edi, edi
0x8BC911: mov     [esi+8], edi
0x8BC914: mov     [esi+0Ch], edi
0x8BC917: mov     [esi+10h], edi
0x8BC91A: mov     [edx], ebp
0x8BC91C: mov     [edx+8], edi
0x8BC91F: mov     [edx+0Ch], edi
0x8BC922: mov     dword ptr [edx+4], 0FFFFFFFFh
0x8BC929: mov     [edx+10h], edi
0x8BC92C: mov     [eax+4], cl
0x8BC92F: mov     [eax], edi
0x8BC931: mov     [eax+8], edi
0x8BC934: mov     byte ptr [eax+5], 7Fh
0x8BC938: mov     cl, dl
0x8BC93A: sub     cl, al
0x8BC93C: mov     [eax+5], cl
0x8BC93F: mov     eax, 80000000h
0x8BC944: mov     [edx+2Ch], eax
0x8BC947: mov     [edx+24h], edi
0x8BC94A: mov     [edx+28h], edi
0x8BC94D: mov     [esi+4Ch], eax
0x8BC950: mov     eax, esi
0x8BC952: sub     eax, edx
0x8BC954: cmp     ebp, edi
0x8BC956: mov     [esi+44h], edi
0x8BC959: mov     [esi+48h], edi
0x8BC95C: mov     [edx+10h], eax
0x8BC95F: mov     eax, esi
0x8BC961: jz      short loc_8BC96D
0x8BC963: cmp     [ebp+4], di
0x8BC967: jz      short loc_8BC96D
0x8BC969: inc     word ptr [ebp+6]
0x8BC96D: pop     edi
0x8BC96E: pop     esi
0x8BC96F: pop     ebp
0x8BC970: retn    8
