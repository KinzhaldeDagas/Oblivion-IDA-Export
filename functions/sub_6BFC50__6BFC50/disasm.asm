0x6BFC50: mov     eax, [esp+arg_4]
0x6BFC54: fld     dword ptr [eax]
0x6BFC56: mov     ecx, [esp+arg_0]
0x6BFC5A: fstp    dword ptr [ecx]
0x6BFC5C: mov     edx, [eax+4]
0x6BFC5F: mov     [ecx+4], edx
0x6BFC62: mov     edx, [eax+8]
0x6BFC65: mov     [ecx+8], edx
0x6BFC68: mov     edx, [eax+0Ch]
0x6BFC6B: mov     [ecx+0Ch], edx
0x6BFC6E: fld     dword ptr [eax+10h]
0x6BFC71: fstp    dword ptr [ecx+10h]
0x6BFC74: add     eax, 40h ; '@'
0x6BFC77: fld     dword ptr [eax-2Ch]
0x6BFC7A: add     ecx, 40h ; '@'
0x6BFC7D: fstp    dword ptr [ecx-2Ch]
0x6BFC80: fld     dword ptr [eax-28h]
0x6BFC83: fstp    dword ptr [ecx-28h]
0x6BFC86: mov     edx, [eax-24h]
0x6BFC89: mov     [ecx-24h], edx
0x6BFC8C: mov     edx, [eax-20h]
0x6BFC8F: mov     [ecx-20h], edx
0x6BFC92: mov     edx, [eax-1Ch]
0x6BFC95: mov     [ecx-1Ch], edx
0x6BFC98: mov     edx, [eax-18h]
0x6BFC9B: mov     [ecx-18h], edx
0x6BFC9E: mov     edx, [eax-14h]
0x6BFCA1: mov     [ecx-14h], edx
0x6BFCA4: mov     edx, [eax-10h]
0x6BFCA7: mov     [ecx-10h], edx
0x6BFCAA: mov     edx, [eax-0Ch]
0x6BFCAD: mov     [ecx-0Ch], edx
0x6BFCB0: mov     edx, [eax-8]
0x6BFCB3: mov     [ecx-8], edx
0x6BFCB6: mov     edx, [eax-4]
0x6BFCB9: mov     [ecx-4], edx
0x6BFCBC: mov     edx, [eax]
0x6BFCBE: mov     [ecx], edx
0x6BFCC0: mov     edx, [eax+4]
0x6BFCC3: mov     [ecx+4], edx
0x6BFCC6: mov     eax, [eax+8]
0x6BFCC9: mov     [ecx+8], eax
0x6BFCCC: retn
