0x91BD70: push    ebx
0x91BD71: mov     ebx, [esp+4+arg_0]
0x91BD75: push    ebp
0x91BD76: push    esi
0x91BD77: push    edi
0x91BD78: push    ebx
0x91BD79: mov     esi, ecx
0x91BD7B: call    sub_9491F0
0x91BD80: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x91BD87: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91BD8E: mov     dword ptr [esi], offset off_A9D5E0
0x91BD94: mov     dword ptr [esi+8], offset off_A9D5C8
0x91BD9B: mov     dword ptr [esi+20h], offset off_A9D5C0
0x91BDA2: mov     dword ptr [esi+28h], offset off_A9D5AC
0x91BDA9: mov     dword ptr [esi+2Ch], offset off_A9D5A0
0x91BDB0: xor     edi, edi
0x91BDB2: mov     [esi+30h], edi
0x91BDB5: mov     [esi+34h], edi
0x91BDB8: mov     dword ptr [esi+38h], 80000000h
0x91BDBF: mov     byte ptr [esi+3Ch], 1
0x91BDC3: mov     ebp, [ebx+4]
0x91BDC6: cmp     ebp, edi
0x91BDC8: jle     short loc_91BE05
0x91BDCA: lea     ebx, [ebx+0]
0x91BDD0: mov     eax, [ebx]
0x91BDD2: mov     ecx, [eax+edi*4]
0x91BDD5: mov     edx, [ecx]
0x91BDD7: call    dword ptr [edx+4]
0x91BDDA: push    eax
0x91BDDB: push    offset aShapedisplayvi; "ShapeDisplayViewerOptions"
0x91BDE0: call    sub_8B1770
0x91BDE5: add     esp, 8
0x91BDE8: test    eax, eax
0x91BDEA: jz      short loc_91BDFA
0x91BDEC: inc     edi
0x91BDED: cmp     edi, ebp
0x91BDEF: jl      short loc_91BDD0
0x91BDF1: pop     edi
0x91BDF2: mov     eax, esi
0x91BDF4: pop     esi
0x91BDF5: pop     ebp
0x91BDF6: pop     ebx
0x91BDF7: retn    4
0x91BDFA: mov     eax, [ebx]
0x91BDFC: mov     ecx, [eax+edi*4]
0x91BDFF: mov     dl, [ecx+40h]
0x91BE02: mov     [esi+3Ch], dl
0x91BE05: pop     edi
0x91BE06: mov     eax, esi
0x91BE08: pop     esi
0x91BE09: pop     ebp
0x91BE0A: pop     ebx
0x91BE0B: retn    4
