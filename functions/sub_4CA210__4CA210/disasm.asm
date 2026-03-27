0x4CA210: movzx   eax, word ptr [ecx+0Ah]
0x4CA214: fldz
0x4CA216: mov     edx, [esp+arg_0]
0x4CA21A: cmp     edx, eax
0x4CA21C: push    esi
0x4CA21D: mov     esi, [esp+4+arg_4]
0x4CA221: jb      short loc_4CA244
0x4CA223: lea     eax, [edx+1]
0x4CA226: mov     [ecx+0Ah], ax
0x4CA22A: fcomp   dword ptr [esi]
0x4CA22C: fnstsw  ax
0x4CA22E: test    ah, 44h
0x4CA231: jnp     short loc_4CA278
0x4CA233: add     word ptr [ecx+0Ch], 1
0x4CA238: fld     dword ptr [esi]
0x4CA23A: mov     ecx, [ecx+4]
0x4CA23D: fstp    dword ptr [ecx+edx*4]
0x4CA240: pop     esi
0x4CA241: retn    8
0x4CA244: fld     st
0x4CA246: fcomp   dword ptr [esi]
0x4CA248: fnstsw  ax
0x4CA24A: test    ah, 44h
0x4CA24D: mov     eax, [ecx+4]
0x4CA250: fcomp   dword ptr [eax+edx*4]
0x4CA253: fnstsw  ax
0x4CA255: jnp     short loc_4CA26D
0x4CA257: test    ah, 44h
0x4CA25A: jp      short loc_4CA278
0x4CA25C: add     word ptr [ecx+0Ch], 1
0x4CA261: fld     dword ptr [esi]
0x4CA263: mov     ecx, [ecx+4]
0x4CA266: fstp    dword ptr [ecx+edx*4]
0x4CA269: pop     esi
0x4CA26A: retn    8
0x4CA26D: test    ah, 44h
0x4CA270: jnp     short loc_4CA278
0x4CA272: add     word ptr [ecx+0Ch], 0FFFFh
0x4CA278: fld     dword ptr [esi]
0x4CA27A: mov     ecx, [ecx+4]
0x4CA27D: fstp    dword ptr [ecx+edx*4]
0x4CA280: pop     esi
0x4CA281: retn    8
