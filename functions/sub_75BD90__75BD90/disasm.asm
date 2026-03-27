0x75BD90: push    esi
0x75BD91: push    20h ; ' '; Size
0x75BD93: call    FormHeapAlloc
0x75BD98: mov     esi, eax
0x75BD9A: add     esp, 4
0x75BD9D: test    esi, esi
0x75BD9F: jz      short loc_75BDBD
0x75BDA1: mov     ecx, esi
0x75BDA3: call    sub_752BF0
0x75BDA8: mov     dword ptr [esi], offset ??_7NiPSysAgeDeathModifier@@6B@; const NiPSysAgeDeathModifier::`vftable'
0x75BDAE: mov     byte ptr [esi+18h], 0
0x75BDB2: mov     dword ptr [esi+1Ch], 0
0x75BDB9: mov     eax, esi
0x75BDBB: pop     esi
0x75BDBC: retn
0x75BDBD: xor     eax, eax
0x75BDBF: pop     esi
0x75BDC0: retn
