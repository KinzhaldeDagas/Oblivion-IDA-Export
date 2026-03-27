0x726320: mov     edx, [esp+arg_0]
0x726324: cmp     edx, [ecx+10h]
0x726327: jb      short loc_72632E
0x726329: xor     al, al
0x72632B: retn    1Ch
0x72632E: mov     eax, [ecx+14h]
0x726331: test    eax, eax
0x726333: jz      short loc_726329
0x726335: push    esi
0x726336: lea     esi, ds:0[edx*8]
0x72633D: sub     esi, edx
0x72633F: mov     edx, [eax+esi*4+4]
0x726343: test    edx, edx
0x726345: lea     eax, [eax+esi*4]
0x726348: mov     esi, [esp+4+arg_8]
0x72634C: mov     [esi], edx
0x72634E: jz      short loc_7263A4
0x726350: mov     dx, [ecx+0Ch]
0x726354: mov     esi, [esp+4+arg_C]
0x726358: mov     [esi], dx
0x72635B: mov     edx, [eax+0Ch]
0x72635E: mov     esi, [esp+4+arg_10]
0x726362: mov     [esi], edx
0x726364: mov     edx, [eax+8]
0x726367: mov     esi, [esp+4+arg_14]
0x72636B: mov     [esi], edx
0x72636D: mov     edx, [eax+10h]
0x726370: mov     esi, [esp+4+arg_18]
0x726374: mov     [esi], edx
0x726376: movzx   esi, word ptr [ecx+26h]
0x72637A: mov     edx, [eax+14h]
0x72637D: cmp     edx, esi
0x72637F: ja      short loc_7263A4
0x726381: mov     ecx, [ecx+20h]
0x726384: mov     ecx, [ecx+edx*4]
0x726387: test    ecx, ecx
0x726389: jz      short loc_7263A4
0x72638B: mov     eax, [eax+18h]
0x72638E: cmp     [ecx+4], eax
0x726391: jb      short loc_7263A4
0x726393: mov     edx, [ecx+8]
0x726396: add     edx, eax
0x726398: mov     eax, [esp+4+arg_4]
0x72639C: mov     [eax], edx
0x72639E: mov     al, 1
0x7263A0: pop     esi
0x7263A1: retn    1Ch
0x7263A4: xor     al, al
0x7263A6: pop     esi
0x7263A7: retn    1Ch
