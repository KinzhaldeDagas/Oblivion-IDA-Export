0x523440: push    ecx
0x523441: mov     [esp+4+var_4], 0
0x523448: mov     dx, word ptr [esp+4+var_4]
0x52344C: push    esi
0x52344D: lea     eax, [ecx+124h]
0x523453: mov     ecx, 2
0x523458: push    edi
0x523459: lea     esp, [esp+0]
0x523460: mov     si, [eax-1Ch]
0x523464: imul    si, [eax-18h]
0x523469: mov     di, [eax-4]
0x52346D: imul    di, [eax]
0x523471: add     si, di
0x523474: add     si, si
0x523477: add     si, si
0x52347A: add     dx, si
0x52347D: add     eax, 30h ; '0'
0x523480: sub     ecx, 1
0x523483: jnz     short loc_523460
0x523485: mov     word ptr [esp+0Ch+var_4], dx
0x52348A: mov     eax, [esp+0Ch+var_4]
0x52348E: pop     edi
0x52348F: add     eax, 15h
0x523492: pop     esi
0x523493: pop     ecx
0x523494: retn    4
